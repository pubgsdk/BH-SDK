// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_WheelInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ClearHoverEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_WheelInterface_C::ClearHoverEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ClearHoverEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ConstructWheel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            In_Num_Items                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WheelInterface_C::ConstructWheel(int In_Num_Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ConstructWheel"));

	struct
	{
		int                            In_Num_Items;
	} params = {};

	params.In_Num_Items = In_Num_Items;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.On_InventoryBackground_MouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_WheelInterface_C::On_InventoryBackground_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.On_InventoryBackground_MouseButtonDown_1"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayOpenAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_WheelInterface_C::PlayOpenAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayOpenAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayCloseAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_WheelInterface_C::PlayCloseAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayCloseAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ResetItems
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_WheelInterface_C::ResetItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ResetItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Label                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WheelInterface_C::SetItem(int Index, class UTexture2D* Icon, const struct FText& Label, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetItem"));

	struct
	{
		int                            Index;
		class UTexture2D*              Icon;
		struct FText                   Label;
		int                            Count;
	} params = {};

	params.Index = Index;
	params.Icon = Icon;
	params.Label = Label;
	params.Count = Count;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.UpdateHoverEffect
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WheelInterface_C::UpdateHoverEffect(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.UpdateHoverEffect"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetWheelUsable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewUsable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_WheelInterface_C::SetWheelUsable(bool bNewUsable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetWheelUsable"));

	struct
	{
		bool                           bNewUsable;
	} params = {};

	params.bNewUsable = bNewUsable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetIsItemSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsSelected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_WheelInterface_C::SetIsItemSelected(int Index, bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetIsItemSelected"));

	struct
	{
		int                            Index;
		bool                           bIsSelected;
	} params = {};

	params.Index = Index;
	params.bIsSelected = bIsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_WheelInterface_C::WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnNumberOfItemsChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            InNewNumberOfItems             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WheelInterface_C::OnNumberOfItemsChanged(int InNewNumberOfItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnNumberOfItemsChanged"));

	struct
	{
		int                            InNewNumberOfItems;
	} params = {};

	params.InNewNumberOfItems = InNewNumberOfItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ExecuteUbergraph_TBP_UI_WheelInterface
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WheelInterface_C::ExecuteUbergraph_TBP_UI_WheelInterface(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ExecuteUbergraph_TBP_UI_WheelInterface"));

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


// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnMenuPrimary__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_WheelInterface_C::OnMenuPrimary__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnMenuPrimary__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
