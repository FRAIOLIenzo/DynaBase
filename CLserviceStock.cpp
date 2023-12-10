#include "CLserviceStock.h"

NS_Comp_Svc::CLservicesStock::CLservicesStock(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappStock = gcnew NS_Comp_Mappage::CLmapStock();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesStock::SelectionnerStock(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStock->SelectStock();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservicesStock::AjouterStock(System::String^ nomarticle, int quantitearticle, int seuilreappro, System::String^ tauxtva, System::String^ commandeID)
{
	System::String^ sql;
	this->oMappStock->setNom(nomarticle);
	this->oMappStock->setQuantite(quantitearticle);
	this->oMappStock->setSeuil(seuilreappro);
	this->oMappStock->setTauxTVA(tauxtva);
	this->oMappStock->setCommandeID(commandeID);
	sql = this->oMappStock->InsertStock();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservicesStock::SupprimerStock(int articleID)
{
	System::String^ sql;
	sql = this->oMappStock->DeleteStock(articleID);
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservicesStock::ModifierStock(int articleID, System::String^ nom_article, int quantite_article, int seuil_reappro, System::String^ taux_tva, System::String^ commandeID)
{
	System::String^ sql;
	sql = this->oMappStock->UpdateStock(articleID, nom_article, quantite_article, seuil_reappro, taux_tva, commandeID);
	this->oCad->actionRows(sql);
}