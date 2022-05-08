// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ChatComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ChatComponent.TBP_ChatComponent_C.CanOpenChat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_ChatComponent_C::CanOpenChat(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.CanOpenChat"));

	struct
	{
		bool                           Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.OnFailedToJoinParty
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerJoinedPartyFailedReason  InJoinedPartyFailedReason      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ChatComponent_C::OnFailedToJoinParty(ETigerJoinedPartyFailedReason InJoinedPartyFailedReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OnFailedToJoinParty"));

	struct
	{
		ETigerJoinedPartyFailedReason  InJoinedPartyFailedReason;
	} params = {};

	params.InJoinedPartyFailedReason = InJoinedPartyFailedReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.OnBlockedPlayerWasRemovedFromParty
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInWasBlockedByMe              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_ChatComponent_C::OnBlockedPlayerWasRemovedFromParty(bool bInWasBlockedByMe)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OnBlockedPlayerWasRemovedFromParty"));

	struct
	{
		bool                           bInWasBlockedByMe;
	} params = {};

	params.bInWasBlockedByMe = bInWasBlockedByMe;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.OnLeftPartyDueToBlockedPlayerJoinBlueprint
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInWasKicked                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_ChatComponent_C::OnLeftPartyDueToBlockedPlayerJoinBlueprint(bool bInWasKicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OnLeftPartyDueToBlockedPlayerJoinBlueprint"));

	struct
	{
		bool                           bInWasKicked;
	} params = {};

	params.bInWasKicked = bInWasKicked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.OnLoaded_5480FD144B182ADDBFA34EB41371AFF7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_ChatComponent_C::OnLoaded_5480FD144B182ADDBFA34EB41371AFF7(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OnLoaded_5480FD144B182ADDBFA34EB41371AFF7"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.Server_SendChatMessageToClients
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MessageText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bWriteOnlyToGroupMembers       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_ChatComponent_C::Server_SendChatMessageToClients(const struct FText& MessageText, bool bWriteOnlyToGroupMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.Server_SendChatMessageToClients"));

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


// Function TBP_ChatComponent.TBP_ChatComponent_C.OnMessageInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MessageText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           OnlyGroup                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_ChatComponent_C::OnMessageInput(const struct FText& MessageText, bool OnlyGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OnMessageInput"));

	struct
	{
		struct FText                   MessageText;
		bool                           OnlyGroup;
	} params = {};

	params.MessageText = MessageText;
	params.OnlyGroup = OnlyGroup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.OnChatMessageReceived
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerChatMessage       InMessage                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_ChatComponent_C::OnChatMessageReceived(const struct FTigerChatMessage& InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OnChatMessageReceived"));

	struct
	{
		struct FTigerChatMessage       InMessage;
	} params = {};

	params.InMessage = InMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.OpenChatWindow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ChatComponent_C::OpenChatWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OpenChatWindow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.PreventChatUntilInElysium
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ChatComponent_C::PreventChatUntilInElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.PreventChatUntilInElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.Welcome Players In Chat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ChatComponent_C::Welcome_Players_In_Chat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.Welcome Players In Chat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.CreateChatWindow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_ChatComponent_C::CreateChatWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.CreateChatWindow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.OnBanStatusUpdated
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMuteInfo          InMuteInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_ChatComponent_C::OnBanStatusUpdated(const struct FTigerMuteInfo& InMuteInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OnBanStatusUpdated"));

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


// Function TBP_ChatComponent.TBP_ChatComponent_C.AddChatMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerChatMessage       InMessage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_ChatComponent_C::AddChatMessage(const struct FTigerChatMessage& InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.AddChatMessage"));

	struct
	{
		struct FTigerChatMessage       InMessage;
	} params = {};

	params.InMessage = InMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.SendBufferedMessages
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_ChatComponent_C::SendBufferedMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.SendBufferedMessages"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.OnGameModeSelectionClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMenuWidget*        InMenuWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ChatComponent_C::OnGameModeSelectionClosed(class UTigerMenuWidget* InMenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.OnGameModeSelectionClosed"));

	struct
	{
		class UTigerMenuWidget*        InMenuWidget;
	} params = {};

	params.InMenuWidget = InMenuWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ChatComponent.TBP_ChatComponent_C.ExecuteUbergraph_TBP_ChatComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_ChatComponent_C::ExecuteUbergraph_TBP_ChatComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ChatComponent.TBP_ChatComponent_C.ExecuteUbergraph_TBP_ChatComponent"));

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
