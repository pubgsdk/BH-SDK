// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GameModeSelection_PartyContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_PartyContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.UpdateContainer
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerParty             InParty                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_GameModeSelection_PartyContainer_C::UpdateContainer(const struct FTigerParty& InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.UpdateContainer"));

	struct
	{
		struct FTigerParty             InParty;
	} params = {};

	params.InParty = InParty;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.UpdateContainer2
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPartyId           InPartyId                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FString                 InDepartingPlayerId            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_PartyContainer_C::UpdateContainer2(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.UpdateContainer2"));

	struct
	{
		struct FTigerPartyId           InPartyId;
		struct FString                 InDepartingPlayerId;
	} params = {};

	params.InPartyId = InPartyId;
	params.InDepartingPlayerId = InDepartingPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.UpdateContainer3
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPartyId           InPartyId                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FString                 InJoiningPlayerId              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_PartyContainer_C::UpdateContainer3(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.UpdateContainer3"));

	struct
	{
		struct FTigerPartyId           InPartyId;
		struct FString                 InJoiningPlayerId;
	} params = {};

	params.InPartyId = InPartyId;
	params.InJoiningPlayerId = InJoiningPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.BndEvt__TBP_UI_GameModeSelection_PartyContainer_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_PartyContainer_C::BndEvt__TBP_UI_GameModeSelection_PartyContainer_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.BndEvt__TBP_UI_GameModeSelection_PartyContainer_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.ExecuteUbergraph_TBP_UI_GameModeSelection_PartyContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_PartyContainer_C::ExecuteUbergraph_TBP_UI_GameModeSelection_PartyContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C.ExecuteUbergraph_TBP_UI_GameModeSelection_PartyContainer"));

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
