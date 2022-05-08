// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TextButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetHoveredState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::SetHoveredState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetHoveredState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetNeutralState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::SetNeutralState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetNeutralState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_TextButton_C::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetText"));

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


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TextButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.Tick"));

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


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TextButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.PreConstruct"));

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


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.AutoWrapText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InAutoTextWrap                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TextButton_C::AutoWrapText(bool InAutoTextWrap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.AutoWrapText"));

	struct
	{
		bool                           InAutoTextWrap;
	} params = {};

	params.InAutoTextWrap = InAutoTextWrap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.WrapTextAt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWrapTextAt                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TextButton_C::WrapTextAt(float InWrapTextAt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.WrapTextAt"));

	struct
	{
		float                          InWrapTextAt;
	} params = {};

	params.InWrapTextAt = InWrapTextAt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.ExecuteUbergraph_TBP_UI_TextButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TextButton_C::ExecuteUbergraph_TBP_UI_TextButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.ExecuteUbergraph_TBP_UI_TextButton"));

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


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TextButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnClicked__DelegateSignature"));

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
