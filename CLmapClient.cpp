#include "CLmapClient.h"

System::String^ NS_Comp_Mappage::CLmapClient::SelectClient(void)
{
	return "SELECT C.Client_Id, C.Client_Nom, C.Client_Prenom, C.Client_Naissance, C.Client_Premier_Achat, P.Personnel_Nom AS Personnel_Assigne_Nom, P.Personnel_Prenom AS Personnel_Assigne_Prenom, S.Societe_Nom, S.Societe_Logo, S.Societe_Adresse, S.Numero_Service_Client, Livraison.Livraison_Adresse, Livraison.Livraison_Num_Adresse, Livraison.Livraison_Code_Postal, Facturation.Facturation_Adresse, Facturation.Facturation_Num_Adresse, Facturation.Facturation_Code_Postal FROM Client C JOIN Personnel P ON C.Personnel_Id = P.Personnel_Id JOIN Societe S ON C.Societe_Id = S.Societe_Id JOIN Adresse_de_livraison Livraison ON C.Livraison_Id = Livraison.Livraison_Id JOIN Adresse_de_facturation Facturation ON C.Facturation_Id = Facturation.Facturation_Id; ";
}
System::String^ NS_Comp_Mappage::CLmapClient::DeleteClient(int clientID)
{
	return "DELETE FROM [BDD_Projet_POO].[dbo].[Client] WHERE [Client_Id] = " + clientID + ";";
}
System::String^ NS_Comp_Mappage::CLmapClient::InsertClient(void)
{
	return "INSERT INTO [BDD_Projet_POO].[dbo].[Societe] (Societe_Nom, Societe_Logo, Societe_Adresse, Numero_Service_Client) VALUES ('" + this->nomsociete + "', '', '" + this->adressesociete + "',' " + this->numserviceclient + "'); DECLARE @societeId INT; SET @societeId = SCOPE_IDENTITY(); INSERT INTO Adresse_de_livraison (Livraison_Adresse, Livraison_Num_Adresse, Livraison_Code_Postal) VALUES ('" + this->adresselivraison + "', '" + this->numadresselivraison + "', '" + this->codepostallivraison + "'); DECLARE @livraisonId INT; SET @livraisonId = SCOPE_IDENTITY(); INSERT INTO Adresse_de_facturation (Facturation_Adresse, Facturation_Num_Adresse, Facturation_Code_Postal) VALUES ( '" + this->adressefacturation + "',  '" + this->numadressefacturation + "',  '" + this->codepostalfacturation + "'); DECLARE @facturationId INT; SET @facturationId = SCOPE_IDENTITY(); INSERT INTO Client (Client_Nom, Client_Prenom, Client_Naissance, Client_Premier_Achat, Societe_Id, Livraison_Id, Facturation_Id, Personnel_Id) VALUES ('" + this->nom + "', '" + this->prenom + "', '" + this->datenaissance + "', '" + this->datepremierachat + "', @societeId, @livraisonId, @facturationId, '" + this->IDpersonnel + "'); ";
}

void NS_Comp_Mappage::CLmapClient::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapClient::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapClient::setDateNaissance(System::String^ datenaissance)
{
	this->datenaissance = datenaissance;
}
void NS_Comp_Mappage::CLmapClient::setDatePremierAchat(System::String^ datepremierachat)
{
	this->datepremierachat = datepremierachat;
}
void NS_Comp_Mappage::CLmapClient::setAdresseLivraison(System::String^ adresselivraison)
{
	this->adresselivraison = adresselivraison;
}
void NS_Comp_Mappage::CLmapClient::setAdresseFacturation(System::String^ adressefacturation)
{
	this->adressefacturation = adressefacturation;
}
void NS_Comp_Mappage::CLmapClient::setAdresseSociete(System::String^ adressesociete)
{
	this->adressesociete = adressesociete;
}
void NS_Comp_Mappage::CLmapClient::setNomSociete(System::String^ nomsociete)
{
	this->nomsociete = nomsociete;
}
void NS_Comp_Mappage::CLmapClient::setNumAdresseLivraison(int numadresselivraison)
{
	this->numadresselivraison = numadresselivraison;
}
void NS_Comp_Mappage::CLmapClient::setNumAdresseFacturation(int numadressefacturation)
{
	this->numadressefacturation = numadressefacturation;
}
void NS_Comp_Mappage::CLmapClient::setCodePostalLivraison(int codepostallivraison)
{
	this->codepostallivraison = codepostallivraison;
}
void NS_Comp_Mappage::CLmapClient::setCodePostalFacturation(int codepostalfacturation)
{
	this->codepostalfacturation = codepostalfacturation;
}
void NS_Comp_Mappage::CLmapClient::setNumServiceClient(int numserviceclient)
{
	this->numserviceclient = numserviceclient;
}
void NS_Comp_Mappage::CLmapClient::setIDpersonnel(int IDpersonnel)
{
	this->IDpersonnel = IDpersonnel;
}