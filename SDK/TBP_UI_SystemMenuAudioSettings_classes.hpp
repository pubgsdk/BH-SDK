#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuAudioSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C
// 0x0170 (0x0408 - 0x0298)
class UTBP_UI_SystemMenuAudioSettings_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_CheckBox_C*                          AllowBackgroundAudio;                                     // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        AllowBackgroundAudioItem;                                 // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        AudioMixPreset;                                           // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    AudioMixPresetComboBox;                                   // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        AudioOutputDevice;                                        // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    AudioOutputDeviceComboBox_2;                              // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        ControllerVolumeItem;                                     // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        ControllerVolumeSlider;                                   // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        DialogueVolumeSlider;                                     // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          EnableDolbyAtmos;                                         // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        EnableDolbyAtmosItem;                                     // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          EnableVoiceChat;                                          // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        InputDevice;                                              // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    InputDeviceComboBox;                                      // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MasterVolumeSlider;                                       // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MicVolumeSlider;                                          // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MusicVolumeSlider;                                        // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        OutputDevice;                                             // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    OutputDeviceComboBox;                                     // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        PushToTalk;                                               // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        SfxVolumeSlider;                                          // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                SystemMenuSubItemBox;                                     // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Scrollbox_C*                         TBP_UI_Scrollbox;                                         // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_166;                             // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_383;                             // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          UsePushToTalk;                                            // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VideoVolumeSlider;                                        // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        VoiceChatVolumeSlider;                                    // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SystemMenuItem_C*                    CurrentlySelectedSystemMenuItem;                          // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsAllowedToUseVoip;                                      // 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	TMap<struct FString, struct FText>                 AudioMixPresetsToText;                                    // 0x0390(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FText>                               AvailableAudioMixPresets;                                 // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                FoundAudioMixPresetIndex;                                 // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	TArray<struct FAkDeviceInfo>                       AudioOutputDevices;                                       // 0x03F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C"));
		return ptr;
	}


	void HasUnappliedChanges(bool* OutHasUnappliedChanges);
	void ApplyChanges(bool* OutShouldShowRevertPrompt, bool* OutNeedsRestart);
	void InitAudioOutputDevice();
	void InitAuidoMixPresets();
	void Handle_Voip_Response(bool InCanPerformAction);
	void UpdateOutputDevices();
	void SetComboBoxSelection(class UTBP_UI_StyledComboBox_C* InComboBox);
	void UpdateInputDevices();
	void UpdateVolumeSettings();
	void Update_Voip_Settings();
	void DiscardChanges();
	void RevertChanges();
	void BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void ResetSettings();
	void BndEvt__TBP_UI_SystemMenuAudioSettings_RecordingDeviceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_OutputDeviceComboBox_K2Node_ComponentBoundEvent_12_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex);
	void ConfirmApply();
	void OpenCategory();
	void Construct();
	void BndEvt__TBP_UI_SystemMenuAudioSettings_ControllerVolumeSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void CloseCategory();
	void CheckRestrictedActions();
	void BndEvt__TBP_UI_SystemMenuAudioSettings_AudioMixPresetComboBox_K2Node_ComponentBoundEvent_16_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex);
	void BndEvt__TBP_UI_SystemMenuAudioSettings_AudioOutputDeviceComboBox_1_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex);
	void OnMouseCaptureEnd_VolumeSliders_();
	void ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
