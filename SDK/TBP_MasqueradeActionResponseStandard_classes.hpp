#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MasqueradeActionResponseStandard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C
// 0x02D0 (0x0310 - 0x0040)
class UTBP_MasqueradeActionResponseStandard_C : public UTigerMasqueradeActionResponse
{
public:
	TMap<ETigerAIPlayerAction, float>                  CivPlayerFearValues;                                      // 0x0040(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerAIPlayerAction, float>                  CivPlayerDisciplineFearValues;                            // 0x0090(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerAIPlayerAction, float>                  GuardPlayerFearValues;                                    // 0x00E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerAIPlayerAction, float>                  GuardPlayerDisciplineFearValues;                          // 0x0130(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerAIPlayerAction, float>                  EntityPlayerFearValues;                                   // 0x0180(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerAIPlayerAction, float>                  EntityPlayerDisciplineFearValues;                         // 0x01D0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerAIPlayerAction, float>                  MasqueradeValues;                                         // 0x0220(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerAIPlayerAction, float>                  DisciplineMasqueradeValues;                               // 0x0270(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerAIPlayerAction, float>                  MasqueradeValuesJudge;                                    // 0x02C0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C"));
		return ptr;
	}


	bool KilledNonCivilian(ETigerAIPlayerAction PlayerAction, class ATigerBaseNPC* NPC);
	float GetPlayerMasqueradePointsForAction(class ATigerNPC* InNpc, class ATigerPlayer* InTigerPlayer, const struct FTigerAIPlayerAction& InPlayerAction);
	void IsActionVampiricMobility(ETigerAIPlayerAction Action, bool* IsMobility);
	void GetMasqueradeValueFromJudge(class ATigerJudge* Judge, class ATigerPlayer* Player, struct FTigerAIPlayerAction* Action, float* Value, bool* FoundValue);
	void CheckFearLimitsFunction(float CurrentFearValue, class ATigerAIController* AI, ETigerAIMasqueradeState* NewMasqueradeState);
	void ScaleValueByDistance(float Unscaled_Value, class ATigerPlayer* Player, class ATigerBaseNPC* NPC, bool UseMasqueradeScaling, bool ShouldScale, const struct FVector& ActionLocation, float* ScaledValue);
	void GetMasqueradeValue(class ATigerBaseNPC* NPC, class ATigerPlayer* Player, struct FTigerAIPlayerAction* Action, float* Value, bool* FoundValue);
	TMap<ETigerAIPlayerAction, float> GetFearValues(ETigerAIPlayerAction Action, class ATigerAIController** AI);
	void GetMasqueradePointsForFeedingAction(ETigerAIPlayerAction Player_Action, float* MasqueradePoints);
	void AddFearPoints(class ATigerPlayer* Player, class ATigerAIController** AI, struct FTigerAIPlayerAction* PlayerAction, float* FearValue, float* Added_Fear_Value);
	ETigerAIMasqueradeState OnReactToPlayerAction(class ATigerAIController* TigerAIController, class ATigerPlayer* TigerPlayer, const struct FTigerAIPlayerAction& PlayerAction, ETigerAIMasqueradeState CurrentState, float* FearValue);
	void GetFearValueThresholds(class ATigerAIController* AI, float* Threatened, float* Suspicious);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
