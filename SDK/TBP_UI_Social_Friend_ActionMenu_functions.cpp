// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Friend_ActionMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableRemoveFriend
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldEnable                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_Friend_ActionMenu_C::ShouldEnableRemoveFriend(bool* bShouldEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableRemoveFriend"));

	struct
	{
		bool                           bShouldEnable;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShouldEnable != nullptr)
		*bShouldEnable = params.bShouldEnable;
}


// Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableGroupInvite
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldEnable                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_Friend_ActionMenu_C::ShouldEnableGroupInvite(bool* bShouldEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ShouldEnableGroupInvite"));

	struct
	{
		bool                           bShouldEnable;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShouldEnable != nullptr)
		*bShouldEnable = params.bShouldEnable;
}


// Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.GetFriendPlayerCard
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Social_Friend_PlayerCard_C* OutPlayerCard                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_ActionMenu_C::GetFriendPlayerCard(class UTBP_UI_Social_Friend_PlayerCard_C** OutPlayerCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.GetFriendPlayerCard"));

	struct
	{
		class UTBP_UI_Social_Friend_PlayerCard_C* OutPlayerCard;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPlayerCard != nullptr)
		*OutPlayerCard = params.OutPlayerCard;
}


// Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_ActionMenu_C::BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_ActionMenu_C::BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_ActionMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_ActionMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_ActionMenu_C::ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C.ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu"));

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
