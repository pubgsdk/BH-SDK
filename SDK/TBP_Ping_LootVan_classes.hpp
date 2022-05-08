#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_LootVan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_LootVan.TBP_Ping_LootVan_C
// 0x0038 (0x0159 - 0x0121)
class UTBP_Ping_LootVan_C : public UTBP_PingBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                ContextArgument;                                          // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               PoliceVanAudioEvent;                                      // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               DeliveryVanAudioEvent;                                    // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               AmbulanceAudioEvent;                                      // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       VanName;                                                  // 0x0140(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<ENUM_TelemetryPingType>                VanPingEnum;                                              // 0x0158(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_LootVan.TBP_Ping_LootVan_C"));
		return ptr;
	}


	void SetContextArgumentFromActorClass(TEnumAsByte<ENUM_TelemetryPingType> InType);
	void HasBeenOpenedFromContext(int InContextBitmask, bool* OutHasBeenOpened);
	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
	bool EvaluateWorldActor(class ATigerPlayerState* InPlayerState, const struct FHitResult& InHitResult, struct FTigerPingWorldNetData* OutPingData, class AActor** OutOverrideActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
