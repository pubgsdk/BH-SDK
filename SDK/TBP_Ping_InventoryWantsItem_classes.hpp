#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_InventoryWantsItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C
// 0x0000 (0x0121 - 0x0121)
class UTBP_Ping_InventoryWantsItem_C : public UTBP_Ping_ItemAssetBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C"));
		return ptr;
	}


	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	void GetInventoryTooltipText(class UTigerItemAsset* InModAsset, struct FText* OutText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
