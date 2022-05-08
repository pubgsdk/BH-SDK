// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SocialPartyMemberListItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnPlayerNameChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SocialPartyMemberListItem_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnPlayerNameChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemExpansionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SocialPartyMemberListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemExpansionChanged"));

	struct
	{
		bool                           bIsExpanded;
	} params = {};

	params.bIsExpanded = bIsExpanded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemSelectionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SocialPartyMemberListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemSelectionChanged"));

	struct
	{
		bool                           bIsSelected;
	} params = {};

	params.bIsSelected = bIsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnListItemObjectSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SocialPartyMemberListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnListItemObjectSet"));

	struct
	{
		class UObject*                 ListItemObject;
	} params = {};

	params.ListItemObject = ListItemObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnEntryReleased
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_SocialPartyMemberListItem_C::BP_OnEntryReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnEntryReleased"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnDisplayNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InName                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SocialPartyMemberListItem_C::OnDisplayNameChanged(const struct FString& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnDisplayNameChanged"));

	struct
	{
		struct FString                 InName;
	} params = {};

	params.InName = InName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.UpdateRepresentedPlayerInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SocialPartyMemberListItem_C::UpdateRepresentedPlayerInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.UpdateRepresentedPlayerInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnStateAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SocialPartyMemberListItem_C::OnStateAdded(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnStateAdded"));

	struct
	{
		class ATigerPlayerState*       InPlayerState;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.SetupCard
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ListItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SocialPartyMemberListItem_C::SetupCard(class UObject* ListItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.SetupCard"));

	struct
	{
		class UObject*                 ListItem;
	} params = {};

	params.ListItem = ListItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SocialPartyMemberListItem_C::ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem"));

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
