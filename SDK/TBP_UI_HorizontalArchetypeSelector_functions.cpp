// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_HorizontalArchetypeSelector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ChangeArchetypeButtonSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HorizontalArchetypeSelector_C::ChangeArchetypeButtonSelection(ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ChangeArchetypeButtonSelection"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
	} params = {};

	params.InArchetypeType = InArchetypeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateWidgetForArchetype
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UUserWidget* UTBP_UI_HorizontalArchetypeSelector_C::CreateWidgetForArchetype(ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateWidgetForArchetype"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
		class UUserWidget*             ReturnValue;
	} params = {};

	params.InArchetypeType = InArchetypeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateArchetypeWidgetsForClan
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPlayerClanData*    InClanData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HorizontalArchetypeSelector_C::CreateArchetypeWidgetsForClan(class UTigerPlayerClanData* InClanData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateArchetypeWidgetsForClan"));

	struct
	{
		class UTigerPlayerClanData*    InClanData;
	} params = {};

	params.InClanData = InClanData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateDivider
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_HorizontalArchetypeSelector_C::CreateDivider()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateDivider"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnSelectionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPowerKit*          InArchetypeData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HorizontalArchetypeSelector_C::OnSelectionChanged(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnSelectionChanged"));

	struct
	{
		class UTigerPowerKit*          InArchetypeData;
	} params = {};

	params.InArchetypeData = InArchetypeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.SelectArchetype
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HorizontalArchetypeSelector_C::SelectArchetype(ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.SelectArchetype"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
	} params = {};

	params.InArchetypeType = InArchetypeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HorizontalArchetypeSelector_C::ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector"));

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


// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnArchetypeSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPowerKit*          InArchetypeData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HorizontalArchetypeSelector_C::OnArchetypeSelected__DelegateSignature(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnArchetypeSelected__DelegateSignature"));

	struct
	{
		class UTigerPowerKit*          InArchetypeData;
	} params = {};

	params.InArchetypeData = InArchetypeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
