// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Marshal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Perk_Marshal.TBP_Perk_Marshal_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_Perk_Marshal_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Perk_Marshal.TBP_Perk_Marshal_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Perk_Marshal.TBP_Perk_Marshal_C.OnCreated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InHasAuthority                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_Perk_Marshal_C::OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Perk_Marshal.TBP_Perk_Marshal_C.OnCreated"));

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


// Function TBP_Perk_Marshal.TBP_Perk_Marshal_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bTargetIsDrained               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATigerCharacter*         InTargetFedOn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Perk_Marshal_C::CustomEvent_1(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Perk_Marshal.TBP_Perk_Marshal_C.CustomEvent_1"));

	struct
	{
		bool                           bTargetIsDrained;
		class ATigerCharacter*         InTargetFedOn;
	} params = {};

	params.bTargetIsDrained = bTargetIsDrained;
	params.InTargetFedOn = InTargetFedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Perk_Marshal.TBP_Perk_Marshal_C.ExecuteUbergraph_TBP_Perk_Marshal
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Perk_Marshal_C::ExecuteUbergraph_TBP_Perk_Marshal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Perk_Marshal.TBP_Perk_Marshal_C.ExecuteUbergraph_TBP_Perk_Marshal"));

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
