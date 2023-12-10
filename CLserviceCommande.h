#pragma once
#include "CLmapCommande.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesCommande
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapCommande^ oMappCommande;
	public:
		CLservicesCommande(void);
		System::Data::DataSet^ SelectionnerCommande(System::String^);
		void AjouterCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int, int, int);
		void SupprimerCommande(System::String^);
		void ModifierCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int, int, int);
	};
}

