// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_CategoryBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.AnyExpanding
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutExpanding                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_CategoryBox_C::AnyExpanding(bool* OutExpanding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.AnyExpanding"));

	struct
	{
		bool                           OutExpanding;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutExpanding != nullptr)
		*OutExpanding = params.OutExpanding;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseToHighlightedWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryBox_C::MoveMouseToHighlightedWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseToHighlightedWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GamepadSelectHoveredEntryButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryBox_C::GamepadSelectHoveredEntryButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GamepadSelectHoveredEntryButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHighlightWidgetIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OutIndex                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::GetHighlightWidgetIndex(int* OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHighlightWidgetIndex"));

	struct
	{
		int                            OutIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ChangeSortingOrder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerGrimoireSortType         InSortingOrder                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::ChangeSortingOrder(ETigerGrimoireSortType InSortingOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ChangeSortingOrder"));

	struct
	{
		ETigerGrimoireSortType         InSortingOrder;
	} params = {};

	params.InSortingOrder = InSortingOrder;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.FindExpandingWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         InWidgets                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// int                            OutExpandingIndex              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::FindExpandingWidget(TArray<class UWidget*>* InWidgets, int* OutExpandingIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.FindExpandingWidget"));

	struct
	{
		TArray<class UWidget*>         InWidgets;
		int                            OutExpandingIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InWidgets != nullptr)
		*InWidgets = params.InWidgets;
	if (OutExpandingIndex != nullptr)
		*OutExpandingIndex = params.OutExpandingIndex;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MouseFollowExpandingWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           MouseMoved                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_CategoryBox_C::MouseFollowExpandingWidget(bool* MouseMoved)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MouseFollowExpandingWidget"));

	struct
	{
		bool                           MouseMoved;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MouseMoved != nullptr)
		*MouseMoved = params.MouseMoved;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseInWidgetDirection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InDirection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InHoverIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::MoveMouseInWidgetDirection(int InDirection, int InHoverIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseInWidgetDirection"));

	struct
	{
		int                            InDirection;
		int                            InHoverIndex;
	} params = {};

	params.InDirection = InDirection;
	params.InHoverIndex = InHoverIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.CalcHoverIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         InWidgets                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// int                            OutHoverindex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::CalcHoverIndex(TArray<class UWidget*>* InWidgets, int* OutHoverindex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.CalcHoverIndex"));

	struct
	{
		TArray<class UWidget*>         InWidgets;
		int                            OutHoverindex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InWidgets != nullptr)
		*InWidgets = params.InWidgets;
	if (OutHoverindex != nullptr)
		*OutHoverindex = params.OutHoverindex;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHoverableWidgetsRecurse
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         InWidgetList                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<class UWidget*>         OutVisibleWidgets              (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UTBP_UI_Grimoire_CategoryBox_C::GetHoverableWidgetsRecurse(TArray<class UWidget*>* InWidgetList, TArray<class UWidget*>* OutVisibleWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHoverableWidgetsRecurse"));

	struct
	{
		TArray<class UWidget*>         InWidgetList;
		TArray<class UWidget*>         OutVisibleWidgets;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InWidgetList != nullptr)
		*InWidgetList = params.InWidgetList;
	if (OutVisibleWidgets != nullptr)
		*OutVisibleWidgets = params.OutVisibleWidgets;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetLocationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         InWidgetList                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<class UWidget*>         OutVisibleWidgets              (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UTBP_UI_Grimoire_CategoryBox_C::GetLocationWidgets(TArray<class UWidget*>* InWidgetList, TArray<class UWidget*>* OutVisibleWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetLocationWidgets"));

	struct
	{
		TArray<class UWidget*>         InWidgetList;
		TArray<class UWidget*>         OutVisibleWidgets;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InWidgetList != nullptr)
		*InWidgetList = params.InWidgetList;
	if (OutVisibleWidgets != nullptr)
		*OutVisibleWidgets = params.OutVisibleWidgets;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InEntryId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::SelectButtonOfEntry(const struct FString& InEntryId, class UTBP_UI_Grimoire_CategoryButton_C** SelectedCategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfEntry"));

	struct
	{
		struct FString                 InEntryId;
		class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton;
	} params = {};

	params.InEntryId = InEntryId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelectedCategoryButton != nullptr)
		*SelectedCategoryButton = params.SelectedCategoryButton;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfCategory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  InCategory                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::SelectButtonOfCategory(class UTigerGrimoireCategory* InCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfCategory"));

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


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightCategory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::HighlightCategory(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightCategory"));

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


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightEntry
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::HighlightEntry(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightEntry"));

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


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Show Categories
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  ParentCategory                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::Show_Categories(class UTigerGrimoireCategory* ParentCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Show Categories"));

	struct
	{
		class UTigerGrimoireCategory*  ParentCategory;
	} params = {};

	params.ParentCategory = ParentCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Entry Flags
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPersistentPlayerState* InPersistentState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerGrimoireEntry*     InEntry                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsEntryUnlocked                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsEntryRead                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_CategoryBox_C::Get_Entry_Flags(class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireEntry* InEntry, bool* IsEntryUnlocked, bool* IsEntryRead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Entry Flags"));

	struct
	{
		class UTigerPersistentPlayerState* InPersistentState;
		class UTigerGrimoireEntry*     InEntry;
		bool                           IsEntryUnlocked;
		bool                           IsEntryRead;
	} params = {};

	params.InPersistentState = InPersistentState;
	params.InEntry = InEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsEntryUnlocked != nullptr)
		*IsEntryUnlocked = params.IsEntryUnlocked;
	if (IsEntryRead != nullptr)
		*IsEntryRead = params.IsEntryRead;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Category Info
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPersistentPlayerState* InPersistentState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerGrimoireCategory*  InCategory                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InIncludeSubCategories         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 IgnoreEntryId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           IsUnlocked                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsRead                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Out_UnlockedCount              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Out_NumberOfEntries            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::Get_Category_Info(class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireCategory* InCategory, bool InIncludeSubCategories, const struct FString& IgnoreEntryId, bool* IsUnlocked, bool* IsRead, int* Out_UnlockedCount, int* Out_NumberOfEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Category Info"));

	struct
	{
		class UTigerPersistentPlayerState* InPersistentState;
		class UTigerGrimoireCategory*  InCategory;
		bool                           InIncludeSubCategories;
		struct FString                 IgnoreEntryId;
		bool                           IsUnlocked;
		bool                           IsRead;
		int                            Out_UnlockedCount;
		int                            Out_NumberOfEntries;
	} params = {};

	params.InPersistentState = InPersistentState;
	params.InCategory = InCategory;
	params.InIncludeSubCategories = InIncludeSubCategories;
	params.IgnoreEntryId = IgnoreEntryId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;
	if (IsRead != nullptr)
		*IsRead = params.IsRead;
	if (Out_UnlockedCount != nullptr)
		*Out_UnlockedCount = params.Out_UnlockedCount;
	if (Out_NumberOfEntries != nullptr)
		*Out_NumberOfEntries = params.Out_NumberOfEntries;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Entry Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPersistentPlayerState* PersistentState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerGrimoireEntry*     Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPanelWidget*            InPanelWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_Grimoire_CategoryButton_C* ParentButtonWidget             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerGrimoireCategory*  ParentCat                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_Grimoire_CategoryButton_C* OutCreatedWidget               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::Make_Entry_Widget(class UTigerPersistentPlayerState* PersistentState, class UTigerGrimoireEntry* Entry, class UPanelWidget* InPanelWidget, class UTBP_UI_Grimoire_CategoryButton_C* ParentButtonWidget, class UTigerGrimoireCategory* ParentCat, class UTBP_UI_Grimoire_CategoryButton_C** OutCreatedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Entry Widget"));

	struct
	{
		class UTigerPersistentPlayerState* PersistentState;
		class UTigerGrimoireEntry*     Entry;
		class UPanelWidget*            InPanelWidget;
		class UTBP_UI_Grimoire_CategoryButton_C* ParentButtonWidget;
		class UTigerGrimoireCategory*  ParentCat;
		class UTBP_UI_Grimoire_CategoryButton_C* OutCreatedWidget;
	} params = {};

	params.PersistentState = PersistentState;
	params.Entry = Entry;
	params.InPanelWidget = InPanelWidget;
	params.ParentButtonWidget = ParentButtonWidget;
	params.ParentCat = ParentCat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutCreatedWidget != nullptr)
		*OutCreatedWidget = params.OutCreatedWidget;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Sub Category Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            ParentPanelWidget              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerPersistentPlayerState* InPersistentState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerGrimoireCategory*  InSubCategory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_Grimoire_CategoryButton_C* OutCreatedWidget               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::Make_Sub_Category_Widget(class UPanelWidget* ParentPanelWidget, class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireCategory* InSubCategory, class UTBP_UI_Grimoire_CategoryButton_C** OutCreatedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Sub Category Widget"));

	struct
	{
		class UPanelWidget*            ParentPanelWidget;
		class UTigerPersistentPlayerState* InPersistentState;
		class UTigerGrimoireCategory*  InSubCategory;
		class UTBP_UI_Grimoire_CategoryButton_C* OutCreatedWidget;
	} params = {};

	params.ParentPanelWidget = ParentPanelWidget;
	params.InPersistentState = InPersistentState;
	params.InSubCategory = InSubCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutCreatedWidget != nullptr)
		*OutCreatedWidget = params.OutCreatedWidget;
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryBox_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuDownPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryBox_C::MenuDownPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuDownPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickCategoryButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::SelectMenuOnClickCategoryButton(class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickCategoryButton"));

	struct
	{
		class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton;
	} params = {};

	params.SelectedCategoryButton = SelectedCategoryButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuUpPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryBox_C::MenuUpPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuUpPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Tick"));

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


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_C*      GrimoireUI                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::OnOpen(class UTBP_UI_Grimoire_C* GrimoireUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnOpen"));

	struct
	{
		class UTBP_UI_Grimoire_C*      GrimoireUI;
	} params = {};

	params.GrimoireUI = GrimoireUI;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_CategoryBox_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickEntryButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::SelectMenuOnClickEntryButton(class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickEntryButton"));

	struct
	{
		class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton;
	} params = {};

	params.SelectedCategoryButton = SelectedCategoryButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_CategoryBox_C::ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox"));

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
