#include "CLmapCommande.h"

System::String^ NS_Comp_Mappage::CLmapCommande::SelectCommande(void)
{
	return "SELECT * FROM [BDD_Projet_POO].[dbo].[Commande]";
}
System::String^ NS_Comp_Mappage::CLmapCommande::InsertCommande(void)
{
	return "DECLARE @commandeId VARCHAR(255); DECLARE @factureId INT; INSERT INTO Facture (Montant_HT, Montant_TVA, Montant_TTC, Facture_Emission, Societe_Id) VALUES ('" + this->HT + "', '" + this->TVA + "', '" + this->TTC + "', '" + this->dateemissionfacture + "', '" + this->societeID + "'); SET @factureId = SCOPE_IDENTITY(); INSERT INTO Commande (Commande_Id, Prevision_Livraison, Emission_Livraison, Reception_Livraison, Total_Article, Personnel_Id, Facture_Id) VALUES ('" + this->commandeID + "', '" + this->dateprevision + "', '" + this->dateemission + "', '" + this->datereception + "', '" + this->totalarticle + "', '" + this->personnelID + "', @factureId); SET @commandeId = '" + this->commandeID + "'; INSERT INTO Paiement (Execution_Paiement, Moyen_Paiement, Commande_Id) VALUES ('" + this->executionpaiement + "', '" + this->moyenpaiement + "', @commandeId); ";
}
System::String^ NS_Comp_Mappage::CLmapCommande::DeleteCommande(void)
{
	return "DELETE FROM [BDD_Projet_POO].[dbo].[Commande] WHERE [Commande_Id] = " + this->commandeID + ";";
}
System::String^ NS_Comp_Mappage::CLmapCommande::UpdateCommande(void)
{
	return "DECLARE @commandeId VARCHAR(255); UPDATE Facture SET Montant_HT = '" + this->HT + "', Montant_TVA = '" + this->TVA + "', Montant_TTC = '" + this->TTC + "', Facture_Emission = '" + this->dateemissionfacture + "' WHERE Facture.Facture_Id = (SELECT Commande.Facture_Id FROM Commande WHERE Commande.Commande_Id = '" + this->commandeID + "'); UPDATE Commande SET Prevision_Livraison = '" + this->dateprevision + "', Emission_Livraison = '" + this->dateemission + "', Reception_Livraison = '" + this->datereception + "', Total_Article = '" + this->totalarticle + "', Personnel_Id = '" + this->personnelID + "' WHERE Commande.Commande_Id = '" + this->commandeID + "'; SET @commandeId = '" + this->commandeID + "'; UPDATE Paiement SET Execution_Paiement = '" + this->executionpaiement + "', Moyen_Paiement = '" + this->moyenpaiement + "' WHERE Paiement.Commande_Id = @commandeId; ";
}

void NS_Comp_Mappage::CLmapCommande::setCommandeID(System::String^ commandeID)
{
	this->commandeID = commandeID;
}
void NS_Comp_Mappage::CLmapCommande::setDatePrevision(System::String^ prevision)
{
	this->dateprevision = prevision;
}
void NS_Comp_Mappage::CLmapCommande::setDateEmission(System::String^ emission)
{
	this->dateemission = emission;
}
void NS_Comp_Mappage::CLmapCommande::setDateReception(System::String^ reception)
{
	this->datereception = reception;
}
void NS_Comp_Mappage::CLmapCommande::setTotalArticle(int totalarticle)
{
	this->totalarticle = totalarticle;
}
void NS_Comp_Mappage::CLmapCommande::setPersonnelID(int personnelID)
{
	this->personnelID = personnelID;
}

void NS_Comp_Mappage::CLmapCommande::setHT(System::String^ HT)
{
	this->HT = HT;
}
void NS_Comp_Mappage::CLmapCommande::setTVA(System::String^ TVA)
{
	this->TVA = TVA;
}
void NS_Comp_Mappage::CLmapCommande::setTTC(System::String^ TTC)
{
	this->TTC = TTC;
}
void NS_Comp_Mappage::CLmapCommande::setDateEmissionFacture(System::String^ dateemissionfacture)
{
	this->dateemissionfacture = dateemissionfacture;
}
void NS_Comp_Mappage::CLmapCommande::setSocieteID(int societeID)
{
	this->societeID = societeID;
}
void NS_Comp_Mappage::CLmapCommande::setMoyenPaiement(System::String^ moyenpaiement)
{
	this->moyenpaiement = moyenpaiement;
}
void NS_Comp_Mappage::CLmapCommande::setExecutionPaiement(System::String^ dateemissionfacture)
{
	this->dateemissionfacture = dateemissionfacture;
}