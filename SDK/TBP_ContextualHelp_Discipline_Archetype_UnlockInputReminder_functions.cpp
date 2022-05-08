// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder.TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C.OnPlayerSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InTigerPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder.TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C.OnPlayerSpawned"));

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


// Function TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder.TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C.OnDisciplineUnlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplineSlot           InDisciplineSlot               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C::OnDisciplineUnlocked(ETigerDisciplineSlot InDisciplineSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder.TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C.OnDisciplineUnlocked"));

	struct
	{
		ETigerDisciplineSlot           InDisciplineSlot;
	} params = {};

	params.InDisciplineSlot = InDisciplineSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder.TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C::ExecuteUbergraph_TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder.TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder"));

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
