#include "CLservice.h"
#pragma once

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PersonnelModifier
	/// </summary>
	public ref class PersonnelModifier : public System::Windows::Forms::Form
	{
	public:
		PersonnelModifier(void)
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
		~PersonnelModifier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbID;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtNom;
	private: System::Windows::Forms::Label^ lbNom;
	private: System::Windows::Forms::TextBox^ txtPrenom;
	private: System::Windows::Forms::Label^ lbPrenom;
	private: System::Windows::Forms::TextBox^ txtDateEmbauche;
	private: System::Windows::Forms::Label^ lbDateEmbauche;
	private: System::Windows::Forms::TextBox^ txtAdresse;
	private: System::Windows::Forms::Label^ lbAdresse;
	private: System::Windows::Forms::TextBox^ txtNumAdresse;
	private: System::Windows::Forms::Label^ lbNumAdresse;
	private: System::Windows::Forms::Label^ lbModifier;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: System::Windows::Forms::TextBox^ txtCodePostal;
	private: System::Windows::Forms::Label^ lbCodePostal;
	private: System::Windows::Forms::TextBox^ txtRoleID;
	private: System::Windows::Forms::Label^ lbRoleID;
	private: NS_Comp_Svc::CLservices^ oSvc;

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
			this->lbID = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->lbNom = (gcnew System::Windows::Forms::Label());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbPrenom = (gcnew System::Windows::Forms::Label());
			this->txtDateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->lbDateEmbauche = (gcnew System::Windows::Forms::Label());
			this->txtAdresse = (gcnew System::Windows::Forms::TextBox());
			this->lbAdresse = (gcnew System::Windows::Forms::Label());
			this->txtNumAdresse = (gcnew System::Windows::Forms::TextBox());
			this->lbNumAdresse = (gcnew System::Windows::Forms::Label());
			this->lbModifier = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->txtCodePostal = (gcnew System::Windows::Forms::TextBox());
			this->lbCodePostal = (gcnew System::Windows::Forms::Label());
			this->txtRoleID = (gcnew System::Windows::Forms::TextBox());
			this->lbRoleID = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbID
			// 
			this->lbID->AutoSize = true;
			this->lbID->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbID->Location = System::Drawing::Point(0, 49);
			this->lbID->Name = L"lbID";
			this->lbID->Size = System::Drawing::Size(36, 29);
			this->lbID->TabIndex = 0;
			this->lbID->Text = L"ID";
			// 
			// txtID
			// 
			this->txtID->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtID->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtID->Location = System::Drawing::Point(0, 78);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(707, 31);
			this->txtID->TabIndex = 1;
			// 
			// txtNom
			// 
			this->txtNom->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtNom->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtNom->Location = System::Drawing::Point(0, 138);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(707, 31);
			this->txtNom->TabIndex = 3;
			// 
			// lbNom
			// 
			this->lbNom->AutoSize = true;
			this->lbNom->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNom->Location = System::Drawing::Point(0, 109);
			this->lbNom->Name = L"lbNom";
			this->lbNom->Size = System::Drawing::Size(65, 29);
			this->lbNom->TabIndex = 2;
			this->lbNom->Text = L"Nom";
			// 
			// txtPrenom
			// 
			this->txtPrenom->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtPrenom->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtPrenom->Location = System::Drawing::Point(0, 198);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(707, 31);
			this->txtPrenom->TabIndex = 5;
			// 
			// lbPrenom
			// 
			this->lbPrenom->AutoSize = true;
			this->lbPrenom->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrenom->Location = System::Drawing::Point(0, 169);
			this->lbPrenom->Name = L"lbPrenom";
			this->lbPrenom->Size = System::Drawing::Size(98, 29);
			this->lbPrenom->TabIndex = 4;
			this->lbPrenom->Text = L"Prenom";
			// 
			// txtDateEmbauche
			// 
			this->txtDateEmbauche->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtDateEmbauche->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtDateEmbauche->Location = System::Drawing::Point(0, 258);
			this->txtDateEmbauche->Name = L"txtDateEmbauche";
			this->txtDateEmbauche->Size = System::Drawing::Size(707, 31);
			this->txtDateEmbauche->TabIndex = 7;
			// 
			// lbDateEmbauche
			// 
			this->lbDateEmbauche->AutoSize = true;
			this->lbDateEmbauche->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbDateEmbauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDateEmbauche->Location = System::Drawing::Point(0, 229);
			this->lbDateEmbauche->Name = L"lbDateEmbauche";
			this->lbDateEmbauche->Size = System::Drawing::Size(200, 29);
			this->lbDateEmbauche->TabIndex = 6;
			this->lbDateEmbauche->Text = L"Date d\'embauche";
			// 
			// txtAdresse
			// 
			this->txtAdresse->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtAdresse->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtAdresse->Location = System::Drawing::Point(0, 318);
			this->txtAdresse->Name = L"txtAdresse";
			this->txtAdresse->Size = System::Drawing::Size(707, 31);
			this->txtAdresse->TabIndex = 9;
			// 
			// lbAdresse
			// 
			this->lbAdresse->AutoSize = true;
			this->lbAdresse->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAdresse->Location = System::Drawing::Point(0, 289);
			this->lbAdresse->Name = L"lbAdresse";
			this->lbAdresse->Size = System::Drawing::Size(102, 29);
			this->lbAdresse->TabIndex = 8;
			this->lbAdresse->Text = L"Adresse";
			// 
			// txtNumAdresse
			// 
			this->txtNumAdresse->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtNumAdresse->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtNumAdresse->Location = System::Drawing::Point(0, 378);
			this->txtNumAdresse->Name = L"txtNumAdresse";
			this->txtNumAdresse->Size = System::Drawing::Size(707, 31);
			this->txtNumAdresse->TabIndex = 11;
			// 
			// lbNumAdresse
			// 
			this->lbNumAdresse->AutoSize = true;
			this->lbNumAdresse->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbNumAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNumAdresse->Location = System::Drawing::Point(0, 349);
			this->lbNumAdresse->Name = L"lbNumAdresse";
			this->lbNumAdresse->Size = System::Drawing::Size(211, 29);
			this->lbNumAdresse->TabIndex = 10;
			this->lbNumAdresse->Text = L"Numéro d\'adresse";
			// 
			// lbModifier
			// 
			this->lbModifier->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbModifier->Location = System::Drawing::Point(0, 0);
			this->lbModifier->Name = L"lbModifier";
			this->lbModifier->Size = System::Drawing::Size(707, 49);
			this->lbModifier->TabIndex = 12;
			this->lbModifier->Text = L"Modifier";
			this->lbModifier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnOK, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnAnnuler, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 631);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(707, 100);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// btnOK
			// 
			this->btnOK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnOK->Location = System::Drawing::Point(3, 3);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(347, 94);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &PersonnelModifier::btnOK_Click);
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnAnnuler->Location = System::Drawing::Point(356, 3);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(348, 94);
			this->btnAnnuler->TabIndex = 1;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = true;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &PersonnelModifier::btnAnnuler_Click);
			// 
			// txtCodePostal
			// 
			this->txtCodePostal->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtCodePostal->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtCodePostal->Location = System::Drawing::Point(0, 438);
			this->txtCodePostal->Name = L"txtCodePostal";
			this->txtCodePostal->Size = System::Drawing::Size(707, 31);
			this->txtCodePostal->TabIndex = 13;
			// 
			// lbCodePostal
			// 
			this->lbCodePostal->AutoSize = true;
			this->lbCodePostal->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbCodePostal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCodePostal->Location = System::Drawing::Point(0, 409);
			this->lbCodePostal->Name = L"lbCodePostal";
			this->lbCodePostal->Size = System::Drawing::Size(145, 29);
			this->lbCodePostal->TabIndex = 12;
			this->lbCodePostal->Text = L"Code Postal";
			// 
			// txtRoleID
			// 
			this->txtRoleID->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtRoleID->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtRoleID->Location = System::Drawing::Point(0, 498);
			this->txtRoleID->Name = L"txtRoleID";
			this->txtRoleID->Size = System::Drawing::Size(707, 31);
			this->txtRoleID->TabIndex = 15;
			// 
			// lbRoleID
			// 
			this->lbRoleID->AutoSize = true;
			this->lbRoleID->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbRoleID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRoleID->Location = System::Drawing::Point(0, 469);
			this->lbRoleID->Name = L"lbRoleID";
			this->lbRoleID->Size = System::Drawing::Size(87, 29);
			this->lbRoleID->TabIndex = 14;
			this->lbRoleID->Text = L"RoleID";
			// 
			// PersonnelModifier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(707, 731);
			this->ControlBox = false;
			this->Controls->Add(this->txtRoleID);
			this->Controls->Add(this->lbRoleID);
			this->Controls->Add(this->txtCodePostal);
			this->Controls->Add(this->lbCodePostal);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->txtNumAdresse);
			this->Controls->Add(this->lbNumAdresse);
			this->Controls->Add(this->txtAdresse);
			this->Controls->Add(this->lbAdresse);
			this->Controls->Add(this->txtDateEmbauche);
			this->Controls->Add(this->lbDateEmbauche);
			this->Controls->Add(this->txtPrenom);
			this->Controls->Add(this->lbPrenom);
			this->Controls->Add(this->txtNom);
			this->Controls->Add(this->lbNom);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->lbID);
			this->Controls->Add(this->lbModifier);
			this->Name = L"PersonnelModifier";
			this->Text = L"PersonnelCreer";
			this->Load += gcnew System::EventHandler(this, &PersonnelModifier::PersonnelModifier_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtID->Text = L"";
		this->txtNom->Text = L"";
		this->txtPrenom->Text = L"";
		this->txtDateEmbauche->Text = L"";
		this->txtAdresse->Text = L"";
		this->txtNumAdresse->Text = L"";
		this->txtCodePostal->Text = L"";
		this->txtRoleID->Text = L"";
	}

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		int ID = System::Convert::ToInt32(this->txtID->Text);
		int NumAdresse = System::Convert::ToInt32(this->txtNumAdresse->Text);
		int CodePostal = System::Convert::ToInt32(this->txtCodePostal->Text);
		int RoleID = System::Convert::ToInt32(this->txtRoleID->Text);
		this->oSvc->ModifierPersonnel(ID, this->txtNom->Text, this->txtPrenom->Text, this->txtDateEmbauche->Text, this->txtAdresse->Text, NumAdresse, CodePostal, RoleID);
	}

private: System::Void PersonnelModifier_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservices();
}

};
}
