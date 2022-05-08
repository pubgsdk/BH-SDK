#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire.TBP_UI_Grimoire_C
// 0x0180 (0x0598 - 0x0418)
class UTBP_UI_Grimoire_C : public UTigerGrimoireUi
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowScrollPrompt;                                         // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            InteractAnim;                                             // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_Background_C*               BackgroundImage;                                          // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BlackBackground;                                          // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryBox_C*              CategoryBox;                                              // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         Footer;                                                   // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_ImageBox_C*                 ImageBox;                                                 // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_InfoBox_C*                  InfoBox;                                                  // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   InputPrompt_Back;                                         // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   InputPrompt_Close;                                        // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_GameMenu_Gamepad;                             // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Gamepad_Select;                               // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   InputPrompt_HideMenu;                                     // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Interact_GameMenu_Gamepad;                    // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Keyboard_Select;                              // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    InputPrompt_Rotate;                                       // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Rotate_GamePad;                               // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Rotate_Keyboard;                              // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter;                                         // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_Landing_C*                  LandingView;                                              // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_RootCategoryMenu_C*         RootCategoryMenu;                                         // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   ShowMenuButton;                                           // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                    // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_VideoPlayer_C*                       VideoBox;                                                 // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerGrimoireCategory*                      SelectedCategory;                                         // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              UnlockedRootCategoryPercentage;                           // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bMenusHidden;                                             // 0x04F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	class UTigerGrimoireTree*                          GrimoireTree;                                             // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryButton_C*           SelectedButton;                                           // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerGrimoireCategory*                      DefaultOpenedCategory;                                    // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Scrollable;                                               // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsDisplayItemRotatable;                                  // 0x0511(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0512(0x0002) MISSED OFFSET
	float                                              ItemRotationSpeed;                                        // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       ViewName;                                                 // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_Grimoire_Card_C*                        GrimCard;                                                 // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_Grimoire_ModelViewerItem_C*             GrimModel;                                                // 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bGrimCardShown;                                           // 0x0530(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bGrimModelShown;                                          // 0x0531(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	ETigerGrimoireEntryMediaDisplayMode                LastEntryMediaShown;                                      // 0x0532(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bFailedToShowEntryMedia;                                  // 0x0533(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bGrimoirePropExamined;                                    // 0x0534(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0535(0x0003) MISSED OFFSET
	struct FString                                     JumpEntryId;                                              // 0x0538(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bIsMenuTransitioning;                                     // 0x0548(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bHasTransitionedToShow;                                   // 0x0549(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsRightMouseDown;                                         // 0x054A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x1];                                       // 0x054B(0x0001) MISSED OFFSET
	float                                              CurrentZoomLevel;                                         // 0x054C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACineCameraActor*                            CloseViewerCameraActor;                                   // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ACineCameraActor*                            ViewerCameraActor;                                        // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              UnFocusedScreenSize;                                      // 0x0560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FocusedScreenSize;                                        // 0x0564(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                OldTemporalAASampleCount;                                 // 0x0568(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bRootMenuChanged;                                         // 0x056C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	float                                              MinMouseMove;                                             // 0x0570(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxMouseMove;                                             // 0x0574(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHasBeenOpenedBefore;                                     // 0x0578(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0579(0x0003) MISSED OFFSET
	struct FRotator                                    ItemRotationTransform;                                    // 0x057C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              ItemRotationSmoothing;                                    // 0x0588(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UTigerGrimoireEntry*                         Current_Video_Entry;                                      // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Grimoire.TBP_UI_Grimoire_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter);
	void SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter);
	void OnVideoLoaded();
	void Show_Video(class UTigerGrimoireEntry* Selected_Entry);
	void RefreshVideoMedia();
	void NormaliseMouseAxis(float InAxis, float* OutAxis);
	void NormaliseMouseDelta(const struct FVector2D& InDelta, struct FVector2D* OutDelta);
	void RefreshScrollPrompt();
	void ApplyMeshScaling(bool IsFocused);
	void ResetGrimoireDisplayItems(float InDeltaTime);
	void ForwardInputToCategoryMenu(int InDirection);
	void GrimoirePropJumpToEntry(const struct FString& InEntryId);
	void HideGrimoireDisplayItems();
	void RotateGrimoireDisplayItem(float InDeltaTime);
	void SetInteractionButtonVisiblity(bool bVisible);
	void ClearContent();
	void SelectMenuOnClickCategoryButton(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton);
	void SelectMenuOnClickEntryButton(class UTBP_UI_Grimoire_CategoryButton_C* EntryButton);
	void MenuAnimHide();
	void MenuAnimShow();
	void ToggleMenusHidden();
	void OnClose();
	void OnInitialized();
	void JumpToCategory(class UTigerGrimoireCategory* InCategory);
	void JumpToSubCategory(class UTigerGrimoireCategory* InSubCategory);
	void JumpToEntry(const struct FString& InEntryId);
	void SelectMenuOnClick(class UTigerGrimoireCategory* SelectedCategory);
	void OnOpen();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature();
	void BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature();
	void BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnBackgroundSceneShown();
	void MenuUpPressed();
	void MenuDownPressed();
	void OnRotateButtonPressed();
	void OnRotateButtonUp();
	void On_Language_Settings_Changed();
	void InteractedFooterAnimationStart(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter);
	void InteractedFooterAnimationEnd(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter);
	void RegisterSharedInputs();
	void UnregisterSharedInputs();
	void BndEvt__TBP_UI_Grimoire_ShowMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_Grimoire_InputPrompt_HideMenu_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_Grimoire_InputPrompt_Close_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_Grimoire_InputPrompt_Close_1_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_Grimoire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
