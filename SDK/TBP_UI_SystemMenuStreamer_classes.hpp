#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuStreamer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C
// 0x0089 (0x0321 - 0x0298)
class UTBP_UI_SystemMenuStreamer_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_ConfirmMenu_C*                       ConflictPrompt;                                           // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HideKillFeedToggle;                                       // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HideMatchIdToggle;                                        // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HideMiniMapToggle;                                        // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HideNameToggle;                                           // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HideNotificationsToggle;                                  // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HidePlayerCurrencyToggle;                                 // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HidePlayerMessagesToggle;                                 // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   OptionDescText;                                           // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   OptionHeaderText;                                         // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          ScrambleOtherNamesToggle;                                 // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                StreamerItemBox;                                          // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Carousel_C*                          StreamerModePresetCarousel;                               // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher_Settings;                                        // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                    // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemBrightness_C*                  TBP_UI_SystemBrightness;                                  // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               NeedToSave;                                               // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuStreamer.TBP_UI_SystemMenuStreamer_C"));
		return ptr;
	}


	void ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart);
	void HasUnappliedChanges(bool* OutHasUnappliedChanges);
	void UpdateHighlights(class UWidget* InSelectedStreamerOption, bool ClearAll);
	void UpdateHeaderAndTitle(const struct FText& InHeader, const struct FText& InDescription);
	void UpdateVisibleSettings();
	void DiscardChanges();
	void RevertChanges();
	void BndEvt__TBP_UI_SystemMenuStreamer_ScrambleOtherNamesToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuStreamer_HideNameToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerMessagesToggle_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuStreamer_HideKillFeedToggle_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuStreamer_QualityPresetCarousel_K2Node_ComponentBoundEvent_4_SelectedItemIndexChanged__DelegateSignature(int NewIndex);
	void ResetSettings();
	void BndEvt__TBP_UI_SystemMenuStreamer_HideMiniMapToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuStreamer_HideNotificationsToggle_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OnOpen();
	void OnClose();
	void BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerCurrencyToggle_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void ConfirmApply();
	void CloseCategory();
	void Construct();
	void OpenCategory();
	void BndEvt__TBP_UI_SystemMenuStreamer_HidePlayerCurrencyToggle_1_K2Node_ComponentBoundEvent_6_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuStreamer_ConflictPrompt_K2Node_ComponentBoundEvent_8_Confirm__DelegateSignature();
	void BndEvt__TBP_UI_SystemMenuStreamer_ConflictPrompt_K2Node_ComponentBoundEvent_10_Decline__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_SystemMenuStreamer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
