// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Inbox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Inbox.TBP_UI_Inbox_C.DeleteMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::DeleteMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.DeleteMessage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.PopulateMessageContent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerInboxMessage      InMessage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Inbox_C::PopulateMessageContent(const struct FTigerInboxMessage& InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.PopulateMessageContent"));

	struct
	{
		struct FTigerInboxMessage      InMessage;
	} params = {};

	params.InMessage = InMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.DeselectAllMessages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::DeselectAllMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.DeselectAllMessages"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.SelectMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InboxMessageInfoBox_C* InMessage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inbox_C::SelectMessage(class UTBP_UI_InboxMessageInfoBox_C* InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.SelectMessage"));

	struct
	{
		class UTBP_UI_InboxMessageInfoBox_C* InMessage;
	} params = {};

	params.InMessage = InMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnBackgroundSceneShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnBackgroundSceneShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnFetchMessageInfoListComplete
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           InSuccess                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Inbox_C::OnFetchMessageInfoListComplete(bool InSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnFetchMessageInfoListComplete"));

	struct
	{
		bool                           InSuccess;
	} params = {};

	params.InSuccess = InSuccess;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnLanguageChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::OnLanguageChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.OnLanguageChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.BndEvt__TBP_UI_ElysiumNewsMenu_InputPrompt_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::BndEvt__TBP_UI_ElysiumNewsMenu_InputPrompt_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.BndEvt__TBP_UI_ElysiumNewsMenu_InputPrompt_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.BndEvt__TBP_UI_Inbox_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::BndEvt__TBP_UI_Inbox_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.BndEvt__TBP_UI_Inbox_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.BndEvt__TBP_UI_Inbox_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Inbox_C::BndEvt__TBP_UI_Inbox_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.BndEvt__TBP_UI_Inbox_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inbox.TBP_UI_Inbox_C.ExecuteUbergraph_TBP_UI_Inbox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inbox_C::ExecuteUbergraph_TBP_UI_Inbox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inbox.TBP_UI_Inbox_C.ExecuteUbergraph_TBP_UI_Inbox"));

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
