// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_Heal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Buff_Heal.TBP_Buff_Heal_C.SetShaderParameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InOwner                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Buff_Heal_C::SetShaderParameters(class ATigerCharacter* InOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Buff_Heal.TBP_Buff_Heal_C.SetShaderParameters"));

	struct
	{
		class ATigerCharacter*         InOwner;
	} params = {};

	params.InOwner = InOwner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Buff_Heal.TBP_Buff_Heal_C.OnActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InBuffOwner                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         InBuffCaster                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Buff_Heal_C::OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Buff_Heal.TBP_Buff_Heal_C.OnActivated"));

	struct
	{
		class ATigerCharacter*         InBuffOwner;
		class ATigerCharacter*         InBuffCaster;
	} params = {};

	params.InBuffOwner = InBuffOwner;
	params.InBuffCaster = InBuffCaster;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Buff_Heal.TBP_Buff_Heal_C.OnDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InBuffOwner                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         InBuffCaster                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Buff_Heal_C::OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Buff_Heal.TBP_Buff_Heal_C.OnDeactivated"));

	struct
	{
		class ATigerCharacter*         InBuffOwner;
		class ATigerCharacter*         InBuffCaster;
	} params = {};

	params.InBuffOwner = InBuffOwner;
	params.InBuffCaster = InBuffCaster;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Buff_Heal.TBP_Buff_Heal_C.OnRefreshed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InBuffOwner                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         InBuffCaster                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Buff_Heal_C::OnRefreshed(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Buff_Heal.TBP_Buff_Heal_C.OnRefreshed"));

	struct
	{
		class ATigerCharacter*         InBuffOwner;
		class ATigerCharacter*         InBuffCaster;
	} params = {};

	params.InBuffOwner = InBuffOwner;
	params.InBuffCaster = InBuffCaster;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Buff_Heal.TBP_Buff_Heal_C.ExecuteUbergraph_TBP_Buff_Heal
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Buff_Heal_C::ExecuteUbergraph_TBP_Buff_Heal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Buff_Heal.TBP_Buff_Heal_C.ExecuteUbergraph_TBP_Buff_Heal"));

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
