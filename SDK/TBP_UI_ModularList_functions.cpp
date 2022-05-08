// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ModularList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ModularList.TBP_UI_ModularList_C.GetUpperAndLowerSeperatorsForIndex
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_ModularSeparator_C* OutUpperSeparator              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_ModularSeparator_C* OutLowerSeparator              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularList_C::GetUpperAndLowerSeperatorsForIndex(int InIndex, class UTBP_UI_ModularSeparator_C** OutUpperSeparator, class UTBP_UI_ModularSeparator_C** OutLowerSeparator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.GetUpperAndLowerSeperatorsForIndex"));

	struct
	{
		int                            InIndex;
		class UTBP_UI_ModularSeparator_C* OutUpperSeparator;
		class UTBP_UI_ModularSeparator_C* OutLowerSeparator;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutUpperSeparator != nullptr)
		*OutUpperSeparator = params.OutUpperSeparator;
	if (OutLowerSeparator != nullptr)
		*OutLowerSeparator = params.OutLowerSeparator;
}


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.UnhoverCurrentItem
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ModularList_C::UnhoverCurrentItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.UnhoverCurrentItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.OnItemHovered
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularList_C::OnItemHovered(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.OnItemHovered"));

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


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.OnItemPressed
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularList_C::OnItemPressed(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.OnItemPressed"));

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


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.HoverItemAtIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularList_C::HoverItemAtIndex(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.HoverItemAtIndex"));

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


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.SelectItemAtIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularList_C::SelectItemAtIndex(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.SelectItemAtIndex"));

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


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.SelectCurrentItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ModularList_C::SelectCurrentItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.SelectCurrentItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.ClearList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ModularList_C::ClearList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.ClearList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.AddItemToList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerModularListItemInfo InItemInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ModularList_C::AddItemToList(const struct FTigerModularListItemInfo& InItemInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.AddItemToList"));

	struct
	{
		struct FTigerModularListItemInfo InItemInfo;
	} params = {};

	params.InItemInfo = InItemInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.FillList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerModularListItemInfo> InListItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ModularList_C::FillList(TArray<struct FTigerModularListItemInfo>* InListItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.FillList"));

	struct
	{
		TArray<struct FTigerModularListItemInfo> InListItems;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InListItems != nullptr)
		*InListItems = params.InListItems;
}


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.OnItemHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularList_C::OnItemHover__DelegateSignature(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.OnItemHover__DelegateSignature"));

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


// Function TBP_UI_ModularList.TBP_UI_ModularList_C.OnItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularList_C::OnItemSelected__DelegateSignature(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularList.TBP_UI_ModularList_C.OnItemSelected__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
