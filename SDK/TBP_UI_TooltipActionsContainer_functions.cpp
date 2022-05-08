// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TooltipActionsContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C.SetActions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerTooltipAction> InActions                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UTBP_UI_TooltipActionsContainer_C::SetActions(TArray<struct FTigerTooltipAction>* InActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C.SetActions"));

	struct
	{
		TArray<struct FTigerTooltipAction> InActions;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InActions != nullptr)
		*InActions = params.InActions;
}


// Function TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_TooltipActionsContainer_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C.ExecuteUbergraph_TBP_UI_TooltipActionsContainer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TooltipActionsContainer_C::ExecuteUbergraph_TBP_UI_TooltipActionsContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C.ExecuteUbergraph_TBP_UI_TooltipActionsContainer"));

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
