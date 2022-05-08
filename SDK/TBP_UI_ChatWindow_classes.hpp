#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ChatWindow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ChatWindow.TBP_UI_ChatWindow_C
// 0x01A1 (0x0421 - 0x0280)
class UTBP_UI_ChatWindow_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            CharacterLimitReached;                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBorder*                                     Border_139;                                               // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CharacterLimitErrorText;                                  // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                ChatWindowVerticalBox;                                    // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_86;                                                 // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    InputContainer;                                           // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UEditableTextBox*                            InputTextBox;                                             // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    MessageBackgroundContainer;                               // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                MessagesBox;                                              // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  MessageScrollBox;                                         // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Social_ActionMenuItem_C*             OptionsAddFriend;                                         // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    OptionsContainer;                                         // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Social_ActionMenuItem_C*             OptionsInviteToGroup;                                     // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Social_ActionMenuItem_C*             OptionsMute;                                              // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PlayerNameText;                                           // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                           // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ToText;                                                   // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BorderColor;                                              // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnMessageInput;                                           // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bTakesInput;                                              // 0x0338(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bWriteOnlyToGroupMembers;                                 // 0x0339(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	int                                                CharcterLimit;                                            // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       CharacterLimitTextFormat;                                 // 0x0340(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       TextBoxText;                                              // 0x0358(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               PostEnter;                                                // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	int                                                MaxStoredChatMessages;                                    // 0x0374(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsHoveringChatName;                                      // 0x0378(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	struct FTigerChatMessage                           CurrentSelectedChatMessage;                               // 0x0380(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                OptionsMenuTimerHandle;                                   // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     AllChatPrefix;                                            // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     AllChatShortPrefix;                                       // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     GroupChatPrefix;                                          // 0x0400(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     GroupChatShortPrefix;                                     // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bIsInMatch;                                               // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ChatWindow.TBP_UI_ChatWindow_C"));
		return ptr;
	}


	void SetChatPosition(bool bHasMatchStarted);
	void NotifyBannedStatus(class UTigerChatComponent* InChatComponent);
	void VerifyCanSendMessage(bool* bCanSend);
	void Should_Prevent_Trying_To_Type_In_General_Chat(bool* bShouldPrevent);
	void Has_Chat_Prefix(struct FString* InChatMessage, struct FString* InPrefix, struct FString* InPrefixShort, bool* bHasPrefix);
	void CreateGameMessage(const struct FText& InGameMessage, bool bIsBanMessage);
	void SetChatMode(bool bIsGroupChat);
	void Remove_Muted_Players_Messages(const struct FTigerPersistentPlayerID& InMutedPlayerId);
	void EnableOptionsMenu();
	void AddAsFriend();
	void InviteToGroup();
	void AddNewMessage(const struct FTigerChatMessage& InChatMessage);
	void FadeOutWindow();
	void FadeInWindow();
	void StartFadeOutTimer();
	void BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void Construct();
	void AddMessage(const struct FTigerChatMessage& InChatMessage);
	void Focus_on_Input_Box();
	void OnMessageNameHovered(const struct FTigerChatMessage& InChatData);
	void OnMessageNameUnhovered();
	void OnOptionsBoxOpened();
	void BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature();
	void BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature();
	void HideOptionsMenu();
	void FadeInBackground();
	void BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature();
	void OnRightClicked();
	void FadeOutBackground();
	void OnSwapChatInputPressed();
	void OnBanStatusChanged(const struct FTigerMuteInfo& InMuteInfo);
	void OnPreMatchStateChanged(const struct FTigerPreMatchStateInfo& PreMatchState);
	void BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void WelcomePlayersInElysium();
	void ExecuteUbergraph_TBP_UI_ChatWindow(int EntryPoint);
	void OnMessageInput__DelegateSignature(const struct FText& MessageText, bool bWriteOnlyToGroupMembers);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
