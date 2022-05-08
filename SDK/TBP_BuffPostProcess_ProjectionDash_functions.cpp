// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BuffPostProcess_ProjectionDash_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BuffPostProcess_ProjectionDash_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_ProjectionDash_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_ProjectionDash_C::ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash"));

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


// Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.Tick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BuffPostProcess_ProjectionDash_C::Tick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.Tick__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
