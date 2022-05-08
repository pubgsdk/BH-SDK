// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_RootButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnNewMenuSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  NewCategory                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_RootButton_C::OnNewMenuSelected(class UTigerGrimoireCategory* NewCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnNewMenuSelected"));

	struct
	{
		class UTigerGrimoireCategory*  NewCategory;
	} params = {};

	params.NewCategory = NewCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_RootButton_C::OnButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnButtonClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.ExecuteUbergraph_TBP_UI_Grimoire_RootButton
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_RootButton_C::ExecuteUbergraph_TBP_UI_Grimoire_RootButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.ExecuteUbergraph_TBP_UI_Grimoire_RootButton"));

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


// Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireCategory*  SubmenuWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_RootButton_C::OnClicked__DelegateSignature(class UTigerGrimoireCategory* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnClicked__DelegateSignature"));

	struct
	{
		class UTigerGrimoireCategory*  SubmenuWidget;
	} params = {};

	params.SubmenuWidget = SubmenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
