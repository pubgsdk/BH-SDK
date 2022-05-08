#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ElysiumChangeCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C
// 0x020C (0x05EC - 0x03E0)
class UTBP_UI_ElysiumChangeCharacter_C : public UTigerArchetypeSelectElysiumUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            HideMenu;                                                 // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowArchetypeDetailsAnim_Fast;                            // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            HideArchetypeDetailsAnim_Fast;                            // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeOutBackground;                                        // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            VideoStopped;                                             // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            VideoStarted;                                             // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowArchetypeDetailsAnim;                                 // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            HideArchetypeDetailsAnim;                                 // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            LoadingDone;                                              // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_ArchetypeDescription_C*              ArchetypeDescription;                                     // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                ArchetypeDetails;                                         // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ArchetypeInfo_C*                     ArchetypeInfo;                                            // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                ArchetypeInfoBox;                                         // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BlackBackground;                                          // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              ButtonArchetype;                                          // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              ButtonPresets;                                            // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     Carousel_Button_Left;                                     // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     Carousel_Button_Right;                                    // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterSkin_Elysium_C*             CharacterSkin_1;                                          // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterSkin_Elysium_C*             CharacterSkin_2;                                          // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterSkin_Elysium_C*             CharacterSkin_3;                                          // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterSkin_Elysium_C*             CharacterSkin_4;                                          // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterSkin_Elysium_C*             CharacterSkin_5;                                          // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                CharacterSkins;                                           // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCircularThrobber*                           CircularThrobber_56;                                      // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPromptCombined_C*               Close_Prompt;                                             // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ConfirmSlotPurchase_C*               ConfirmSlotPurchase;                                      // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_FullScreen_PopUp_Base_C*             CreatingCharacterPopup;                                   // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ErrorPrompt_C*                       ErrorPrompt;                                              // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      HACKY_INPUT_BLOCKER;                                      // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   HideArchetypeDetails_2;                                   // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_HorizontalArchetypeSelector_Default_C* HorizontalArchetypeSelector;                              // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_GameMenu_Gamepad;                             // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Select_Gamepad;                               // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Select_Keyboard;                              // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    LoadingOverlay;                                           // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      PaperdollBackground;                                      // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PlAYCINEMATIC;                                            // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TransitionMenuButton_C*              PlayCinematicButton;                                      // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      PlayVideoIcon;                                            // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   ShowArchetypeDetails;                                     // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputPromptCombined_C*               ShowCinematicKeyPrompt_2;                                 // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ArchetypePerk_Menu_C*                TBP_UI_ArchetypePerk_Menu;                                // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_PageIndicator_C*                     TBP_UI_PageIndicator;                                     // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                    // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Text;                                                     // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_ShowHide;                                  // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_CharacterSkin_Elysium_C*>     ArchetypeSkinWidgets;                                     // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UTigerPowerKit*                              CurrentArchetypeData;                                     // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_ElysiumChangeCharacterState>         CurrentUiState;                                           // 0x0580(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsPlayingPowerVideo;                                     // 0x0581(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0582(0x0006) MISSED OFFSET
	class UTBP_UI_MoviePlayer_C*                       MoviePlayerUI;                                            // 0x0588(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHasValidCharacterForArchetype;                           // 0x0590(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	TArray<int>                                        Archetype_Character_Indices;                              // 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UTBP_UI_CharacterSkin_Elysium_C*             PendingCreateCharacterWidget;                             // 0x05A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTigerPersistentCharacterID                 ActiveCharacterSlot;                                      // 0x05B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05B1(0x0007) MISSED OFFSET
	TArray<class ATBP_PaperDoll_C*>                    All_Paperdolls;                                           // 0x05B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	int                                                ActiveCharacterIndex;                                     // 0x05C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Original_Location;                                        // 0x05D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AActor*                                      CameraController;                                         // 0x05E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                OldTemporalAASampleCount;                                 // 0x05E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C"));
		return ptr;
	}


	void ShowPerkView(ETigerPowerKitType InArchetypeType);
	void HidePerkView();
	void ShowHeader();
	void CloseFullscreenCinematic();
	void Reset_Selection_to_0();
	void SelectCharacterIfValid();
	void Update_Paperdoll_Positions();
	void ResetMenu();
	void AddTaggedActorsToCaptureComponent(bool* bUseCaptureComponent);
	void ChangeSelection(class UTBP_UI_CharacterSkin_Elysium_C* InNewSelection);
	void TogglePresets();
	void ToggleArchetypeDetails();
	void ResetSlotStates(TArray<int> inArray);
	void SelectOrCreateCharacter(const struct FTigerPersistentPlayerCharacter& InPlayerCharacter);
	void OnCharacterSelected();
	void OnGetUserPrivileges();
	void OnGetValidGameVersionResult(ETigerVersionIsValidResult Result);
	void OnLegalDocumentAcceptanceResult(TArray<ETigerLegalDocumentType> InDocumentTypes);
	void OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo);
	void OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters);
	void BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature(class UTigerPowerKit* InArchetypeData);
	void BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
	void BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
	void OnInitialized();
	void OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated);
	void PreConstruct(bool IsDesignTime);
	void OnArchetypeChanged(class UTigerPowerKit* InArchetypeData, TArray<int> InPlayerArchetypeCharacterIndices);
	void BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
	void BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
	void BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
	void OnClose();
	void Create_Character_On_Existing_Slot();
	void OnBuyCharacterSlotResults(bool bInSuccess, const struct FString& InErrorString);
	void BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature();
	void WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3();
	void BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature();
	void BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature();
	void OnOpen();
	void Construct();
	void ShowFullscreenCinematic();
	void OnFullscreenCinematicClosed();
	void BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature(bool ConfirmedPurchase);
	void OnBackgroundSceneShown();
	void BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature();
	void BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature();
	void Update_Carousel_Change();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature();
	void BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature();
	void WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4();
	void WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5();
	void ShowPerkSelectionMenu(ETigerPowerKitType InArchetypeType);
	void HidePerkSelectionMenu();
	void BlockerListenForInput();
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
