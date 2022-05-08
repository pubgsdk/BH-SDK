// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Vfx_GroundSlam_Marker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ToggleUIVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Vfx_GroundSlam_Marker_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ToggleUIVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Vfx_GroundSlam_Marker_C::ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker"));

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
