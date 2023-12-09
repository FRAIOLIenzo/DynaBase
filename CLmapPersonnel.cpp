#include "CLmapPersonnel.h"

System::String^ NS_Comp_Mappage::CLmapPersonnel::SelectPersonnel(void)
{
	return "SELECT * FROM [BDD_Projet_POO].[dbo].[Personnel]";
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::InsertPersonnel(void)
{
	return "INSERT INTO Personnel VALUES('" + this->nom + "','" + this->prenom + "','" + this->embauche + "','" + this->adresse + "','" + this->numadresse + "','" + this->codepostal + "','" + this->roleID + "');";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::DeletePersonnel(int clientID)
{
	return "DELETE FROM [BDD_Projet_POO].[dbo].[Personnel] WHERE [Personnel_Id] = " + clientID + ";";
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::UpdatePersonnel(int ID, System::String^ nom, System::String^ prenom, System::String^ dateembauche, System::String^ adresse, int numadresse, int codepostal, int roleID)
{
	return "UPDATE [BDD_Projet_POO].[dbo].[Personnel] SET [Personnel_Nom] = '" + nom + "', [Personnel_Prenom] = '" + prenom + "', [Personnel_Embauche] = '" + dateembauche + "', [Personnel_Adresse] = '" + adresse + "', [Personnel_Num_Adresse] = '" + numadresse + "', [Personnel_Code_Postal] = '" + codepostal + "', [Roles_Id] = '" + roleID + "' WHERE [Personnel_Id] = '" + ID + "';";
}

void NS_Comp_Mappage::CLmapPersonnel::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapPersonnel::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapPersonnel::setEmbauche(System::String^ embauche)
{
	this->embauche = embauche;
}
void NS_Comp_Mappage::CLmapPersonnel::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
void NS_Comp_Mappage::CLmapPersonnel::setNumAdresse(int numadresse)
{
	this->numadresse = numadresse;
}
void NS_Comp_Mappage::CLmapPersonnel::setCodePostal(int codepostal)
{
	this->codepostal = codepostal;
}
void NS_Comp_Mappage::CLmapPersonnel::setRoleID(int roleID)
{
	this->roleID = roleID;
}
//
//int NS_Comp_Mappage::CLmapPersonnel::getId(void) { return this->Id; }
//System::String^ NS_Comp_Mappage::CLmapPersonnel::getNom(void) { return this->nom; }
//System::String^ NS_Comp_Mappage::CLmapPersonnel::getPrenom(void) { return this->prenom; }

//System::String^ NS_Comp_Mappage::CLmapPersonnel::ShowPersonnel(int clientID)
//{
//	return "SELECT * FROM [BDD_Projet_POO].[dbo].[Personnel] WHERE [Personnel_Id] = " + clientID + ";";
//}