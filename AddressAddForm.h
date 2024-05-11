#pragma once
#include "Ctrl_Addresses.h"

namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de AddressAddForm
	/// </summary>
	public ref class AddressAddForm : public System::Windows::Forms::Form
	{
	public:
		AddressAddForm(void)
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
		~AddressAddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ cust_street_name_text;
	private: System::Windows::Forms::Label^ cust_street_label;
	private: System::Windows::Forms::Label^ cust_number_label;
	private: System::Windows::Forms::TextBox^ cust_street_numb_text;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cust_street_name_text = (gcnew System::Windows::Forms::TextBox());
			this->cust_street_label = (gcnew System::Windows::Forms::Label());
			this->cust_number_label = (gcnew System::Windows::Forms::Label());
			this->cust_street_numb_text = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(266, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 17);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Code postal";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(267, 49);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 22);
			this->textBox3->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(269, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 22);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 192);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 22);
			this->textBox1->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 17);
			this->label2->TabIndex = 19;
			this->label2->Text = L"infos complementaires";
			// 
			// cust_street_name_text
			// 
			this->cust_street_name_text->Location = System::Drawing::Point(26, 117);
			this->cust_street_name_text->Name = L"cust_street_name_text";
			this->cust_street_name_text->Size = System::Drawing::Size(171, 22);
			this->cust_street_name_text->TabIndex = 18;
			// 
			// cust_street_label
			// 
			this->cust_street_label->AutoSize = true;
			this->cust_street_label->Location = System::Drawing::Point(23, 97);
			this->cust_street_label->Name = L"cust_street_label";
			this->cust_street_label->Size = System::Drawing::Size(34, 17);
			this->cust_street_label->TabIndex = 17;
			this->cust_street_label->Text = L"Rue";
			// 
			// cust_number_label
			// 
			this->cust_number_label->AutoSize = true;
			this->cust_number_label->Location = System::Drawing::Point(23, 29);
			this->cust_number_label->Name = L"cust_number_label";
			this->cust_number_label->Size = System::Drawing::Size(101, 17);
			this->cust_number_label->TabIndex = 16;
			this->cust_number_label->Text = L"numéro de rue";
			// 
			// cust_street_numb_text
			// 
			this->cust_street_numb_text->Location = System::Drawing::Point(26, 49);
			this->cust_street_numb_text->Name = L"cust_street_numb_text";
			this->cust_street_numb_text->Size = System::Drawing::Size(86, 22);
			this->cust_street_numb_text->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(266, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 17);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Ville";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(269, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 39);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Enregister";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddressAddForm::button2_Click);
			// 
			// AddressAddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 272);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cust_street_name_text);
			this->Controls->Add(this->cust_street_label);
			this->Controls->Add(this->cust_number_label);
			this->Controls->Add(this->cust_street_numb_text);
			this->Name = L"AddressAddForm";
			this->Text = L"AddressAddForm";
			this->Load += gcnew System::EventHandler(this, &AddressAddForm::AddressAddForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int id = 0;
	public:
		void getCustomer(int _id)
		{
			NS_Ctrl::Ctrl_Addresses^ OB_Ctrl_Address = gcnew NS_Ctrl::Ctrl_Addresses();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			id = _id;
			//return _id;
		}
#pragma endregion


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Addresses^ OB_Ctrl_Address = gcnew NS_Ctrl::Ctrl_Addresses();
		OB_Ctrl_Address->ADD(cust_street_name_text->Text, textBox1->Text, cust_street_numb_text->Text, textBox3->Text, Int16::Parse(textBox2->Text), id);
		this->Close();
	}
	private: System::Void AddressAddForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}