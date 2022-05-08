// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Elysium_Matchmake_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C.SetupTriggerConditions
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerContextualHelpContext InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UTBP_ContextualHelp_Elysium_Matchmake_C::SetupTriggerConditions(const struct FTigerContextualHelpContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C.SetupTriggerConditions"));

	struct
	{
		struct FTigerContextualHelpContext InContext;
	} params = {};

	params.InContext = InContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C.OnLastPopupClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ContextualHelp_Elysium_Matchmake_C::OnLastPopupClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C.OnLastPopupClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C.Check for matchmaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ContextualHelp_Elysium_Matchmake_C::Check_for_matchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C.Check for matchmaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C.ExecuteUbergraph_TBP_ContextualHelp_Elysium_Matchmake
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_Elysium_Matchmake_C::ExecuteUbergraph_TBP_ContextualHelp_Elysium_Matchmake(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C.ExecuteUbergraph_TBP_ContextualHelp_Elysium_Matchmake"));

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
