#pragma once
#include "dbConnect.h"

namespace InventoryManagerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security;
	using namespace InventoryManagerApp::Presenters;

	/// <summary>
	/// Description résumée de UserLogin
	/// </summary>
	public ref class UserLogin : public System::Windows::Forms::Form, InventoryManagerApp::Interfaces::IConnectionView
	{

	public:
		UserLogin(void)
		{
			InitializeComponent();
			this->loginPresenter = gcnew LoginPresenter(this);
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~UserLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

		/*String^ email;
		SecureString^ password;*/
		LoginPresenter loginPresenter;

	public:

		property String^ Email
		{
			String^ get()
			{
				return this->email_textBox->Text;
			}
		}

		property SecureString^ Password
		{
			SecureString^ get()
			{
				SecureString^ securePassword;
				for each (wchar_t c in this->pswdTextBox->Text)
				{
					securePassword->AppendChar(c);
				}
				securePassword->MakeReadOnly();
				return securePassword;
			}
		}

	private: System::Windows::Forms::Label^ email_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ email_textBox;
	private: System::Windows::Forms::TextBox^ pswdTextBox;
	private: System::Windows::Forms::Button^ Login_button;
	private: System::Windows::Forms::Label^ label2;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->email_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pswdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Login_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label->Location = System::Drawing::Point(103, 20);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(111, 28);
			this->email_label->TabIndex = 0;
			this->email_label->Text = L"E-mail : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Mot de passe:";
			// 
			// email_textBox
			// 
			this->email_textBox->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_textBox->Location = System::Drawing::Point(229, 20);
			this->email_textBox->Name = L"email_textBox";
			this->email_textBox->Size = System::Drawing::Size(274, 32);
			this->email_textBox->TabIndex = 2;
			// 
			// pswdTextBox
			// 
			this->pswdTextBox->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pswdTextBox->Location = System::Drawing::Point(229, 69);
			this->pswdTextBox->Name = L"pswdTextBox";
			this->pswdTextBox->Size = System::Drawing::Size(274, 32);
			this->pswdTextBox->TabIndex = 3;
			// 
			// Login_button
			// 
			this->Login_button->Location = System::Drawing::Point(12, 149);
			this->Login_button->Name = L"Login_button";
			this->Login_button->Size = System::Drawing::Size(491, 59);
			this->Login_button->TabIndex = 4;
			this->Login_button->Text = L"Se connecter";
			this->Login_button->UseVisualStyleBackColor = true;
			this->Login_button->Click += gcnew System::EventHandler(this, &UserLogin::Login_button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(85, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 5;
			this->label2->Visible = false;
			// 
			// UserLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 220);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Login_button);
			this->Controls->Add(this->pswdTextBox);
			this->Controls->Add(this->email_textBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->email_label);
			this->Name = L"UserLogin";
			this->Text = L"UserLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void Login_button_Click(System::Object^ sender, System::EventArgs^ e) {

			this->loginPresenter->Login();
			//this->oDs = this->oSvc->selectConnection("rsl", this->email_textBox->Text, this->pswdTextBox->Text);
			//if (this->oDs->Tables["rsl"]->Rows->Count == 0)
			//{
			//	this->label2->Text = "L'identifiant et/ou le mot de passe est incorrect.";
			//	this->pswdTextBox->Clear();
			//}
			//else
			//{
			//this->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->Close();
			//}
		}

	};
};