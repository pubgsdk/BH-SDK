// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerCard_Minimal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.UpdatePlayerDataSubscription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PreviousID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CurrentID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_Minimal_C::UpdatePlayerDataSubscription(int PreviousID, int CurrentID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.UpdatePlayerDataSubscription"));

	struct
	{
		int                            PreviousID;
		int                            CurrentID;
	} params = {};

	params.PreviousID = PreviousID;
	params.CurrentID = CurrentID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.GetDataFromID
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerPlayerStateGameData OutData                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_PlayerCard_Minimal_C::GetDataFromID(bool* IsValid, struct FTigerPlayerStateGameData* OutData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.GetDataFromID"));

	struct
	{
		bool                           IsValid;
		struct FTigerPlayerStateGameData OutData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.UpdateOnlineStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_Minimal_C::UpdateOnlineStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.UpdateOnlineStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.UpdateRepresentedPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InRepresentedPlayer            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_Minimal_C::UpdateRepresentedPlayer(int InRepresentedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.UpdateRepresentedPlayer"));

	struct
	{
		int                            InRepresentedPlayer;
	} params = {};

	params.InRepresentedPlayer = InRepresentedPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PlayerCard_Minimal_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.PreConstruct"));

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


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_Minimal_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Tick"));

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


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_Minimal_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_Minimal_C::Hover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Hover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.UnHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_Minimal_C::UnHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.UnHover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Press
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_Minimal_C::Press()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Press"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Release
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_Minimal_C::Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Release"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Click
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_Minimal_C::Click()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.Click"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.GameStateDataUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_Minimal_C::GameStateDataUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.GameStateDataUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.ExecuteUbergraph_TBP_UI_PlayerCard_Minimal
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_Minimal_C::ExecuteUbergraph_TBP_UI_PlayerCard_Minimal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard_Minimal.TBP_UI_PlayerCard_Minimal_C.ExecuteUbergraph_TBP_UI_PlayerCard_Minimal"));

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
