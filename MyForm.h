#pragma once
#include "CustomerAddForm.h"
#include "AddressAddForm.h"
#include "dbConnect.h"
#include "Ctrl_Employee.h"
#include "UserLogin.h"
#include "Ctrl_Items.h"
#include "ItemAddForm.h"
namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;
	

	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ Features_tab;
		   int compteur = 0;
		   System::String^ idSelected = "null";

	private: NS_Ctrl::Ctrl_Employee^ oSvc;
		   NS_Models::dbConnect^ cad;
		   System::Data::DataSet^ oDs;
	
	protected:


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage5;


	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	public: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private:
	public: System::Windows::Forms::TextBox^ lname_text;
	public: System::Windows::Forms::TextBox^ fname_text;
	public: System::Windows::Forms::TextBox^ id_text;






	private: System::Windows::Forms::Button^ searchCust_button;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ deleteCust_button;

	private: System::Windows::Forms::Button^ updateCust_button;

	private: System::Windows::Forms::Button^ addCust_button;

	private: System::Windows::Forms::Label^ label_fname;
	private: System::Windows::Forms::Label^ Title_tab1;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ title_tab4;
	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Splitter^ splitter3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ refOrder_text;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ typeItem_text;

	private: System::Windows::Forms::TextBox^ nameItem_text;

	private: System::Windows::Forms::TextBox^ refitem_text;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ searchItem_button;
	private: System::Windows::Forms::Button^ deleteItem_button;


	private: System::Windows::Forms::Button^ updateItem_button;

	private: System::Windows::Forms::Button^ addItem_button;

	private: System::Windows::Forms::Splitter^ splitter4;
	private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::TextBox^ colorItem_text;

	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ priceItem_text;



	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ AddressManagment;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::TextBox^ quantityItem_text;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DataGridView^ dgvProduct;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewImageColumn^ Edit;
private: System::Windows::Forms::DataGridViewImageColumn^ Delete;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewImageColumn1;
private: System::Windows::Forms::DataGridViewImageColumn^ dataGridViewImageColumn2;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Features_tab = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewImageColumn1 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->dataGridViewImageColumn2 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lname_text = (gcnew System::Windows::Forms::TextBox());
			this->fname_text = (gcnew System::Windows::Forms::TextBox());
			this->id_text = (gcnew System::Windows::Forms::TextBox());
			this->searchCust_button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->deleteCust_button = (gcnew System::Windows::Forms::Button());
			this->updateCust_button = (gcnew System::Windows::Forms::Button());
			this->addCust_button = (gcnew System::Windows::Forms::Button());
			this->label_fname = (gcnew System::Windows::Forms::Label());
			this->Title_tab1 = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->refOrder_text = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->splitter3 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dgvProduct = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edit = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Delete = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->quantityItem_text = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->colorItem_text = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->priceItem_text = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->typeItem_text = (gcnew System::Windows::Forms::TextBox());
			this->nameItem_text = (gcnew System::Windows::Forms::TextBox());
			this->refitem_text = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->searchItem_button = (gcnew System::Windows::Forms::Button());
			this->deleteItem_button = (gcnew System::Windows::Forms::Button());
			this->updateItem_button = (gcnew System::Windows::Forms::Button());
			this->addItem_button = (gcnew System::Windows::Forms::Button());
			this->splitter4 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->title_tab4 = (gcnew System::Windows::Forms::Label());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->Features_tab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProduct))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// Features_tab
			// 
			this->Features_tab->Controls->Add(this->tabPage1);
			this->Features_tab->Controls->Add(this->tabPage2);
			this->Features_tab->Controls->Add(this->tabPage3);
			this->Features_tab->Controls->Add(this->tabPage4);
			this->Features_tab->Controls->Add(this->tabPage5);
			this->Features_tab->Controls->Add(this->tabPage6);
			resources->ApplyResources(this->Features_tab, L"Features_tab");
			this->Features_tab->Name = L"Features_tab";
			this->Features_tab->SelectedIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->lname_text);
			this->tabPage1->Controls->Add(this->fname_text);
			this->tabPage1->Controls->Add(this->id_text);
			this->tabPage1->Controls->Add(this->searchCust_button);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->deleteCust_button);
			this->tabPage1->Controls->Add(this->updateCust_button);
			this->tabPage1->Controls->Add(this->addCust_button);
			this->tabPage1->Controls->Add(this->label_fname);
			this->tabPage1->Controls->Add(this->Title_tab1);
			this->tabPage1->Controls->Add(this->splitter1);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewImageColumn1,
					this->dataGridViewImageColumn2
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->dataGridViewTextBoxColumn1, L"dataGridViewTextBoxColumn1");
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->dataGridViewTextBoxColumn2, L"dataGridViewTextBoxColumn2");
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->dataGridViewTextBoxColumn3, L"dataGridViewTextBoxColumn3");
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->dataGridViewTextBoxColumn4, L"dataGridViewTextBoxColumn4");
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewImageColumn1
			// 
			this->dataGridViewImageColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->dataGridViewImageColumn1, L"dataGridViewImageColumn1");
			this->dataGridViewImageColumn1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dataGridViewImageColumn1.Image")));
			this->dataGridViewImageColumn1->Name = L"dataGridViewImageColumn1";
			// 
			// dataGridViewImageColumn2
			// 
			this->dataGridViewImageColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->dataGridViewImageColumn2, L"dataGridViewImageColumn2");
			this->dataGridViewImageColumn2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dataGridViewImageColumn2.Image")));
			this->dataGridViewImageColumn2->Name = L"dataGridViewImageColumn2";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			resources->ApplyResources(this->dateTimePicker1, L"dateTimePicker1");
			this->dateTimePicker1->MaxDate = System::DateTime(2100, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			// 
			// lname_text
			// 
			resources->ApplyResources(this->lname_text, L"lname_text");
			this->lname_text->Name = L"lname_text";
			// 
			// fname_text
			// 
			resources->ApplyResources(this->fname_text, L"fname_text");
			this->fname_text->Name = L"fname_text";
			// 
			// id_text
			// 
			resources->ApplyResources(this->id_text, L"id_text");
			this->id_text->Name = L"id_text";
			// 
			// searchCust_button
			// 
			resources->ApplyResources(this->searchCust_button, L"searchCust_button");
			this->searchCust_button->Name = L"searchCust_button";
			this->searchCust_button->UseVisualStyleBackColor = true;
			this->searchCust_button->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// deleteCust_button
			// 
			resources->ApplyResources(this->deleteCust_button, L"deleteCust_button");
			this->deleteCust_button->Name = L"deleteCust_button";
			this->deleteCust_button->UseVisualStyleBackColor = true;
			this->deleteCust_button->Click += gcnew System::EventHandler(this, &MyForm::deleteCust_button_Click);
			// 
			// updateCust_button
			// 
			resources->ApplyResources(this->updateCust_button, L"updateCust_button");
			this->updateCust_button->Name = L"updateCust_button";
			this->updateCust_button->UseVisualStyleBackColor = true;
			this->updateCust_button->Click += gcnew System::EventHandler(this, &MyForm::updateCust_button_Click);
			// 
			// addCust_button
			// 
			resources->ApplyResources(this->addCust_button, L"addCust_button");
			this->addCust_button->Name = L"addCust_button";
			this->addCust_button->UseVisualStyleBackColor = true;
			this->addCust_button->Click += gcnew System::EventHandler(this, &MyForm::add_employee_button_Click);
			// 
			// label_fname
			// 
			resources->ApplyResources(this->label_fname, L"label_fname");
			this->label_fname->Name = L"label_fname";
			// 
			// Title_tab1
			// 
			resources->ApplyResources(this->Title_tab1, L"Title_tab1");
			this->Title_tab1->Name = L"Title_tab1";
			// 
			// splitter1
			// 
			this->splitter1->Cursor = System::Windows::Forms::Cursors::Default;
			resources->ApplyResources(this->splitter1, L"splitter1");
			this->splitter1->Name = L"splitter1";
			this->splitter1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->refOrder_text);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->splitter3);
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			// 
			// textBox5
			// 
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			// 
			// refOrder_text
			// 
			resources->ApplyResources(this->refOrder_text, L"refOrder_text");
			this->refOrder_text->Name = L"refOrder_text";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			resources->ApplyResources(this->button11, L"button11");
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// splitter3
			// 
			resources->ApplyResources(this->splitter3, L"splitter3");
			this->splitter3->Name = L"splitter3";
			this->splitter3->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dgvProduct);
			this->tabPage3->Controls->Add(this->quantityItem_text);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->colorItem_text);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->priceItem_text);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->typeItem_text);
			this->tabPage3->Controls->Add(this->nameItem_text);
			this->tabPage3->Controls->Add(this->refitem_text);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->searchItem_button);
			this->tabPage3->Controls->Add(this->deleteItem_button);
			this->tabPage3->Controls->Add(this->updateItem_button);
			this->tabPage3->Controls->Add(this->addItem_button);
			this->tabPage3->Controls->Add(this->splitter4);
			resources->ApplyResources(this->tabPage3, L"tabPage3");
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dgvProduct
			// 
			this->dgvProduct->AllowUserToAddRows = false;
			this->dgvProduct->BackgroundColor = System::Drawing::Color::White;
			this->dgvProduct->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvProduct->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			resources->ApplyResources(this->dgvProduct, L"dgvProduct");
			this->dgvProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1, this->Column7,
					this->Column2, this->Type, this->Column6, this->Column3, this->Column4, this->Edit, this->Delete
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvProduct->DefaultCellStyle = dataGridViewCellStyle4;
			this->dgvProduct->EnableHeadersVisualStyles = false;
			this->dgvProduct->Name = L"dgvProduct";
			this->dgvProduct->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgvProduct_CellContentClick);
			// 
			// Column1
			// 
			resources->ApplyResources(this->Column1, L"Column1");
			this->Column1->Name = L"Column1";
			// 
			// Column7
			// 
			resources->ApplyResources(this->Column7, L"Column7");
			this->Column7->Name = L"Column7";
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->Column2, L"Column2");
			this->Column2->Name = L"Column2";
			// 
			// Type
			// 
			resources->ApplyResources(this->Type, L"Type");
			this->Type->Name = L"Type";
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			resources->ApplyResources(this->Column6, L"Column6");
			this->Column6->Name = L"Column6";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->Column3, L"Column3");
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->Column4, L"Column4");
			this->Column4->Name = L"Column4";
			// 
			// Edit
			// 
			this->Edit->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->Edit, L"Edit");
			this->Edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Edit.Image")));
			this->Edit->Name = L"Edit";
			// 
			// Delete
			// 
			this->Delete->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			resources->ApplyResources(this->Delete, L"Delete");
			this->Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.Image")));
			this->Delete->Name = L"Delete";
			// 
			// quantityItem_text
			// 
			resources->ApplyResources(this->quantityItem_text, L"quantityItem_text");
			this->quantityItem_text->Name = L"quantityItem_text";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// colorItem_text
			// 
			resources->ApplyResources(this->colorItem_text, L"colorItem_text");
			this->colorItem_text->Name = L"colorItem_text";
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->Name = L"label17";
			// 
			// priceItem_text
			// 
			resources->ApplyResources(this->priceItem_text, L"priceItem_text");
			this->priceItem_text->Name = L"priceItem_text";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->Name = L"label15";
			// 
			// typeItem_text
			// 
			resources->ApplyResources(this->typeItem_text, L"typeItem_text");
			this->typeItem_text->Name = L"typeItem_text";
			// 
			// nameItem_text
			// 
			resources->ApplyResources(this->nameItem_text, L"nameItem_text");
			this->nameItem_text->Name = L"nameItem_text";
			// 
			// refitem_text
			// 
			resources->ApplyResources(this->refitem_text, L"refitem_text");
			this->refitem_text->Name = L"refitem_text";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->Name = L"label12";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->Name = L"label14";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// searchItem_button
			// 
			resources->ApplyResources(this->searchItem_button, L"searchItem_button");
			this->searchItem_button->Name = L"searchItem_button";
			this->searchItem_button->UseVisualStyleBackColor = true;
			this->searchItem_button->Click += gcnew System::EventHandler(this, &MyForm::searchItem_button_Click);
			// 
			// deleteItem_button
			// 
			resources->ApplyResources(this->deleteItem_button, L"deleteItem_button");
			this->deleteItem_button->Name = L"deleteItem_button";
			this->deleteItem_button->UseVisualStyleBackColor = true;
			// 
			// updateItem_button
			// 
			resources->ApplyResources(this->updateItem_button, L"updateItem_button");
			this->updateItem_button->Name = L"updateItem_button";
			this->updateItem_button->UseVisualStyleBackColor = true;
			// 
			// addItem_button
			// 
			resources->ApplyResources(this->addItem_button, L"addItem_button");
			this->addItem_button->Name = L"addItem_button";
			this->addItem_button->UseVisualStyleBackColor = true;
			this->addItem_button->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// splitter4
			// 
			resources->ApplyResources(this->splitter4, L"splitter4");
			this->splitter4->Name = L"splitter4";
			this->splitter4->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->textBox3);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->title_tab4);
			this->tabPage4->Controls->Add(this->splitter2);
			resources->ApplyResources(this->tabPage4, L"tabPage4");
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// title_tab4
			// 
			resources->ApplyResources(this->title_tab4, L"title_tab4");
			this->title_tab4->Name = L"title_tab4";
			// 
			// splitter2
			// 
			resources->ApplyResources(this->splitter2, L"splitter2");
			this->splitter2->Name = L"splitter2";
			this->splitter2->TabStop = false;
			// 
			// tabPage5
			// 
			resources->ApplyResources(this->tabPage5, L"tabPage5");
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			resources->ApplyResources(this->tabPage6, L"tabPage6");
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->Controls->Add(this->Features_tab);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Features_tab->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProduct))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		int customer_id = 0;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Ctrl::Ctrl_Employee();
		UserLogin^ Form = gcnew UserLogin;
		Form->ShowDialog();
		if (!(Form->DialogResult == System::Windows::Forms::DialogResult::OK))
		{
			this->Close();
		}
		LoadItem();
		LoadCustomer();
	}
	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		this->dataGridView1->Refresh();
		this->oDs = OB_Ctrl_customer->listCustomer(fname_text->Text, lname_text->Text);
		this->dataGridView1->DataSource = this->oDs;
		//this->dataGridView1->DataMember = "Clients";
	}
	private: System::Void add_employee_button_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		//
		OB_Ctrl_customer->ADD(lname_text->Text,fname_text->Text, dateTimePicker1->Value);
		MessageBox::Show("Client enregistré avec succès.");
		LoadCustomer();
	}
	
	
	private: System::Void updateCust_button_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		this->dataGridView1->Refresh();
		OB_Ctrl_customer->UPDATE(fname_text->Text, lname_text->Text, dateTimePicker1->Value, 0);
		this->dataGridView1->DataSource = OB_Ctrl_customer->getDataSet();
		//this->dataGridView1->DataMember = "Clients";
	
	}
	private: System::Void deleteCust_button_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		this->dataGridView1->Refresh();
		OB_Ctrl_customer->DELETE(customer_id);
	}


//ajouter un item
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Items^ OB_Ctrl_item = gcnew NS_Ctrl::Ctrl_Items();
		//
		OB_Ctrl_item->ADD(refitem_text->Text, typeItem_text->Text, nameItem_text->Text, colorItem_text->Text, Convert::ToDouble(priceItem_text->Text), Convert::ToInt32(quantityItem_text->Text));
		MessageBox::Show("Produit enregistré avec succès.");
		LoadItem();
	}
//
	private: System::Void AddressManagment_Click(System::Object^ sender, System::EventArgs^ e) {
		AddressAddForm^ AddressForm = gcnew AddressAddForm();
		AddressForm->getCustomer(customer_id);
		AddressForm->ShowDialog();
	}
//
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
		customer_id = (int)this->dataGridView1[0, e->RowIndex]->Value;
	
		NS_Ctrl::Ctrl_Customers^ OB_Ctrl_customer = gcnew NS_Ctrl::Ctrl_Customers();
		this->dataGridView1->Refresh();
		this->dataGridView1->DataSource = OB_Ctrl_customer->getDataSet();
		this->dataGridView1->DataMember = "Clients";
	}


	private: Void dgvProduct_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		String^ colName = dgvProduct->Columns[e->ColumnIndex]->Name;
		if (colName == "Edit")
		{
			ItemAddForm^ additem = gcnew ItemAddForm();
			additem->refitem_text->Text = dgvProduct->Rows[e->RowIndex]->Cells[1]->Value->ToString();
			additem->nameItem_text->Text = dgvProduct->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			additem->typeItem_text->Text = dgvProduct->Rows[e->RowIndex]->Cells[3]->Value->ToString();
			additem->colorItem_text->Text = dgvProduct->Rows[e->RowIndex]->Cells[4]->Value->ToString();
			additem->quantityItem_text->Text = dgvProduct->Rows[e->RowIndex]->Cells[5]->Value->ToString();
			additem->priceItem_text->Text = dgvProduct->Rows[e->RowIndex]->Cells[6]->Value->ToString();
			additem->ShowDialog();
			MessageBox::Show("feur");
		}
		else if (colName == "Delete")
		{
			if (MessageBox::Show("Voulez-vous vraiment supprimer ce produit ?", "Supprimer?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
			{
				NS_Ctrl::Ctrl_Items^ OB_Ctrl_item = gcnew NS_Ctrl::Ctrl_Items();
				
				OB_Ctrl_item->DELETE(Convert::ToString(dgvProduct->Rows[e->RowIndex]->Cells[1]->Value));
				MessageBox::Show("Record has been successfully deleted!");
			}
		}
		LoadItem();
	}
//rechercher item
	private: System::Void searchItem_button_Click(System::Object^ sender, System::EventArgs^ e) {

		NS_Ctrl::Ctrl_Items^ OB_Ctrl_item = gcnew NS_Ctrl::Ctrl_Items();
		OB_Ctrl_item->listItems(refitem_text->Text);
		
	}
	SqlCommand^ cm = gcnew SqlCommand();

	ConnectionStringSettings^ connectionStringSettings = ConfigurationManager::ConnectionStrings["DefaultConnectionString"];
	String^ connectionString = connectionStringSettings->ConnectionString;

	SqlConnection^ con = gcnew SqlConnection(connectionString);
	SqlDataReader^ dr;
private: Void LoadItem()
	{
		int i = 0;
		dgvProduct->Rows->Clear();
		cm = gcnew SqlCommand("SELECT * FROM ITEMS JOIN COLORS ON COLORS.item_id = ITEMS.id", con);
		con->Open();
		dr = cm->ExecuteReader();
		while (dr->Read())
		{
			i++;
			dgvProduct->Rows->Add(i, dr[1]->ToString(), dr[3]->ToString(), dr[2]->ToString(), dr[6]->ToString(), dr[7]->ToString(), dr[4]->ToString());
		}
		dr->Close();
		con->Close();
	}

private: Void LoadCustomer()
{

	int i = 0;
	dataGridView1->Rows->Clear();
	cm = gcnew SqlCommand("SELECT * FROM CUSTOMERS JOIN PEOPLE ON CUSTOMERS.person_id = PEOPLE.id", con);
	con->Open();
	dr = cm->ExecuteReader();
	while (dr->Read())
	{
		i++;
		dataGridView1->Rows->Add(i, dr[4]->ToString(), dr[3]->ToString(), dr[1]->ToString());
	}
	dr->Close();
	con->Close();
}
	   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		   AddressAddForm^ AddressForm = gcnew AddressAddForm();
		   AddressForm->getCustomer(customer_id);
		   AddressForm->Show();
	   }
//private: System::Void updateItem_button_Click(System::Object^ sender, System::EventArgs^ e) {
//	
//	try
//	{
//		if (MessageBox::Show("Voulez-vous vraiment modifier cet item?", "Update Record", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
//		{
//			NS_Ctrl::Ctrl_Items^ OB_Ctrl_item = gcnew NS_Ctrl::Ctrl_Items();
//			//OB_Ctrl_item->UPDATE
//		}
//	}
//}
//	   private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
//		   NS_Ctrl::Ctrl_Items^ OB_Ctrl_item = gcnew NS_Ctrl::Ctrl_Items();
//		   //
//		   OB_Ctrl_item->ADD(refitem_text->Text, typeItem_text->Text, nameItem_text->Text, colorItem_text->Text, Convert::ToDouble(priceItem_text->Text), Convert::ToInt32(quantityItem_text->Text));
//		   MessageBox::Show("Produit enregistré avec succès.");
//		   LoadItem();
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ colName = dataGridView1->Columns[e->ColumnIndex]->Name;
	if (colName == "Edit")
	{
		CustomerAddForm^ addcust = gcnew CustomerAddForm();
		addcust->id_text->Text = dataGridView1->Rows[e->RowIndex]->Cells[1]->Value->ToString();
		addcust->lname_text->Text = dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString();
		addcust->fname_text->Text = dataGridView1->Rows[e->RowIndex]->Cells[3]->Value->ToString();
		addcust->ShowDialog();
		
	}
	else if (colName == "Delete")
	{
		if (MessageBox::Show("Voulez-vous vraiment supprimer ce client ?", "Supprimer?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
		{
			NS_Ctrl::Ctrl_Items^ OB_Ctrl_item = gcnew NS_Ctrl::Ctrl_Items();

			OB_Ctrl_item->DELETE(Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[1]->Value));
			MessageBox::Show("Record has been successfully deleted!");
		}
	}
	LoadItem();
}

};
}