// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ChatWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHasMatchStarted               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChatWindow_C::SetChatPosition(bool bHasMatchStarted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatPosition"));

	struct
	{
		bool                           bHasMatchStarted;
	} params = {};

	params.bHasMatchStarted = bHasMatchStarted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.NotifyBannedStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChatComponent*     InChatComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChatWindow_C::NotifyBannedStatus(class UTigerChatComponent* InChatComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.NotifyBannedStatus"));

	struct
	{
		class UTigerChatComponent*     InChatComponent;
	} params = {};

	params.InChatComponent = InChatComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.VerifyCanSendMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCanSend                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChatWindow_C::VerifyCanSendMessage(bool* bCanSend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.VerifyCanSendMessage"));

	struct
	{
		bool                           bCanSend;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bCanSend != nullptr)
		*bCanSend = params.bCanSend;
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Should Prevent Trying To Type In General Chat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bShouldPrevent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChatWindow_C::Should_Prevent_Trying_To_Type_In_General_Chat(bool* bShouldPrevent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Should Prevent Trying To Type In General Chat"));

	struct
	{
		bool                           bShouldPrevent;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShouldPrevent != nullptr)
		*bShouldPrevent = params.bShouldPrevent;
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Has Chat Prefix
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 InChatMessage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FString                 InPrefix                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FString                 InPrefixShort                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           bHasPrefix                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChatWindow_C::Has_Chat_Prefix(struct FString* InChatMessage, struct FString* InPrefix, struct FString* InPrefixShort, bool* bHasPrefix)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Has Chat Prefix"));

	struct
	{
		struct FString                 InChatMessage;
		struct FString                 InPrefix;
		struct FString                 InPrefixShort;
		bool                           bHasPrefix;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InChatMessage != nullptr)
		*InChatMessage = params.InChatMessage;
	if (InPrefix != nullptr)
		*InPrefix = params.InPrefix;
	if (InPrefixShort != nullptr)
		*InPrefixShort = params.InPrefixShort;
	if (bHasPrefix != nullptr)
		*bHasPrefix = params.bHasPrefix;
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.CreateGameMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InGameMessage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bIsBanMessage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChatWindow_C::CreateGameMessage(const struct FText& InGameMessage, bool bIsBanMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.CreateGameMessage"));

	struct
	{
		struct FText                   InGameMessage;
		bool                           bIsBanMessage;
	} params = {};

	params.InGameMessage = InGameMessage;
	params.bIsBanMessage = bIsBanMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatMode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsGroupChat                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChatWindow_C::SetChatMode(bool bIsGroupChat)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatMode"));

	struct
	{
		bool                           bIsGroupChat;
	} params = {};

	params.bIsGroupChat = bIsGroupChat;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Remove Muted Players Messages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerID InMutedPlayerId                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ChatWindow_C::Remove_Muted_Players_Messages(const struct FTigerPersistentPlayerID& InMutedPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Remove Muted Players Messages"));

	struct
	{
		struct FTigerPersistentPlayerID InMutedPlayerId;
	} params = {};

	params.InMutedPlayerId = InMutedPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.EnableOptionsMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::EnableOptionsMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.EnableOptionsMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddAsFriend
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::AddAsFriend()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddAsFriend"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.InviteToGroup
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::InviteToGroup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.InviteToGroup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddNewMessage
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerChatMessage       InChatMessage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ChatWindow_C::AddNewMessage(const struct FTigerChatMessage& InChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddNewMessage"));

	struct
	{
		struct FTigerChatMessage       InChatMessage;
	} params = {};

	params.InChatMessage = InChatMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutWindow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::FadeOutWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutWindow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInWindow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::FadeInWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInWindow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.StartFadeOutTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::StartFadeOutTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.StartFadeOutTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ChatWindow_C::BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerChatMessage       InChatMessage                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ChatWindow_C::AddMessage(const struct FTigerChatMessage& InChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddMessage"));

	struct
	{
		struct FTigerChatMessage       InChatMessage;
	} params = {};

	params.InChatMessage = InChatMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Focus on Input Box
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::Focus_on_Input_Box()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Focus on Input Box"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameHovered
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerChatMessage       InChatData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ChatWindow_C::OnMessageNameHovered(const struct FTigerChatMessage& InChatData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameHovered"));

	struct
	{
		struct FTigerChatMessage       InChatData;
	} params = {};

	params.InChatData = InChatData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::OnMessageNameUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameUnhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnOptionsBoxOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::OnOptionsBoxOpened()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnOptionsBoxOpened"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.HideOptionsMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::HideOptionsMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.HideOptionsMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInBackground
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::FadeInBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInBackground"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnRightClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::OnRightClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnRightClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutBackground
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::FadeOutBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutBackground"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnSwapChatInputPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::OnSwapChatInputPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnSwapChatInputPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnBanStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMuteInfo          InMuteInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ChatWindow_C::OnBanStatusChanged(const struct FTigerMuteInfo& InMuteInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnBanStatusChanged"));

	struct
	{
		struct FTigerMuteInfo          InMuteInfo;
	} params = {};

	params.InMuteInfo = InMuteInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnPreMatchStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPreMatchStateInfo PreMatchState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UTBP_UI_ChatWindow_C::OnPreMatchStateChanged(const struct FTigerPreMatchStateInfo& PreMatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnPreMatchStateChanged"));

	struct
	{
		struct FTigerPreMatchStateInfo PreMatchState;
	} params = {};

	params.PreMatchState = PreMatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChatWindow_C::BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params = {};

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.WelcomePlayersInElysium
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindow_C::WelcomePlayersInElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.WelcomePlayersInElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.ExecuteUbergraph_TBP_UI_ChatWindow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChatWindow_C::ExecuteUbergraph_TBP_UI_ChatWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.ExecuteUbergraph_TBP_UI_ChatWindow"));

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


// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageInput__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MessageText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bWriteOnlyToGroupMembers       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChatWindow_C::OnMessageInput__DelegateSignature(const struct FText& MessageText, bool bWriteOnlyToGroupMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageInput__DelegateSignature"));

	struct
	{
		struct FText                   MessageText;
		bool                           bWriteOnlyToGroupMembers;
	} params = {};

	params.MessageText = MessageText;
	params.bWriteOnlyToGroupMembers = bWriteOnlyToGroupMembers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
