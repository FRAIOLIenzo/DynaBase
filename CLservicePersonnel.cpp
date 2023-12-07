#include "CLservicePersonnel.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappPersonnel = gcnew NS_Comp_Mappage::CLmapPersonnel();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::SelectionnerPersonnel(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappPersonnel->SelectPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}

//void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
//{
//	System::String^ sql;
//
//	this->oMappPersonnel->setNom(nom);
//	this->oMappPersonnel->setPrenom(prenom);
//	sql = this->oMappPersonnel->Insert();
//
//	this->oCad->actionRows(sql);
//}
//
//void NS_Comp_Svc::CLservices::modifierAdresseClient(int clientID, System::String^ nouveauNom, System::String^ nouveauPrenom)
//{
//	System::String^ sqlUpdate;
//
//	sqlUpdate = this->oMappPersonnel->Update(clientID, nouveauNom, nouveauPrenom);
//	this->oCad->actionRows(sqlUpdate);
//};
//
//void NS_Comp_Svc::CLservices::supprimerClient(int clientID)
//{
//	System::String^ sqlDelete;
//
//	sqlDelete = this->oMappPersonnel->Delete(clientID);
//	this->oCad->actionRows(sqlDelete);
//};