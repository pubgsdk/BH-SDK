// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Enraged_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Enraged.TBP_Enraged_C.PlayEnrageAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Enraged_C::PlayEnrageAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Enraged.TBP_Enraged_C.PlayEnrageAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Enraged.TBP_Enraged_C.StopEnrageAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Enraged_C::StopEnrageAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Enraged.TBP_Enraged_C.StopEnrageAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Enraged.TBP_Enraged_C.OnRegenStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Enraged_C::OnRegenStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Enraged.TBP_Enraged_C.OnRegenStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Enraged.TBP_Enraged_C.OnRegenStopped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Enraged_C::OnRegenStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Enraged.TBP_Enraged_C.OnRegenStopped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Enraged.TBP_Enraged_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Enraged_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Enraged.TBP_Enraged_C.ReceiveEndPlay"));

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


// Function TBP_Enraged.TBP_Enraged_C.ExecuteUbergraph_TBP_Enraged
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Enraged_C::ExecuteUbergraph_TBP_Enraged(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Enraged.TBP_Enraged_C.ExecuteUbergraph_TBP_Enraged"));

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
