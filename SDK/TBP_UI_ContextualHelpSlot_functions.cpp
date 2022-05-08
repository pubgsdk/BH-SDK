// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ContextualHelpSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ContextualHelpSlot.TBP_UI_ContextualHelpSlot_C.SetShouldShowBackground
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShouldShowBackground         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ContextualHelpSlot_C::SetShouldShowBackground(bool InShouldShowBackground)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelpSlot.TBP_UI_ContextualHelpSlot_C.SetShouldShowBackground"));

	struct
	{
		bool                           InShouldShowBackground;
	} params = {};

	params.InShouldShowBackground = InShouldShowBackground;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ContextualHelpSlot.TBP_UI_ContextualHelpSlot_C.SetIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerContextualHelp*    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelpSlot_C::SetIcon(class UTigerContextualHelp* InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelpSlot.TBP_UI_ContextualHelpSlot_C.SetIcon"));

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


// Function TBP_UI_ContextualHelpSlot.TBP_UI_ContextualHelpSlot_C.SetDescriptionText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerContextualHelp*    InData                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ContextualHelpSlot_C::SetDescriptionText(class UTigerContextualHelp* InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ContextualHelpSlot.TBP_UI_ContextualHelpSlot_C.SetDescriptionText"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
