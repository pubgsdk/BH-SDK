// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Consumable_LowHPReminder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnPlayerSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InTigerPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_Consumable_LowHPReminder_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnPlayerSpawned"));

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


// Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InOldHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InNewHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_Consumable_LowHPReminder_C::OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnHealthChanged"));

	struct
	{
		class ATigerPlayer*            InPlayer;
		float                          InOldHealth;
		float                          InNewHealth;
	} params = {};

	params.InPlayer = InPlayer;
	params.InOldHealth = InOldHealth;
	params.InNewHealth = InNewHealth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_Consumable_LowHPReminder_C::ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder"));

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
