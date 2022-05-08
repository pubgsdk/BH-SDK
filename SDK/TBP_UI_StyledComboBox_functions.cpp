// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StyledComboBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ScrollToIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StyledComboBox_C::ScrollToIndex(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ScrollToIndex"));

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


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.HasSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasSelection                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_StyledComboBox_C::HasSelection(bool* HasSelection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.HasSelection"));

	struct
	{
		bool                           HasSelection;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasSelection != nullptr)
		*HasSelection = params.HasSelection;
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           InNewOptions                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_StyledComboBox_C::SetOptions(TArray<struct FText>* InNewOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetOptions"));

	struct
	{
		TArray<struct FText>           InNewOptions;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InNewOptions != nullptr)
		*InNewOptions = params.InNewOptions;
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.UpdateColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_StyledComboBox_C::UpdateColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.UpdateColors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetError
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsError                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_StyledComboBox_C::SetError(bool InIsError)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetError"));

	struct
	{
		bool                           InIsError;
	} params = {};

	params.InIsError = InIsError;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.GetCurrentlySelectedOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OutSelectedOption              (CPF_Parm, CPF_OutParm)

void UTBP_UI_StyledComboBox_C::GetCurrentlySelectedOption(struct FText* OutSelectedOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.GetCurrentlySelectedOption"));

	struct
	{
		struct FText                   OutSelectedOption;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutSelectedOption != nullptr)
		*OutSelectedOption = params.OutSelectedOption;
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetDropDownExpanded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InExpand                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_StyledComboBox_C::SetDropDownExpanded(bool InExpand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetDropDownExpanded"));

	struct
	{
		bool                           InExpand;
	} params = {};

	params.InExpand = InExpand;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OptionClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_StyledComboBoxRow_C* InClickedOption                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StyledComboBox_C::OptionClicked(class UTBP_UI_StyledComboBoxRow_C* InClickedOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OptionClicked"));

	struct
	{
		class UTBP_UI_StyledComboBoxRow_C* InClickedOption;
	} params = {};

	params.InClickedOption = InClickedOption;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_StyledComboBox_C::BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_StyledComboBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_StyledComboBox_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_StyledComboBox_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params = {};

	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_StyledComboBox_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StyledComboBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ExecuteUbergraph_TBP_UI_StyledComboBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StyledComboBox_C::ExecuteUbergraph_TBP_UI_StyledComboBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ExecuteUbergraph_TBP_UI_StyledComboBox"));

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


// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnSelectionChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SelectedIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StyledComboBox_C::OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnSelectionChanged__DelegateSignature"));

	struct
	{
		struct FText                   SelectedItem;
		int                            SelectedIndex;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
