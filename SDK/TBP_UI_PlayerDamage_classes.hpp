#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C
// 0x0044 (0x02C4 - 0x0280)
class UTBP_UI_PlayerDamage_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_LowHealth_C*                         LowHealthOverlay;                                         // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_DamageIndicatorArrow_C*>      DamageIndicatorArray;                                     // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UTBP_UI_FullscreenDamageIndicator_C*         Fullscreen_Dmage_Indicator;                               // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxIndicatorWidgets;                                      // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	TArray<class UTBP_UI_FullscreenDamageIndicator_C*> FullscreenDamageIndicatorArray;                           // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	int                                                CurrentIndicatorIndex;                                    // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PlayerDamage.TBP_UI_PlayerDamage_C"));
		return ptr;
	}


	void OnBenchmarkDamage(const struct FVector& EnemyLocation, float DamageAmount);
	void OnNonDirectionalDamage(float InDamageAmount);
	void HandleDirectionIndicator(const struct FVector& Location, TArray<class UTBP_UI_DamageBase_C*>* Widgets);
	void OnDamage(const struct FVector& Enemy_Location, float DamageAmount, float NewHealth);
	void InitDamageIndicators();
	void InitCreateLowHealthOverlay();
	void Construct();
	void ExecuteUbergraph_TBP_UI_PlayerDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
