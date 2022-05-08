// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MenuButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SequenceEvent__ENTRYPOINTTBP_UI_MenuButton_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::SequenceEvent__ENTRYPOINTTBP_UI_MenuButton_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SequenceEvent__ENTRYPOINTTBP_UI_MenuButton_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Set Is Clickable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsClickable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MenuButton_C::Set_Is_Clickable(bool bIsClickable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Set Is Clickable"));

	struct
	{
		bool                           bIsClickable;
	} params = {};

	params.bIsClickable = bIsClickable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonStyleTexture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuButton_C::SetButtonStyleTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonStyleTexture"));

	struct
	{
		class UTexture2D*              Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBackgroundStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::UpdateBackgroundStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBackgroundStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_MenuButton_C::SetButtonText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonText"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnReleasedAnimationEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::OnReleasedAnimationEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnReleasedAnimationEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnRemovedFromFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UTBP_UI_MenuButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnRemovedFromFocusPath"));

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params = {};

	params.InFocusEvent = InFocusEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MenuButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.PreConstruct"));

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


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Tick"));

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


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.ExecuteUbergraph_TBP_UI_MenuButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MenuButton_C::ExecuteUbergraph_TBP_UI_MenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.ExecuteUbergraph_TBP_UI_MenuButton"));

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


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MenuButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnClicked__DelegateSignature"));

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
