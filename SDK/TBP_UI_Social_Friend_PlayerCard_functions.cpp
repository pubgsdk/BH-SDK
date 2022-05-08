// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Friend_PlayerCard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnPlayerNameChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnPlayerNameChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.UpdateGroupStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::UpdateGroupStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.UpdateGroupStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.CouldInviteToParty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCouldInvite                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_Friend_PlayerCard_C::CouldInviteToParty(bool* bCouldInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.CouldInviteToParty"));

	struct
	{
		bool                           bCouldInvite;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bCouldInvite != nullptr)
		*bCouldInvite = params.bCouldInvite;
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnExtra
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::OnExtra()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnExtra"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnAdd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::OnAdd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnAdd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnLocationChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InLocation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_PlayerCard_C::OnLocationChanged(const struct FString& InLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnLocationChanged"));

	struct
	{
		struct FString                 InLocation;
	} params = {};

	params.InLocation = InLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.InviteToParty
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::InviteToParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.InviteToParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.RemoveFriend
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::RemoveFriend()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.RemoveFriend"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnIsInPartyChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsInParty                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_Friend_PlayerCard_C::OnIsInPartyChanged(bool bInIsInParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnIsInPartyChanged"));

	struct
	{
		bool                           bInIsInParty;
	} params = {};

	params.bInIsInParty = bInIsInParty;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.UpdateRepresentedPlayerInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::UpdateRepresentedPlayerInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.UpdateRepresentedPlayerInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.SetupCard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::SetupCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.SetupCard"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_PlayerCard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnStateAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_PlayerCard_C::OnStateAdded(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnStateAdded"));

	struct
	{
		class ATigerPlayerState*       InPlayerState;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnOnlineStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInOnline                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_Friend_PlayerCard_C::OnOnlineStatusChanged(bool bInOnline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnOnlineStatusChanged"));

	struct
	{
		bool                           bInOnline;
	} params = {};

	params.bInOnline = bInOnline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_PlayerCard_C::ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard"));

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
