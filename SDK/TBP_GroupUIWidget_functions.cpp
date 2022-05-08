// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GroupUIWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearOutOfSightWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_GroupUIWidget_C::ClearOutOfSightWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearOutOfSightWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.CreateMemberWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsReadyForMatchmaking         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_GroupMemberStatusWidget_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBP_GroupMemberStatusWidget_C* UTBP_GroupUIWidget_C::CreateMemberWidget(class APlayerController* OwningPlayer, bool bIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.CreateMemberWidget"));

	struct
	{
		class APlayerController*       OwningPlayer;
		bool                           bIsReadyForMatchmaking;
		class UTBP_GroupMemberStatusWidget_C* ReturnValue;
	} params = {};

	params.OwningPlayer = OwningPlayer;
	params.bIsReadyForMatchmaking = bIsReadyForMatchmaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberStatusWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       InOwningPlayer                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayerState*       InGroupMemberState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsReadyForMatchmaking       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerForceOption              InForceMemberCard              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   InPawnOverride                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupUIWidget_C::AddGroupMemberStatusWidget(class APlayerController* InOwningPlayer, class ATigerPlayerState* InGroupMemberState, bool bInIsReadyForMatchmaking, ETigerForceOption InForceMemberCard, class APawn* InPawnOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberStatusWidget"));

	struct
	{
		class APlayerController*       InOwningPlayer;
		class ATigerPlayerState*       InGroupMemberState;
		bool                           bInIsReadyForMatchmaking;
		ETigerForceOption              InForceMemberCard;
		class APawn*                   InPawnOverride;
	} params = {};

	params.InOwningPlayer = InOwningPlayer;
	params.InGroupMemberState = InGroupMemberState;
	params.bInIsReadyForMatchmaking = bInIsReadyForMatchmaking;
	params.InForceMemberCard = InForceMemberCard;
	params.InPawnOverride = InPawnOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddOutOfSightWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       InOwningPlayer                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayerState*       InGroupMember                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupUIWidget_C::AddOutOfSightWidget(class APlayerController* InOwningPlayer, class ATigerPlayerState* InGroupMember)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddOutOfSightWidget"));

	struct
	{
		class APlayerController*       InOwningPlayer;
		class ATigerPlayerState*       InGroupMember;
	} params = {};

	params.InOwningPlayer = InOwningPlayer;
	params.InGroupMember = InGroupMember;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearGroupMembers
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_GroupUIWidget_C::ClearGroupMembers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearGroupMembers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberToCanvas
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InGroupMember                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsReadyForMatchmaking       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_GroupUIWidget_C::AddGroupMemberToCanvas(class ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberToCanvas"));

	struct
	{
		class ATigerPlayerState*       InGroupMember;
		bool                           bInIsReadyForMatchmaking;
	} params = {};

	params.InGroupMember = InGroupMember;
	params.bInIsReadyForMatchmaking = bInIsReadyForMatchmaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.OnGroupMemberReadyStatusChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InGroupMember                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsReadyForMatchmaking       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_GroupUIWidget_C::OnGroupMemberReadyStatusChanged(class ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.OnGroupMemberReadyStatusChanged"));

	struct
	{
		class ATigerPlayerState*       InGroupMember;
		bool                           bInIsReadyForMatchmaking;
	} params = {};

	params.InGroupMember = InGroupMember;
	params.bInIsReadyForMatchmaking = bInIsReadyForMatchmaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_GroupUIWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ExecuteUbergraph_TBP_GroupUIWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupUIWidget_C::ExecuteUbergraph_TBP_GroupUIWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ExecuteUbergraph_TBP_GroupUIWidget"));

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
