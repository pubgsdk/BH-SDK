// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ElysiumPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.SpawnJoinLeaveParticle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ElysiumPlayer_C::SpawnJoinLeaveParticle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.SpawnJoinLeaveParticle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnJoinedParty
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerParty             InParty                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_ElysiumPlayer_C::OnJoinedParty(const struct FTigerParty& InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnJoinedParty"));

	struct
	{
		struct FTigerParty             InParty;
	} params = {};

	params.InParty = InParty;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnGotPlayerState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ElysiumPlayer_C::OnGotPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnGotPlayerState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnLeftParty
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerParty             InParty                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_ElysiumPlayer_C::OnLeftParty(const struct FTigerParty& InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnLeftParty"));

	struct
	{
		struct FTigerParty             InParty;
	} params = {};

	params.InParty = InParty;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ElysiumPlayer_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ElysiumPlayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ExecuteUbergraph_TBP_ElysiumPlayer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ElysiumPlayer_C::ExecuteUbergraph_TBP_ElysiumPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ExecuteUbergraph_TBP_ElysiumPlayer"));

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
