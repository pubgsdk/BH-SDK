// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2"));

	struct
	{
		class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter;
	} params = {};

	params.InteractedFooter = InteractedFooter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1"));

	struct
	{
		class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter;
	} params = {};

	params.InteractedFooter = InteractedFooter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnVideoLoaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::OnVideoLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnVideoLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Show Video
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     Selected_Entry                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::Show_Video(class UTigerGrimoireEntry* Selected_Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Show Video"));

	struct
	{
		class UTigerGrimoireEntry*     Selected_Entry;
	} params = {};

	params.Selected_Entry = Selected_Entry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshVideoMedia
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::RefreshVideoMedia()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshVideoMedia"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseAxis
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InAxis                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutAxis                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::NormaliseMouseAxis(float InAxis, float* OutAxis)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseAxis"));

	struct
	{
		float                          InAxis;
		float                          OutAxis;
	} params = {};

	params.InAxis = InAxis;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAxis != nullptr)
		*OutAxis = params.OutAxis;
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseDelta
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               InDelta                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               OutDelta                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::NormaliseMouseDelta(const struct FVector2D& InDelta, struct FVector2D* OutDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseDelta"));

	struct
	{
		struct FVector2D               InDelta;
		struct FVector2D               OutDelta;
	} params = {};

	params.InDelta = InDelta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutDelta != nullptr)
		*OutDelta = params.OutDelta;
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshScrollPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::RefreshScrollPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshScrollPrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ApplyMeshScaling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFocused                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_C::ApplyMeshScaling(bool IsFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ApplyMeshScaling"));

	struct
	{
		bool                           IsFocused;
	} params = {};

	params.IsFocused = IsFocused;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ResetGrimoireDisplayItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::ResetGrimoireDisplayItems(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ResetGrimoireDisplayItems"));

	struct
	{
		float                          InDeltaTime;
	} params = {};

	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ForwardInputToCategoryMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InDirection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::ForwardInputToCategoryMenu(int InDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ForwardInputToCategoryMenu"));

	struct
	{
		int                            InDirection;
	} params = {};

	params.InDirection = InDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.GrimoirePropJumpToEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InEntryId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::GrimoirePropJumpToEntry(const struct FString& InEntryId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.GrimoirePropJumpToEntry"));

	struct
	{
		struct FString                 InEntryId;
	} params = {};

	params.InEntryId = InEntryId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.HideGrimoireDisplayItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::HideGrimoireDisplayItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.HideGrimoireDisplayItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RotateGrimoireDisplayItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::RotateGrimoireDisplayItem(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RotateGrimoireDisplayItem"));

	struct
	{
		float                          InDeltaTime;
	} params = {};

	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SetInteractionButtonVisiblity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_C::SetInteractionButtonVisiblity(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SetInteractionButtonVisiblity"));

	struct
	{
		bool                           bVisible;
	} params = {};

	params.bVisible = bVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ClearContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::ClearContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ClearContent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickCategoryButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::SelectMenuOnClickCategoryButton(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickCategoryButton"));

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


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickEntryButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_CategoryButton_C* EntryButton                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::SelectMenuOnClickEntryButton(class UTBP_UI_Grimoire_CategoryButton_C* EntryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickEntryButton"));

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


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimHide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::MenuAnimHide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimHide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimShow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::MenuAnimShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ToggleMenusHidden
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::ToggleMenusHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ToggleMenusHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToCategory
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  InCategory                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::JumpToCategory(class UTigerGrimoireCategory* InCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToCategory"));

	struct
	{
		class UTigerGrimoireCategory*  InCategory;
	} params = {};

	params.InCategory = InCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToSubCategory
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  InSubCategory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::JumpToSubCategory(class UTigerGrimoireCategory* InSubCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToSubCategory"));

	struct
	{
		class UTigerGrimoireCategory*  InSubCategory;
	} params = {};

	params.InSubCategory = InSubCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToEntry
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InEntryId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::JumpToEntry(const struct FString& InEntryId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToEntry"));

	struct
	{
		struct FString                 InEntryId;
	} params = {};

	params.InEntryId = InEntryId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  SelectedCategory               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::SelectMenuOnClick(class UTigerGrimoireCategory* SelectedCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClick"));

	struct
	{
		class UTigerGrimoireCategory*  SelectedCategory;
	} params = {};

	params.SelectedCategory = SelectedCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Tick"));

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


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnBackgroundSceneShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnBackgroundSceneShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuUpPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::MenuUpPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuUpPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuDownPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::MenuDownPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuDownPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::OnRotateButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::OnRotateButtonUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.On Language Settings Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::On_Language_Settings_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.On Language Settings Changed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::InteractedFooterAnimationStart(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationStart"));

	struct
	{
		class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter;
	} params = {};

	params.InteractedFooter = InteractedFooter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::InteractedFooterAnimationEnd(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationEnd"));

	struct
	{
		class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter;
	} params = {};

	params.InteractedFooter = InteractedFooter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RegisterSharedInputs
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::RegisterSharedInputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RegisterSharedInputs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.UnregisterSharedInputs
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::UnregisterSharedInputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.UnregisterSharedInputs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_ShowMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::BndEvt__TBP_UI_Grimoire_ShowMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_ShowMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_HideMenu_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::BndEvt__TBP_UI_Grimoire_InputPrompt_HideMenu_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_HideMenu_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_Close_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::BndEvt__TBP_UI_Grimoire_InputPrompt_Close_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_Close_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_Close_1_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_C::BndEvt__TBP_UI_Grimoire_InputPrompt_Close_1_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_Close_1_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ExecuteUbergraph_TBP_UI_Grimoire
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_C::ExecuteUbergraph_TBP_UI_Grimoire(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ExecuteUbergraph_TBP_UI_Grimoire"));

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
