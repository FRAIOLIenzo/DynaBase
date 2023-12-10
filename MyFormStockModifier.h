#include "CLserviceStock.h"
#pragma once

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStockModifier
	/// </summary>
	public ref class MyFormStockModifier : public System::Windows::Forms::Form
	{
	public:
		MyFormStockModifier(void)
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
		~MyFormStockModifier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbNom;
	private: System::Windows::Forms::TextBox^ txtNom;
	private: System::Windows::Forms::TextBox^ txtQuantite;
	private: System::Windows::Forms::Label^ lbPrenom;
	private: System::Windows::Forms::TextBox^ txtSeuil;
	private: System::Windows::Forms::Label^ lbAdresse;
	private: System::Windows::Forms::TextBox^ txtTVA;
	private: System::Windows::Forms::Label^ lbDatePremierAchat;
	private: System::Windows::Forms::Label^ lbModifier;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: NS_Comp_Svc::CLservicesStock^ oSvc;
	private: System::Windows::Forms::TextBox^ txtCommandeID;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtArticleID;
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
			this->lbNom = (gcnew System::Windows::Forms::Label());
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantite = (gcnew System::Windows::Forms::TextBox());
			this->lbPrenom = (gcnew System::Windows::Forms::Label());
			this->txtSeuil = (gcnew System::Windows::Forms::TextBox());
			this->lbAdresse = (gcnew System::Windows::Forms::Label());
			this->txtTVA = (gcnew System::Windows::Forms::TextBox());
			this->lbDatePremierAchat = (gcnew System::Windows::Forms::Label());
			this->lbModifier = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->txtCommandeID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtArticleID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbNom
			// 
			this->lbNom->AutoSize = true;
			this->lbNom->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNom->Location = System::Drawing::Point(0, 108);
			this->lbNom->Name = L"lbNom";
			this->lbNom->Size = System::Drawing::Size(65, 29);
			this->lbNom->TabIndex = 0;
			this->lbNom->Text = L"Nom";
			// 
			// txtNom
			// 
			this->txtNom->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtNom->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtNom->Location = System::Drawing::Point(0, 137);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(1041, 31);
			this->txtNom->TabIndex = 1;
			// 
			// txtQuantite
			// 
			this->txtQuantite->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtQuantite->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtQuantite->Location = System::Drawing::Point(0, 197);
			this->txtQuantite->Name = L"txtQuantite";
			this->txtQuantite->Size = System::Drawing::Size(1041, 31);
			this->txtQuantite->TabIndex = 3;
			// 
			// lbPrenom
			// 
			this->lbPrenom->AutoSize = true;
			this->lbPrenom->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrenom->Location = System::Drawing::Point(0, 168);
			this->lbPrenom->Name = L"lbPrenom";
			this->lbPrenom->Size = System::Drawing::Size(109, 29);
			this->lbPrenom->TabIndex = 2;
			this->lbPrenom->Text = L"Quantité ";
			// 
			// txtSeuil
			// 
			this->txtSeuil->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtSeuil->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtSeuil->Location = System::Drawing::Point(0, 257);
			this->txtSeuil->Name = L"txtSeuil";
			this->txtSeuil->Size = System::Drawing::Size(1041, 31);
			this->txtSeuil->TabIndex = 5;
			// 
			// lbAdresse
			// 
			this->lbAdresse->AutoSize = true;
			this->lbAdresse->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAdresse->Location = System::Drawing::Point(0, 228);
			this->lbAdresse->Name = L"lbAdresse";
			this->lbAdresse->Size = System::Drawing::Size(68, 29);
			this->lbAdresse->TabIndex = 4;
			this->lbAdresse->Text = L"Seuil";
			// 
			// txtTVA
			// 
			this->txtTVA->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtTVA->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtTVA->Location = System::Drawing::Point(0, 317);
			this->txtTVA->Name = L"txtTVA";
			this->txtTVA->Size = System::Drawing::Size(1041, 31);
			this->txtTVA->TabIndex = 7;
			// 
			// lbDatePremierAchat
			// 
			this->lbDatePremierAchat->AutoSize = true;
			this->lbDatePremierAchat->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbDatePremierAchat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDatePremierAchat->Location = System::Drawing::Point(0, 288);
			this->lbDatePremierAchat->Name = L"lbDatePremierAchat";
			this->lbDatePremierAchat->Size = System::Drawing::Size(152, 29);
			this->lbDatePremierAchat->TabIndex = 8;
			this->lbDatePremierAchat->Text = L"Taux de TVA";
			// 
			// lbModifier
			// 
			this->lbModifier->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbModifier->Location = System::Drawing::Point(0, 0);
			this->lbModifier->Name = L"lbModifier";
			this->lbModifier->Size = System::Drawing::Size(1041, 48);
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 847);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1041, 100);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// btnOK
			// 
			this->btnOK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnOK->Location = System::Drawing::Point(3, 3);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(514, 94);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyFormStockModifier::btnOK_Click_1);
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnAnnuler->Location = System::Drawing::Point(523, 3);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(515, 94);
			this->btnAnnuler->TabIndex = 1;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = true;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &MyFormStockModifier::btnAnnuler_Click_1);
			// 
			// txtCommandeID
			// 
			this->txtCommandeID->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtCommandeID->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtCommandeID->Location = System::Drawing::Point(0, 377);
			this->txtCommandeID->Name = L"txtCommandeID";
			this->txtCommandeID->Size = System::Drawing::Size(1041, 31);
			this->txtCommandeID->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 348);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Commande ID";
			// 
			// txtArticleID
			// 
			this->txtArticleID->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtArticleID->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtArticleID->Location = System::Drawing::Point(0, 77);
			this->txtArticleID->Name = L"txtArticleID";
			this->txtArticleID->Size = System::Drawing::Size(1041, 31);
			this->txtArticleID->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 29);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Article ID";
			// 
			// MyFormStockModifier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1041, 947);
			this->ControlBox = false;
			this->Controls->Add(this->txtCommandeID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->txtTVA);
			this->Controls->Add(this->lbDatePremierAchat);
			this->Controls->Add(this->txtSeuil);
			this->Controls->Add(this->lbAdresse);
			this->Controls->Add(this->txtQuantite);
			this->Controls->Add(this->lbPrenom);
			this->Controls->Add(this->txtNom);
			this->Controls->Add(this->lbNom);
			this->Controls->Add(this->txtArticleID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbModifier);
			this->Name = L"MyFormStockModifier";
			this->Text = L"MyFormStockModifier";
			this->Load += gcnew System::EventHandler(this, &MyFormStockModifier::MyFormStockModifier_Load_1);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyFormStockModifier_Load_1(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservicesStock();
	}
	private: System::Void btnOK_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(txtNom->Text) ||
			String::IsNullOrWhiteSpace(txtQuantite->Text) ||
			String::IsNullOrWhiteSpace(txtSeuil->Text) ||
			String::IsNullOrWhiteSpace(txtTVA->Text) ||
			String::IsNullOrWhiteSpace(txtCommandeID->Text))
		{
			MessageBox::Show("Veuillez remplir toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{

			int Quantite = System::Convert::ToInt32(this->txtQuantite->Text);
			int Seuil = System::Convert::ToInt32(this->txtSeuil->Text);
			int ArticleID = System::Convert::ToInt32(this->txtArticleID->Text);
			this->oSvc->ModifierStock(ArticleID, this->txtNom->Text, Quantite, Seuil, this->txtTVA->Text, this->txtCommandeID->Text);

		}
}

	private: System::Void btnAnnuler_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->txtNom->Text = L"";
		this->txtQuantite->Text = L"";
		this->txtSeuil->Text = L"";
		this->txtTVA->Text = L"";
		this->txtCommandeID->Text = L"";
	}
	};
}
