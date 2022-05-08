// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_CategoryButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ToggleExpansion
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryButton_C::ToggleExpansion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ToggleExpansion"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.MarkEntryAsRead
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryButton_C::MarkEntryAsRead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.MarkEntryAsRead"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.IsParentExpanding
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           outIsExpanding                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_CategoryButton_C::IsParentExpanding(bool* outIsExpanding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.IsParentExpanding"));

	struct
	{
		bool                           outIsExpanding;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (outIsExpanding != nullptr)
		*outIsExpanding = params.outIsExpanding;
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsCategoryButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InHighlight                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_CategoryButton_C::SetHighlightedAsCategoryButton(bool InHighlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsCategoryButton"));

	struct
	{
		bool                           InHighlight;
	} params = {};

	params.InHighlight = InHighlight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsEntryButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InHighlight                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_CategoryButton_C::SetHighlightedAsEntryButton(bool InHighlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsEntryButton"));

	struct
	{
		bool                           InHighlight;
	} params = {};

	params.InHighlight = InHighlight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Unlocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsUnlocked                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_CategoryButton_C::Unlocked(bool* IsUnlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Unlocked"));

	struct
	{
		bool                           IsUnlocked;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Tick"));

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


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryButton_C::BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UExpandableArea*         Area                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsExpanded                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_CategoryButton_C::BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature"));

	struct
	{
		class UExpandableArea*         Area;
		bool                           bIsExpanded;
	} params = {};

	params.Area = Area;
	params.bIsExpanded = bIsExpanded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryButton_C::BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryButton_C::BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Media Loaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryButton_C::Media_Loaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Media Loaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryButton_C::ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton"));

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


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Entry__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_CategoryButton_C* EntryButton                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryButton_C::On_Clicked_Entry__DelegateSignature(class UTBP_UI_Grimoire_CategoryButton_C* EntryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Entry__DelegateSignature"));

	struct
	{
		class UTBP_UI_Grimoire_CategoryButton_C* EntryButton;
	} params = {};

	params.EntryButton = EntryButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Category__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryButton_C::On_Clicked_Category__DelegateSignature(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Category__DelegateSignature"));

	struct
	{
		class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton;
	} params = {};

	params.CategoryButton = CategoryButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
