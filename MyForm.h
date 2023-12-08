#pragma once
#include <Windows.h>
#include <tchar.h>
#include "MyFormPersonnel.h"
#include "MyFormClient.h"
#include "MyFormCommande.h"
#include "MyFormStock.h"
#include "MyFormStatistique.h"
#include "MyFormAccueil.h"
namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlBouton;
	private: System::Windows::Forms::Button^ btnPersonnel;
	private: System::Windows::Forms::Panel^ pnlNom;
	private: System::Windows::Forms::Panel^ pnlData;
	private: System::Windows::Forms::Button^ btnStock;
	private: System::Windows::Forms::Button^ btnCommande;
	private: System::Windows::Forms::Button^ btnClient;
	private: System::Windows::Forms::Button^ btnStatistique;
	private: System::Windows::Forms::Panel^ pnlLogo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbTop;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Form^ formulaireActuel;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pnlBouton = (gcnew System::Windows::Forms::Panel());
			this->btnStatistique = (gcnew System::Windows::Forms::Button());
			this->btnStock = (gcnew System::Windows::Forms::Button());
			this->btnCommande = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->btnPersonnel = (gcnew System::Windows::Forms::Button());
			this->pnlLogo = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlNom = (gcnew System::Windows::Forms::Panel());
			this->lbTop = (gcnew System::Windows::Forms::Label());
			this->pnlData = (gcnew System::Windows::Forms::Panel());
			this->pnlBouton->SuspendLayout();
			this->pnlLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnlNom->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlBouton
			// 
			this->pnlBouton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->pnlBouton->Controls->Add(this->btnStatistique);
			this->pnlBouton->Controls->Add(this->btnStock);
			this->pnlBouton->Controls->Add(this->btnCommande);
			this->pnlBouton->Controls->Add(this->btnClient);
			this->pnlBouton->Controls->Add(this->btnPersonnel);
			this->pnlBouton->Controls->Add(this->pnlLogo);
			this->pnlBouton->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlBouton->Location = System::Drawing::Point(0, 0);
			this->pnlBouton->Name = L"pnlBouton";
			this->pnlBouton->Size = System::Drawing::Size(285, 861);
			this->pnlBouton->TabIndex = 1;
			// 
			// btnStatistique
			// 
			this->btnStatistique->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStatistique->FlatAppearance->BorderSize = 0;
			this->btnStatistique->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStatistique->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStatistique->ForeColor = System::Drawing::Color::White;
			this->btnStatistique->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStatistique.Image")));
			this->btnStatistique->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStatistique->Location = System::Drawing::Point(0, 532);
			this->btnStatistique->Name = L"btnStatistique";
			this->btnStatistique->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->btnStatistique->Size = System::Drawing::Size(285, 100);
			this->btnStatistique->TabIndex = 5;
			this->btnStatistique->Text = L"  Statistique";
			this->btnStatistique->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStatistique->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnStatistique->UseVisualStyleBackColor = false;
			this->btnStatistique->Click += gcnew System::EventHandler(this, &MyForm::btnStatistique_Click);
			// 
			// btnStock
			// 
			this->btnStock->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnStock->FlatAppearance->BorderSize = 0;
			this->btnStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStock->ForeColor = System::Drawing::Color::White;
			this->btnStock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStock.Image")));
			this->btnStock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStock->Location = System::Drawing::Point(0, 432);
			this->btnStock->Name = L"btnStock";
			this->btnStock->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->btnStock->Size = System::Drawing::Size(285, 100);
			this->btnStock->TabIndex = 4;
			this->btnStock->Text = L"  Stock";
			this->btnStock->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStock->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnStock->UseVisualStyleBackColor = true;
			this->btnStock->Click += gcnew System::EventHandler(this, &MyForm::btnStock_Click);
			// 
			// btnCommande
			// 
			this->btnCommande->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCommande->FlatAppearance->BorderSize = 0;
			this->btnCommande->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCommande->ForeColor = System::Drawing::Color::White;
			this->btnCommande->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCommande.Image")));
			this->btnCommande->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCommande->Location = System::Drawing::Point(0, 332);
			this->btnCommande->Name = L"btnCommande";
			this->btnCommande->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->btnCommande->Size = System::Drawing::Size(285, 100);
			this->btnCommande->TabIndex = 3;
			this->btnCommande->Text = L"  Commande";
			this->btnCommande->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCommande->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCommande->UseVisualStyleBackColor = true;
			this->btnCommande->Click += gcnew System::EventHandler(this, &MyForm::btnCommande_Click);
			// 
			// btnClient
			// 
			this->btnClient->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnClient->FlatAppearance->BorderSize = 0;
			this->btnClient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClient->ForeColor = System::Drawing::Color::White;
			this->btnClient->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClient.Image")));
			this->btnClient->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClient->Location = System::Drawing::Point(0, 232);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->btnClient->Size = System::Drawing::Size(285, 100);
			this->btnClient->TabIndex = 2;
			this->btnClient->Text = L"  Client";
			this->btnClient->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnClient->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnClient->UseVisualStyleBackColor = true;
			this->btnClient->Click += gcnew System::EventHandler(this, &MyForm::btnClient_Click);
			// 
			// btnPersonnel
			// 
			this->btnPersonnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPersonnel->FlatAppearance->BorderSize = 0;
			this->btnPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPersonnel->ForeColor = System::Drawing::Color::White;
			this->btnPersonnel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPersonnel.Image")));
			this->btnPersonnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersonnel->Location = System::Drawing::Point(0, 132);
			this->btnPersonnel->Name = L"btnPersonnel";
			this->btnPersonnel->Padding = System::Windows::Forms::Padding(12, 12, 0, 0);
			this->btnPersonnel->Size = System::Drawing::Size(285, 100);
			this->btnPersonnel->TabIndex = 1;
			this->btnPersonnel->Text = L"   Personnel";
			this->btnPersonnel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersonnel->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPersonnel->UseVisualStyleBackColor = true;
			this->btnPersonnel->Click += gcnew System::EventHandler(this, &MyForm::btnPersonnel_Click);
			// 
			// pnlLogo
			// 
			this->pnlLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->pnlLogo->Controls->Add(this->pictureBox1);
			this->pnlLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlLogo->Location = System::Drawing::Point(0, 0);
			this->pnlLogo->Name = L"pnlLogo";
			this->pnlLogo->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->pnlLogo->Size = System::Drawing::Size(285, 132);
			this->pnlLogo->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(273, 132);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pnlNom
			// 
			this->pnlNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->pnlNom->Controls->Add(this->lbTop);
			this->pnlNom->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlNom->Location = System::Drawing::Point(285, 0);
			this->pnlNom->Name = L"pnlNom";
			this->pnlNom->Size = System::Drawing::Size(1474, 132);
			this->pnlNom->TabIndex = 2;
			// 
			// lbTop
			// 
			this->lbTop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lbTop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTop->ForeColor = System::Drawing::Color::White;
			this->lbTop->Location = System::Drawing::Point(0, 0);
			this->lbTop->Name = L"lbTop";
			this->lbTop->Size = System::Drawing::Size(1474, 132);
			this->lbTop->TabIndex = 0;
			this->lbTop->Text = L"label1";
			this->lbTop->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlData
			// 
			this->pnlData->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlData->Location = System::Drawing::Point(285, 132);
			this->pnlData->Name = L"pnlData";
			this->pnlData->Size = System::Drawing::Size(1474, 729);
			this->pnlData->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1759, 861);
			this->Controls->Add(this->pnlData);
			this->Controls->Add(this->pnlNom);
			this->Controls->Add(this->pnlBouton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1785, 932);
			this->Name = L"MyForm";
			this->Text = L"DynaBase";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pnlBouton->ResumeLayout(false);
			this->pnlLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnlNom->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		void OuvrirFormulaire(System::Windows::Forms::Form^ formulaire) {
			if (formulaireActuel != nullptr) {
				formulaireActuel->Close();
			}
			formulaire->TopLevel = false;
			formulaire->Parent = pnlData;
			pnlData->Controls->Add(formulaire);
			formulaire->Dock = System::Windows::Forms::DockStyle::Fill;
			formulaire->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			formulaire->Show();
			formulaireActuel = formulaire;
		}

#pragma endregion
	private: System::Void btnPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btnPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
			static_cast<System::Int32>(static_cast<System::Byte>(52)));
		this->pnlNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
			static_cast<System::Int32>(static_cast<System::Byte>(52)));
		this->btnClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStatistique->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->lbTop->Text = L"Personnel";
		OuvrirFormulaire(gcnew MyFormPersonnel());
	}

	private: System::Void btnClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btnClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
			static_cast<System::Int32>(static_cast<System::Byte>(66)));
		this->pnlNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
			static_cast<System::Int32>(static_cast<System::Byte>(66)));
		this->btnPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStatistique->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->lbTop->Text = L"Client";
		OuvrirFormulaire(gcnew MyFormClient());
	}
	private: System::Void btnCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btnCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
			static_cast<System::Int32>(static_cast<System::Byte>(117)));
		this->pnlNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
			static_cast<System::Int32>(static_cast<System::Byte>(117)));
		this->btnPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStatistique->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->lbTop->Text = L"Commande";
		OuvrirFormulaire(gcnew MyFormCommande());
	}
	private: System::Void btnStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btnStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
			static_cast<System::Int32>(static_cast<System::Byte>(186)));
		this->pnlNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
			static_cast<System::Int32>(static_cast<System::Byte>(186)));
		this->btnPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStatistique->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->lbTop->Text = L"Stock";
		OuvrirFormulaire(gcnew MyFormStock());
	}
	private: System::Void btnStatistique_Click(System::Object^ sender, System::EventArgs^ e) {
		this->btnStatistique->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
			static_cast<System::Int32>(static_cast<System::Byte>(203)));
		this->pnlNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(183)),
			static_cast<System::Int32>(static_cast<System::Byte>(203)));
		this->btnPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->lbTop->Text = L"Statistique";
		OuvrirFormulaire(gcnew MyFormStatistique());
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->pnlNom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
			static_cast<System::Int32>(static_cast<System::Byte>(58)));
		this->btnPersonnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnCommande->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->btnStatistique->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(76)));
		this->lbTop->Text = L"Accueil";
		OuvrirFormulaire(gcnew MyFormAccueil());
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lbTop->Text = L"Accueil";
		this->Size = System::Drawing::Size(1000, 550);
		int x = (Screen::PrimaryScreen->Bounds.Width - this->Width) / 2;
		int y = (Screen::PrimaryScreen->Bounds.Height - this->Height) / 2;
		this->Location = System::Drawing::Point(x, y);
		OuvrirFormulaire(gcnew MyFormAccueil());
	}


	};
}