#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ContextualHelp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C
// 0x0070 (0x02F0 - 0x0280)
class UTBP_UI_ContextualHelp_C : public UTigerContextualHelpUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            AnimateInInteractions;                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FlashHit;                                                 // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            AnimateInReminders;                                       // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            IB_ContextualHelpSlot_Interaction;                        // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            IB_ContextualHelpSlot_Reminders;                          // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ContextualHelpSlot_Interaction_C*    TBP_UI_ContextualHelpSlot_Interaction;                    // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ContextualHelpSlot_C*                TBP_UI_ContextualHelpSlotReminders;                       // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerContextualHelp*                        ContextualHelpReminderObject;                             // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerContextualHelp*                        ContextualHelpInteractionObject;                          // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerContextualHelp*                        CurrentContexualHelpData;                                 // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ETigerContextualHelpType                           CurrentContetualHelpType;                                 // 0x02E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	class UTBP_ContextualHelpBase_C*                   As_TBP_Contextual_Help_Base;                              // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ContextualHelp.TBP_UI_ContextualHelp_C"));
		return ptr;
	}


	void StartAnimation(ETigerContextualHelpType InType);
	void OnHideHelpWidget(class UTigerContextualHelp* InData, ETigerContextualHelpType InType, float* OutAnimationDuration);
	void SetIcon(class UTigerContextualHelp* InData, ETigerContextualHelpType InType);
	void SetDescriptionText(class UTigerContextualHelp* InData, ETigerContextualHelpType InType);
	void OnShowHelpWidget(class UTigerContextualHelp* InData, ETigerContextualHelpType InType);
	void SetWantsToShowOff();
	void SetInteractionWantsToShowOff();
	void Construct();
	void OnKeyBindChanged(const struct FInputActionKeyMapping& OldKeyBinding, const struct FInputActionKeyMapping& NewKeyBinding);
	void OnResetToDefault();
	void ExecuteUbergraph_TBP_UI_ContextualHelp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
