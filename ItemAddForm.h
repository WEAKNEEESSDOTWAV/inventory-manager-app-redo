#pragma once
#include "Ctrl_Items.h"
namespace ProjetPOOGRP7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ItemAddForm
	/// </summary>
	public ref class ItemAddForm : public System::Windows::Forms::Form
	{
	public:
		ItemAddForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ItemAddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ quantityItem_text;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label16;
	public: System::Windows::Forms::TextBox^ colorItem_text;
	private:

	private: System::Windows::Forms::Label^ label17;
	public: System::Windows::Forms::TextBox^ priceItem_text;
	private:

	private: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::TextBox^ typeItem_text;
	private:
	public: System::Windows::Forms::TextBox^ nameItem_text;


	public: System::Windows::Forms::TextBox^ refitem_text;
	private:

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ upd_item_button;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->upd_item_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// quantityItem_text
			// 
			this->quantityItem_text->Location = System::Drawing::Point(174, 182);
			this->quantityItem_text->Name = L"quantityItem_text";
			this->quantityItem_text->Size = System::Drawing::Size(146, 22);
			this->quantityItem_text->TabIndex = 113;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label16->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label16->Location = System::Drawing::Point(84, 186);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 18);
			this->label16->TabIndex = 112;
			this->label16->Text = L"Quantité";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// colorItem_text
			// 
			this->colorItem_text->Location = System::Drawing::Point(174, 147);
			this->colorItem_text->Name = L"colorItem_text";
			this->colorItem_text->Size = System::Drawing::Size(146, 22);
			this->colorItem_text->TabIndex = 111;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label17->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label17->Location = System::Drawing::Point(84, 151);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 18);
			this->label17->TabIndex = 110;
			this->label17->Text = L"Couleur";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// priceItem_text
			// 
			this->priceItem_text->Location = System::Drawing::Point(174, 210);
			this->priceItem_text->Name = L"priceItem_text";
			this->priceItem_text->Size = System::Drawing::Size(146, 22);
			this->priceItem_text->TabIndex = 109;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label15->Location = System::Drawing::Point(84, 214);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 18);
			this->label15->TabIndex = 108;
			this->label15->Text = L"Prix HT";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// typeItem_text
			// 
			this->typeItem_text->Location = System::Drawing::Point(174, 109);
			this->typeItem_text->Name = L"typeItem_text";
			this->typeItem_text->Size = System::Drawing::Size(146, 22);
			this->typeItem_text->TabIndex = 107;
			// 
			// nameItem_text
			// 
			this->nameItem_text->Location = System::Drawing::Point(174, 78);
			this->nameItem_text->Name = L"nameItem_text";
			this->nameItem_text->Size = System::Drawing::Size(146, 22);
			this->nameItem_text->TabIndex = 106;
			// 
			// refitem_text
			// 
			this->refitem_text->Location = System::Drawing::Point(174, 47);
			this->refitem_text->Name = L"refitem_text";
			this->refitem_text->Size = System::Drawing::Size(146, 22);
			this->refitem_text->TabIndex = 105;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label12->Location = System::Drawing::Point(111, 51);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 18);
			this->label12->TabIndex = 104;
			this->label12->Text = L"ref";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label13->Location = System::Drawing::Point(96, 113);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 18);
			this->label13->TabIndex = 103;
			this->label13->Text = L"Type";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label14->Location = System::Drawing::Point(91, 82);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 18);
			this->label14->TabIndex = 102;
			this->label14->Text = L"Nom";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// upd_item_button
			// 
			this->upd_item_button->Location = System::Drawing::Point(69, 263);
			this->upd_item_button->Name = L"upd_item_button";
			this->upd_item_button->Size = System::Drawing::Size(318, 83);
			this->upd_item_button->TabIndex = 114;
			this->upd_item_button->Text = L"Sauvegarder changements";
			this->upd_item_button->UseVisualStyleBackColor = true;
			this->upd_item_button->Click += gcnew System::EventHandler(this, &ItemAddForm::upd_item_button_Click);
			// 
			// ItemAddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 358);
			this->Controls->Add(this->upd_item_button);
			this->Controls->Add(this->quantityItem_text);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->colorItem_text);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->priceItem_text);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->typeItem_text);
			this->Controls->Add(this->nameItem_text);
			this->Controls->Add(this->refitem_text);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Name = L"ItemAddForm";
			this->Text = L"ItemAddForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void upd_item_button_Click(System::Object^ sender, System::EventArgs^ e) {
		NS_Ctrl::Ctrl_Items^ OB_Ctrl_item = gcnew NS_Ctrl::Ctrl_Items();
		OB_Ctrl_item->UPDATE(refitem_text->Text, typeItem_text->Text, nameItem_text->Text, colorItem_text->Text, Convert::ToDouble(priceItem_text->Text), Convert::ToInt32(quantityItem_text->Text));
	}
};
}
