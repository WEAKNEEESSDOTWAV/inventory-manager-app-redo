#pragma once
#include "AddressAddForm.h"
#include "Ctrl_Customers.h"

namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de CustomerAddForm
	/// </summary>
	public ref class CustomerAddForm : public System::Windows::Forms::Form
	{
	public:
		CustomerAddForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~CustomerAddForm()
		{
			if (components)
			{
				delete components;
			}
		}







	protected:

	protected:





	private: System::Windows::Forms::Button^ Add_customer_button;
	private: System::Windows::Forms::TextBox^ cust_street_numb_text;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ cust_number_label;
	private: System::Windows::Forms::Label^ cust_street_label;
	private: System::Windows::Forms::TextBox^ cust_street_name_text;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private:
	public: System::Windows::Forms::TextBox^ lname_text;
	public: System::Windows::Forms::TextBox^ fname_text;
	public: System::Windows::Forms::TextBox^ id_text;
	private: System::Windows::Forms::Label^ label5;
	public:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label_fname;









	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Add_customer_button = (gcnew System::Windows::Forms::Button());
			this->cust_street_numb_text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cust_number_label = (gcnew System::Windows::Forms::Label());
			this->cust_street_label = (gcnew System::Windows::Forms::Label());
			this->cust_street_name_text = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lname_text = (gcnew System::Windows::Forms::TextBox());
			this->fname_text = (gcnew System::Windows::Forms::TextBox());
			this->id_text = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label_fname = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Add_customer_button
			// 
			this->Add_customer_button->Location = System::Drawing::Point(12, 217);
			this->Add_customer_button->Name = L"Add_customer_button";
			this->Add_customer_button->Size = System::Drawing::Size(664, 142);
			this->Add_customer_button->TabIndex = 4;
			this->Add_customer_button->Text = L"Sauvegarder changements";
			this->Add_customer_button->UseVisualStyleBackColor = true;
			this->Add_customer_button->Click += gcnew System::EventHandler(this, &CustomerAddForm::Add_customer_button_Click);
			// 
			// cust_street_numb_text
			// 
			this->cust_street_numb_text->Location = System::Drawing::Point(357, 70);
			this->cust_street_numb_text->Name = L"cust_street_numb_text";
			this->cust_street_numb_text->Size = System::Drawing::Size(86, 22);
			this->cust_street_numb_text->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(331, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Adresse";
			// 
			// cust_number_label
			// 
			this->cust_number_label->AutoSize = true;
			this->cust_number_label->Location = System::Drawing::Point(328, 76);
			this->cust_number_label->Name = L"cust_number_label";
			this->cust_number_label->Size = System::Drawing::Size(18, 16);
			this->cust_number_label->TabIndex = 7;
			this->cust_number_label->Text = L"n°";
			// 
			// cust_street_label
			// 
			this->cust_street_label->AutoSize = true;
			this->cust_street_label->Location = System::Drawing::Point(460, 76);
			this->cust_street_label->Name = L"cust_street_label";
			this->cust_street_label->Size = System::Drawing::Size(32, 16);
			this->cust_street_label->TabIndex = 8;
			this->cust_street_label->Text = L"Rue";
			// 
			// cust_street_name_text
			// 
			this->cust_street_name_text->Location = System::Drawing::Point(507, 70);
			this->cust_street_name_text->Name = L"cust_street_name_text";
			this->cust_street_name_text->Size = System::Drawing::Size(171, 22);
			this->cust_street_name_text->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(314, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"infos complémentaires";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(463, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 22);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(357, 167);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 22);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(505, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 22);
			this->textBox3->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(328, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"CP";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(460, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L" ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(16, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(241, 32);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Infos Personnels";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(132, 165);
			this->dateTimePicker1->MaxDate = System::DateTime(2100, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(146, 22);
			this->dateTimePicker1->TabIndex = 28;
			// 
			// lname_text
			// 
			this->lname_text->Location = System::Drawing::Point(132, 125);
			this->lname_text->Name = L"lname_text";
			this->lname_text->Size = System::Drawing::Size(146, 22);
			this->lname_text->TabIndex = 27;
			// 
			// fname_text
			// 
			this->fname_text->Location = System::Drawing::Point(132, 91);
			this->fname_text->Name = L"fname_text";
			this->fname_text->Size = System::Drawing::Size(146, 22);
			this->fname_text->TabIndex = 26;
			// 
			// id_text
			// 
			this->id_text->Location = System::Drawing::Point(132, 59);
			this->id_text->Name = L"id_text";
			this->id_text->Size = System::Drawing::Size(146, 22);
			this->id_text->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(68, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 18);
			this->label5->TabIndex = 24;
			this->label5->Text = L"ID";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(15, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 36);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Date de \r\nnaissance";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label8->Location = System::Drawing::Point(50, 125);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 18);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Nom";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_fname
			// 
			this->label_fname->AutoSize = true;
			this->label_fname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label_fname->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label_fname->Location = System::Drawing::Point(30, 91);
			this->label_fname->Name = L"label_fname";
			this->label_fname->Size = System::Drawing::Size(61, 18);
			this->label_fname->TabIndex = 21;
			this->label_fname->Text = L"Prénom";
			this->label_fname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CustomerAddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 371);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->lname_text);
			this->Controls->Add(this->fname_text);
			this->Controls->Add(this->id_text);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label_fname);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cust_street_name_text);
			this->Controls->Add(this->cust_street_label);
			this->Controls->Add(this->cust_number_label);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cust_street_numb_text);
			this->Controls->Add(this->Add_customer_button);
			this->Name = L"CustomerAddForm";
			this->Text = L"CustomerAddForm";
			this->Load += gcnew System::EventHandler(this, &CustomerAddForm::CustomerAddForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Add_customer_button_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		OB_Ctrl_customer->ADD(fname_text->Text, lname_text->Text, dateTimePicker1->Value);
	}
private: System::Void CustomerAddForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}