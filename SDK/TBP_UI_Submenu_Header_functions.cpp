// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Submenu_Header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.GetIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            OutIndex                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Submenu_Header_C::GetIndex(int* OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.GetIndex"));

	struct
	{
		int                            OutIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.SetIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Submenu_Header_C::SetIndex(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.SetIndex"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.BindSubHeaderTabControllers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Submenu_Header_C::BindSubHeaderTabControllers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.BindSubHeaderTabControllers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.UnbindSubheaderTabControllers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Submenu_Header_C::UnbindSubheaderTabControllers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.UnbindSubheaderTabControllers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.SelectNextChild
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Submenu_Header_C::SelectNextChild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.SelectNextChild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.SelectPrevChild
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Submenu_Header_C::SelectPrevChild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.SelectPrevChild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.SetCurrentActiveChildIndexFromButtonClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_MatchMaker_TabButton_C* InClickedButton                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Submenu_Header_C::SetCurrentActiveChildIndexFromButtonClick(class UTBP_UI_MatchMaker_TabButton_C* InClickedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.SetCurrentActiveChildIndexFromButtonClick"));

	struct
	{
		class UTBP_UI_MatchMaker_TabButton_C* InClickedButton;
	} params = {};

	params.InClickedButton = InClickedButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Submenu_Header_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.ExecuteUbergraph_TBP_UI_Submenu_Header
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Submenu_Header_C::ExecuteUbergraph_TBP_UI_Submenu_Header(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Submenu_Header.TBP_UI_Submenu_Header_C.ExecuteUbergraph_TBP_UI_Submenu_Header"));

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
