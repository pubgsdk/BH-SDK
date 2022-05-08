#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_UI_ChatWindow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_UI_ChatWindow.BPI_UI_ChatWindow_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_UI_ChatWindow_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_UI_ChatWindow.BPI_UI_ChatWindow_C"));
		return ptr;
	}


	void OnBanStatusChanged(const struct FTigerMuteInfo& InMuteInfo);
	void WelcomePlayersInElysium();
	void OnMessageNameUnhovered();
	void OnMessageNameHovered(const struct FTigerChatMessage& InChatData);
	void Focus_on_Input_Box();
	void AddMessage(const struct FTigerChatMessage& InChatMessage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
