#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::SelectPersonnel(void)
{
	return "SELECT * FROM [BDD_Projet_POO].[dbo].[Personnel]";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertPersonnel(void)
{
	return "INSERT INTO Personnel VALUES('" + this->nom + "','" + this->prenom + "','" + this->embauche + "','" + this->adresse + "','" + this->numadresse + "','" + this->codepostal + "','" + this->roleID + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::DeletePersonnel(int clientID)
{
	return "DELETE FROM [BDD_Projet_POO].[dbo].[Personnel] WHERE [Personnel_Id] = " + clientID + ";";
}
//System::String^ NS_Comp_Mappage::CLmapPersonnel::Update(int clientID, System::String^ nouveauNom, System::String^ nouveauPrenom)
//{
//	return "UPDATE [prosit6].[dbo].[Clients] SET [nom] = '" + nouveauNom + "', [prenom] = '" + nouveauPrenom + "' WHERE [id_clients] = '" + clientID + "';";
//}
//
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setEmbauche(System::String^ embauche)
{
	this->embauche = embauche;
}
void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
void NS_Comp_Mappage::CLmapTB::setNumAdresse(int numadresse)
{
	this->numadresse = numadresse;
}
void NS_Comp_Mappage::CLmapTB::setCodePostal(int codepostal)
{
	this->codepostal = codepostal;
}
void NS_Comp_Mappage::CLmapTB::setRoleID(int roleID)
{
	this->roleID = roleID;
}
//
//int NS_Comp_Mappage::CLmapPersonnel::getId(void) { return this->Id; }
//System::String^ NS_Comp_Mappage::CLmapPersonnel::getNom(void) { return this->nom; }
//System::String^ NS_Comp_Mappage::CLmapPersonnel::getPrenom(void) { return this->prenom; }
