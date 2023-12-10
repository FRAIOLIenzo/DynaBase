#include "CLmapStock.h"

System::String^ NS_Comp_Mappage::CLmapStock::SelectStock(void)
{
	return "SELECT A.Article_Id, A.Article_Nom, A.Article_Quantite, A.Article_Seuil, A.Article_Taux_TVA, C.Commande_Id, C.Prevision_Livraison, C.Emission_Livraison, C.Reception_Livraison, C.Total_Article, C.Personnel_Id, C.Facture_Id FROM Article A INNER JOIN Commande C ON A.Commande_Id = C.Commande_Id; ";
}
System::String^ NS_Comp_Mappage::CLmapStock::InsertStock(void)
{
	return "INSERT INTO [BDD_Projet_POO].[dbo].[Article] VALUES ('" + this->nomarticle + "','" + this->quantitearticle + "','" + this->seuilreappro + "','" + this->tauxtva + "','" + this->commandeID + "');";
}
System::String^ NS_Comp_Mappage::CLmapStock::DeleteStock(int articleID)
{
	return "DELETE FROM [BDD_Projet_POO].[dbo].[Article] WHERE [Article_Id] = " + articleID + ";";
}
System::String^ NS_Comp_Mappage::CLmapStock::UpdateStock(int articleID, System::String^ nom_article, int quantite_article, int seuil_reappro, System::String^ taux_tva, System::String^ commandeID)
{
	return "UPDATE [BDD_Projet_POO].[dbo].[Article] SET [Article_Nom] = '" + nom_article + "', [Article_Quantite] = '" + quantite_article + "', [Article_Seuil] = '" + seuil_reappro + "', [Article_Taux_TVA] = '" + taux_tva + "', [Commande_Id] = '" + commandeID + "' WHERE [Article_Id] = '" + articleID + "';";
}

void NS_Comp_Mappage::CLmapStock::setNom(System::String^ nomarticle)
{
	this->nomarticle = nomarticle;
}
void NS_Comp_Mappage::CLmapStock::setQuantite(int quantitearticle)
{
	this->quantitearticle = quantitearticle;
}
void NS_Comp_Mappage::CLmapStock::setSeuil(int seuilreappro)
{
	this->seuilreappro = seuilreappro;
}
void NS_Comp_Mappage::CLmapStock::setTauxTVA(System::String^ tauxtva)
{
	this->tauxtva = tauxtva;
}
void NS_Comp_Mappage::CLmapStock::setCommandeID(System::String^ commandeID)
{
	this->commandeID = commandeID;
}