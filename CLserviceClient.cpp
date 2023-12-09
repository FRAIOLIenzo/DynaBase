#include "CLserviceClient.h"

NS_Comp_Svc::CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicesClient::SelectionnerClient(System::String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappClient->SelectClient();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservicesClient::AjouterClient(System::String^ nom, System::String^ prenom, System::String^ datenaissance, System::String^ datepremierachat, System::String^ adresselivraison, System::String^ adressefacturation, System::String^ nomsociete, System::String^ adressesociete, int numserviceclient, int numadresselivraison, int numadressefacturation, int codepostallivraison, int codepostalfacturation, int IDpersonnel)
{
	System::String^ sql;
	this->oMappClient->setNom(nom);
	this->oMappClient->setPrenom(prenom);
	this->oMappClient->setDateNaissance(datenaissance);
	this->oMappClient->setDatePremierAchat(datepremierachat);
	this->oMappClient->setAdresseLivraison(adresselivraison);
	this->oMappClient->setAdresseFacturation(adressefacturation);
	this->oMappClient->setNomSociete(nomsociete);
	this->oMappClient->setAdresseSociete(adressesociete);
	this->oMappClient->setNumServiceClient(numserviceclient);
	this->oMappClient->setNumAdresseLivraison(numadresselivraison);
	this->oMappClient->setNumAdresseFacturation(numadressefacturation);
	this->oMappClient->setCodePostalLivraison(codepostallivraison);
	this->oMappClient->setCodePostalFacturation(codepostalfacturation);
	this->oMappClient->setIDpersonnel(IDpersonnel);

	sql = this->oMappClient->InsertClient();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservicesClient::SupprimerClient(int clientID)
{
	System::String^ sql;
	sql = this->oMappClient->DeleteClient(clientID);
	this->oCad->actionRows(sql);
};

