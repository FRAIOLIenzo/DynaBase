#include "CLservicePersonnel.h"

NS_Comp_Svc::CLservicesPersonnel::CLservicesPersonnel(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappPersonnel = gcnew NS_Comp_Mappage::CLmapPersonnel();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesPersonnel::SelectionnerPersonnel(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappPersonnel->SelectPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservicesPersonnel::AjouterPersonnel(System::String^ nom, System::String^ prenom, System::String^ embauche, System::String^ adresse, int numadresse, int codepostale, int roleID)
{
	System::String^ sql;
	this->oMappPersonnel->setNom(nom);
	this->oMappPersonnel->setPrenom(prenom);
	this->oMappPersonnel->setEmbauche(embauche);
	this->oMappPersonnel->setAdresse(adresse);
	this->oMappPersonnel->setNumAdresse(numadresse);
	this->oMappPersonnel->setCodePostal(codepostale);
	this->oMappPersonnel->setRoleID(roleID);
	sql = this->oMappPersonnel->InsertPersonnel();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservicesPersonnel::SupprimerPersonnel(int clientID)
{
	System::String^ sql;
	sql = this->oMappPersonnel->DeletePersonnel(clientID);
	this->oCad->actionRows(sql);
};

void NS_Comp_Svc::CLservicesPersonnel::ModifierPersonnel(int ID, System::String^ nom, System::String^ prenom, System::String^ dateembauche, System::String^ adresse, int numadresse, int codepostal, int roleID)
{
	System::String^ sql;
	sql = this->oMappPersonnel->UpdatePersonnel(ID, nom, prenom, dateembauche, adresse, numadresse, codepostal, roleID);
	this->oCad->actionRows(sql);
};

