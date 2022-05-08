// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_ImageBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.OnMediaLoaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ImageBox_C::OnMediaLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.OnMediaLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.IsShown
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowStatus                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_ImageBox_C::IsShown(bool* ShowStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.IsShown"));

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


// Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Hide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ImageBox_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Hide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Show
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ImageBox_C::Show(class UTigerGrimoireEntry* SelectedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Show"));

	struct
	{
		class UTigerGrimoireEntry*     SelectedItem;
	} params = {};

	params.SelectedItem = SelectedItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ImageBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ImageBox
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ImageBox_C::ExecuteUbergraph_TBP_UI_Grimoire_ImageBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ImageBox"));

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
