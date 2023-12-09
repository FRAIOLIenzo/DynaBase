#include "CLservicePersonnel.h"

#pragma once

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormPersonnelAfficher
	/// </summary>
	public ref class MyFormPersonnelAfficher : public System::Windows::Forms::Form
	{
	public:
		MyFormPersonnelAfficher(void)
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
		~MyFormPersonnelAfficher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbID;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::Label^ lbAfficher;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnAnnuler;
	private: NS_Comp_Svc::CLservicesPersonnel^ oSvc;
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
			this->lbAfficher = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnAnnuler = (gcnew System::Windows::Forms::Button());
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
			this->txtID->Size = System::Drawing::Size(621, 31);
			this->txtID->TabIndex = 1;
			// 
			// lbAfficher
			// 
			this->lbAfficher->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbAfficher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAfficher->Location = System::Drawing::Point(0, 0);
			this->lbAfficher->Name = L"lbAfficher";
			this->lbAfficher->Size = System::Drawing::Size(621, 49);
			this->lbAfficher->TabIndex = 12;
			this->lbAfficher->Text = L"Afficher";
			this->lbAfficher->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 463);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(621, 100);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// btnOK
			// 
			this->btnOK->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnOK->Location = System::Drawing::Point(3, 3);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(304, 94);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyFormPersonnelAfficher::btnOK_Click);
			// 
			// btnAnnuler
			// 
			this->btnAnnuler->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnAnnuler->Location = System::Drawing::Point(313, 3);
			this->btnAnnuler->Name = L"btnAnnuler";
			this->btnAnnuler->Size = System::Drawing::Size(305, 94);
			this->btnAnnuler->TabIndex = 1;
			this->btnAnnuler->Text = L"Annuler";
			this->btnAnnuler->UseVisualStyleBackColor = true;
			this->btnAnnuler->Click += gcnew System::EventHandler(this, &MyFormPersonnelAfficher::btnAnnuler_Click);
			// 
			// MyFormPersonnelAfficher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(621, 563);
			this->ControlBox = false;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->lbID);
			this->Controls->Add(this->lbAfficher);
			this->Name = L"MyFormPersonnelAfficher";
			this->Text = L"MyFormPersonnelAfficher";
			this->Load += gcnew System::EventHandler(this, &MyFormPersonnelAfficher::MyFormPersonnelAfficher_Load_1);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtID->Text = L"";
	}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		//int ID = System::Convert::ToInt32(this->txtID->Text);
		//this->oSvc->AfficherPersonnel(ID);;
	}
	private: System::Void MyFormPersonnelAfficher_Load_1(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservicesPersonnel();
	}
	};
}
