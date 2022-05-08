// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Challenge_KillEntity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Challenge_KillEntity.TBP_Challenge_KillEntity_C.BuildDescriptionText
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_Challenge_KillEntity_C::BuildDescriptionText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Challenge_KillEntity.TBP_Challenge_KillEntity_C.BuildDescriptionText"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


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
