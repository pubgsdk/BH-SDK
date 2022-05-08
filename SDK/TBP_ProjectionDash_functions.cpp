// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ProjectionDash_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_ProjectionDash_C::OnDashStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashEnd
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_ProjectionDash_C::OnDashEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDash.TBP_ProjectionDash_C.UpdateFocusPoint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ProjectionDash_C::UpdateFocusPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDash.TBP_ProjectionDash_C.UpdateFocusPoint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDash.TBP_ProjectionDash_C.ExecuteUbergraph_TBP_ProjectionDash
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ProjectionDash_C::ExecuteUbergraph_TBP_ProjectionDash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDash.TBP_ProjectionDash_C.ExecuteUbergraph_TBP_ProjectionDash"));

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
