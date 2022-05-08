// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PingInstance_Inner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C.GetHorizontalIconOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          OutIconOffset                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstance_Inner_C::GetHorizontalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C.GetHorizontalIconOffset"));

	struct
	{
		float                          OutIconOffset;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;
}


// Function TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C.GetVerticalIconOffset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          OutIconOffset                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PingInstance_Inner_C::GetVerticalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C.GetVerticalIconOffset"));

	struct
	{
		float                          OutIconOffset;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
