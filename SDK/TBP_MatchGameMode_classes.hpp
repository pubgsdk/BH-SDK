#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MatchGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MatchGameMode.TBP_MatchGameMode_C
// 0x0034 (0x0BFC - 0x0BC8)
class ATBP_MatchGameMode_C : public ATigerMatchGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BC8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0BD0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ATigerPlayerController*>              ReadyPlayerList;                                          // 0x0BD8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               bHasInitialSpawnExecuted_;                                // 0x0BE8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BE9(0x0007) MISSED OFFSET
	class ATigerMatchGameState*                        MatchGameState;                                           // 0x0BF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RebootWaitStartedAt;                                      // 0x0BF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MatchGameMode.TBP_MatchGameMode_C"));
		return ptr;
	}


	void GetTigerMatchGameState(class ATigerMatchGameState** MatchGameState);
	void GetPostMatchStatsForPlayer(class ATigerPlayerController* PlayerController, struct FTigerMatchStats* GroupMatchStats);
	void ReceiveBeginPlay();
	void BindOnMatchStateChanged();
	void OnMatchStateChanged_Event(ETigerMatchState OldState, ETigerMatchState NewState);
	void ReturnAllPlayersToElysium();
	void StartShutdownSequence();
	void TryRebootingServer();
	void ShowPostMatchScreenOnClients();
	void StartPostMatchFlow();
	void StartReturnToElysiumSequence(class ATigerPlayerController* PlayerController);
	void OnReportMatchResultsCompleted();
	void ExecuteUbergraph_TBP_MatchGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
