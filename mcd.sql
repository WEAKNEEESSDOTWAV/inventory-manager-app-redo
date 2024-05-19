/*
SELECT AVG(total_price) FROM Orders;
SELECT (SELECT SUM(total_price_DF) FROM Orders) - (SELECT SUM(price_DF)*quantity_ordered FROM Composed LEFT JOIN Items ON id_item = id_item);
SELECT * FROM Items WHERE quantity < 1000;
SELECT SUM(total_price) FROM Orders WHERE id_person = (SELECT id_person FROM people WHERE first_name = @first_name AND last_name = @last_name);
SELECT reference FROM Items WHERE id_item = (SELECT TOP(10) id_item FROM Composed ORDER BY price_DF DESC);
SELECT SUM(price_DF) FROM Items;
*/

USE POO_GRP7;

GO

CREATE PROCEDURE averageOrderPrice
AS

    SELECT AVG(total_price_DF) FROM ORDERS;

GO

CREATE PROCEDURE oneMonthTurnover
    @month int,
    @year int
AS
    DECLARE @param int;
    SELECT
        (SELECT SUM(total_price_DF) FROM ORDERS)
        -
        (SELECT SUM(item_price*quantity_ordered) FROM
            (SELECT orderedItems.*, ORDERS.issuing_date, ORDERS.delivery_date, ORDERS.total_price_DF FROM
				(SELECT ITEMS.id AS item_id, ITEMS.reference AS item_reference, ITEMS.type AS item_type, ITEMS.name AS item_name, ITEMS.price_DF AS item_price, ORDER_LINE.quantity AS quantity_ordered, ORDER_LINE.order_id, ORDER_LINE.color_id FROM ORDER_LINE LEFT JOIN ITEMS ON ORDER_LINE.item_id = ITEMS.id) AS orderedItems
            LEFT JOIN ORDERS ON orderedItems.order_id = ORDERS.id) AS OrdersWithItems
        LEFT JOIN (SELECT MIN(payment_date) AS payment_date, order_id FROM MILESTONE_PAYMENTS GROUP BY order_id) AS firstMilestonePayments ON OrdersWithItems.order_id = firstMilestonePayments.order_id
        WHERE MONTH(firstMilestonePayments.payment_date) = @month AND YEAR(firstMilestonePayments.payment_date) = @year);

GO

CREATE PROCEDURE itemsToRefill
    @threshold int
AS
    SELECT ITEMS.reference, COLORS.color FROM ITEMS INNER JOIN COLORS ON ITEMS.id = COLORS.item_id WHERE COLORS.quantity < @threshold;

GO

CREATE PROCEDURE getTotalCustomerPurchase
    @last_name nvarchar(50),
    @first_name nvarchar(50)
AS

    SELECT SUM(total_price_DF) FROM ORDERS
    WHERE customer_id =
        (SELECT id
        FROM people
        WHERE first_name = @first_name
        AND last_name = @last_name);

GO

CREATE PROCEDURE mostSelledItems
AS

    SELECT TOP(10) reference FROM ITEMS WHERE id = (SELECT TOP(10) item_id FROM ORDER_LINE ORDER BY quantity);

GO

CREATE PROCEDURE leastSelledItems
AS

    SELECT TOP(10) reference FROM ITEMS WHERE id = (SELECT TOP(10) item_id FROM ORDER_LINE ORDER BY quantity DESC);

GO

CREATE PROCEDURE stockValue
AS

    SELECT SUM(ITEMS.price_DF*COLORS.quantity) FROM ITEMS RIGHT JOIN COLORS ON ITEMS.id = COLORS.item_id;

GO

CREATE PROCEDURE InsertPerson
    @last_name nvarchar(50),
    @first_name nvarchar(50)
AS
    INSERT INTO PEOPLE (first_name, last_name) VALUES(@first_name, @last_name);

GO

CREATE PROCEDURE InsertCustomer
    @birth_date date,
    @last_name_c nvarchar(50),
    @first_name_c nvarchar(50)
AS
	DECLARE @person_id INT;
    EXEC InsertPerson @last_name = @last_name_c, @first_name = @first_name_c;
    SELECT @person_id = @@IDENTITY FROM PEOPLE;
    INSERT INTO CUSTOMERS (birth_date, person_id) VALUES(@birth_date, @person_id);

GO

CREATE PROCEDURE InsertEmployee
    @birth_date date,
    @last_name_e nvarchar(50),
    @first_name_e nvarchar(50),
    @hiring_date date,
    @rank_employee nvarchar(50),
    @upper_hierarchy_id int,
    @password nvarchar(50),
    @email nvarchar(50)
AS
    DECLARE @person_id INT;
    EXEC InsertPerson @last_name = @last_name_e, @first_name = @first_name_e;
    SELECT @person_id = @@IDENTITY FROM PEOPLE;
    INSERT INTO EMPLOYEES (upper_hierarchy_id, hiring_date, rank_employee, password, email, person_id)
    VALUES(@upper_hierarchy_id, @hiring_date, @rank_employee, @password, @email, @person_id);

GO

CREATE PROCEDURE InsertOrder
    @issuing_date date,
    @reference nvarchar(50),
    @delivery_date date,
    @total_price_DF float,
    @customer_id int
AS
    INSERT INTO ORDERS (issuing_date, reference, delivery_date, total_price_DF, customer_id)
    VALUES(@issuing_date, @reference, @delivery_date, @total_price_DF, @customer_id);

GO

CREATE PROCEDURE InsertItem
    @reference nvarchar(50),
    @quantity int,
	@color nvarchar(50),
    @type nvarchar(50),
    @name nvarchar(50),
    @price float
AS
	DECLARE @item_id INT;
    INSERT INTO ITEMS (reference, type, name, price_DF)
    VALUES(@reference, @type, @name, @price);
	SELECT @item_id = @@IDENTITY FROM ITEMS WHERE reference = @reference;
	IF @item_id IS NOT NULL
		INSERT INTO COLORS (color, quantity, item_id)
		VALUES(@color, @quantity, @item_id);

GO

CREATE PROCEDURE InsertOrderLine
    @order_id nvarchar(50),
    @item_reference nvarchar(50),
    @quantity_ordered int,
    @color int
AS
	DECLARE @color_id INT;
	DECLARE @item_id INT;
	SELECT @color_id = id FROM COLORS WHERE color = @color;
    SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    INSERT INTO ORDER_LINE (item_id, order_id, quantity, color_id)
    VALUES(@item_id, @order_id, @quantity_ordered, @color_id);

GO

CREATE PROCEDURE InsertMilestonePayments
    @order_reference nvarchar(50),
    @mean_of_payment nvarchar(50),
    @payment_date date,
    @price int
AS
	DECLARE @order_id INT;
	DECLARE @mean_of_payment_id INT;
    SELECT @order_id = id FROM ORDERS WHERE reference = @order_reference;
	SELECT @mean_of_payment_id = id FROM MEANS_OF_PAYMENTS WHERE mean_of_payment = @mean_of_payment;
    INSERT INTO MILESTONE_PAYMENTS (payment_date, price, order_id, mean_of_payment_id)
	VALUES(@payment_date, @price, @order_id, @mean_of_payment_id);

GO

CREATE PROCEDURE InsertMeanOfPayement
    @mean_of_payment_name nvarchar(50)
AS
    INSERT INTO MEANS_OF_PAYMENTS (mean_of_payment)
    VALUES(@mean_of_payment_name);

GO

CREATE PROCEDURE InsertQuantityDiscount
    @quantity int,
    @discount_threshold int,
    @item_reference nvarchar(50)
AS
	DECLARE @item_id INT;
    SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    INSERT INTO QUANTITY_DISCOUNT (quantity, discount_threshold, item_id)
    VALUES(@quantity, @discount_threshold, @item_id);

GO

CREATE PROCEDURE InsertColor
    @color nvarchar(50),
    @item_reference nvarchar(50),
    @item_quantity int
AS
    DECLARE @item_id INT;
    SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    INSERT INTO COLORS (color, quantity, item_id)
    VALUES(@color, @item_quantity, @item_id);

GO

CREATE PROCEDURE InsertColorDiscount
    @discount_multiplier FLOAT,
    @color int,
    @item_reference nvarchar(50)
AS
	DECLARE @item_id INT;
	DECLARE @color_id INT;
	SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    SELECT @color_id = id FROM COLORS WHERE item_id = @item_id AND color = @color;
    IF @color_id IS NOT NULL
        INSERT INTO COLOR_DISCOUNT (discount_multiplier, color_id)
        VALUES(@discount_multiplier, @color_id);

GO

CREATE PROCEDURE InsertAddress
    @street_name nvarchar(50),
    @street_number int,
    @additional_address_data nvarchar(50),
    @type TINYINT,
    @first_name nvarchar(50),
    @last_name nvarchar(50),
    @city_name nvarchar(50),
    @postal_code int
AS
	DECLARE @person_id INT;
	DECLARE @city_id INT;
    SELECT @person_id = id FROM PEOPLE WHERE first_name = @first_name AND last_name = @last_name;
    SELECT @city_id = id FROM CITIES WHERE name = @city_name AND postal_code = @postal_code;
    IF @city_id IS NOT NULL
        INSERT INTO ADDRESSES (street_name, street_number, additional_address_data, type, city_id, person_id)
        VALUES(@street_name, @street_number, @additional_address_data, @type, @city_id, @person_id);

GO

CREATE PROCEDURE InsertCity
    @city_name nvarchar(50),
    @postal_code int
AS
    INSERT INTO CITIES (name, postal_code)
    VALUES(@city_name, @postal_code);

GO






CREATE PROCEDURE DeleteCustomer
    @customer_id int
AS
	DECLARE @order_id INT;
    DELETE FROM CUSTOMERS WHERE person_id = @customer_id;
    DELETE FROM PEOPLE WHERE id = @customer_id;
    DELETE FROM MILESTONE_PAYEMENTS WHERE order_id IN (SELECT id FROM ORDERS WHERE customer_id = @customer_id);
    DELETE FROM ORDERS WHERE customer_id = @customer_id;
    DELETE FROM ORDER_LINE WHERE order_id IN (SELECT id FROM ORDERS WHERE customer_id = @customer_id);
    DELETE FROM ADDRESSES WHERE person_id = @customer_id;

GO

CREATE PROCEDURE DeleteEmployee
    @last_name nvarchar(50),
    @first_name nvarchar(50)
AS
	DECLARE @person_id INT;
	SELECT @person_id = id FROM PEOPLE WHERE first_name = @first_name AND last_name = @last_name;
    DELETE FROM EMPLOYEES WHERE person_id = @person_id;
    DELETE FROM PEOPLE WHERE id = @person_id;
    DELETE FROM ADDRESSES WHERE person_id = @person_id;

GO

CREATE PROCEDURE DeleteOrder
    @order_reference nvarchar(50)
AS
	DECLARE @order_id INT;
	SELECT @order_id = id FROM ORDERS WHERE reference = @order_reference;
    DELETE FROM MILESTONE_PAYMENTS WHERE order_id = @order_id;
    DELETE FROM ORDER_LINE WHERE order_id = @order_id;
	DELETE FROM ORDERS WHERE id = @order_id;

GO

CREATE PROCEDURE DeleteItem
    @item_reference nvarchar(50),
    @quantity int,
    @type nvarchar(50),
    @name nvarchar(50),
    @price float
AS
	DECLARE @item_id INT;
	DECLARE @color_id INT;
    SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    SELECT @color_id = id FROM COLORS WHERE item_id = @item_id;
    DELETE FROM COLOR_DISCOUNT WHERE color_id = @color_id;
    DELETE FROM COLORS WHERE item_id = @item_id;
    DELETE FROM ITEMS WHERE reference = @item_reference;

GO

CREATE PROCEDURE DeleteOrderLine
    @order_reference nvarchar(50),
    @item_reference nvarchar(50),
    @color nvarchar(50)
AS
	DECLARE @order_id INT;
    DECLARE @color_id INT;
	DECLARE @item_id INT;
	SELECT @order_id = id FROM ORDERS WHERE reference = @order_reference;
	SELECT @color_id = id FROM COLORS WHERE color = @color;
	SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    DELETE FROM ORDER_LINE WHERE item_id = @item_id AND order_id = @order_id AND color_id = @color_id;

GO

CREATE PROCEDURE DeleteMilestonePayments
    @order_reference nvarchar(50)
AS
	DECLARE @order_id INT;
    SELECT @order_id = id FROM ORDERS WHERE reference = @order_reference;
    DELETE FROM MILESTONE_PAYMENTS WHERE order_id = @order_id;

GO

CREATE PROCEDURE DeleteMeanOfPayement
    @mean_of_payment_name nvarchar(50)
AS
    DELETE FROM MEANS_OF_PAYMENTS WHERE mean_of_payment = @mean_of_payment_name;

GO

CREATE PROCEDURE DeleteQuantityDiscount
    @quantity_threshold int,
    @item_reference int
AS
	DECLARE @item_id INT;
    SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    DELETE FROM QUANTITY_DISCOUNT WHERE quantity = @quantity_threshold AND item_id = @item_id;

GO

CREATE PROCEDURE DeleteColor
    @color nvarchar(50),
    @item_reference nvarchar(50)
AS
	DECLARE @item_id INT;
    SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    DELETE FROM COLORS WHERE color = @color AND item_id = @item_id;

GO

CREATE PROCEDURE DeleteColorDiscount
    @discount_multiplier FLOAT,
    @color int,
    @item_reference nvarchar(50)
AS
	DECLARE @item_id INT;
	DECLARE @color_id INT;
    SELECT @item_id = id FROM ITEMS WHERE reference = @item_reference;
    SELECT @color_id = id FROM COLORS WHERE item_id = @item_id AND color = @color;
    IF @color_id IS NOT NULL
        DELETE FROM COLOR_DISCOUNT WHERE discount_multiplier = @discount_multiplier AND color_id = @color_id;

GO

CREATE PROCEDURE DeleteAddress
    @type TINYINT,
    @first_name nvarchar(50),
    @last_name nvarchar(50)
AS
	DECLARE @person_id INT;
    SELECT @person_id = id FROM PEOPLE WHERE first_name = @first_name AND last_name = @last_name;
    DELETE FROM ADDRESSES WHERE person_id = @person_id AND type = @type;

GO

CREATE PROCEDURE DeleteCity
    @city_name nvarchar(50)
AS
    DELETE FROM CITIES WHERE name = @city_name;

GO











CREATE PROCEDURE SelectEmployeeWithEmail
	@email nvarchar(50)
AS
	SELECT * FROM EMPLOYEES WHERE email = @email;

GO

CREATE PROCEDURE selectCustomers
AS
	SELECT CITIES.name, CITIES.postal_code, PeopleAndAddressesWithoutCities.* FROM (SELECT PEOPLE.first_name, PEOPLE.last_name ,ADDRESSES.*
	FROM PEOPLE LEFT JOIN ADDRESSES ON PEOPLE.id = ADDRESSES.person_id
	WHERE ADDRESSES.type != 1) AS PeopleAndAddressesWithoutCities
	LEFT JOIN CITIES ON PeopleAndAddressesWithoutCities.city_id = CITIES.id;

GO

CREATE PROCEDURE getPersonWithBillingAddress
	@first_name_c nvarchar(50),
	@last_name_c nvarchar(50)
AS
	SELECT CITIES.name, CITIES.postal_code, PeopleAndAddressesWithoutCities.* FROM (SELECT PEOPLE.first_name, PEOPLE.last_name ,ADDRESSES.*
	FROM PEOPLE LEFT JOIN ADDRESSES ON PEOPLE.id = ADDRESSES.person_id
	WHERE PEOPLE.first_name = @first_name_c AND PEOPLE.last_name = @last_name_c AND (ADDRESSES.type IS NULL OR ADDRESSES.type <> 1)) AS PeopleAndAddressesWithoutCities
	LEFT JOIN CITIES ON PeopleAndAddressesWithoutCities.city_id = CITIES.id;

GO

CREATE PROCEDURE SelectCustomer
    @last_name_c nvarchar(50),
    @first_name_c nvarchar(50)
AS
    SELECT CUSTOMERS.*, PEOPLE.first_name, PEOPLE.last_name
    FROM PEOPLE INNER JOIN CUSTOMERS ON PEOPLE.id = CUSTOMERS.person_id
    WHERE PEOPLE.first_name = @first_name_c AND PEOPLE.last_name = @last_name_c;

GO

CREATE PROCEDURE SelectEmployee
    @last_name_e nvarchar(50),
    @first_name_e nvarchar(50)
AS
    SELECT EMPLOYEES.*, PEOPLE.first_name, PEOPLE.last_name
    FROM PEOPLE INNER JOIN EMPLOYEES ON PEOPLE.id = EMPLOYEES.person_id
    WHERE PEOPLE.first_name = @first_name_e AND PEOPLE.last_name = @last_name_e;

GO

CREATE PROCEDURE SelectOrder
    @order_reference nvarchar(50)
AS
    SELECT * FROM ORDERS WHERE reference = @order_reference;

GO

CREATE PROCEDURE SelectItem
    @item_reference nvarchar(50)
AS
	SELECT * FROM ITEMS WHERE reference = @item_reference;

GO

CREATE PROCEDURE SelectOrderLines
    @order_reference nvarchar(50)
AS
	SELECT * FROM ORDER_LINE WHERE order_id = (SELECT id FROM ORDERS WHERE reference = @order_reference);

GO

CREATE PROCEDURE SelectMilestonePayments
    @order_reference nvarchar(50)
AS
	SELECT * FROM MILESTONE_PAYMENTS WHERE order_id = (SELECT id FROM ORDERS WHERE reference = @order_reference);

GO

CREATE PROCEDURE SelectMeanOfPayement
AS
    SELECT * FROM MEANS_OF_PAYMENTS

GO

CREATE PROCEDURE SelectQuantityDiscount
    @item_reference nvarchar(50)
AS
    SELECT * FROM QUANTITY_DISCOUNT WHERE item_id = (SELECT id FROM ITEMS WHERE reference = @item_reference);

GO

CREATE PROCEDURE SelectColor
    @color nvarchar(50)
AS
    SELECT * FROM COLORS LEFT JOIN ITEMS ON COLORS.item_id = ITEMS.id WHERE COLORS.color = @color;

GO

CREATE PROCEDURE SelectColorDiscount
    @item_reference FLOAT,
    @color int
AS
	SELECT ItemsWithColors.*, COLOR_DISCOUNT.discount_multiplier
    FROM COLOR_DISCOUNT INNER JOIN
        (SELECT ITEMS.reference, ITEMS.type, ITEMS.name, ITEMS.price_DF, COLORS.quantity, COLORS.color, COLORS.id AS color_id
        FROM COLORS INNER JOIN ITEMS ON COLORS.item_id = ITEMS.id
        WHERE ITEMS.reference = @item_reference AND COLORS.color = @color) AS ItemsWithColors
    ON ItemsWithColors.color_id = COLOR_DISCOUNT.color_id
    WHERE reference = @item_reference;

GO

CREATE PROCEDURE SelectAddress
    @first_name nvarchar(50),
    @last_name nvarchar(50),
    @type TINYINT
AS
    SELECT * FROM ADDRESSES WHERE person_id = (SELECT id FROM PEOPLE WHERE first_name = @first_name AND last_name = @last_name) AND type = @type;

GO

CREATE PROCEDURE SelectCities
AS
    SELECT * FROM Cities;

GO





CREATE PROCEDURE UpdateCustomer
    @last_name_c nvarchar(50),
    @first_name_c nvarchar(50),
    @person_id int,
    @birth_date date
AS
    UPDATE PEOPLE SET first_name = @first_name_c, last_name = @last_name_c WHERE id = @person_id;
    UPDATE CUSTOMERS SET birth_date = @birth_date WHERE person_id = @person_id;

GO

CREATE PROCEDURE UpdateEmployee
    @last_name_e nvarchar(50),
    @first_name_e nvarchar(50),
    @person_id int,
    @hiring_date date,
    @rank_employee nvarchar(50),
    @password nvarchar(50),
    @email nvarchar(50),
    @upper_hierarchy_id int
AS
    UPDATE PEOPLE SET first_name = @first_name_e, last_name = @last_name_e WHERE id = @person_id;
    UPDATE EMPLOYEES
    SET hiring_date = @hiring_date,
    rank_employee = @rank_employee,
    password = @password,
    email = @email,
    upper_hierarchy_id = @upper_hierarchy_id;

GO

CREATE PROCEDURE UpdateOrder
    @order_reference nvarchar(50),
    @issuing_date date,
    @delivery_date date,
    @total_price_DF FLOAT
AS
    UPDATE ORDERS
    SET issuing_date = @issuing_date,
    delivery_date = @delivery_date,
    total_price_DF = @total_price_DF
    WHERE reference = @order_reference;

GO

CREATE PROCEDURE UpdateItem
    @item_reference nvarchar(50),
    @item_type nvarchar(50),
    @item_name nvarchar(50),
    @price_DF FLOAT
AS
	UPDATE ITEMS SET type = @item_type, name = @item_name, price_DF = @price_DF WHERE reference = @item_reference;

GO

CREATE PROCEDURE UpdateOrderLine
    @order_reference nvarchar(50),
    @quantity int,
    @color nvarchar(50),
    @item_reference nvarchar(50)
AS
	UPDATE ORDER_LINE
    SET color_id = 
        (SELECT id FROM COLORS WHERE color = @color AND item_id = 
            (SELECT id FROM ITEMS WHERE reference = @item_reference)),
    quantity = @quantity
    WHERE order_id =
        (SELECT id FROM ORDERS WHERE reference = @order_reference)
    AND item_id =
        (SELECT id FROM ITEMS WHERE reference = @item_reference);

GO

CREATE PROCEDURE UpdateMilestonePayments
    @order_reference nvarchar(50),
    @payment_date date,
    @price FLOAT,
    @mean_of_payment_name nvarchar(50)
AS
	UPDATE MILESTONE_PAYMENTS SET payment_date = @payment_date, price = @price, mean_of_payment_id =
        (SELECT id FROM MEANS_OF_PAYMENTS WHERE mean_of_payment = @mean_of_payment_name)
    WHERE order_id = (SELECT id FROM ORDERS WHERE reference = @order_reference);

GO

CREATE PROCEDURE UpdateQuantityDiscount
    @item_reference nvarchar(50),
    @quantity int,
    @discount_threshold FLOAT
AS
    UPDATE QUANTITY_DISCOUNT SET quantity = @quantity, discount_threshold = @discount_threshold
    WHERE item_id =
        (SELECT id FROM ITEMS WHERE reference = @item_reference);

GO

CREATE PROCEDURE UpdateColor
    @color nvarchar(50),
    @quantity int,
    @item_reference nvarchar(50)
AS
    UPDATE COLORS SET color = @color, quantity = @quantity WHERE item_id = 
        (SELECT id FROM ITEMS WHERE reference = @item_reference);

GO

CREATE PROCEDURE UpdateColorDiscount
    @item_reference FLOAT,
    @color int,
    @discount_multiplier FLOAT
AS
	UPDATE COLOR_DISCOUNT SET discount_multiplier = @discount_multiplier WHERE color_id = 
        (SELECT id FROM COLORS WHERE item_id = 
            (SELECT id FROM ITEMS WHERE reference = @item_reference));

GO

CREATE PROCEDURE UpdateAddress
    @address_id int,
    @street_number int,
    @street_name nvarchar(50),
    @additional_address_data nvarchar(50),
    @type TINYINT,
	@city_name nvarchar(50),
	@postal_code int
AS
    UPDATE ADDRESSES
    SET street_number = @street_number,
    street_name = @street_name,
    additional_address_data = @additional_address_data,
    type = @type,
    city_id = 
        (SELECT id FROM CITIES WHERE name = @city_name AND postal_code = @postal_code)
    WHERE id = @address_id;

GO