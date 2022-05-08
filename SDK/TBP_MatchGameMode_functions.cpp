// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MatchGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_MatchGameMode.TBP_MatchGameMode_C.GetTigerMatchGameState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATigerMatchGameState*    MatchGameState                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_MatchGameMode_C::GetTigerMatchGameState(class ATigerMatchGameState** MatchGameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.GetTigerMatchGameState"));

	struct
	{
		class ATigerMatchGameState*    MatchGameState;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MatchGameState != nullptr)
		*MatchGameState = params.MatchGameState;
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.GetPostMatchStatsForPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerMatchStats        GroupMatchStats                (CPF_Parm, CPF_OutParm)

void ATBP_MatchGameMode_C::GetPostMatchStatsForPlayer(class ATigerPlayerController* PlayerController, struct FTigerMatchStats* GroupMatchStats)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.GetPostMatchStatsForPlayer"));

	struct
	{
		class ATigerPlayerController*  PlayerController;
		struct FTigerMatchStats        GroupMatchStats;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GroupMatchStats != nullptr)
		*GroupMatchStats = params.GroupMatchStats;
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_MatchGameMode_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.BindOnMatchStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_MatchGameMode_C::BindOnMatchStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.BindOnMatchStateChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.OnMatchStateChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerMatchState               OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerMatchState               NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_MatchGameMode_C::OnMatchStateChanged_Event(ETigerMatchState OldState, ETigerMatchState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.OnMatchStateChanged_Event"));

	struct
	{
		ETigerMatchState               OldState;
		ETigerMatchState               NewState;
	} params = {};

	params.OldState = OldState;
	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.ReturnAllPlayersToElysium
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_MatchGameMode_C::ReturnAllPlayersToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.ReturnAllPlayersToElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.StartShutdownSequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_MatchGameMode_C::StartShutdownSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.StartShutdownSequence"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.TryRebootingServer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_MatchGameMode_C::TryRebootingServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.TryRebootingServer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.ShowPostMatchScreenOnClients
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_MatchGameMode_C::ShowPostMatchScreenOnClients()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.ShowPostMatchScreenOnClients"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.StartPostMatchFlow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_MatchGameMode_C::StartPostMatchFlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.StartPostMatchFlow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.StartReturnToElysiumSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_MatchGameMode_C::StartReturnToElysiumSequence(class ATigerPlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.StartReturnToElysiumSequence"));

	struct
	{
		class ATigerPlayerController*  PlayerController;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.OnReportMatchResultsCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_MatchGameMode_C::OnReportMatchResultsCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.OnReportMatchResultsCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchGameMode.TBP_MatchGameMode_C.ExecuteUbergraph_TBP_MatchGameMode
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_MatchGameMode_C::ExecuteUbergraph_TBP_MatchGameMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchGameMode.TBP_MatchGameMode_C.ExecuteUbergraph_TBP_MatchGameMode"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
