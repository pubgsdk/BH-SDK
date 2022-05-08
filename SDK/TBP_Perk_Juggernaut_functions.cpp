// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Juggernaut_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Perk_Juggernaut.TBP_Perk_Juggernaut_C.OnCreated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InHasAuthority                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_Perk_Juggernaut_C::OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Perk_Juggernaut.TBP_Perk_Juggernaut_C.OnCreated"));

	struct
	{
		class ATigerPlayer*            InPlayer;
		bool                           InHasAuthority;
	} params = {};

	params.InPlayer = InPlayer;
	params.InHasAuthority = InHasAuthority;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Perk_Juggernaut.TBP_Perk_Juggernaut_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerTraversalAction          InAction                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Perk_Juggernaut_C::CustomEvent_1(class ATigerPlayer* InPlayer, ETigerTraversalAction InAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Perk_Juggernaut.TBP_Perk_Juggernaut_C.CustomEvent_1"));

	struct
	{
		class ATigerPlayer*            InPlayer;
		ETigerTraversalAction          InAction;
	} params = {};

	params.InPlayer = InPlayer;
	params.InAction = InAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Perk_Juggernaut.TBP_Perk_Juggernaut_C.ExecuteUbergraph_TBP_Perk_Juggernaut
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Perk_Juggernaut_C::ExecuteUbergraph_TBP_Perk_Juggernaut(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Perk_Juggernaut.TBP_Perk_Juggernaut_C.ExecuteUbergraph_TBP_Perk_Juggernaut"));

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
