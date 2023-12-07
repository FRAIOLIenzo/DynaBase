#include "CLservice.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::SelectionnerPersonnel(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappTB->SelectPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::AjouterPersonnel(System::String^ nom, System::String^ prenom, System::String^ embauche, System::String^ adresse, int numadresse, int codepostale, int roleID)
{
	System::String^ sql;
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setEmbauche(embauche);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setNumAdresse(numadresse);
	this->oMappTB->setCodePostal(codepostale);
	this->oMappTB->setRoleID(roleID);
	sql = this->oMappTB->InsertPersonnel();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::SupprimerPersonnel(int clientID)
{
	System::String^ sqlDelete;
	sqlDelete = this->oMappTB->DeletePersonnel(clientID);
	this->oCad->actionRows(sqlDelete);
};

void NS_Comp_Svc::CLservices::ModifierPersonnel(int ID, System::String^ nom, System::String^ prenom, System::String^ dateembauche, System::String^ adresse, int numadresse, int codepostal, int roleID)
{
	System::String^ sqlUpdate;

	sqlUpdate = this->oMappTB->UpdatePersonnel(ID, nom, prenom, dateembauche, adresse, numadresse, codepostal, roleID);
	this->oCad->actionRows(sqlUpdate);
};

