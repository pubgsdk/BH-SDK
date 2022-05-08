// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_MasqueradeWeaponFired_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.OnPlayerSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InTigerPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_MasqueradeWeaponFired_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.OnPlayerSpawned"));

	struct
	{
		class ATigerPlayer*            InTigerPlayer;
	} params = {};

	params.InTigerPlayer = InTigerPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerMasqueradeConsequence*/ InMasqueradeConsequence        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_MasqueradeWeaponFired_C::CustomEvent_1(class UClass* /*UTigerMasqueradeConsequence*/ InMasqueradeConsequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.CustomEvent_1"));

	struct
	{
		class UClass* /*UTigerMasqueradeConsequence*/ InMasqueradeConsequence;
	} params = {};

	params.InMasqueradeConsequence = InMasqueradeConsequence;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.ExecuteUbergraph_TBP_ContextualHelp_MasqueradeWeaponFired
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_MasqueradeWeaponFired_C::ExecuteUbergraph_TBP_ContextualHelp_MasqueradeWeaponFired(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.ExecuteUbergraph_TBP_ContextualHelp_MasqueradeWeaponFired"));

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
