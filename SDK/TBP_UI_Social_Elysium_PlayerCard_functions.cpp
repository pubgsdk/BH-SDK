// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Elysium_PlayerCard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.OnExtra
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_PlayerCard_C::OnExtra()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.OnExtra"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.CouldInviteToParty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCouldInvite                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_Elysium_PlayerCard_C::CouldInviteToParty(bool* bCouldInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.CouldInviteToParty"));

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


// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.InviteToParty
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_PlayerCard_C::InviteToParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.InviteToParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.SendFriendRequest
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_PlayerCard_C::SendFriendRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.SendFriendRequest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.UpdateGroupStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_PlayerCard_C::UpdateGroupStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.UpdateGroupStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_PlayerCard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.OnIsInPartyChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsInParty                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_Elysium_PlayerCard_C::OnIsInPartyChanged(bool bInIsInParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.OnIsInPartyChanged"));

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


// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.UpdateRepresentedPlayerInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_PlayerCard_C::UpdateRepresentedPlayerInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.UpdateRepresentedPlayerInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_Elysium_PlayerCard
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Elysium_PlayerCard_C::ExecuteUbergraph_TBP_UI_Social_Elysium_PlayerCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_Elysium_PlayerCard"));

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
