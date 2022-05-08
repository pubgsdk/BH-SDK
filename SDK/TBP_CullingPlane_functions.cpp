// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CullingPlane_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_CullingPlane.TBP_CullingPlane_C.EnableCullingPlanes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CullingPlane_C::EnableCullingPlanes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CullingPlane.TBP_CullingPlane_C.EnableCullingPlanes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CullingPlane.TBP_CullingPlane_C.DisableCullingPlanes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CullingPlane_C::DisableCullingPlanes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CullingPlane.TBP_CullingPlane_C.DisableCullingPlanes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CullingPlane.TBP_CullingPlane_C.ExecuteUbergraph_TBP_CullingPlane
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_CullingPlane_C::ExecuteUbergraph_TBP_CullingPlane(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CullingPlane.TBP_CullingPlane_C.ExecuteUbergraph_TBP_CullingPlane"));

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
