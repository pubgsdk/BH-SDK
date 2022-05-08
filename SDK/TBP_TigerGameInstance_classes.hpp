#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TigerGameInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TigerGameInstance.TBP_TigerGameInstance_C
// 0x0238 (0x0BD8 - 0x09A0)
class UTBP_TigerGameInstance_C : public UTigerGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_JoinElysiumScreen_C*                 JoinElysiumScreenWB;                                      // 0x09A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_LobbyMenu_C*                         LobbyMenuWB;                                              // 0x09B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_HostMenu_C*                          HostMenuWB;                                               // 0x09B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_FindGameFailedMenu_C*                FindGameFailedMenuWB;                                     // 0x09C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                MaxPlayers;                                               // 0x09C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	struct FText                                       ServerName;                                               // 0x09D0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance)
	class UTBP_UI_MatchMenu_C*                         MatchMenuWB;                                              // 0x09E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     PlayerSettingsSave;                                       // 0x09F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	bool                                               bMainMenuIsOpen;                                          // 0x0A00(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0A01(0x0007) MISSED OFFSET
	class UTBP_UI_JoinGameMenu_C*                      JoinGameMenuWB;                                           // 0x0A08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_GroupInvitationList_C*               InvitationListWB;                                         // 0x0A10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_WinScreen_C*                         WinScreenWB;                                              // 0x0A18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_ServerSelection_C*                   ServerSelectionMenuWB;                                    // 0x0A20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnLoadingScreenFullyOpaque;                               // 0x0A28(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnJoinGameCountdownBegin;                                 // 0x0A38(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UTBP_UI_TutorialMenu_C*                      TutorialMenuWB;                                           // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_JoinPartyElysiumScreen_C*            JoinPartyElysiumScreenWB;                                 // 0x0A50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                      ErrorStringTable;                                         // 0x0A58(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FString                                     TraveledFrom;                                             // 0x0A80(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FTigerBpFindSessionSelectedSession          SelectedSession;                                          // 0x0A90(0x0110) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               MenuMusicEvent;                                           // 0x0BA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_Tutorial_IntroText_C*                TutorialIntroWB;                                          // 0x0BA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnTitleScreenFadeOutStarted;                              // 0x0BB0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UTBP_UI_VoiceChatPopup_C*                    VoiceChatPopup;                                           // 0x0BC0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnForceCloseMainMenu;                                     // 0x0BC8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_TigerGameInstance.TBP_TigerGameInstance_C"));
		return ptr;
	}


	void CheckMainMenuConditionsAndForceClose();
	void AddBlackLoadingScreen();
	void GetIngameMenuUI(class UTigerIngameMenuWidget** IngameMenuUI);
	struct FLinearColor GetUIColor(ETigerUIColor UIColor, ETigerColourSpace ColorSpace);
	bool IsAllowedToOpenMainMenu();
	void GetJoinErrorText(struct FText* OutErrorText, bool* bHadError);
	void GetErrorStringTableId(struct FName* TableId);
	void IsInMatch(bool* InMatch);
	void CreateLoadingScreenWidgetBP(class UClass* /*UTigerLoadingScreenUI*/ InWidgetClass, float InFadeInTime, class UTigerLoadingScreenAsset* InLoadingScreenAsset, class UTigerLoadingScreenUI** LoadingScreen);
	void IsElysiumGameMenuOpen(bool* bIsOpen);
	void CreateJoinGameMenu(class UTBP_UI_JoinGameMenu_C** Output_Get);
	void CloseMenuWidget(class UTigerMenuWidget* Widget);
	void OpenMenuWidget(class UTigerMenuWidget* Widget, int ZOrder);
	void TravelErrorToString(TEnumAsByte<ETravelFailure> FailureType, struct FString* OutString);
	void NetErrorToString(TEnumAsByte<ENetworkFailure> FailureType, struct FString* OutString);
	void OnPreLoadingDone_CA1249C244C7069F7709069D760517F5();
	void OnEnterElysium_CA1249C244C7069F7709069D760517F5();
	void OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5();
	void OnLaunchTutorial_CA1249C244C7069F7709069D760517F5();
	void SettingSynced_F84C62744FD1A855B9C1AD9954A00F97();
	void OnFailed_1E6BE8B346DD94D56C97728AB4E9C7C5();
	void OnSuccess_1E6BE8B346DD94D56C97728AB4E9C7C5(const struct FTigerBpFindSessionResultList& Result);
	void OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters);
	void OpenLobbyMenu();
	void ShowHostMenu();
	void OnLegalDocumentAcceptanceResult(TArray<ETigerLegalDocumentType> InDocumentTypes);
	void OnGetUserPrivileges();
	void OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated);
	void LaunchElysiumServer(int NumberOfPlayers, bool EnableLan_, const struct FText& ServerName);
	void OnCharacterSelected();
	void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);
	void OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo);
	void HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);
	void EnterBootFlow();
	void ToggleLobbyMeny();
	void CloseLobbyMenu();
	void CloseFindGameFailedMenu();
	void OpenFindElysiumMenu(bool bStartSearch, bool bStartHidden, bool bFirstTime);
	void CloseFindElysiumMenu();
	void OpenMatchMenu();
	void OpenLoadingScreen(TSoftClassPtr<class UClass> TigerGameMode);
	void CloseLoadingScreen();
	void ReturnToCharacterSelection();
	void OpenJoinGameMenu(const struct FTigerBpFindSessionSelectedSession& SessionToJoin);
	void CloseJoinGameMenu();
	void ReceiveInvitation(const struct FTigerGroupInvitation& Invitation, class ATigerPlayerState* Inviter);
	void RemoveInvitationList();
	void OpenServerSelectionMenu(const struct FTigerBpFindSessionResultList& Sessions);
	void CloseServerSelectionMenu();
	void OpenFindGameFailedMenu();
	void OnSelected(const struct FTigerBpFindSessionSelectedSession& Session);
	void FadeInLoadingScreen(TSoftClassPtr<class UClass> TigerGameMode);
	void FadeOutLoadingScreen();
	void OnInitialLevelStreamingCompleted();
	void OnClosedJoinElysium(const struct FString& ErrorString);
	void OnSuccessfulJoin();
	void ReturnToBootStartMapTransfer();
	void PostLoadMapWithWorld();
	void OnGetValidGameVersionResult(ETigerVersionIsValidResult Result);
	void OnIgnored_Dispatch_Event_1();
	void FindMatch(const struct FString& InGameModeId, int InGameModeIndex);
	void RetryPostLoadMap();
	void CancelJoinGame();
	void ReceiveInit();
	void OpenTutorialMenu();
	void CloseTutorialMenu();
	void CreateLoadingScreenWidget(float InFadeInTime, class UTigerLoadingScreenAsset* InLoadingScreenAsset, class UClass* /*UTigerLoadingScreenUI*/ InWidgetClass);
	void OnTransferLoadingScreenOpaque();
	void TransferFromMatch();
	void OnJoinPartyElysiumFailed(const struct FString& ErrorString);
	void CloseJoinPartyElysiumMenu();
	void OnJoinPartyElysiumSuccess();
	void OnTransferToPartyElysiumFadeComplete();
	void OpenJoinPartyElysiumScreen();
	void KickToLoginScreen();
	void OnLoadingScreenFullyOpaque_Event();
	void OnCreateGameSessionFailed();
	void JoinSessionThroughUrl(const struct FString& SessionURL);
	void ShowTitleScreen();
	void DispatchTitleScreenClosed();
	void ShowMoviesAndTitleScreen();
	void Cheat_QuitTutorial();
	void ShowWinScreen();
	void Transfer_from_Match();
	void CloseMatchMenu();
	void TitleScreenFadeOutStarted();
	void ToggleTutorialMenu();
	void ReturnToElysium();
	void CloseWinScreen();
	void ShowPostMatchScreen(bool bInShouldLeaveParty);
	void ToggleMatchMeny();
	void ReturnToBootWithError(const struct FString& InError);
	void TransferToPartyElysium();
	void LoadingToTuorialFullyOpaque();
	void RetryTutorial();
	void GameStateSet();
	void EnableVoipPopups(bool InEnable);
	void TransferToElysium();
	void WaitForJoinParty();
	void OnJoinedParty(const struct FTigerParty& InParty);
	void OnJoinPartyFailed(ETigerJoinedPartyFailedReason InJoinedPartyFailedReason);
	void ReturnToCharacterSelectionDispatcher();
	void OnSessionsFound(const struct FTigerBpFindSessionResultList& ResultsList);
	void TravelToTutorial();
	void ExecuteUbergraph_TBP_TigerGameInstance(int EntryPoint);
	void OnForceCloseMainMenu__DelegateSignature();
	void OnTitleScreenFadeOutStarted__DelegateSignature();
	void OnJoinGameCountdownBegin__DelegateSignature();
	void OnLoadingScreenFullyOpaque__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
