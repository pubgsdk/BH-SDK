#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ArchetypeInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C
// 0x0060 (0x02E0 - 0x0280)
class UTBP_UI_ArchetypeInfo_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ChangedClan;                                              // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      FadeOutOverlay;                                           // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             LoadingSwitcher;                                          // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_ArchetypeSelect_PowersWithVideoPreviews_C* PowersWithVideoPreviews;                                  // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMediaPlayer*                                Media_Player;                                             // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerPlayerClanData*                        ClanData;                                                 // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerPowerKit*                              ArchetypeData;                                            // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnVideoStarted;                                           // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnVideoEnded;                                             // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C"));
		return ptr;
	}


	void SetCharacterArchetype(class UTigerPowerKit* DesiredArchetype);
	void UpdateClanInfo(class UTigerPowerKit* InArchetypeData);
	void ChangeClan(class UTigerPlayerClanData* ClanData, bool bAnimateChange, class UTigerPowerKit* ArchetypeData);
	void PreConstruct(bool IsDesignTime);
	void Toggle_UI_Visibility();
	void WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1();
	void BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature();
	void BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature();
	void StopVideo();
	void ExecuteUbergraph_TBP_UI_ArchetypeInfo(int EntryPoint);
	void OnVideoEnded__DelegateSignature();
	void OnVideoStarted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
