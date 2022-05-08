// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Elysium_InGameQueueIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.On Video Loaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::On_Video_Loaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.On Video Loaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Group Leader
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsLeader                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_InGameQueueIndicator_C::Is_Group_Leader(bool* bIsLeader)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Group Leader"));

	struct
	{
		bool                           bIsLeader;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsLeader != nullptr)
		*bIsLeader = params.bIsLeader;
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Get Game Mode for Id
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 GAMEMODEID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FTigerGameModeDescriptor GameModeDescriptor             (CPF_Parm, CPF_OutParm)
// int                            GameModeIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_InGameQueueIndicator_C::Get_Game_Mode_for_Id(const struct FString& GAMEMODEID, struct FTigerGameModeDescriptor* GameModeDescriptor, int* GameModeIndex, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Get Game Mode for Id"));

	struct
	{
		struct FString                 GAMEMODEID;
		struct FTigerGameModeDescriptor GameModeDescriptor;
		int                            GameModeIndex;
		bool                           bSuccess;
	} params = {};

	params.GAMEMODEID = GAMEMODEID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GameModeDescriptor != nullptr)
		*GameModeDescriptor = params.GameModeDescriptor;
	if (GameModeIndex != nullptr)
		*GameModeIndex = params.GameModeIndex;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Force Game Mode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::Force_Game_Mode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Force Game Mode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.HandleSoloOrGroupGameActivityRequestedWhileStayingInElysium
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerGameActivityType         InGameActivityType             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_InGameQueueIndicator_C::HandleSoloOrGroupGameActivityRequestedWhileStayingInElysium(ETigerGameActivityType InGameActivityType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.HandleSoloOrGroupGameActivityRequestedWhileStayingInElysium"));

	struct
	{
		ETigerGameActivityType         InGameActivityType;
	} params = {};

	params.InGameActivityType = InGameActivityType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateMaxGroupSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::UpdateMaxGroupSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateMaxGroupSize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ShowTrainingVideo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     InGrimoireEntry                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_InGameQueueIndicator_C::ShowTrainingVideo(class UTigerGrimoireEntry* InGrimoireEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ShowTrainingVideo"));

	struct
	{
		class UTigerGrimoireEntry*     InGrimoireEntry;
	} params = {};

	params.InGrimoireEntry = InGrimoireEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.InitializeIsGroupMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::InitializeIsGroupMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.InitializeIsGroupMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetLastSelectedGroupingMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGroup                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_InGameQueueIndicator_C::SetLastSelectedGroupingMode(bool IsGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetLastSelectedGroupingMode"));

	struct
	{
		bool                           IsGroup;
	} params = {};

	params.IsGroup = IsGroup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Sole Member Of Group and Not in Party
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bOnlyGroupMemberAndNotInParty  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_InGameQueueIndicator_C::Is_Sole_Member_Of_Group_and_Not_in_Party(bool* bOnlyGroupMemberAndNotInParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Sole Member Of Group and Not in Party"));

	struct
	{
		bool                           bOnlyGroupMemberAndNotInParty;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bOnlyGroupMemberAndNotInParty != nullptr)
		*bOnlyGroupMemberAndNotInParty = params.bOnlyGroupMemberAndNotInParty;
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGroupLayout
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::UpdateGroupLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGroupLayout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsInGroup
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsInGroup                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_InGameQueueIndicator_C::IsInGroup(bool* bIsInGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsInGroup"));

	struct
	{
		bool                           bIsInGroup;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsInGroup != nullptr)
		*bIsInGroup = params.bIsInGroup;
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsFindingGameServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_Elysium_InGameQueueIndicator_C::IsFindingGameServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsFindingGameServer"));

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


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnReadyInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInForceReady                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnReadyInput(bool bInForceReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnReadyInput"));

	struct
	{
		bool                           bInForceReady;
	} params = {};

	params.bInForceReady = bInForceReady;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetReadyButtonState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsReady                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsQuickAnimation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_InGameQueueIndicator_C::SetReadyButtonState(bool bInIsReady, bool bIsQuickAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetReadyButtonState"));

	struct
	{
		bool                           bInIsReady;
		bool                           bIsQuickAnimation;
	} params = {};

	params.bInIsReady = bInIsReady;
	params.bIsQuickAnimation = bIsQuickAnimation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSwitchGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnSwitchGameMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSwitchGameMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnShowPlayerList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnShowPlayerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnShowPlayerList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupChangedDelegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnGroupChangedDelegate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupChangedDelegate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_InGameQueueIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Tick"));

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


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnFindMatchFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnFindMatchFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnFindMatchFailed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnValidTigerPlayerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       TigerPlayerState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnValidTigerPlayerState(class ATigerPlayerState* TigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnValidTigerPlayerState"));

	struct
	{
		class ATigerPlayerState*       TigerPlayerState;
	} params = {};

	params.TigerPlayerState = TigerPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupReadyStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsGroupReady                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnGroupReadyStateChanged(bool bInIsGroupReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupReadyStateChanged"));

	struct
	{
		bool                           bInIsGroupReady;
	} params = {};

	params.bInIsGroupReady = bInIsGroupReady;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CancelMatchmaking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::CancelMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CancelMatchmaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.DisableStartGameButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::DisableStartGameButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.DisableStartGameButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnTrainingVideoCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnTrainingVideoCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnTrainingVideoCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.HandleCountdownBegun
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::HandleCountdownBegun()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.HandleCountdownBegun"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnMaxPartySizeUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnMaxPartySizeUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnMaxPartySizeUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OpenGameModeSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OpenGameModeSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OpenGameModeSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CloseGameModeSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::CloseGameModeSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CloseGameModeSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGameModeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChosenGameModeId               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnGameModeSelected(const struct FString& ChosenGameModeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGameModeSelected"));

	struct
	{
		struct FString                 ChosenGameModeId;
	} params = {};

	params.ChosenGameModeId = ChosenGameModeId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSelectedGameModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InSelectedGameModeId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnSelectedGameModeChanged(const struct FString& InSelectedGameModeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSelectedGameModeChanged"));

	struct
	{
		struct FString                 InSelectedGameModeId;
	} params = {};

	params.InSelectedGameModeId = InSelectedGameModeId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGameModeData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 GAMEMODEID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_InGameQueueIndicator_C::UpdateGameModeData(const struct FString& GAMEMODEID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGameModeData"));

	struct
	{
		struct FString                 GAMEMODEID;
	} params = {};

	params.GAMEMODEID = GAMEMODEID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnCountdownBegin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnCountdownBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnCountdownBegin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ChooseQueueComponentToShow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::ChooseQueueComponentToShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ChooseQueueComponentToShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnPromptLeaveParty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnPromptLeaveParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnPromptLeaveParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnJoinPrague
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnJoinPrague()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnJoinPrague"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGameModesUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnGameModesUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGameModesUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.PickAppropriateGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::PickAppropriateGameMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.PickAppropriateGameMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnDisplayNotReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::OnDisplayNotReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnDisplayNotReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CheckGameActivity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_InGameQueueIndicator_C::CheckGameActivity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CheckGameActivity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_InGameQueueIndicator_C::ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator"));

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
