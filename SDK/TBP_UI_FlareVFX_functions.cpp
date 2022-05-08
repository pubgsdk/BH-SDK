// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_FlareVFX_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_FlareVFX.TBP_UI_FlareVFX_C.Play Flare animation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_FlareVFX_C::Play_Flare_animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FlareVFX.TBP_UI_FlareVFX_C.Play Flare animation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FlareVFX.TBP_UI_FlareVFX_C.ExecuteUbergraph_TBP_UI_FlareVFX
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_FlareVFX_C::ExecuteUbergraph_TBP_UI_FlareVFX(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FlareVFX.TBP_UI_FlareVFX_C.ExecuteUbergraph_TBP_UI_FlareVFX"));

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
