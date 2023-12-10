#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapStock
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nomarticle;
		int quantitearticle;
		int seuilreappro;
		System::String^ tauxtva;
		System::String^ commandeID;

	public:
		System::String^ SelectStock(void);
		System::String^ InsertStock(void);
		System::String^ DeleteStock(int);
		System::String^ UpdateStock(int, System::String^, int, int, System::String^, System::String^);

		void setNom(System::String^);
		void setQuantite(int);
		void setSeuil(int);
		void setTauxTVA(System::String^);
		void setCommandeID(System::String^);
	};
}