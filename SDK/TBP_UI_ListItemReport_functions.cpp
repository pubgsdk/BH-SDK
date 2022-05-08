// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ListItemReport_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.OnDeselect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItemReport_C::OnDeselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.OnDeselect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.OnSelect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItemReport_C::OnSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.OnSelect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ListItemReport_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.ButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItemReport_C::ButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.ButtonClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.SetText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ListItemReport_C::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.SetText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.ButtonHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItemReport_C::ButtonHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.ButtonHovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.ButtonUnHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItemReport_C::ButtonUnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.ButtonUnHovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.ExecuteUbergraph_TBP_UI_ListItemReport
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ListItemReport_C::ExecuteUbergraph_TBP_UI_ListItemReport(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItemReport.TBP_UI_ListItemReport_C.ExecuteUbergraph_TBP_UI_ListItemReport"));

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
