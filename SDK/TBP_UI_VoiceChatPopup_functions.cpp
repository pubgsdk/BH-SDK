// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_VoiceChatPopup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.RefreshDisplayNames
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatPopup_C::RefreshDisplayNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.RefreshDisplayNames"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.Enable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InEnable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_VoiceChatPopup_C::Enable(bool InEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.Enable"));

	struct
	{
		bool                           InEnable;
	} params = {};

	params.InEnable = InEnable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.ClearPlayers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatPopup_C::ClearPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.ClearPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.AddPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentVoipID  InVoipID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InPlayerName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatPopup_C::AddPlayer(const struct FTigerPersistentVoipID& InVoipID, const struct FText& InPlayerName, class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.AddPlayer"));

	struct
	{
		struct FTigerPersistentVoipID  InVoipID;
		struct FText                   InPlayerName;
		class ATigerPlayerState*       InPlayerState;
	} params = {};

	params.InVoipID = InVoipID;
	params.InPlayerName = InPlayerName;
	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.AddPlayerFromTigerState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       inTigerPlayerState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatPopup_C::AddPlayerFromTigerState(class ATigerPlayerState* inTigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.AddPlayerFromTigerState"));

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


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.ShouldIgnoreVisibilityChanges
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_VoiceChatPopup_C::ShouldIgnoreVisibilityChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.ShouldIgnoreVisibilityChanges"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.UpdateGroupMemberIcons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatPopup_C::UpdateGroupMemberIcons()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.UpdateGroupMemberIcons"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.AddUser
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentVoipID  InPlayerPersistentVoipID       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   InPlayerName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_VoiceChatPopup_C::AddUser(const struct FTigerPersistentVoipID& InPlayerPersistentVoipID, class ATigerPlayerState* InPlayerState, const struct FText& InPlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.AddUser"));

	struct
	{
		struct FTigerPersistentVoipID  InPlayerPersistentVoipID;
		class ATigerPlayerState*       InPlayerState;
		struct FText                   InPlayerName;
	} params = {};

	params.InPlayerPersistentVoipID = InPlayerPersistentVoipID;
	params.InPlayerState = InPlayerState;
	params.InPlayerName = InPlayerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatPopup_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.OnPlayerStateReceived
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatPopup_C::OnPlayerStateReceived(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.OnPlayerStateReceived"));

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


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.TigerGroupStateComponentGroupChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGroupStateComponent* InTigerGroupStateComponent     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class ATigerPlayerState*> InPlayerState                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_VoiceChatPopup_C::TigerGroupStateComponentGroupChanged(class UTigerGroupStateComponent* InTigerGroupStateComponent, TArray<class ATigerPlayerState*> InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.TigerGroupStateComponentGroupChanged"));

	struct
	{
		class UTigerGroupStateComponent* InTigerGroupStateComponent;
		TArray<class ATigerPlayerState*> InPlayerState;
	} params = {};

	params.InTigerGroupStateComponent = InTigerGroupStateComponent;
	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatPopup_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.Tick"));

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


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.OnPartyUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_VoiceChatPopup_C::OnPartyUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.OnPartyUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.ExecuteUbergraph_TBP_UI_VoiceChatPopup
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_VoiceChatPopup_C::ExecuteUbergraph_TBP_UI_VoiceChatPopup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C.ExecuteUbergraph_TBP_UI_VoiceChatPopup"));

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
