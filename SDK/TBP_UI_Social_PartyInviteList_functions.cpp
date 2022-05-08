// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_PartyInviteList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Open
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PartyInviteList_C::Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Open"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PartyInviteList_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Close"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteReceived
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPartyInvite*       InInvite                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PartyInviteList_C::OnInviteReceived(class UTigerPartyInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteReceived"));

	struct
	{
		class UTigerPartyInvite*       InInvite;
	} params = {};

	params.InInvite = InInvite;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPartyInvite*       InInvite                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PartyInviteList_C::OnInviteRemoved(class UTigerPartyInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteRemoved"));

	struct
	{
		class UTigerPartyInvite*       InInvite;
	} params = {};

	params.InInvite = InInvite;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.ExecuteUbergraph_TBP_UI_Social_PartyInviteList
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PartyInviteList_C::ExecuteUbergraph_TBP_UI_Social_PartyInviteList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.ExecuteUbergraph_TBP_UI_Social_PartyInviteList"));

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
