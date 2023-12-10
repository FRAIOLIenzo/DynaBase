#include "CLserviceCommande.h"

NS_Comp_Svc::CLservicesCommande::CLservicesCommande(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappCommande = gcnew NS_Comp_Mappage::CLmapCommande();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesCommande::SelectionnerCommande(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappCommande->SelectCommande();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservicesCommande::AjouterCommande(System::String^ commandeID, System::String^ dateprevision, System::String^ dateemission, System::String^ datereception, System::String^ HT, System::String^ TTC, System::String^ TVA, System::String^ dateemissionfacture, System::String^ moyenpaiement, System::String^ executionpaiement, int total_article, int personnelID, int societeID)
{
	System::String^ sql;
	this->oMappCommande->setCommandeID(commandeID);
	this->oMappCommande->setDatePrevision(dateprevision);
	this->oMappCommande->setDateEmission(dateemission);
	this->oMappCommande->setDateReception(datereception);
	this->oMappCommande->setTotalArticle(total_article);
	this->oMappCommande->setPersonnelID(personnelID);
	
	this->oMappCommande->setHT(HT);
	this->oMappCommande->setTVA(TVA);
	this->oMappCommande->setTTC(TTC);
	this->oMappCommande->setSocieteID(societeID);
	this->oMappCommande->setDateEmissionFacture(dateemissionfacture);

	this->oMappCommande->setMoyenPaiement(moyenpaiement);
	this->oMappCommande->setExecutionPaiement(executionpaiement);

	sql = this->oMappCommande->InsertCommande();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservicesCommande::SupprimerCommande(System::String^ commandeID)
{
	System::String^ sql;
	sql = this->oMappCommande->DeleteCommande(commandeID);
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservicesCommande::ModifierCommande(System::String^ commandeID, System::String^ dateprevision, System::String^ dateemission, System::String^ datereception, System::String^ HT, System::String^ TTC, System::String^ TVA, System::String^ dateemissionfacture, System::String^ moyenpaiement, System::String^ executionpaiement, int total_article, int personnelID, int societeID)
{
	System::String^ sql;
	this->oMappCommande->setCommandeID(commandeID);
	this->oMappCommande->setDatePrevision(dateprevision);
	this->oMappCommande->setDateEmission(dateemission);
	this->oMappCommande->setDateReception(datereception);
	this->oMappCommande->setTotalArticle(total_article);
	this->oMappCommande->setPersonnelID(personnelID);

	this->oMappCommande->setHT(HT);
	this->oMappCommande->setTVA(TVA);
	this->oMappCommande->setTTC(TTC);
	this->oMappCommande->setSocieteID(societeID);
	this->oMappCommande->setDateEmissionFacture(dateemissionfacture);

	this->oMappCommande->setMoyenPaiement(moyenpaiement);
	this->oMappCommande->setExecutionPaiement(executionpaiement);

	sql = this->oMappCommande->UpdateCommande();
	this->oCad->actionRows(sql);
}