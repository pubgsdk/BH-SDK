// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelpBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShowOff
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ContextualHelpBase_C::SetWantsToShowOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShowOff"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ContextualHelpBase_C::SetWantsToShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.HasReachedMaxLimitInMatch
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bLimitReached                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_ContextualHelpBase_C::HasReachedMaxLimitInMatch(bool* bLimitReached)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.HasReachedMaxLimitInMatch"));

	struct
	{
		bool                           bLimitReached;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bLimitReached != nullptr)
		*bLimitReached = params.bLimitReached;
}


// Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  InTigerPlayerController        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelpBase_C::OnHide(class ATigerPlayerController* InTigerPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.OnHide"));

	struct
	{
		class ATigerPlayerController*  InTigerPlayerController;
	} params = {};

	params.InTigerPlayerController = InTigerPlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.ExecuteUbergraph_TBP_ContextualHelpBase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelpBase_C::ExecuteUbergraph_TBP_ContextualHelpBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.ExecuteUbergraph_TBP_ContextualHelpBase"));

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
