// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CoterieNavigatorIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsNavigator                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CoterieNavigatorIcon_C::UpdateVisibility(bool bIsNavigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.UpdateVisibility"));

	struct
	{
		bool                           bIsNavigator;
	} params = {};

	params.bIsNavigator = bIsNavigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.SetOwningPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   In_Pawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CoterieNavigatorIcon_C::SetOwningPawn(class APawn* In_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.SetOwningPawn"));

	struct
	{
		class APawn*                   In_Pawn;
	} params = {};

	params.In_Pawn = In_Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.OnIsCoterieNavigatorChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsCoterieNavigator          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CoterieNavigatorIcon_C::OnIsCoterieNavigatorChanged_Event_1(bool bInIsCoterieNavigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.OnIsCoterieNavigatorChanged_Event_1"));

	struct
	{
		bool                           bInIsCoterieNavigator;
	} params = {};

	params.bInIsCoterieNavigator = bInIsCoterieNavigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CoterieNavigatorIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.PreConstruct"));

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


// Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CoterieNavigatorIcon_C::ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon"));

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
