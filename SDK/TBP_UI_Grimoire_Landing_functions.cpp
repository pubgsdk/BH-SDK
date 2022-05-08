// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_Landing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Hide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_Landing_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Hide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Show
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_C*      GrimoireUI                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsShown                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_Landing_C::Show(class UTBP_UI_Grimoire_C* GrimoireUI, bool* IsShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Show"));

	struct
	{
		class UTBP_UI_Grimoire_C*      GrimoireUI;
		bool                           IsShown;
	} params = {};

	params.GrimoireUI = GrimoireUI;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsShown != nullptr)
		*IsShown = params.IsShown;
}


// Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.UpdateUnlockedStatus
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_Landing_C::UpdateUnlockedStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.UpdateUnlockedStatus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_Landing_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.ExecuteUbergraph_TBP_UI_Grimoire_Landing
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_Landing_C::ExecuteUbergraph_TBP_UI_Grimoire_Landing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.ExecuteUbergraph_TBP_UI_Grimoire_Landing"));

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
