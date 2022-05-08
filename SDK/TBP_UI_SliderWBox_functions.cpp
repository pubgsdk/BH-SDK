// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SliderWBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.CalculateBoxDecrementAmount
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          OutBoxDecrementAmount          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::CalculateBoxDecrementAmount(float* OutBoxDecrementAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.CalculateBoxDecrementAmount"));

	struct
	{
		float                          OutBoxDecrementAmount;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutBoxDecrementAmount != nullptr)
		*OutBoxDecrementAmount = params.OutBoxDecrementAmount;
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.CalculateBoxIncrementAmount
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          OutBoxIncrementAmount          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::CalculateBoxIncrementAmount(float* OutBoxIncrementAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.CalculateBoxIncrementAmount"));

	struct
	{
		float                          OutBoxIncrementAmount;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutBoxIncrementAmount != nullptr)
		*OutBoxIncrementAmount = params.OutBoxIncrementAmount;
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.GetSliderValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          OutSliderValue                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::GetSliderValue(float* OutSliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.GetSliderValue"));

	struct
	{
		float                          OutSliderValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutSliderValue != nullptr)
		*OutSliderValue = params.OutSliderValue;
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.GetBoxValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          OutBoxValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::GetBoxValue(float* OutBoxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.GetBoxValue"));

	struct
	{
		float                          OutBoxValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutBoxValue != nullptr)
		*OutBoxValue = params.OutBoxValue;
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetIncrementAmount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InIncrementAmount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InShouldIncrementSliderValue   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SliderWBox_C::SetIncrementAmount(float InIncrementAmount, bool InShouldIncrementSliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetIncrementAmount"));

	struct
	{
		float                          InIncrementAmount;
		bool                           InShouldIncrementSliderValue;
	} params = {};

	params.InIncrementAmount = InIncrementAmount;
	params.InShouldIncrementSliderValue = InShouldIncrementSliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.UpdateValuesOnWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SliderWBox_C::UpdateValuesOnWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.UpdateValuesOnWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.InitializeValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MinValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           AllowDecimals                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SliderWBox_C::InitializeValues(float SliderValue, float MinValue, float MaxValue, bool AllowDecimals)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.InitializeValues"));

	struct
	{
		float                          SliderValue;
		float                          MinValue;
		float                          MaxValue;
		bool                           AllowDecimals;
	} params = {};

	params.SliderValue = SliderValue;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.AllowDecimals = AllowDecimals;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMaxValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InMaxValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::SetMaxValue(float InMaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMaxValue"));

	struct
	{
		float                          InMaxValue;
	} params = {};

	params.InMaxValue = InMaxValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMinValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MinValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::SetMinValue(float MinValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMinValue"));

	struct
	{
		float                          MinValue;
	} params = {};

	params.MinValue = MinValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetSliderValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::SetSliderValue(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetSliderValue"));

	struct
	{
		float                          InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.Set Box Value
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InSkipValueChangedDelegate     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SliderWBox_C::Set_Box_Value(float InValue, bool InSkipValueChangedDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.Set Box Value"));

	struct
	{
		float                          InValue;
		bool                           InSkipValueChangedDelegate;
	} params = {};

	params.InValue = InValue;
	params.InSkipValueChangedDelegate = InSkipValueChangedDelegate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SliderWBox_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SliderWBox_C::BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params = {};

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__TBP_UI_SliderWBox_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SliderWBox_C::BndEvt__TBP_UI_SliderWBox_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__TBP_UI_SliderWBox_RightButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__TBP_UI_SliderWBox_LeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_SliderWBox_C::BndEvt__TBP_UI_SliderWBox_LeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__TBP_UI_SliderWBox_LeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SliderWBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.ExecuteUbergraph_TBP_UI_SliderWBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::ExecuteUbergraph_TBP_UI_SliderWBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.ExecuteUbergraph_TBP_UI_SliderWBox"));

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


// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.OnValueChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BoxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SliderValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SliderWBox_C::OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.OnValueChanged__DelegateSignature"));

	struct
	{
		float                          BoxValue;
		float                          SliderValue;
	} params = {};

	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
