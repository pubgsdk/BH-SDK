// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_RootCategoryMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.GetActiveCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerGrimoireCategory*  Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_RootCategoryMenu_C::GetActiveCategory(class UTigerGrimoireCategory** Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.GetActiveCategory"));

	struct
	{
		class UTigerGrimoireCategory*  Return;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Return != nullptr)
		*Return = params.Return;
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.TabSelectSearchbar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Select                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_RootCategoryMenu_C::TabSelectSearchbar(bool Select)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.TabSelectSearchbar"));

	struct
	{
		bool                           Select;
	} params = {};

	params.Select = Select;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.DecrementMenuIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootCategoryMenu_C::DecrementMenuIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.DecrementMenuIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.IncrementMenuIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootCategoryMenu_C::IncrementMenuIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.IncrementMenuIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SetupMenuButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootCategoryMenu_C::SetupMenuButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SetupMenuButtons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SelectMenuOnClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  SelectedCategory               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_RootCategoryMenu_C::SelectMenuOnClick(class UTigerGrimoireCategory* SelectedCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SelectMenuOnClick"));

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


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_C*      GrimoireUI                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_RootCategoryMenu_C::OnOpen(class UTBP_UI_Grimoire_C* GrimoireUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnOpen"));

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


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuLeftPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootCategoryMenu_C::MenuLeftPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuLeftPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuRightPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootCategoryMenu_C::MenuRightPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuRightPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnClose
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootCategoryMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SelectSearchbarOnClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootCategoryMenu_C::SelectSearchbarOnClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SelectSearchbarOnClick"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_RootCategoryMenu_C::ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu"));

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
