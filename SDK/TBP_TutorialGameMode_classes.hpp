#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TutorialGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TutorialGameMode.TBP_TutorialGameMode_C
// 0x0088 (0x0E80 - 0x0DF8)
class ATBP_TutorialGameMode_C : public ATigerTutorialGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0E00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATigerPlayer*                                Player;                                                   // 0x0E08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      ObjectiveActor;                                           // 0x0E10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_Tutorial_ObjectiveTracker_C*         ObjectiveTracker;                                         // 0x0E18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_TutorialSubtitles_C*                    Subtitle_Widget;                                          // 0x0E20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bTurnedOnPingSystem;                                      // 0x0E28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E29(0x0007) MISSED OFFSET
	class UTBP_UI_Black_C*                             BlackScreen;                                              // 0x0E30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UAkAudioEvent*>                       Beat1VO;                                                  // 0x0E38(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class UAkAudioEvent*>                       Beat2VO;                                                  // 0x0E48(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class UAkAudioEvent*>                       Beat3VO;                                                  // 0x0E58(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                NrOfObjectives;                                           // 0x0E68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E6C(0x0004) MISSED OFFSET
	TArray<class UClass* /*UTBP_PingBase_C*/>          PingClasses;                                              // 0x0E70(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_TutorialGameMode.TBP_TutorialGameMode_C"));
		return ptr;
	}


	bool IsObjectiveActive(const struct FName& InObjectiveIdentifier);
	class UAkAudioEvent* PlayVoiceOver_BlueprintImplementation(TSoftObjectPtr<class UAkAudioEvent> InDialogueEvent, const struct FText& InSubtitles, const struct FScriptDelegate& InPostEventCallback);
	void Ping_BlueprintImplementation(const struct FVector& InWorldLocation, TSoftClassPtr<class UClass> InPingClass, class AActor* InContextualActor, const struct FVector& InLocalOffset);
	void HideContextualHelp_BlueprintImplementation(TSoftClassPtr<class UClass> InContextualHelp);
	void ShowContextualHelp_BlueprintImplementation(TSoftClassPtr<class UClass> InContextualHelp);
	void CompleteObjective_BlueprintImplementation(const struct FName& InObjectiveIdentifier);
	void AddNewObjective_BlueprintImplementation(const struct FName& InObjectiveIdentifier, const struct FText& InObjectiveText, const struct FName& InActionToEmbed, const struct FName& InGamepadOverrideActionToEmbed, bool InHasAdditionalKeyboardInput, const struct FKey& InAdditionalKeyboardInput, bool InHasAdditionalGamepadInput, const struct FKey& InAdditionalGamepadInput, bool InOverrideImage, const struct FName& InImageToOverride, bool InPersistantObjective, const struct FName& InGamepadImageToOverride);
	void LockPlayer();
	void UnlockPlayer();
	void RemoveSubtitles(class UAkAudioEvent* InDialogueEvent);
	void RemovePing();
	void HideUI();
	void Update_Subtitle(const struct FText& SubText);
	void ReceiveBeginPlay();
	void NextFrame();
	void StreamingFinished();
	void K2_OnRestartPlayer(class AController* NewPlayer);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnIntroComplete();
	void OnTitleScreenClosed();
	void ExecuteUbergraph_TBP_TutorialGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
