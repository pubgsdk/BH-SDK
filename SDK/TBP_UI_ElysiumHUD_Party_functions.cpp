// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ElysiumHUD_Party_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UnbindAllPlayerStateEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::UnbindAllPlayerStateEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UnbindAllPlayerStateEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Icons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::Update_Icons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Icons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdatePlayerStates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::UpdatePlayerStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdatePlayerStates"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.On PartyUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::On_PartyUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.On PartyUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerJoiendParty
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPartyId           InPartyId                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FString                 InJoiningPlayerId              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumHUD_Party_C::OnPlayerJoiendParty(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerJoiendParty"));

	struct
	{
		struct FTigerPartyId           InPartyId;
		struct FString                 InJoiningPlayerId;
	} params = {};

	params.InPartyId = InPartyId;
	params.InJoiningPlayerId = InJoiningPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerLeftPArty
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPartyId           InPartyId                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FString                 InDepartingPlayerId            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumHUD_Party_C::OnPlayerLeftPArty(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerLeftPArty"));

	struct
	{
		struct FTigerPartyId           InPartyId;
		struct FString                 InDepartingPlayerId;
	} params = {};

	params.InPartyId = InPartyId;
	params.InDepartingPlayerId = InDepartingPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Cards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::Update_Cards()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Cards"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateIsReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsGroupReady                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ElysiumHUD_Party_C::UpdateIsReady(bool bInIsGroupReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateIsReady"));

	struct
	{
		bool                           bInIsGroupReady;
	} params = {};

	params.bInIsGroupReady = bInIsGroupReady;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.GroupChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::GroupChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.GroupChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnCardLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::OnCardLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnCardLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateLeaderStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumHUD_Party_C::UpdateLeaderStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateLeaderStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Party
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumHUD_Party_C::ExecuteUbergraph_TBP_UI_ElysiumHUD_Party(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Party"));

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
