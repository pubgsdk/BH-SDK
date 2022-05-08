// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GroupInvitationList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.CheckIfRepeatedInviteFromPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       Inviter                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           NewInvite                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GroupInvitationList_C::CheckIfRepeatedInviteFromPlayer(class ATigerPlayerState* Inviter, bool* NewInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.CheckIfRepeatedInviteFromPlayer"));

	struct
	{
		class ATigerPlayerState*       Inviter;
		bool                           NewInvite;
	} params = {};

	params.Inviter = Inviter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewInvite != nullptr)
		*NewInvite = params.NewInvite;
}


// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.AddInvitation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerGroupInvitation   Invitation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class ATigerPlayerState*       Inviter                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GroupInvitationList_C::AddInvitation(const struct FTigerGroupInvitation& Invitation, class ATigerPlayerState* Inviter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.AddInvitation"));

	struct
	{
		struct FTigerGroupInvitation   Invitation;
		class ATigerPlayerState*       Inviter;
	} params = {};

	params.Invitation = Invitation;
	params.Inviter = Inviter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GroupInvitationList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Tick"));

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


// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_GroupInvitationList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.ExecuteUbergraph_TBP_UI_GroupInvitationList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GroupInvitationList_C::ExecuteUbergraph_TBP_UI_GroupInvitationList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.ExecuteUbergraph_TBP_UI_GroupInvitationList"));

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
