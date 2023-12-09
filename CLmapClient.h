#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapClient
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ datenaissance;
		System::String^ datepremierachat;
		System::String^ adresselivraison;
		System::String^ adressefacturation;
		System::String^ nomsociete;
		System::String^ adressesociete;
		int numadresselivraison;
		int numadressefacturation;
		int codepostallivraison;
		int codepostalfacturation;
		int numserviceclient;
		int IDpersonnel;

	public:
		System::String^ SelectClient(void);
		System::String^ DeleteClient(int);
		System::String^ InsertClient(void);

		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDateNaissance(System::String^);
		void setDatePremierAchat(System::String^);
		void setAdresseLivraison(System::String^);
		void setAdresseFacturation(System::String^);
		void setNomSociete(System::String^);
		void setAdresseSociete(System::String^);
		void setNumServiceClient(int);
		void setNumAdresseLivraison(int);
		void setNumAdresseFacturation(int);
		void setCodePostalLivraison(int);
		void setCodePostalFacturation(int);
		void setIDpersonnel(int);
	};
}

