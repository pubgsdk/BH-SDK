// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ListItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ListItem.TBP_UI_ListItem_C.OnDeselect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItem_C::OnDeselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItem.TBP_UI_ListItem_C.OnDeselect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItem.TBP_UI_ListItem_C.OnSelect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItem_C::OnSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItem.TBP_UI_ListItem_C.OnSelect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItem.TBP_UI_ListItem_C.SelectListItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItem_C::SelectListItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItem.TBP_UI_ListItem_C.SelectListItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItem.TBP_UI_ListItem_C.OnSelectWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItem_C::OnSelectWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItem.TBP_UI_ListItem_C.OnSelectWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItem.TBP_UI_ListItem_C.OnDeselectWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ListItem_C::OnDeselectWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItem.TBP_UI_ListItem_C.OnDeselectWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItem.TBP_UI_ListItem_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_List_C*          InParrent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ListItem_C::Initialize(class UTBP_UI_List_C* InParrent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItem.TBP_UI_ListItem_C.Initialize"));

	struct
	{
		class UTBP_UI_List_C*          InParrent;
	} params = {};

	params.InParrent = InParrent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ListItem.TBP_UI_ListItem_C.ExecuteUbergraph_TBP_UI_ListItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ListItem_C::ExecuteUbergraph_TBP_UI_ListItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ListItem.TBP_UI_ListItem_C.ExecuteUbergraph_TBP_UI_ListItem"));

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
