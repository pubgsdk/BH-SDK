// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GroupMemberStatusWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetPlayerColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  InPlayerIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberStatusWidget_C::SetPlayerColor(unsigned char InPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetPlayerColor"));

	struct
	{
		unsigned char                  InPlayerIndex;
	} params = {};

	params.InPlayerIndex = InPlayerIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.OnPawnChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   New_Pawn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberStatusWidget_C::OnPawnChanged(class APawn* New_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.OnPawnChanged"));

	struct
	{
		class APawn*                   New_Pawn;
	} params = {};

	params.New_Pawn = New_Pawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateElysiumVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_GroupMemberStatusWidget_C::UpdateElysiumVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateElysiumVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetMember
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InGroupMemberState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerForceOption              InForceMemberCard              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   InPawnOverride                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberStatusWidget_C::SetMember(class ATigerPlayerState* InGroupMemberState, ETigerForceOption InForceMemberCard, class APawn* InPawnOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetMember"));

	struct
	{
		class ATigerPlayerState*       InGroupMemberState;
		ETigerForceOption              InForceMemberCard;
		class APawn*                   InPawnOverride;
	} params = {};

	params.InGroupMemberState = InGroupMemberState;
	params.InForceMemberCard = InForceMemberCard;
	params.InPawnOverride = InPawnOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateMatchmakingReadyStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsReadyForMatchmaking        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_GroupMemberStatusWidget_C::UpdateMatchmakingReadyStatus(bool InIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateMatchmakingReadyStatus"));

	struct
	{
		bool                           InIsReadyForMatchmaking;
	} params = {};

	params.InIsReadyForMatchmaking = InIsReadyForMatchmaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.ExecuteUbergraph_TBP_GroupMemberStatusWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberStatusWidget_C::ExecuteUbergraph_TBP_GroupMemberStatusWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.ExecuteUbergraph_TBP_GroupMemberStatusWidget"));

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
