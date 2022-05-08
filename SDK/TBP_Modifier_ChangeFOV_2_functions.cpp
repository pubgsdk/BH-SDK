// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Modifier_ChangeFOV_2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Modifier_ChangeFOV_2.TBP_Modifier_ChangeFOV_1_C.OnModEquipped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerEquippedModModifierValues* Modifiers                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Modifier_ChangeFOV_1_C::OnModEquipped(class UTigerEquippedModModifierValues* Modifiers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Modifier_ChangeFOV_2.TBP_Modifier_ChangeFOV_1_C.OnModEquipped"));

	struct
	{
		class UTigerEquippedModModifierValues* Modifiers;
	} params = {};

	params.Modifiers = Modifiers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Modifier_ChangeFOV_2.TBP_Modifier_ChangeFOV_1_C.OnModUnequipped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerEquippedModModifierValues* Modifiers                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Modifier_ChangeFOV_1_C::OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Modifier_ChangeFOV_2.TBP_Modifier_ChangeFOV_1_C.OnModUnequipped"));

	struct
	{
		class UTigerEquippedModModifierValues* Modifiers;
	} params = {};

	params.Modifiers = Modifiers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Modifier_ChangeFOV_2.TBP_Modifier_ChangeFOV_1_C.ExecuteUbergraph_TBP_Modifier_ChangeFOV_2
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Modifier_ChangeFOV_1_C::ExecuteUbergraph_TBP_Modifier_ChangeFOV_2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Modifier_ChangeFOV_2.TBP_Modifier_ChangeFOV_1_C.ExecuteUbergraph_TBP_Modifier_ChangeFOV_2"));

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
