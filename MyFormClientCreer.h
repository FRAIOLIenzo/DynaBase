#include "CLserviceClient.h"
#pragma once

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormClientCreer
	/// </summary>
	public ref class MyFormClientCreer : public System::Windows::Forms::Form
	{
	public:
		MyFormClientCreer(void)
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
		~MyFormClientCreer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbNom;
	private: System::Windows::Forms::TextBox^ txtNom;

	private: System::Windows::Forms::TextBox^ txtPrenom;
	private: System::Windows::Forms::Label^ lbPrenom;
	private: System::Windows::Forms::TextBox^ txtDateNaissance;

	private: System::Windows::Forms::Label^ lbAdresse;
	private: System::Windows::Forms::TextBox^ txtDatePremierAchat;

	private: System::Windows::Forms::Label^ lbDatePremierAchat;




	private: System::Windows::Forms::Label^ lbCreer;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnAnnuler;








	private: NS_Comp_Svc::CLservicesClient^ oSvc;
	private: System::Windows::Forms::Label^ lbLivraison;
	private: System::Windows::Forms::TextBox^ txtCodePostalLivraison;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNumAdresseLivraison;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtAdresseLivraison;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lbFacturation;
	private: System::Windows::Forms::TextBox^ txtCodePostalFacturation;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtNumAdresseFacturation;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtAdresseFacturation;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtPersonnelID;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNumeroServiceClient;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtAdresseSociete;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtNomSociete;

	private: System::Windows::Forms::Label^ label7;
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
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->lbPrenom = (gcnew System::Windows::Forms::Label());
			this->txtDateNaissance = (gcnew System::Windows::Forms::TextBox());
			this->lbAdresse = (gcnew System::Windows::Forms::Label());
			this->txtDatePremierAchat = (gcnew System::Windows::Forms::TextBox());
			this->lbDatePremierAchat = (gcnew System::Windows::Forms::Label());
			this->lbCreer = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
			this->lbLivraison = (gcnew System::Windows::Forms::Label());
			this->txtCodePostalLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNumAdresseLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtAdresseLivraison = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbFacturation = (gcnew System::Windows::Forms::Label());
			this->txtCodePostalFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtNumAdresseFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtAdresseFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPersonnelID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNumeroServiceClient = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtAdresseSociete = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtNomSociete = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->lbNom->Size = System::Drawing::Size(65, 29);
			this->lbNom->TabIndex = 0;
			this->lbNom->Text = L"Nom";
			// 
			// txtNom
			// 
			this->txtNom->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtNom->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtNom->Location = System::Drawing::Point(0, 77);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(1394, 31);
			this->txtNom->TabIndex = 1;
			// 
			// txtPrenom
			// 
			this->txtPrenom->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtPrenom->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtPrenom->Location = System::Drawing::Point(0, 137);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(1394, 31);
			this->txtPrenom->TabIndex = 3;
			// 
			// lbPrenom
			// 
			this->lbPrenom->AutoSize = true;
			this->lbPrenom->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbPrenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrenom->Location = System::Drawing::Point(0, 108);
			this->lbPrenom->Name = L"lbPrenom";
			this->lbPrenom->Size = System::Drawing::Size(98, 29);
			this->lbPrenom->TabIndex = 2;
			this->lbPrenom->Text = L"Prenom";
			// 
			// txtDateNaissance
			// 
			this->txtDateNaissance->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtDateNaissance->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtDateNaissance->Location = System::Drawing::Point(0, 197);
			this->txtDateNaissance->Name = L"txtDateNaissance";
			this->txtDateNaissance->Size = System::Drawing::Size(1394, 31);
			this->txtDateNaissance->TabIndex = 5;
			// 
			// lbAdresse
			// 
			this->lbAdresse->AutoSize = true;
			this->lbAdresse->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAdresse->Location = System::Drawing::Point(0, 168);
			this->lbAdresse->Name = L"lbAdresse";
			this->lbAdresse->Size = System::Drawing::Size(211, 29);
			this->lbAdresse->TabIndex = 4;
			this->lbAdresse->Text = L"Date de naissance";
			// 
			// txtDatePremierAchat
			// 
			this->txtDatePremierAchat->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtDatePremierAchat->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtDatePremierAchat->Location = System::Drawing::Point(0, 257);
			this->txtDatePremierAchat->Name = L"txtDatePremierAchat";
			this->txtDatePremierAchat->Size = System::Drawing::Size(1394, 31);
			this->txtDatePremierAchat->TabIndex = 7;
			// 
			// lbDatePremierAchat
			// 
			this->lbDatePremierAchat->AutoSize = true;
			this->lbDatePremierAchat->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbDatePremierAchat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDatePremierAchat->Location = System::Drawing::Point(0, 228);
			this->lbDatePremierAchat->Name = L"lbDatePremierAchat";
			this->lbDatePremierAchat->Size = System::Drawing::Size(249, 29);
			this->lbDatePremierAchat->TabIndex = 8;
			this->lbDatePremierAchat->Text = L"Date du premier achat";
			// 
			// lbCreer
			// 
			this->lbCreer->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbCreer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCreer->Location = System::Drawing::Point(0, 0);
			this->lbCreer->Name = L"lbCreer";
			this->lbCreer->Size = System::Drawing::Size(1394, 48);
			this->lbCreer->TabIndex = 12;
			this->lbCreer->Text = L"Créer";
			this->lbCreer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 1065);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1394, 100);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// btnOK
			// 
			this->btnOK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnOK->Location = System::Drawing::Point(3, 3);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(691, 94);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyFormClientCreer::btnOK_Click_1);
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnAnnuler->Location = System::Drawing::Point(700, 3);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(691, 94);
			this->btnAnnuler->TabIndex = 1;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = true;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &MyFormClientCreer::btnAnnuler_Click_1);
			// 
			// lbLivraison
			// 
			this->lbLivraison->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbLivraison->Location = System::Drawing::Point(0, 348);
			this->lbLivraison->Name = L"lbLivraison";
			this->lbLivraison->Size = System::Drawing::Size(1394, 48);
			this->lbLivraison->TabIndex = 14;
			this->lbLivraison->Text = L"Adresse de livraison ";
			this->lbLivraison->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtCodePostalLivraison
			// 
			this->txtCodePostalLivraison->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtCodePostalLivraison->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtCodePostalLivraison->Location = System::Drawing::Point(0, 545);
			this->txtCodePostalLivraison->Name = L"txtCodePostalLivraison";
			this->txtCodePostalLivraison->Size = System::Drawing::Size(1394, 31);
			this->txtCodePostalLivraison->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 516);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 29);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Code postal";
			// 
			// txtNumAdresseLivraison
			// 
			this->txtNumAdresseLivraison->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtNumAdresseLivraison->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtNumAdresseLivraison->Location = System::Drawing::Point(0, 485);
			this->txtNumAdresseLivraison->Name = L"txtNumAdresseLivraison";
			this->txtNumAdresseLivraison->Size = System::Drawing::Size(1394, 31);
			this->txtNumAdresseLivraison->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 456);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 29);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Numéro d\'adresse";
			// 
			// txtAdresseLivraison
			// 
			this->txtAdresseLivraison->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtAdresseLivraison->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtAdresseLivraison->Location = System::Drawing::Point(0, 425);
			this->txtAdresseLivraison->Name = L"txtAdresseLivraison";
			this->txtAdresseLivraison->Size = System::Drawing::Size(1394, 31);
			this->txtAdresseLivraison->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Top;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(0, 396);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 29);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Adresse";
			// 
			// lbFacturation
			// 
			this->lbFacturation->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbFacturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFacturation->Location = System::Drawing::Point(0, 576);
			this->lbFacturation->Name = L"lbFacturation";
			this->lbFacturation->Size = System::Drawing::Size(1394, 48);
			this->lbFacturation->TabIndex = 23;
			this->lbFacturation->Text = L"Adresse de facturation";
			this->lbFacturation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtCodePostalFacturation
			// 
			this->txtCodePostalFacturation->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtCodePostalFacturation->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtCodePostalFacturation->Location = System::Drawing::Point(0, 773);
			this->txtCodePostalFacturation->Name = L"txtCodePostalFacturation";
			this->txtCodePostalFacturation->Size = System::Drawing::Size(1394, 31);
			this->txtCodePostalFacturation->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Top;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(0, 744);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 29);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Code postal";
			// 
			// txtNumAdresseFacturation
			// 
			this->txtNumAdresseFacturation->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtNumAdresseFacturation->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtNumAdresseFacturation->Location = System::Drawing::Point(0, 713);
			this->txtNumAdresseFacturation->Name = L"txtNumAdresseFacturation";
			this->txtNumAdresseFacturation->Size = System::Drawing::Size(1394, 31);
			this->txtNumAdresseFacturation->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Top;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(0, 684);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(211, 29);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Numéro d\'adresse";
			// 
			// txtAdresseFacturation
			// 
			this->txtAdresseFacturation->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtAdresseFacturation->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtAdresseFacturation->Location = System::Drawing::Point(0, 653);
			this->txtAdresseFacturation->Name = L"txtAdresseFacturation";
			this->txtAdresseFacturation->Size = System::Drawing::Size(1394, 31);
			this->txtAdresseFacturation->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Top;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(0, 624);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 29);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Adresse";
			// 
			// txtPersonnelID
			// 
			this->txtPersonnelID->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtPersonnelID->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtPersonnelID->Location = System::Drawing::Point(0, 317);
			this->txtPersonnelID->Name = L"txtPersonnelID";
			this->txtPersonnelID->Size = System::Drawing::Size(1394, 31);
			this->txtPersonnelID->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 288);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Personnel ID";
			// 
			// txtNumeroServiceClient
			// 
			this->txtNumeroServiceClient->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtNumeroServiceClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtNumeroServiceClient->Location = System::Drawing::Point(0, 1001);
			this->txtNumeroServiceClient->Name = L"txtNumeroServiceClient";
			this->txtNumeroServiceClient->Size = System::Drawing::Size(1394, 31);
			this->txtNumeroServiceClient->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 972);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(252, 29);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Numéro service client ";
			// 
			// txtAdresseSociete
			// 
			this->txtAdresseSociete->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtAdresseSociete->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtAdresseSociete->Location = System::Drawing::Point(0, 941);
			this->txtAdresseSociete->Name = L"txtAdresseSociete";
			this->txtAdresseSociete->Size = System::Drawing::Size(1394, 31);
			this->txtAdresseSociete->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(0, 912);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 29);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Adresse";
			// 
			// txtNomSociete
			// 
			this->txtNomSociete->BackColor = System::Drawing::SystemColors::MenuBar;
			this->txtNomSociete->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtNomSociete->Location = System::Drawing::Point(0, 881);
			this->txtNomSociete->Name = L"txtNomSociete";
			this->txtNomSociete->Size = System::Drawing::Size(1394, 31);
			this->txtNomSociete->TabIndex = 24;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Top;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(0, 852);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 29);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Nom";
			// 
			// label11
			// 
			this->label11->Dock = System::Windows::Forms::DockStyle::Top;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(0, 804);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(1394, 48);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Société";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyFormClientCreer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1394, 1165);
			this->ControlBox = false;
			this->Controls->Add(this->txtNumeroServiceClient);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtAdresseSociete);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtNomSociete);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtCodePostalFacturation);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtNumAdresseFacturation);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtAdresseFacturation);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lbFacturation);
			this->Controls->Add(this->txtCodePostalLivraison);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtNumAdresseLivraison);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtAdresseLivraison);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbLivraison);
			this->Controls->Add(this->txtPersonnelID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->txtDatePremierAchat);
			this->Controls->Add(this->lbDatePremierAchat);
			this->Controls->Add(this->txtDateNaissance);
			this->Controls->Add(this->lbAdresse);
			this->Controls->Add(this->txtPrenom);
			this->Controls->Add(this->lbPrenom);
			this->Controls->Add(this->txtNom);
			this->Controls->Add(this->lbNom);
			this->Controls->Add(this->lbCreer);
			this->Name = L"MyFormClientCreer";
			this->Text = L"MyFormClientCreer";
			this->Load += gcnew System::EventHandler(this, &MyFormClientCreer::MyFormClientCreer_Load_1);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyFormClientCreer_Load_1(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc = gcnew NS_Comp_Svc::CLservicesClient();
}
private: System::Void btnOK_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int NumAdresseLivraison = System::Convert::ToInt32(this->txtNumAdresseLivraison->Text);
	int CodePostalLivraison = System::Convert::ToInt32(this->txtCodePostalLivraison->Text);
	int NumAdresseFacturation = System::Convert::ToInt32(this->txtNumAdresseFacturation->Text);
	int CodePostalFacturation = System::Convert::ToInt32(this->txtCodePostalFacturation->Text);
	int PersonnelID = System::Convert::ToInt32(this->txtPersonnelID->Text);
	int NumServiceClient = System::Convert::ToInt32(this->txtNumeroServiceClient->Text);
	this->oSvc->AjouterClient(this->txtNom->Text, this->txtPrenom->Text, this->txtDateNaissance->Text, this->txtDatePremierAchat->Text, this->txtAdresseLivraison->Text, this->txtAdresseFacturation->Text, this->txtNomSociete->Text, this->txtAdresseSociete->Text, NumServiceClient, NumAdresseLivraison, NumAdresseFacturation, CodePostalLivraison, CodePostalFacturation, PersonnelID);
}
private: System::Void btnAnnuler_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->txtNom->Text = L"";
	this->txtPrenom->Text = L"";
	this->txtDateNaissance->Text = L"";
	this->txtDatePremierAchat->Text = L"";
	this->txtAdresseLivraison->Text = L"";
	this->txtNumAdresseLivraison->Text = L"";
	this->txtCodePostalLivraison->Text = L"";
	this->txtAdresseFacturation->Text = L"";
	this->txtNumAdresseFacturation->Text = L"";
	this->txtCodePostalFacturation->Text = L"";
	this->txtNomSociete->Text = L"";
	this->txtAdresseSociete->Text = L"";
	this->txtNumeroServiceClient->Text = L"";
	this->txtPersonnelID->Text = L"";

}
};
}
