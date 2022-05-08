#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuGameplaySettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C
// 0x0300 (0x0598 - 0x0298)
class UTBP_UI_SystemMenuGameplaySettings_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_StyledComboBox_C*                    AudioLanguageSelect;                                      // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        AutoSprintItem;                                           // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          AutoSprintToggle;                                         // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          AutoSwapDefaultPistol;                                    // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       ConflictStreamerPrompt;                                   // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                CrossplayDescription;                                     // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        EnableCrossplayItem;                                      // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          EnableCrossplayToggle;                                    // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              Gamepad_Submenu_Button;                                   // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        GamepadAdaptiveTriggersItem;                              // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          GamepadAdaptiveTriggersToggle;                            // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        GamepadAdaptiveTriggerVibrationItem;                      // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          GamepadAdaptiveTriggerVibrationToggle;                    // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          GamepadAimAssistRotationToggle;                           // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          GamepadAimAssistSlowDownToggle;                           // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          GamepadInvertXToggle;                                     // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          GamepadInvertYToggle;                                     // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    GamepadWeaponCycleStylePreset;                            // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              Gameplay_Submenu_Button;                                  // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             GameplaySettingsSwitcher;                                 // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        HoldForHeightenedSensesItem;                              // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HoldForHeightenedSensesToggle;                            // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HoldForInventoryToggleKeyboard;                           // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HoldJumpToClimbGamepad;                                   // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HoldJumpToClimbKeyboard;                                  // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HoldToAimToggle;                                          // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        HorizontalGamepadAimingSensitivitySlider;                 // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        HorizontalGamepadScopedSensitivitySlider;                 // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        HorizontalGamepadSensitivitySlider;                       // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        HorizontalMouseAimingSensitivitySlider;                   // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        HorizontalMouseScopedSensitivitySlider;                   // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        HorizontalMouseSensitivitySlider;                         // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    InputPresets;                                             // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              KeyboardMouse_Submenu_Button;                             // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              Language_Submenu_Button;                                  // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          MouseInvertXToggle;                                       // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          MouseInvertYToggle;                                       // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    MouseWeaponCycleStylePreset;                              // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        MuteGeneralChatItem;                                      // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          MuteGeneralChatToggle;                                    // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        RotateMiniMapItem;                                        // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          RotateMiniMapToggle;                                      // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        RumbleIntensitySlider;                                    // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Scrollbox_C*                         TBP_UI_Scrollbox_106;                                     // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Scrollbox_C*                         TBP_UI_Scrollbox_226;                                     // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Scrollbox_C*                         TBP_UI_Scrollbox_323;                                     // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                    // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    TextLanguageSelect;                                       // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_166;                             // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_383;                             // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuItem_C*                    TutorialRetryButton;                                      // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        TutorialRetryItem;                                        // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VerticalGamepadAimingSensitivitySlider;                   // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VerticalGamepadScopedSensitivitySlider;                   // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VerticalGamepadSensitivitySlider;                         // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VerticalMouseAimingSensitivitySlider;                     // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VerticalMouseScopedSensitivitySlider;                     // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VerticalMouseSensitivitySlider;                           // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuItem_C*                    CurrentlySelectedSystemMenuItem;                          // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FIntPoint>                           AvailableResolutions;                                     // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FIntPoint                                   CurrentlySelectedResolution;                              // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       Submenu_Gameplay;                                         // 0x0490(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Submenu_KeyboardMouse;                                    // 0x04A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Submenu_Gamepad;                                          // 0x04C0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Submenu_Language;                                         // 0x04D8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FText>                               InputTexts;                                               // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FString>                             AvailableAudioLanguages;                                  // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FString>                             AvailableTextLanguages;                                   // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<struct FString, struct FText>                 AudioLanguageDisplayNames;                                // 0x0520(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TSoftObjectPtr<class UTigerGameFlowStateBoot>      BootFlow;                                                 // 0x0570(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C"));
		return ptr;
	}


	void HasUnappliedChanges(bool* OutHasUnappliedChanges);
	void ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart);
	void BindButtons();
	void UpdateDropdownLists();
	void UpdateLanguageSelections();
	void SetComboBoxSelection(class UTBP_UI_StyledComboBox_C* InComboBox);
	void SetSubmenuButtonNames();
	void UpdateWeaponCycleStyleDropdownList(class UTBP_UI_StyledComboBox_C* InDropdownBox, bool bInIsGamepad);
	void UpdateLanguageSelectionDropdownList(class UTBP_UI_StyledComboBox_C* InDropdownBox, const struct FString& InCurrentLanguage, TArray<struct FString>* InSelectableCultures, TArray<struct FString>* InAvailableLanguagesArray);
	void PresetChanged();
	void SwitchToCustomPreset();
	void UpdateInputPresetsDropdownList();
	void UpdateSettings();
	void ConfirmApply();
	void DiscardChanges();
	void RevertChanges();
	void BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void OnOpen();
	void BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OnClose();
	void BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);
	void OnGamepadWeaponStyleChanged(const struct FText& SelectedItem, int SelectedIndex);
	void OnGameplayPressed();
	void OnLanguagePressed();
	void InputPresetsChanged(const struct FText& SelectedItem, int SelectedIndex);
	void TextLanguageSelectChanged(const struct FText& SelectedItem, int SelectedIndex);
	void AudioLanguageSelectChanged(const struct FText& SelectedItem, int SelectedIndex);
	void OnKeyboardMousePressed();
	void OnGamepadPressed();
	void BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OnMouseWeaponStyleChanged(const struct FText& SelectedItem, int SelectedIndex);
	void BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_ResetToDefaultsButton_1_K2Node_ComponentBoundEvent_2_OnWidgetClicked__DelegateSignature();
	void ResetSettings();
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldJumpToClimbGamepad_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldJumpToClimbKeyboard_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_RumbleIntensitySlider_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAimAssistSlowDownToggle_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAimAssistRotationToggle_K2Node_ComponentBoundEvent_14_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAdaptiveTriggersToggle_K2Node_ComponentBoundEvent_15_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadAdaptiveTriggerVibrationToggle_K2Node_ComponentBoundEvent_20_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OpenCategory();
	void CloseCategory();
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_HoldToAim_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_RotateMiniMapToggle_K2Node_ComponentBoundEvent_22_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_MouseInvertXToggle_K2Node_ComponentBoundEvent_23_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_GamepadInvertXToggle_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseSensitivitySlider_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalMouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadSensitivitySlider_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadAimingSensitivitySlider_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_VerticalGamepadScopedSensitivitySlider_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_EnableCrossplayToggle_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void CrossplaySettingLockChanged(bool bSettingIsLocked);
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_ConflictStreamerPrompt_K2Node_ComponentBoundEvent_32_Confirm__DelegateSignature();
	void BndEvt__TBP_UI_SystemMenuGameplaySettings_ConflictStreamerPrompt_K2Node_ComponentBoundEvent_34_Decline__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
