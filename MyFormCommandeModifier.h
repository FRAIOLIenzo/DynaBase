#include "CLserviceCommande.h"
#pragma once

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCommandeModifier
	/// </summary>
	public ref class MyFormCommandeModifier : public System::Windows::Forms::Form
	{
	public:
		MyFormCommandeModifier(void)
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
		~MyFormCommandeModifier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbNom;
	private: System::Windows::Forms::TextBox^ txtCommandeID;
	private: System::Windows::Forms::TextBox^ txtDatePrevision;




	private: System::Windows::Forms::Label^ lbPrenom;
	private: System::Windows::Forms::TextBox^ txtDateEmission;


	private: System::Windows::Forms::Label^ lbAdresse;
	private: System::Windows::Forms::TextBox^ txtDateReception;


	private: System::Windows::Forms::Label^ lbDatePremierAchat;




	private: System::Windows::Forms::Label^ lbModifier;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnAnnuler;








	private: NS_Comp_Svc::CLservicesCommande^ oSvc;




















	private: System::Windows::Forms::TextBox^ txtTotalArticle;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPersonnelID;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtMontantHT;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtMontantTVA;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtMontantTTC;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtDateEmissionFacture;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtSocieteID;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtDatePaiement;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtMoyenPaiement;

	private: System::Windows::Forms::Label^ label11;










































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
			this->txtCommandeID = (gcnew System::Windows::Forms::TextBox());
			this->txtDatePrevision = (gcnew System::Windows::Forms::TextBox());
			this->lbPrenom = (gcnew System::Windows::Forms::Label());
			this->txtDateEmission = (gcnew System::Windows::Forms::TextBox());
			this->lbAdresse = (gcnew System::Windows::Forms::Label());
			this->txtDateReception = (gcnew System::Windows::Forms::TextBox());
			this->lbDatePremierAchat = (gcnew System::Windows::Forms::Label());
			this->lbModifier = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->txtTotalArticle = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPersonnelID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtMontantHT = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtMontantTVA = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtMontantTTC = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtDateEmissionFacture = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtSocieteID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtDatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtMoyenPaiement = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbNom
			// 
			this->lbNom->AutoSize = true;
			this->lbNom->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNom->Location = System::Drawing::Point(0, 48);
			this->lbNom->Name = L"lbNom";
			this->lbNom->Size = System::Drawing::Size(167, 29);
			this->lbNom->TabIndex = 0;
			this->lbNom->Text = L"Commande ID";
			// 
			// txtCommandeID
			// 
			this->txtCommandeID->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtCommandeID->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtCommandeID->Location = System::Drawing::Point(0, 77);
			this->txtCommandeID->Name = L"txtCommandeID";
			this->txtCommandeID->Size = System::Drawing::Size(1338, 31);
			this->txtCommandeID->TabIndex = 1;
			// 
			// txtDatePrevision
			// 
			this->txtDatePrevision->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtDatePrevision->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtDatePrevision->Location = System::Drawing::Point(0, 137);
			this->txtDatePrevision->Name = L"txtDatePrevision";
			this->txtDatePrevision->Size = System::Drawing::Size(1338, 31);
			this->txtDatePrevision->TabIndex = 3;
			// 
			// lbPrenom
			// 
			this->lbPrenom->AutoSize = true;
			this->lbPrenom->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrenom->Location = System::Drawing::Point(0, 108);
			this->lbPrenom->Name = L"lbPrenom";
			this->lbPrenom->Size = System::Drawing::Size(376, 29);
			this->lbPrenom->TabIndex = 2;
			this->lbPrenom->Text = L"Date de prévision pour la livraison";
			// 
			// txtDateEmission
			// 
			this->txtDateEmission->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtDateEmission->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtDateEmission->Location = System::Drawing::Point(0, 197);
			this->txtDateEmission->Name = L"txtDateEmission";
			this->txtDateEmission->Size = System::Drawing::Size(1338, 31);
			this->txtDateEmission->TabIndex = 5;
			// 
			// lbAdresse
			// 
			this->lbAdresse->AutoSize = true;
			this->lbAdresse->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAdresse->Location = System::Drawing::Point(0, 168);
			this->lbAdresse->Name = L"lbAdresse";
			this->lbAdresse->Size = System::Drawing::Size(369, 29);
			this->lbAdresse->TabIndex = 4;
			this->lbAdresse->Text = L"Date d\'émission de la commande";
			// 
			// txtDateReception
			// 
			this->txtDateReception->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtDateReception->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtDateReception->Location = System::Drawing::Point(0, 257);
			this->txtDateReception->Name = L"txtDateReception";
			this->txtDateReception->Size = System::Drawing::Size(1338, 31);
			this->txtDateReception->TabIndex = 7;
			// 
			// lbDatePremierAchat
			// 
			this->lbDatePremierAchat->AutoSize = true;
			this->lbDatePremierAchat->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbDatePremierAchat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDatePremierAchat->Location = System::Drawing::Point(0, 228);
			this->lbDatePremierAchat->Name = L"lbDatePremierAchat";
			this->lbDatePremierAchat->Size = System::Drawing::Size(358, 29);
			this->lbDatePremierAchat->TabIndex = 8;
			this->lbDatePremierAchat->Text = L"Date de reception de la livraison";
			// 
			// lbModifier
			// 
			this->lbModifier->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbModifier->Location = System::Drawing::Point(0, 0);
			this->lbModifier->Name = L"lbModifier";
			this->lbModifier->Size = System::Drawing::Size(1338, 48);
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 1144);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1338, 100);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// btnOK
			// 
			this->btnOK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnOK->Location = System::Drawing::Point(3, 3);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(663, 94);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyFormCommandeModifier::btnOK_Click_1);
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnAnnuler->Location = System::Drawing::Point(672, 3);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(663, 94);
			this->btnAnnuler->TabIndex = 1;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = true;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &MyFormCommandeModifier::btnAnnuler_Click_1);
			// 
			// txtTotalArticle
			// 
			this->txtTotalArticle->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtTotalArticle->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtTotalArticle->Location = System::Drawing::Point(0, 317);
			this->txtTotalArticle->Name = L"txtTotalArticle";
			this->txtTotalArticle->Size = System::Drawing::Size(1338, 31);
			this->txtTotalArticle->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 288);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Total des articles de la commande";
			// 
			// txtPersonnelID
			// 
			this->txtPersonnelID->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtPersonnelID->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtPersonnelID->Location = System::Drawing::Point(0, 377);
			this->txtPersonnelID->Name = L"txtPersonnelID";
			this->txtPersonnelID->Size = System::Drawing::Size(1338, 31);
			this->txtPersonnelID->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 348);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 29);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Personnel ID";
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 408);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1338, 48);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Facture";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtMontantHT
			// 
			this->txtMontantHT->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtMontantHT->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtMontantHT->Location = System::Drawing::Point(0, 485);
			this->txtMontantHT->Name = L"txtMontantHT";
			this->txtMontantHT->Size = System::Drawing::Size(1338, 31);
			this->txtMontantHT->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 456);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 29);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Montant HT";
			// 
			// txtMontantTVA
			// 
			this->txtMontantTVA->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtMontantTVA->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtMontantTVA->Location = System::Drawing::Point(0, 545);
			this->txtMontantTVA->Name = L"txtMontantTVA";
			this->txtMontantTVA->Size = System::Drawing::Size(1338, 31);
			this->txtMontantTVA->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Top;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(0, 516);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 29);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Montant TVA";
			// 
			// txtMontantTTC
			// 
			this->txtMontantTTC->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtMontantTTC->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtMontantTTC->Location = System::Drawing::Point(0, 605);
			this->txtMontantTTC->Name = L"txtMontantTTC";
			this->txtMontantTTC->Size = System::Drawing::Size(1338, 31);
			this->txtMontantTTC->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(0, 576);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 29);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Montant TTC";
			// 
			// txtDateEmissionFacture
			// 
			this->txtDateEmissionFacture->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtDateEmissionFacture->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtDateEmissionFacture->Location = System::Drawing::Point(0, 665);
			this->txtDateEmissionFacture->Name = L"txtDateEmissionFacture";
			this->txtDateEmissionFacture->Size = System::Drawing::Size(1338, 31);
			this->txtDateEmissionFacture->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Top;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(0, 636);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(321, 29);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Date d\'émission de la facture";
			// 
			// txtSocieteID
			// 
			this->txtSocieteID->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtSocieteID->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtSocieteID->Location = System::Drawing::Point(0, 725);
			this->txtSocieteID->Name = L"txtSocieteID";
			this->txtSocieteID->Size = System::Drawing::Size(1338, 31);
			this->txtSocieteID->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Top;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 696);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 29);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Société ID";
			// 
			// label9
			// 
			this->label9->Dock = System::Windows::Forms::DockStyle::Top;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(0, 756);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(1338, 48);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Paiement";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtDatePaiement
			// 
			this->txtDatePaiement->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtDatePaiement->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtDatePaiement->Location = System::Drawing::Point(0, 833);
			this->txtDatePaiement->Name = L"txtDatePaiement";
			this->txtDatePaiement->Size = System::Drawing::Size(1338, 31);
			this->txtDatePaiement->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Top;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(0, 804);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(208, 29);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Date du paiement ";
			// 
			// txtMoyenPaiement
			// 
			this->txtMoyenPaiement->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtMoyenPaiement->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtMoyenPaiement->Location = System::Drawing::Point(0, 893);
			this->txtMoyenPaiement->Name = L"txtMoyenPaiement";
			this->txtMoyenPaiement->Size = System::Drawing::Size(1338, 31);
			this->txtMoyenPaiement->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Top;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(0, 864);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(225, 29);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Moyen de paiement";
			// 
			// MyFormCommandeModifier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1338, 1244);
			this->ControlBox = false;
			this->Controls->Add(this->txtMoyenPaiement);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtDatePaiement);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtSocieteID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtDateEmissionFacture);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtMontantTTC);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtMontantTVA);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtMontantHT);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPersonnelID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtTotalArticle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->txtDateReception);
			this->Controls->Add(this->lbDatePremierAchat);
			this->Controls->Add(this->txtDateEmission);
			this->Controls->Add(this->lbAdresse);
			this->Controls->Add(this->txtDatePrevision);
			this->Controls->Add(this->lbPrenom);
			this->Controls->Add(this->txtCommandeID);
			this->Controls->Add(this->lbNom);
			this->Controls->Add(this->lbModifier);
			this->Name = L"MyFormCommandeModifier";
			this->Text = L"MyFormCommandeModifier";
			this->Load += gcnew System::EventHandler(this, &MyFormCommandeModifier::MyFormCommandeModifier_Load_1);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyFormCommandeModifier_Load_1(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservicesCommande();
	}
	private: System::Void btnOK_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(txtMoyenPaiement->Text) ||
			String::IsNullOrWhiteSpace(txtDatePaiement->Text) ||
			String::IsNullOrWhiteSpace(txtSocieteID->Text) ||
			String::IsNullOrWhiteSpace(txtDateEmissionFacture->Text) ||
			String::IsNullOrWhiteSpace(txtMontantTTC->Text) ||
			String::IsNullOrWhiteSpace(txtMontantTVA->Text) ||
			String::IsNullOrWhiteSpace(txtMontantHT->Text) ||
			String::IsNullOrWhiteSpace(txtPersonnelID->Text) ||
			String::IsNullOrWhiteSpace(txtTotalArticle->Text) ||
			String::IsNullOrWhiteSpace(txtDateReception->Text) ||
			String::IsNullOrWhiteSpace(txtDateEmission->Text) ||
			String::IsNullOrWhiteSpace(txtDatePrevision->Text) ||
			String::IsNullOrWhiteSpace(txtCommandeID->Text))
		{
			MessageBox::Show("Veuillez remplir toutes les informations.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{

			int TotalArticle = System::Convert::ToInt32(this->txtTotalArticle->Text);
			int SocieteID = System::Convert::ToInt32(this->txtSocieteID->Text);
			int PersonnelID = System::Convert::ToInt32(this->txtPersonnelID->Text);
			this->oSvc->ModifierCommande(this->txtCommandeID->Text, this->txtDatePrevision->Text, this->txtDateEmission->Text, this->txtDateReception->Text, this->txtMontantHT->Text, this->txtMontantTTC->Text, this->txtMontantTVA->Text, this->txtDateEmissionFacture->Text, this->txtMoyenPaiement->Text, this->txtDatePaiement->Text, TotalArticle, PersonnelID, SocieteID);

		}
}
	private: System::Void btnAnnuler_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->txtMoyenPaiement->Text = L"";
		this->txtDatePaiement->Text = L"";
		this->txtSocieteID->Text = L"";
		this->txtDateEmissionFacture->Text = L"";
		this->txtMontantTTC->Text = L"";
		this->txtMontantTVA->Text = L"";
		this->txtMontantHT->Text = L"";
		this->txtPersonnelID->Text = L"";
		this->txtTotalArticle->Text = L"";
		this->txtDateReception->Text = L"";
		this->txtDateEmission->Text = L"";
		this->txtDatePrevision->Text = L"";
		this->txtCommandeID->Text = L"";
	}
	};
}
