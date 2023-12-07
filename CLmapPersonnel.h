#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapPersonnel
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;

	public:
		System::String^ SelectPersonnel(void);
		//System::String^ Insert(void);
		//System::String^ Delete(int);
		//System::String^ Update(int, System::String^, System::String^);

		//void setNom(System::String^);
		//void setPrenom(System::String^);

		//int getId(void);
		//System::String^ getNom(void);
		//System::String^ getPrenom(void);
	};
}

