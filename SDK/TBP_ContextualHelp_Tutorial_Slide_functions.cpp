// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Tutorial_Slide_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ContextualHelp_Tutorial_Slide.TBP_ContextualHelp_Tutorial_Slide_C.SatisfiesCustomCondition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  InTigerPlayerController        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_ContextualHelp_Tutorial_Slide_C::SatisfiesCustomCondition(class ATigerPlayerController* InTigerPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Tutorial_Slide.TBP_ContextualHelp_Tutorial_Slide_C.SatisfiesCustomCondition"));

	struct
	{
		class ATigerPlayerController*  InTigerPlayerController;
		bool                           ReturnValue;
	} params = {};

	params.InTigerPlayerController = InTigerPlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
