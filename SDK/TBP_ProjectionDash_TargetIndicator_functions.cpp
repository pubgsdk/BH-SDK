// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ProjectionDash_TargetIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ProjectionDash_TargetIndicator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ProjectionDash_TargetIndicator_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ProjectionDash_TargetIndicator_C::ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator"));

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
