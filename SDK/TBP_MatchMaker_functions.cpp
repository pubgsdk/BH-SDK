// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MatchMaker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_MatchMaker_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MatchMaker_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveEndPlay"));

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


// Function TBP_MatchMaker.TBP_MatchMaker_C.OnCountdownBegin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_MatchMaker_C::OnCountdownBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchMaker.TBP_MatchMaker_C.OnCountdownBegin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchMaker.TBP_MatchMaker_C.OnTitleScreenClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_MatchMaker_C::OnTitleScreenClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchMaker.TBP_MatchMaker_C.OnTitleScreenClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MatchMaker.TBP_MatchMaker_C.ExecuteUbergraph_TBP_MatchMaker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MatchMaker_C::ExecuteUbergraph_TBP_MatchMaker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MatchMaker.TBP_MatchMaker_C.ExecuteUbergraph_TBP_MatchMaker"));

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
