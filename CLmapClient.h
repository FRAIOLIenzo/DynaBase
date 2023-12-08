#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapClient
	{
	private:
		System::String^ sSql;

	public:
		System::String^ SelectClient(void);
	};
}

