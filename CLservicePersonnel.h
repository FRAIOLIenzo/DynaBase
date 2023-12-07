#pragma once
#include "CLmapPersonnel.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapPersonnel^ oMappPersonnel;
	public:
		CLservices(void);
		System::Data::DataSet^ SelectionnerPersonnel(System::String^);
		//void AjouterPersonnel(System::String^, System::String^);
		//void ModifierPersonnel(int, System::String^, System::String^);
		//void SupprimerPersonnel(int);	
	};
}
