#include "PersonnelCreer.h"
#include "PersonnelSupprimer.h"
#include "PersonnelModifier.h"
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
	/// Description résumée de MyFormPersonnel
	/// </summary>
	public ref class MyFormPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormPersonnel(void)
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
		~MyFormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvPersonnel;
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ btnCreer;
	private: System::Windows::Forms::Button^ btnSupprimer;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Button^ btnAfficher;
	private: System::Windows::Forms::Panel^ pnlMode;


		private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Windows::Forms::Form^ formulaireActuel;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormPersonnel::typeid));
			this->dgvPersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->btnCreer = (gcnew System::Windows::Forms::Button());
			this->btnSupprimer = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->btnAfficher = (gcnew System::Windows::Forms::Button());
			this->pnlMode = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonnel))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvPersonnel
			// 
			this->dgvPersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvPersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPersonnel->Location = System::Drawing::Point(686, 12);
			this->dgvPersonnel->Name = L"dgvPersonnel";
			this->dgvPersonnel->RowHeadersWidth = 82;
			this->dgvPersonnel->RowTemplate->Height = 33;
			this->dgvPersonnel->Size = System::Drawing::Size(750, 321);
			this->dgvPersonnel->TabIndex = 4;
			// 
			// btnCreer
			// 
			this->btnCreer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnCreer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btnCreer->FlatAppearance->BorderSize = 0;
			this->btnCreer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreer->ForeColor = System::Drawing::Color::White;
			this->btnCreer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCreer.Image")));
			this->btnCreer->Location = System::Drawing::Point(686, 530);
			this->btnCreer->Name = L"btnCreer";
			this->btnCreer->Size = System::Drawing::Size(223, 116);
			this->btnCreer->TabIndex = 5;
			this->btnCreer->Text = L"Créer";
			this->btnCreer->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnCreer->UseVisualStyleBackColor = false;
			this->btnCreer->Click += gcnew System::EventHandler(this, &MyFormPersonnel::btnCreer_Click);
			// 
			// btnSupprimer
			// 
			this->btnSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSupprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btnSupprimer->FlatAppearance->BorderSize = 0;
			this->btnSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupprimer->ForeColor = System::Drawing::Color::White;
			this->btnSupprimer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSupprimer.Image")));
			this->btnSupprimer->Location = System::Drawing::Point(950, 530);
			this->btnSupprimer->Name = L"btnSupprimer";
			this->btnSupprimer->Size = System::Drawing::Size(223, 116);
			this->btnSupprimer->TabIndex = 6;
			this->btnSupprimer->Text = L"Supprimer";
			this->btnSupprimer->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnSupprimer->UseVisualStyleBackColor = false;
			this->btnSupprimer->Click += gcnew System::EventHandler(this, &MyFormPersonnel::btnSupprimer_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnModifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btnModifier->FlatAppearance->BorderSize = 0;
			this->btnModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModifier->ForeColor = System::Drawing::Color::White;
			this->btnModifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnModifier.Image")));
			this->btnModifier->Location = System::Drawing::Point(1213, 530);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(223, 116);
			this->btnModifier->TabIndex = 7;
			this->btnModifier->Text = L"Modifier";
			this->btnModifier->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnModifier->UseVisualStyleBackColor = false;
			this->btnModifier->Click += gcnew System::EventHandler(this, &MyFormPersonnel::btnModifier_Click);
			// 
			// btnAfficher
			// 
			this->btnAfficher->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAfficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btnAfficher->FlatAppearance->BorderSize = 0;
			this->btnAfficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAfficher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAfficher->ForeColor = System::Drawing::Color::White;
			this->btnAfficher->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAfficher.Image")));
			this->btnAfficher->Location = System::Drawing::Point(686, 372);
			this->btnAfficher->Name = L"btnAfficher";
			this->btnAfficher->Size = System::Drawing::Size(750, 116);
			this->btnAfficher->TabIndex = 8;
			this->btnAfficher->Text = L"Afficher";
			this->btnAfficher->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnAfficher->UseVisualStyleBackColor = false;
			this->btnAfficher->Click += gcnew System::EventHandler(this, &MyFormPersonnel::btnAfficher_Click);
			// 
			// pnlMode
			// 
			this->pnlMode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pnlMode->Location = System::Drawing::Point(12, 12);
			this->pnlMode->Name = L"pnlMode";
			this->pnlMode->Size = System::Drawing::Size(647, 634);
			this->pnlMode->TabIndex = 9;
			// 
			// MyFormPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1448, 658);
			this->ControlBox = false;
			this->Controls->Add(this->btnAfficher);
			this->Controls->Add(this->btnModifier);
			this->Controls->Add(this->btnSupprimer);
			this->Controls->Add(this->btnCreer);
			this->Controls->Add(this->dgvPersonnel);
			this->Controls->Add(this->pnlMode);
			this->Name = L"MyFormPersonnel";
			this->Text = L"MyFormPersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormPersonnel::MyFormPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPersonnel))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void OuvrirFormulaire(System::Windows::Forms::Form^ formulaire) {
			if (formulaireActuel != nullptr) {
				formulaireActuel->Close();
			}
			formulaire->TopLevel = false;
			formulaire->Parent = pnlMode;
			pnlMode->Controls->Add(formulaire);
			formulaire->Dock = System::Windows::Forms::DockStyle::Fill;
			formulaire->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			formulaire->Show();
			formulaireActuel = formulaire;
		}
private: System::Void btnCreer_Click(System::Object^ sender, System::EventArgs^ e) {
	OuvrirFormulaire(gcnew PersonnelCreer());
}
private: System::Void btnSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	OuvrirFormulaire(gcnew PersonnelSupprimer());
}
private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e) {
	OuvrirFormulaire(gcnew PersonnelModifier());
}
private: System::Void MyFormPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	OuvrirFormulaire(gcnew PersonnelCreer());
	this->oSvc = gcnew NS_Comp_Svc::CLservices();
}
private: System::Void btnAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgvPersonnel->Refresh();
	this->oDs = this->oSvc->SelectionnerPersonnel("Rsl");
	this->dgvPersonnel->DataSource = this->oDs;
	this->dgvPersonnel->DataMember = "Rsl";
}
};
}
