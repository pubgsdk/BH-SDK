#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MatchHud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MatchHud.TBP_MatchHud_C
// 0x00D8 (0x0638 - 0x0560)
class ATBP_MatchHud_C : public ATigerMatchHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_PlayerDamage_C*                      PlayerDamage;                                             // 0x0570(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_GameStateTimer_C*                    GameStateTimer;                                           // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_HitMarker_C*                         HitMarker;                                                // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                PreSpawnStateIndex;                                       // 0x0588(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UTigerScreenTransition*                      SpawnTransition;                                          // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_InWorldIcons_C*                      InWorldIcons;                                             // 0x0598(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerWidget*                                SpectatorWidget;                                          // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_VFX_Tutorial_Container_C*            TutorialVFX;                                              // 0x05A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerScreenTransition*                      TransitionUI;                                             // 0x05B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerTeamViewUI*                            TeamViewUI;                                               // 0x05B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                        CountDownWidgetClass;                                     // 0x05C0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                        TutorialVfxClass;                                         // 0x05E8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bEnableMatchIntros;                                       // 0x0610(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0611(0x0007) MISSED OFFSET
	class UClass* /*UTigerSimpleTextPrompt*/           Downed_Player_Prompt;                                     // 0x0618(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                PromptExperiedGainedDowned;                               // 0x0620(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                PromptExperiedGainedEliminated;                           // 0x0624(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       MatchIntroAnimation;                                      // 0x0628(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_MatchRankProgress_C*                 MatchRankProgress;                                        // 0x0630(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MatchHud.TBP_MatchHud_C"));
		return ptr;
	}


	void CreateTutorialVfxWidget();
	void ShowCountdownWidget();
	void InitMapInventoryOptions(class ATigerPlayerController* InPlayerController);
	void OpenTeamView();
	void HandlePreMatchStateChange(const struct FTigerPreMatchStateInfo& InPreMatchState);
	void CloseTeamView();
	void CloseAllPreMatchScreens();
	void CloseSpawnSelectionScreen();
	void ShowSpawnSelection(const struct FTigerPreMatchStateInfo& InNewPreMatchStateInfo);
	void CreateMusicManager();
	void RemoveLoadingScreen();
	void CloseArchetypeSelect(bool* bDidClose);
	void OpenArchetypeSelect(int PreGameStateEndTime);
	bool IsPreSpawnBackgroundOpen();
	void RemoveSpawnTransition();
	void StartSpawnTransition();
	void EndPreSpawnState();
	void DisableMouseInput();
	void EnableMouseInput();
	void IncrementPreSpawnState();
	void UserConstructionScript();
	void OnLoaded_EE3805154172E42FB6331C8DC884C4DF(class UClass* /*UObject*/ Loaded);
	void ReceiveBeginPlay();
	void ShowOpeningAnimatic();
	void OnPersistentPlayerInitialisedEvent(class ATigerPlayerController* PlayerController);
	void OnNextFrame();
	void OnPawnPossessed();
	void OnTookDamage(const struct FTigerDamageSource& DamageSource);
	void OnBecameSpectator();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnEndedSpectator();
	void CreateTransitionUI(class UClass* /*UTigerScreenTransition*/ InWidgetClass);
	void TransitionCleanup();
	void OnPreMatchWidgetClassesLoaded();
	void OnStartMatchAssetsLoaded();
	void OnSpawnTransitionInFinished();
	void LoadTutorialVfxWidgetAsync();
	void HideOnScreenUI();
	void OnGainedSeasonExperience(ETigerPlayerEvent InEvent, int InReceivedExperience, int InExperienceGained, class ATigerCharacter* InEventTiedCharacter);
	void PreMatchStateChanged(const struct FTigerPreMatchStateInfo& InNewPreMatchState);
	void ExecuteUbergraph_TBP_MatchHud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
