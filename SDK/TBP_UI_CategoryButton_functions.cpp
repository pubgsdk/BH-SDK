// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CategoryButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.GetFirstChildCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_CategoryButton_C* OutChildCategory               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CategoryButton_C::GetFirstChildCategory(class UTBP_UI_CategoryButton_C** OutChildCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.GetFirstChildCategory"));

	struct
	{
		class UTBP_UI_CategoryButton_C* OutChildCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutChildCategory != nullptr)
		*OutChildCategory = params.OutChildCategory;
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.GetParentCategory
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_CategoryButton_C* OutParentCategory              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CategoryButton_C::GetParentCategory(class UTBP_UI_CategoryButton_C** OutParentCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.GetParentCategory"));

	struct
	{
		class UTBP_UI_CategoryButton_C* OutParentCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutParentCategory != nullptr)
		*OutParentCategory = params.OutParentCategory;
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.ShowContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::ShowContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.ShowContent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.UnselectContent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::UnselectContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.UnselectContent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Unselect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::Unselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Unselect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Select
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Select"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.PreConstruct"));

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


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.ExecuteUbergraph_TBP_UI_CategoryButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CategoryButton_C::ExecuteUbergraph_TBP_UI_CategoryButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.ExecuteUbergraph_TBP_UI_CategoryButton"));

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


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonUnhover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::OnButtonUnhover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonUnhover__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::OnButtonHover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonHover__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CategoryButton_C::OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CategoryButton.TBP_UI_CategoryButton_C.OnButtonPressed__DelegateSignature"));

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
