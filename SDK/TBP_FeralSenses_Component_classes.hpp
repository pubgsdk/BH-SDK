#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_FeralSenses_Component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_FeralSenses_Component.TBP_FeralSenses_Component_C
// 0x0070 (0x01B8 - 0x0148)
class UTBP_FeralSenses_Component_C : public UTigerUtilityPowerHSenseComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UCurveFloat*                                 ActivatedOpacityCurve;                                    // 0x0150(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 DeactivatedOpacityCurve;                                  // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 ActivatedBurstCurve;                                      // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                TimerHandle;                                              // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 ActivatedDesaturationCurve;                               // 0x0170(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 DeactivatedDesaturationCurve;                             // 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                FogColor;                                                 // 0x0180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                FogNearColor;                                             // 0x0190(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FogStartRange;                                            // 0x01A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FogEndRange;                                              // 0x01A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TimeMultiplier;                                           // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	class ATBP_Player_C*                               Player;                                                   // 0x01B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_FeralSenses_Component.TBP_FeralSenses_Component_C"));
		return ptr;
	}


	void HandleBloodTrackUpgrades();
	float GetCurrentHeightenedSensesViewLength();
	void ContinueUpdatingBurst();
	void FadeoutSetup();
	void FadeInSetup2();
	void FadeInSetup1();
	void UpdateHeightenedSenses();
	void FinishHeightenedSenses();
	void GetOwnersBloodScanPostFX(class UPostProcessComponent** BloodScanPostFX);
	void GetOwnersHeartScan(class UParticleSystemComponent** Heart_Scan_Effect_Plane);
	void OnActivateHeightenedSenses();
	void OnDeactivateHeightenedSenses();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_FeralSenses_Component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
