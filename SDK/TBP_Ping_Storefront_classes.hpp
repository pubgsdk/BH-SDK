#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Storefront_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_Storefront.TBP_Ping_Storefront_C
// 0x0057 (0x0178 - 0x0121)
class UTBP_Ping_Storefront_C : public UTBP_PingBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<ENUM_TelemetryPingType>, class UAkAudioEvent*> AudioEvents;                                              // 0x0128(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_Storefront.TBP_Ping_Storefront_C"));
		return ptr;
	}


	struct FText TelemetryPingTypeToStoreName(TEnumAsByte<ENUM_TelemetryPingType> InType);
	void EvaluateActor(class AActor* InActor, bool* OutIsValid, struct FTigerPingWorldNetData* OutValidData);
	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	bool EvaluateWorldActor(class ATigerPlayerState* InPlayerState, const struct FHitResult& InHitResult, struct FTigerPingWorldNetData* OutPingData, class AActor** OutOverrideActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
