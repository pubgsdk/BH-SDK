// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_InfoBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.FormatUnlockedPartsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InEntriesUnlocked              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            InUnlockedNo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InTotalNo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OutResult                      (CPF_Parm, CPF_OutParm)

void UTBP_UI_Grimoire_InfoBox_C::FormatUnlockedPartsText(const struct FText& InEntriesUnlocked, int InUnlockedNo, int InTotalNo, struct FText* OutResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.FormatUnlockedPartsText"));

	struct
	{
		struct FText                   InEntriesUnlocked;
		int                            InUnlockedNo;
		int                            InTotalNo;
		struct FText                   OutResult;
	} params = {};

	params.InEntriesUnlocked = InEntriesUnlocked;
	params.InUnlockedNo = InUnlockedNo;
	params.InTotalNo = InTotalNo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Get Entry Description
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     InEntry                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Out_Text                       (CPF_Parm, CPF_OutParm)

void UTBP_UI_Grimoire_InfoBox_C::Get_Entry_Description(class UTigerGrimoireEntry* InEntry, struct FText* Out_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Get Entry Description"));

	struct
	{
		class UTigerGrimoireEntry*     InEntry;
		struct FText                   Out_Text;
	} params = {};

	params.InEntry = InEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Out_Text != nullptr)
		*Out_Text = params.Out_Text;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AddChildToInfoContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_InfoTextBlock_C* NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::AddChildToInfoContainer(class UTBP_UI_Grimoire_InfoTextBlock_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AddChildToInfoContainer"));

	struct
	{
		class UTBP_UI_Grimoire_InfoTextBlock_C* NewParam;
	} params = {};

	params.NewParam = NewParam;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.OnTitleImageLoaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_InfoBox_C::OnTitleImageLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.OnTitleImageLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripHead
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 inString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 InPattern                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 OutString                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::StringStripHead(const struct FString& inString, const struct FString& InPattern, struct FString* OutString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripHead"));

	struct
	{
		struct FString                 inString;
		struct FString                 InPattern;
		struct FString                 OutString;
	} params = {};

	params.inString = inString;
	params.InPattern = InPattern;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripTail
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 inString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 InPattern                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 OutString                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::StringStripTail(const struct FString& inString, const struct FString& InPattern, struct FString* OutString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripTail"));

	struct
	{
		struct FString                 inString;
		struct FString                 InPattern;
		struct FString                 OutString;
	} params = {};

	params.inString = inString;
	params.InPattern = InPattern;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetLastInfoBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_InfoTextBlock_C* OutLastTextBlock               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::GetLastInfoBlock(class UTBP_UI_Grimoire_InfoTextBlock_C** OutLastTextBlock)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetLastInfoBlock"));

	struct
	{
		class UTBP_UI_Grimoire_InfoTextBlock_C* OutLastTextBlock;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutLastTextBlock != nullptr)
		*OutLastTextBlock = params.OutLastTextBlock;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AppendToInfoTextBlock
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_InfoTextBlock_C* InInfoTextBlock                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Grimoire_InfoBox_C::AppendToInfoTextBlock(class UTBP_UI_Grimoire_InfoTextBlock_C* InInfoTextBlock, const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AppendToInfoTextBlock"));

	struct
	{
		class UTBP_UI_Grimoire_InfoTextBlock_C* InInfoTextBlock;
		struct FText                   InText;
	} params = {};

	params.InInfoTextBlock = InInfoTextBlock;
	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Clear Info Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_InfoBox_C::Clear_Info_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Clear Info Text"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextHeading
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           InIsRead                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_InfoBox_C::CreateInfoTextHeading(const struct FText& InText, bool InIsRead)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextHeading"));

	struct
	{
		struct FText                   InText;
		bool                           InIsRead;
	} params = {};

	params.InText = InText;
	params.InIsRead = InIsRead;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextSpacer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Grimoire_InfoBox_C::CreateInfoTextSpacer(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextSpacer"));

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


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InLoreText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InHeadingText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           InIsRead                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           InAllowSpacers                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_Grimoire_InfoTextBlock_C* OutWidget                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::CreateInfoTextBlock(const struct FText& InLoreText, const struct FText& InHeadingText, bool InIsRead, bool InAllowSpacers, class UTBP_UI_Grimoire_InfoTextBlock_C** OutWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextBlock"));

	struct
	{
		struct FText                   InLoreText;
		struct FText                   InHeadingText;
		bool                           InIsRead;
		bool                           InAllowSpacers;
		class UTBP_UI_Grimoire_InfoTextBlock_C* OutWidget;
	} params = {};

	params.InLoreText = InLoreText;
	params.InHeadingText = InHeadingText;
	params.InIsRead = InIsRead;
	params.InAllowSpacers = InAllowSpacers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetCategoryEntriesUnlockedAndTotal
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            UnlockedCount                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalCount                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::GetCategoryEntriesUnlockedAndTotal(class UTigerGrimoireCategory* Category, int* UnlockedCount, int* TotalCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetCategoryEntriesUnlockedAndTotal"));

	struct
	{
		class UTigerGrimoireCategory*  Category;
		int                            UnlockedCount;
		int                            TotalCount;
	} params = {};

	params.Category = Category;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UnlockedCount != nullptr)
		*UnlockedCount = params.UnlockedCount;
	if (TotalCount != nullptr)
		*TotalCount = params.TotalCount;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateUnlockedPartsText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            UnlockedNo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalNo                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsSubCategory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_InfoBox_C::UpdateUnlockedPartsText(int UnlockedNo, int TotalNo, bool IsSubCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateUnlockedPartsText"));

	struct
	{
		int                            UnlockedNo;
		int                            TotalNo;
		bool                           IsSubCategory;
	} params = {};

	params.UnlockedNo = UnlockedNo;
	params.TotalNo = TotalNo;
	params.IsSubCategory = IsSubCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsEntryInfoPartLocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     Entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsLocked                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_InfoBox_C::IsEntryInfoPartLocked(class UTigerGrimoireEntry* Entry, bool* IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsEntryInfoPartLocked"));

	struct
	{
		class UTigerGrimoireEntry*     Entry;
		bool                           IsLocked;
	} params = {};

	params.Entry = Entry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSectionsLocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   UnlockInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Grimoire_InfoBox_C::ShowSectionsLocked(const struct FText& UnlockInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSectionsLocked"));

	struct
	{
		struct FText                   UnlockInfo;
	} params = {};

	params.UnlockInfo = UnlockInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSubCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  InCategory                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::ShowSubCategory(class UTigerGrimoireCategory* InCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSubCategory"));

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


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowLockedBody
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_InfoBox_C::ShowLockedBody()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowLockedBody"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsShown
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowStatus                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_InfoBox_C::IsShown(bool* ShowStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsShown"));

	struct
	{
		bool                           ShowStatus;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowUnlockedBody
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_InfoBox_C::ShowUnlockedBody()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowUnlockedBody"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateTitleText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   EntryName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Grimoire_InfoBox_C::UpdateTitleText(const struct FText& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateTitleText"));

	struct
	{
		struct FText                   EntryName;
	} params = {};

	params.EntryName = EntryName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Hide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_InfoBox_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Hide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Show
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Unlocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTigerGrimoireEntry*     SelectedEntry                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::Show(bool Unlocked, class UTigerGrimoireEntry* SelectedEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Show"));

	struct
	{
		bool                           Unlocked;
		class UTigerGrimoireEntry*     SelectedEntry;
	} params = {};

	params.Unlocked = Unlocked;
	params.SelectedEntry = SelectedEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_InfoBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Tick"));

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


// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoBox_C::ExecuteUbergraph_TBP_UI_Grimoire_InfoBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoBox"));

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
