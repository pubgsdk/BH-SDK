// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RejuvenatingVoice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerEnter
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RejuvenatingVoice_C::OnPlayerEnter(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerEnter"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerExit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RejuvenatingVoice_C::OnPlayerExit(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerExit"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_RejuvenatingVoice_C::OnHealStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStop
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_RejuvenatingVoice_C::OnHealStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealPulse
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInOnProjection                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_RejuvenatingVoice_C::OnHealPulse(bool bInOnProjection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealPulse"));

	struct
	{
		bool                           bInOnProjection;
	} params = {};

	params.bInOnProjection = bInOnProjection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.ExecuteUbergraph_TBP_RejuvenatingVoice
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_RejuvenatingVoice_C::ExecuteUbergraph_TBP_RejuvenatingVoice(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.ExecuteUbergraph_TBP_RejuvenatingVoice"));

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
