#pragma once
#include "CLmapStock.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesStock
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapStock^ oMappStock;
	public:
		CLservicesStock(void);
		System::Data::DataSet^ SelectionnerStock(System::String^);
		void AjouterStock(System::String^, int, int, System::String^, System::String^);
		void SupprimerStock(int);
		void ModifierStock(int, System::String^, int, int, System::String^, System::String^);
	};
}