// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ServerSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnMatchServerList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionResultList SessionAlternatives            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ServerSelection_C::OnMatchServerList(const struct FTigerBpFindSessionResultList& SessionAlternatives)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnMatchServerList"));

	struct
	{
		struct FTigerBpFindSessionResultList SessionAlternatives;
	} params = {};

	params.SessionAlternatives = SessionAlternatives;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ServerSelection_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ServerSelection_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.JointSelectedServer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ServerSelection_C::JointSelectedServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.JointSelectedServer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.ExecuteUbergraph_TBP_UI_ServerSelection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ServerSelection_C::ExecuteUbergraph_TBP_UI_ServerSelection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.ExecuteUbergraph_TBP_UI_ServerSelection"));

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


// Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnCancel__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ServerSelection_C::OnCancel__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnCancel__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnServerSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionSelectedSession Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ServerSelection_C::OnServerSelected__DelegateSignature(const struct FTigerBpFindSessionSelectedSession& Session)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnServerSelected__DelegateSignature"));

	struct
	{
		struct FTigerBpFindSessionSelectedSession Session;
	} params = {};

	params.Session = Session;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
