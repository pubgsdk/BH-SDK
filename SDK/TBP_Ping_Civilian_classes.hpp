#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Civilian_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_Civilian.TBP_Ping_Civilian_C
// 0x004F (0x0170 - 0x0121)
class UTBP_Ping_Civilian_C : public UTBP_PingBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               civilianPingVO;                                           // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       civilianPingText;                                         // 0x0130(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UTexture2D*                                  civilianPingIcon;                                         // 0x0148(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   BloodAsset_Choleric;                                      // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   BloodAsset_Melancholic;                                   // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   BloodAsset_Phlegmatic;                                    // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   BloodAsset_Sanguine;                                      // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_Civilian.TBP_Ping_Civilian_C"));
		return ptr;
	}


	void SetDataForResonance(class ATigerBaseNPC* CivilianRef);
	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
	bool ShouldRemovePing(class AActor* InContextActor);
	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	bool EvaluateWorldActor(class ATigerPlayerState* InPlayerState, const struct FHitResult& InHitResult, struct FTigerPingWorldNetData* OutPingData, class AActor** OutOverrideActor);
	struct FTigerPingIconData GetIconData(const struct FTigerPingContext& InContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
