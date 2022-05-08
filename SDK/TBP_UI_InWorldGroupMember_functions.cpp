// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InWorldGroupMember_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InWorldGroupMember_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnPlayerIndexChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  PlayerIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldGroupMember_C::OnPlayerIndexChanged(unsigned char PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnPlayerIndexChanged"));

	struct
	{
		unsigned char                  PlayerIndex;
	} params = {};

	params.PlayerIndex = PlayerIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnLifeStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerLifeStatus         InLifeStatus                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldGroupMember_C::OnLifeStatusChanged(ETigerPlayerLifeStatus InLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnLifeStatusChanged"));

	struct
	{
		ETigerPlayerLifeStatus         InLifeStatus;
	} params = {};

	params.InLifeStatus = InLifeStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.HandleRemovedGroupMember
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InWorldGroupMember_C::HandleRemovedGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.HandleRemovedGroupMember"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.ExecuteUbergraph_TBP_UI_InWorldGroupMember
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InWorldGroupMember_C::ExecuteUbergraph_TBP_UI_InWorldGroupMember(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.ExecuteUbergraph_TBP_UI_InWorldGroupMember"));

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
