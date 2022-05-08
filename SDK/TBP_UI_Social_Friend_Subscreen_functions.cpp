// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Friend_Subscreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.UpdateAvailability
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_Subscreen_C::UpdateAvailability()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.UpdateAvailability"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RemoveFriendFromList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriend*            InLostFriend                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_Subscreen_C::RemoveFriendFromList(class UTigerFriend** InLostFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RemoveFriendFromList"));

	struct
	{
		class UTigerFriend*            InLostFriend;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InLostFriend != nullptr)
		*InLostFriend = params.InLostFriend;
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.AddFriendToList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriend*            InNewFriend                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_Subscreen_C::AddFriendToList(class UTigerFriend** InNewFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.AddFriendToList"));

	struct
	{
		class UTigerFriend*            InNewFriend;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InNewFriend != nullptr)
		*InNewFriend = params.InNewFriend;
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RefreshFriendsList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_Subscreen_C::RefreshFriendsList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RefreshFriendsList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendAdded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriend*            InNewFriend                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_Subscreen_C::OnFriendAdded(class UTigerFriend* InNewFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendAdded"));

	struct
	{
		class UTigerFriend*            InNewFriend;
	} params = {};

	params.InNewFriend = InNewFriend;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendRemoved
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriend*            InLostFriend                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_Subscreen_C::OnFriendRemoved(class UTigerFriend* InLostFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendRemoved"));

	struct
	{
		class UTigerFriend*            InLostFriend;
	} params = {};

	params.InLostFriend = InLostFriend;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendsLoaded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_Subscreen_C::OnFriendsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendsLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_Subscreen_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_Friend_Subscreen_C::BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendServiceStatusChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerOnlineServiceStatus      InServiceStatus                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_Subscreen_C::OnFriendServiceStatusChanged(ETigerOnlineServiceStatus InServiceStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendServiceStatusChanged"));

	struct
	{
		ETigerOnlineServiceStatus      InServiceStatus;
	} params = {};

	params.InServiceStatus = InServiceStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_Friend_Subscreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.PreConstruct"));

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


// Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Friend_Subscreen_C::ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen"));

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
