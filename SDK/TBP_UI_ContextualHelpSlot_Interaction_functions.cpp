// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ContextualHelpSlot_Interaction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.SetIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerContextualHelp*    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelpSlot_Interaction_C::SetIcon(class UTigerContextualHelp* InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.SetIcon"));

	struct
	{
		class UTigerContextualHelp*    InData;
	} params = {};

	params.InData = InData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.SetInteractionText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerContextualHelp*    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelpSlot_Interaction_C::SetInteractionText(class UTigerContextualHelp* InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.SetInteractionText"));

	struct
	{
		class UTigerContextualHelp*    InData;
	} params = {};

	params.InData = InData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.ShowClimbPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ContextualHelpSlot_Interaction_C::ShowClimbPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.ShowClimbPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.HideClimbPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ContextualHelpSlot_Interaction_C::HideClimbPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.HideClimbPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.ExecuteUbergraph_TBP_UI_ContextualHelpSlot_Interaction
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelpSlot_Interaction_C::ExecuteUbergraph_TBP_UI_ContextualHelpSlot_Interaction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelpSlot_Interaction.TBP_UI_ContextualHelpSlot_Interaction_C.ExecuteUbergraph_TBP_UI_ContextualHelpSlot_Interaction"));

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
