#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_ItemAssetBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C
// 0x0000 (0x0121 - 0x0121)
class UTBP_Ping_ItemAssetBase_C : public UTBP_PingBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C"));
		return ptr;
	}


	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	struct FTigerPingNotificationUIData GetResponseText(const struct FTigerPingContext& InContext, bool bInIsInterested);
	struct FTigerPingIconData GetIconData(const struct FTigerPingContext& InContext);
	struct FText GetTooltipName(const struct FTigerPingContext& InContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
