// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ChatWindowMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Get Sender Name
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   OutText                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_ChatWindowMessage_C::Get_Sender_Name(struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Get Sender Name"));

	struct
	{
		struct FText                   OutText;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIPadding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindowMessage_C::SetUIPadding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIPadding"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIVisibilities
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindowMessage_C::SetUIVisibilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIVisibilities"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Is Another Player
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsAnotherPlayer               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChatWindowMessage_C::Is_Another_Player(bool* bIsAnotherPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Is Another Player"));

	struct
	{
		bool                           bIsAnotherPlayer;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsAnotherPlayer != nullptr)
		*bIsAnotherPlayer = params.bIsAnotherPlayer;
}


// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.RecycleMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerChatMessage       InChatMessage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ChatWindowMessage_C::RecycleMessage(const struct FTigerChatMessage& InChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.RecycleMessage"));

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


// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChatWindowMessage_C::BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ChatWindowMessage_C::BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ChatWindowMessage_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.ExecuteUbergraph_TBP_UI_ChatWindowMessage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChatWindowMessage_C::ExecuteUbergraph_TBP_UI_ChatWindowMessage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.ExecuteUbergraph_TBP_UI_ChatWindowMessage"));

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
