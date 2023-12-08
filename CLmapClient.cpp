#include "CLmapClient.h"

System::String^ NS_Comp_Mappage::CLmapClient::SelectClient(void)
{
	return "SELECT * FROM [BDD_Projet_POO].[dbo].[Client]";
}