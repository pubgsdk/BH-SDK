// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BuffPostProcess_BlindingBeauty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.SetParameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NormalizedDuration             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_BlindingBeauty_C::SetParameters(float NormalizedDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.SetParameters"));

	struct
	{
		float                          NormalizedDuration;
	} params = {};

	params.NormalizedDuration = NormalizedDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_BlindingBeauty_C::ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty"));

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
