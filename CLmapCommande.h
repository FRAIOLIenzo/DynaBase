#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapCommande
	{
	private:
		System::String^ sSql;
		System::String^ commandeID;
		System::String^ dateprevision;
		System::String^ dateemission;
		System::String^ datereception;
		int totalarticle;
		int personnelID;
		int factureID;

		System::String^ HT;
		System::String^ TVA;
		System::String^ TTC;
		System::String^ dateemissionfacture;
		int societeID;

		System::String^ moyenpaiement;
		System::String^ executionpaiement;

	public:
		System::String^ SelectCommande(void);
		System::String^ InsertCommande(void);
		System::String^ DeleteCommande(void);
		System::String^ UpdateCommande(void);

		void setCommandeID(System::String^);
		void setDatePrevision(System::String^);
		void setDateEmission(System::String^);
		void setDateReception(System::String^);
		void setTotalArticle(int);
		void setPersonnelID(int);

		void setHT(System::String^);
		void setTVA(System::String^);
		void setTTC(System::String^);
		void setDateEmissionFacture(System::String^);
		void setSocieteID(int);

		void setMoyenPaiement(System::String^);
		void setExecutionPaiement(System::String^);
	};
}

