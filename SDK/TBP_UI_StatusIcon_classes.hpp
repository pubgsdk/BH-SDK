#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StatusIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_StatusIcon.TBP_UI_StatusIcon_C
// 0x0080 (0x0300 - 0x0280)
class UTBP_UI_StatusIcon_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            Animation_Flash;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Animation_BloodHunt;                                      // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      BloodHunt;                                                // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          FlashImage;                                               // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          shadow;                                                   // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      StatusIconImage;                                          // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class ATigerPlayer*                                Group_Member;                                             // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETBE_StatusIcon>                       ActiveStatus;                                             // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	TArray<bool>                                       CurrentStatuses;                                          // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TEnumAsByte<ETBE_StatusIcon>>               StatusPriority;                                           // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    OnStatusIconChanged;                                      // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_StatusIcon.TBP_UI_StatusIcon_C"));
		return ptr;
	}


	void OnMasqueradeStateUpdated(bool InMasqueradeBroken, ETigerAIPlayerAction InPlayerAction);
	void SetStatusIcon(TEnumAsByte<ETBE_StatusIcon> InStatusIcon);
	void UpdateActiveStatus();
	void OnReviveStateChanged(bool InReviveActive, bool InIsTarget);
	void OnDiablerizeStateChanged(bool InDiablerizeActive, bool InIsTarget);
	void OnMasqueradeStateChanged(bool InMasqueradeBroken, ETigerAIPlayerAction InPlayerAction);
	void SetPawn(class APawn* InPawn);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_StatusIcon(int EntryPoint);
	void OnStatusIconChanged__DelegateSignature(TEnumAsByte<ETBE_StatusIcon> InNewStatusIcon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
