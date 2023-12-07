#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT * FROM [BDD_Projet_POO].[dbo].[Personnel]";
}

//System::String^ NS_Comp_Mappage::CLmapPersonnel::Insert(void)
//{
//	return "INSERT INTO Clients VALUES('" + this->nom + "','" + this->prenom + "');";
//}
//System::String^ NS_Comp_Mappage::CLmapPersonnel::Delete(int clientID)
//{
//	return "DELETE FROM [prosit6].[dbo].[Clients] WHERE [id_clients] = " + clientID + ";";
//}
//System::String^ NS_Comp_Mappage::CLmapPersonnel::Update(int clientID, System::String^ nouveauNom, System::String^ nouveauPrenom)
//{
//	return "UPDATE [prosit6].[dbo].[Clients] SET [nom] = '" + nouveauNom + "', [prenom] = '" + nouveauPrenom + "' WHERE [id_clients] = '" + clientID + "';";
//}
//
//void NS_Comp_Mappage::CLmapPersonnel::setNom(System::String^ nom)
//{
//	this->nom = nom;
//}
//void NS_Comp_Mappage::CLmapPersonnel::setPrenom(System::String^ prenom)
//{
//	this->prenom = prenom;
//}
//
//int NS_Comp_Mappage::CLmapPersonnel::getId(void) { return this->Id; }
//System::String^ NS_Comp_Mappage::CLmapPersonnel::getNom(void) { return this->nom; }
//System::String^ NS_Comp_Mappage::CLmapPersonnel::getPrenom(void) { return this->prenom; }
