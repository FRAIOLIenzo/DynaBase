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