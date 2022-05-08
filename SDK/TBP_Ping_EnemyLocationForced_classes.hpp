#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_EnemyLocationForced_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_EnemyLocationForced.TBP_Ping_EnemyLocationForced_C
// 0x0000 (0x0121 - 0x0121)
class UTBP_Ping_EnemyLocationForced_C : public UTBP_PingBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_EnemyLocationForced.TBP_Ping_EnemyLocationForced_C"));
		return ptr;
	}


	bool EvaluateWorldActor(class ATigerPlayerState* InPlayerState, const struct FHitResult& InHitResult, struct FTigerPingWorldNetData* OutPingData, class AActor** OutOverrideActor);
	struct FTigerPingIconData GetIconData(const struct FTigerPingContext& InContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
