// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Headgear_Customization_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Headgear_Customization_Master.TBP_Headgear_Customization_Master_C.GatherPiercingFilter
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// TSet<struct FString>           InOutPiercingFilter            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_Headgear_Customization_Master_C::GatherPiercingFilter(TSet<struct FString>* InOutPiercingFilter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Headgear_Customization_Master.TBP_Headgear_Customization_Master_C.GatherPiercingFilter"));

	struct
	{
		TSet<struct FString>           InOutPiercingFilter;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InOutPiercingFilter != nullptr)
		*InOutPiercingFilter = params.InOutPiercingFilter;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
