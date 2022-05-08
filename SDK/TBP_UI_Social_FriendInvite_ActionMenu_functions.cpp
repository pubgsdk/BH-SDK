// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_FriendInvite_ActionMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.GetFriendRequestCard
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Social_FriendInvite_PlayerCard_C* OutPlayerCard                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_FriendInvite_ActionMenu_C::GetFriendRequestCard(class UTBP_UI_Social_FriendInvite_PlayerCard_C** OutPlayerCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.GetFriendRequestCard"));

	struct
	{
		class UTBP_UI_Social_FriendInvite_PlayerCard_C* OutPlayerCard;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPlayerCard != nullptr)
		*OutPlayerCard = params.OutPlayerCard;
}


// Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_FriendInvite_ActionMenu_C::BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_FriendInvite_ActionMenu_C::BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Social_FriendInvite_ActionMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_FriendInvite_ActionMenu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_FriendInvite_ActionMenu_C::ExecuteUbergraph_TBP_UI_Social_FriendInvite_ActionMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_FriendInvite_ActionMenu"));

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
