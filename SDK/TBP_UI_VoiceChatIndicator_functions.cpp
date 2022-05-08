// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_VoiceChatIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.VisualizeChatState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETalkingVisiblityState         InChatState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatIndicator_C::VisualizeChatState(ETalkingVisiblityState InChatState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.VisualizeChatState"));

	struct
	{
		ETalkingVisiblityState         InChatState;
	} params = {};

	params.InChatState = InChatState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.UpdateVoiceChatStatePopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentVoipID  InTigerPersistentVoipID        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_VoiceChatIndicator_C::UpdateVoiceChatStatePopup(const struct FTigerPersistentVoipID& InTigerPersistentVoipID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.UpdateVoiceChatStatePopup"));

	struct
	{
		struct FTigerPersistentVoipID  InTigerPersistentVoipID;
	} params = {};

	params.InTigerPersistentVoipID = InTigerPersistentVoipID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.JoinVoiceChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatIndicator_C::JoinVoiceChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.JoinVoiceChat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.UpdateVoiceChatState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatIndicator_C::UpdateVoiceChatState(class ATigerPlayerState* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.UpdateVoiceChatState"));

	struct
	{
		class ATigerPlayerState*       Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_VoiceChatIndicator_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.PreConstruct"));

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


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.Set Voip ID FromTiger Player State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       inTigerPlayerState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatIndicator_C::Set_Voip_ID_FromTiger_Player_State(class ATigerPlayerState* inTigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.Set Voip ID FromTiger Player State"));

	struct
	{
		class ATigerPlayerState*       inTigerPlayerState;
	} params = {};

	params.inTigerPlayerState = inTigerPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.Set Voip ID
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentVoipID  InVoipID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_VoiceChatIndicator_C::Set_Voip_ID(const struct FTigerPersistentVoipID& InVoipID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.Set Voip ID"));

	struct
	{
		struct FTigerPersistentVoipID  InVoipID;
	} params = {};

	params.InVoipID = InVoipID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.TalkingVisibilityStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// ETalkingVisiblityState         InTalkingVisibilityState       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatIndicator_C::TalkingVisibilityStateChanged(ETalkingVisiblityState InTalkingVisibilityState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.TalkingVisibilityStateChanged"));

	struct
	{
		ETalkingVisiblityState         InTalkingVisibilityState;
	} params = {};

	params.InTalkingVisibilityState = InTalkingVisibilityState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.ExecuteUbergraph_TBP_UI_VoiceChatIndicator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatIndicator_C::ExecuteUbergraph_TBP_UI_VoiceChatIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatIndicator.TBP_UI_VoiceChatIndicator_C.ExecuteUbergraph_TBP_UI_VoiceChatIndicator"));

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
