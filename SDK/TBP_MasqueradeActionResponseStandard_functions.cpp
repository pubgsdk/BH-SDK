// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MasqueradeActionResponseStandard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.KilledNonCivilian
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerAIPlayerAction           PlayerAction                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerBaseNPC*           NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_MasqueradeActionResponseStandard_C::KilledNonCivilian(ETigerAIPlayerAction PlayerAction, class ATigerBaseNPC* NPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.KilledNonCivilian"));

	struct
	{
		ETigerAIPlayerAction           PlayerAction;
		class ATigerBaseNPC*           NPC;
		bool                           ReturnValue;
	} params = {};

	params.PlayerAction = PlayerAction;
	params.NPC = NPC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetPlayerMasqueradePointsForAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerNPC*               InNpc                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayer*            InTigerPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerAIPlayerAction    InPlayerAction                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTBP_MasqueradeActionResponseStandard_C::GetPlayerMasqueradePointsForAction(class ATigerNPC* InNpc, class ATigerPlayer* InTigerPlayer, const struct FTigerAIPlayerAction& InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetPlayerMasqueradePointsForAction"));

	struct
	{
		class ATigerNPC*               InNpc;
		class ATigerPlayer*            InTigerPlayer;
		struct FTigerAIPlayerAction    InPlayerAction;
		float                          ReturnValue;
	} params = {};

	params.InNpc = InNpc;
	params.InTigerPlayer = InTigerPlayer;
	params.InPlayerAction = InPlayerAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.IsActionVampiricMobility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerAIPlayerAction           Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsMobility                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_MasqueradeActionResponseStandard_C::IsActionVampiricMobility(ETigerAIPlayerAction Action, bool* IsMobility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.IsActionVampiricMobility"));

	struct
	{
		ETigerAIPlayerAction           Action;
		bool                           IsMobility;
	} params = {};

	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsMobility != nullptr)
		*IsMobility = params.IsMobility;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValueFromJudge
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerAIPlayerAction    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATigerJudge*             Judge                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayer*            Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FoundValue                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_MasqueradeActionResponseStandard_C::GetMasqueradeValueFromJudge(class ATigerJudge* Judge, class ATigerPlayer* Player, struct FTigerAIPlayerAction* Action, float* Value, bool* FoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValueFromJudge"));

	struct
	{
		struct FTigerAIPlayerAction    Action;
		class ATigerJudge*             Judge;
		class ATigerPlayer*            Player;
		float                          Value;
		bool                           FoundValue;
	} params = {};

	params.Judge = Judge;
	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Action != nullptr)
		*Action = params.Action;
	if (Value != nullptr)
		*Value = params.Value;
	if (FoundValue != nullptr)
		*FoundValue = params.FoundValue;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.CheckFearLimitsFunction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentFearValue               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerAIController*      AI                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerAIMasqueradeState        NewMasqueradeState             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MasqueradeActionResponseStandard_C::CheckFearLimitsFunction(float CurrentFearValue, class ATigerAIController* AI, ETigerAIMasqueradeState* NewMasqueradeState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.CheckFearLimitsFunction"));

	struct
	{
		float                          CurrentFearValue;
		class ATigerAIController*      AI;
		ETigerAIMasqueradeState        NewMasqueradeState;
	} params = {};

	params.CurrentFearValue = CurrentFearValue;
	params.AI = AI;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewMasqueradeState != nullptr)
		*NewMasqueradeState = params.NewMasqueradeState;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.ScaleValueByDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Unscaled_Value                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayer*            Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerBaseNPC*           NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UseMasqueradeScaling           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ShouldScale                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 ActionLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ScaledValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MasqueradeActionResponseStandard_C::ScaleValueByDistance(float Unscaled_Value, class ATigerPlayer* Player, class ATigerBaseNPC* NPC, bool UseMasqueradeScaling, bool ShouldScale, const struct FVector& ActionLocation, float* ScaledValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.ScaleValueByDistance"));

	struct
	{
		float                          Unscaled_Value;
		class ATigerPlayer*            Player;
		class ATigerBaseNPC*           NPC;
		bool                           UseMasqueradeScaling;
		bool                           ShouldScale;
		struct FVector                 ActionLocation;
		float                          ScaledValue;
	} params = {};

	params.Unscaled_Value = Unscaled_Value;
	params.Player = Player;
	params.NPC = NPC;
	params.UseMasqueradeScaling = UseMasqueradeScaling;
	params.ShouldScale = ShouldScale;
	params.ActionLocation = ActionLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ScaledValue != nullptr)
		*ScaledValue = params.ScaledValue;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerAIPlayerAction    Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATigerBaseNPC*           NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayer*            Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FoundValue                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_MasqueradeActionResponseStandard_C::GetMasqueradeValue(class ATigerBaseNPC* NPC, class ATigerPlayer* Player, struct FTigerAIPlayerAction* Action, float* Value, bool* FoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValue"));

	struct
	{
		struct FTigerAIPlayerAction    Action;
		class ATigerBaseNPC*           NPC;
		class ATigerPlayer*            Player;
		float                          Value;
		bool                           FoundValue;
	} params = {};

	params.NPC = NPC;
	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Action != nullptr)
		*Action = params.Action;
	if (Value != nullptr)
		*Value = params.Value;
	if (FoundValue != nullptr)
		*FoundValue = params.FoundValue;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValues
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerAIPlayerAction           Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerAIController*      AI                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TMap<ETigerAIPlayerAction, float> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TMap<ETigerAIPlayerAction, float> UTBP_MasqueradeActionResponseStandard_C::GetFearValues(ETigerAIPlayerAction Action, class ATigerAIController** AI)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValues"));

	struct
	{
		ETigerAIPlayerAction           Action;
		class ATigerAIController*      AI;
		TMap<ETigerAIPlayerAction, float> ReturnValue;
	} params = {};

	params.Action = Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AI != nullptr)
		*AI = params.AI;

	return params.ReturnValue;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradePointsForFeedingAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerAIPlayerAction           Player_Action                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MasqueradePoints               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MasqueradeActionResponseStandard_C::GetMasqueradePointsForFeedingAction(ETigerAIPlayerAction Player_Action, float* MasqueradePoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradePointsForFeedingAction"));

	struct
	{
		ETigerAIPlayerAction           Player_Action;
		float                          MasqueradePoints;
	} params = {};

	params.Player_Action = Player_Action;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MasqueradePoints != nullptr)
		*MasqueradePoints = params.MasqueradePoints;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.AddFearPoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerAIController*      AI                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerAIPlayerAction    PlayerAction                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          FearValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayer*            Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Added_Fear_Value               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MasqueradeActionResponseStandard_C::AddFearPoints(class ATigerPlayer* Player, class ATigerAIController** AI, struct FTigerAIPlayerAction* PlayerAction, float* FearValue, float* Added_Fear_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.AddFearPoints"));

	struct
	{
		class ATigerAIController*      AI;
		struct FTigerAIPlayerAction    PlayerAction;
		float                          FearValue;
		class ATigerPlayer*            Player;
		float                          Added_Fear_Value;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AI != nullptr)
		*AI = params.AI;
	if (PlayerAction != nullptr)
		*PlayerAction = params.PlayerAction;
	if (FearValue != nullptr)
		*FearValue = params.FearValue;
	if (Added_Fear_Value != nullptr)
		*Added_Fear_Value = params.Added_Fear_Value;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.OnReactToPlayerAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerAIController*      TigerAIController              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayer*            TigerPlayer                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerAIPlayerAction    PlayerAction                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerAIMasqueradeState        CurrentState                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          FearValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerAIMasqueradeState        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ETigerAIMasqueradeState UTBP_MasqueradeActionResponseStandard_C::OnReactToPlayerAction(class ATigerAIController* TigerAIController, class ATigerPlayer* TigerPlayer, const struct FTigerAIPlayerAction& PlayerAction, ETigerAIMasqueradeState CurrentState, float* FearValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.OnReactToPlayerAction"));

	struct
	{
		class ATigerAIController*      TigerAIController;
		class ATigerPlayer*            TigerPlayer;
		struct FTigerAIPlayerAction    PlayerAction;
		ETigerAIMasqueradeState        CurrentState;
		float                          FearValue;
		ETigerAIMasqueradeState        ReturnValue;
	} params = {};

	params.TigerAIController = TigerAIController;
	params.TigerPlayer = TigerPlayer;
	params.PlayerAction = PlayerAction;
	params.CurrentState = CurrentState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FearValue != nullptr)
		*FearValue = params.FearValue;

	return params.ReturnValue;
}


// Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValueThresholds
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATigerAIController*      AI                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Threatened                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Suspicious                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MasqueradeActionResponseStandard_C::GetFearValueThresholds(class ATigerAIController* AI, float* Threatened, float* Suspicious)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValueThresholds"));

	struct
	{
		class ATigerAIController*      AI;
		float                          Threatened;
		float                          Suspicious;
	} params = {};

	params.AI = AI;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Threatened != nullptr)
		*Threatened = params.Threatened;
	if (Suspicious != nullptr)
		*Suspicious = params.Suspicious;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
