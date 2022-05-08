// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GameStateTimer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetNumSpectators
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InNumSpectators                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::SetNumSpectators(int InNumSpectators)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetNumSpectators"));

	struct
	{
		int                            InNumSpectators;
	} params = {};

	params.InNumSpectators = InNumSpectators;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetKillCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Kill_Count                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::SetKillCount(int Kill_Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetKillCount"));

	struct
	{
		int                            Kill_Count;
	} params = {};

	params.Kill_Count = Kill_Count;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.OnMatchRecapSync
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMatchRecapComponent* InMatchRecapComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRecapData         InSyncData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTigerRecapData         InData                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_GameStateTimer_C::OnMatchRecapSync(class UTigerMatchRecapComponent* InMatchRecapComponent, const struct FTigerRecapData& InSyncData, const struct FTigerRecapData& InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.OnMatchRecapSync"));

	struct
	{
		class UTigerMatchRecapComponent* InMatchRecapComponent;
		struct FTigerRecapData         InSyncData;
		struct FTigerRecapData         InData;
	} params = {};

	params.InMatchRecapComponent = InMatchRecapComponent;
	params.InSyncData = InSyncData;
	params.InData = InData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.UpdateMatchRecapBinds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       CurrentPlayerState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayerState*       PreviousPlayerState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::UpdateMatchRecapBinds(class ATigerPlayerState* CurrentPlayerState, class ATigerPlayerState* PreviousPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.UpdateMatchRecapBinds"));

	struct
	{
		class ATigerPlayerState*       CurrentPlayerState;
		class ATigerPlayerState*       PreviousPlayerState;
	} params = {};

	params.CurrentPlayerState = CurrentPlayerState;
	params.PreviousPlayerState = PreviousPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.UpdatePlayerCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InConnectedPlayers             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InAlivePlayers                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::UpdatePlayerCount(int InConnectedPlayers, int InAlivePlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.UpdatePlayerCount"));

	struct
	{
		int                            InConnectedPlayers;
		int                            InAlivePlayers;
	} params = {};

	params.InConnectedPlayers = InConnectedPlayers;
	params.InAlivePlayers = InAlivePlayers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.MoveWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               InNewPosition                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               OutOldPosition                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::MoveWidget(const struct FVector2D& InNewPosition, struct FVector2D* OutOldPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.MoveWidget"));

	struct
	{
		struct FVector2D               InNewPosition;
		struct FVector2D               OutOldPosition;
	} params = {};

	params.InNewPosition = InNewPosition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutOldPosition != nullptr)
		*OutOldPosition = params.OutOldPosition;
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.UpdateWaveNumber
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameStateTimer_C::UpdateWaveNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.UpdateWaveNumber"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.UpdateTimeLeft
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsWaveMoving                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameStateTimer_C::UpdateTimeLeft(bool IsWaveMoving)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.UpdateTimeLeft"));

	struct
	{
		bool                           IsWaveMoving;
	} params = {};

	params.IsWaveMoving = IsWaveMoving;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.NewWaveStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameStateTimer_C::NewWaveStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.NewWaveStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.GetSecondsUntilWaveEnds
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::GetSecondsUntilWaveEnds(float* Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.GetSecondsUntilWaveEnds"));

	struct
	{
		float                          Seconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.GetSpectatorCountVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_GameStateTimer_C::GetSpectatorCountVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.GetSpectatorCountVisibility"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.ShouldShowSpectatorCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_GameStateTimer_C::ShouldShowSpectatorCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.ShouldShowSpectatorCount"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.GetSecondsUntilWaveMovementStarts
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::GetSecondsUntilWaveMovementStarts(float* Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.GetSecondsUntilWaveMovementStarts"));

	struct
	{
		float                          Seconds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameStateTimer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetAlivePlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InPlayerCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::SetAlivePlayers(int InPlayerCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetAlivePlayers"));

	struct
	{
		int                            InPlayerCount;
	} params = {};

	params.InPlayerCount = InPlayerCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetConnectedPlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InConnectedPlayers             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::SetConnectedPlayers(int InConnectedPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetConnectedPlayers"));

	struct
	{
		int                            InConnectedPlayers;
	} params = {};

	params.InConnectedPlayers = InConnectedPlayers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_GameStateTimer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetupDelegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameStateTimer_C::SetupDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.SetupDelegates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.ExecuteUbergraph_TBP_UI_GameStateTimer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameStateTimer_C::ExecuteUbergraph_TBP_UI_GameStateTimer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameStateTimer.TBP_UI_GameStateTimer_C.ExecuteUbergraph_TBP_UI_GameStateTimer"));

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
