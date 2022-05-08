// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_FriendInviteList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnPopulateInvites
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UTigerFriendInvite*> InFriendInvites                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Social_FriendInviteList_C::OnPopulateInvites(TArray<class UTigerFriendInvite*> InFriendInvites)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnPopulateInvites"));

	struct
	{
		TArray<class UTigerFriendInvite*> InFriendInvites;
	} params = {};

	params.InFriendInvites = InFriendInvites;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteReceived
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriendInvite*      InInvite                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_FriendInviteList_C::OnInviteReceived(class UTigerFriendInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteReceived"));

	struct
	{
		class UTigerFriendInvite*      InInvite;
	} params = {};

	params.InInvite = InInvite;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriendInvite*      InInvite                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_FriendInviteList_C::OnInviteRemoved(class UTigerFriendInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteRemoved"));

	struct
	{
		class UTigerFriendInvite*      InInvite;
	} params = {};

	params.InInvite = InInvite;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.ExecuteUbergraph_TBP_UI_Social_FriendInviteList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_FriendInviteList_C::ExecuteUbergraph_TBP_UI_Social_FriendInviteList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.ExecuteUbergraph_TBP_UI_Social_FriendInviteList"));

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
