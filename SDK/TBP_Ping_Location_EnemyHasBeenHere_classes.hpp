#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Location_EnemyHasBeenHere_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_Location_EnemyHasBeenHere.TBP_Ping_Location_EnemyHasBeenHere_C
// 0x0000 (0x0121 - 0x0121)
class UTBP_Ping_Location_EnemyHasBeenHere_C : public UTBP_PingBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_Location_EnemyHasBeenHere.TBP_Ping_Location_EnemyHasBeenHere_C"));
		return ptr;
	}


	struct FTigerPingIconData GetIconData(const struct FTigerPingContext& InContext);
	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
	bool EvaluateWorldActor(class ATigerPlayerState* InPlayerState, const struct FHitResult& InHitResult, struct FTigerPingWorldNetData* OutPingData, class AActor** OutOverrideActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
