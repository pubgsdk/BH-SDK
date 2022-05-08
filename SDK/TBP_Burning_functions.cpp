// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Burning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Burning.TBP_Burning_C.OnActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InBuffOwner                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         InBuffCaster                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Burning_C::OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Burning.TBP_Burning_C.OnActivated"));

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


// Function TBP_Burning.TBP_Burning_C.OnDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InBuffOwner                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         InBuffCaster                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Burning_C::OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Burning.TBP_Burning_C.OnDeactivated"));

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


// Function TBP_Burning.TBP_Burning_C.ExecuteUbergraph_TBP_Burning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Burning_C::ExecuteUbergraph_TBP_Burning(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Burning.TBP_Burning_C.ExecuteUbergraph_TBP_Burning"));

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
