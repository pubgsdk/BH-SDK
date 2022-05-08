// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GameModeSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.LockInHighlightedCard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::LockInHighlightedCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.LockInHighlightedCard"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.On_GamePadClickCatcher_MouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_GameModeSelection_C::On_GamePadClickCatcher_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.On_GamePadClickCatcher_MouseButtonDown_1"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.GetGameModeCardAtIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_GameModeCard_C*  OutGameModeCard                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::GetGameModeCardAtIndex(int InIndex, class UTBP_UI_GameModeCard_C** OutGameModeCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.GetGameModeCardAtIndex"));

	struct
	{
		int                            InIndex;
		class UTBP_UI_GameModeCard_C*  OutGameModeCard;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutGameModeCard != nullptr)
		*OutGameModeCard = params.OutGameModeCard;
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.IsGroupLeader
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsGroupLeader                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeSelection_C::IsGroupLeader(bool* bIsGroupLeader)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.IsGroupLeader"));

	struct
	{
		bool                           bIsGroupLeader;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsGroupLeader != nullptr)
		*bIsGroupLeader = params.bIsGroupLeader;
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Get Game Mode for Id
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 GAMEMODEID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FTigerGameModeDescriptor GameModeDescriptor             (CPF_Parm, CPF_OutParm)

void UTBP_UI_GameModeSelection_C::Get_Game_Mode_for_Id(const struct FString& GAMEMODEID, struct FTigerGameModeDescriptor* GameModeDescriptor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Get Game Mode for Id"));

	struct
	{
		struct FString                 GAMEMODEID;
		struct FTigerGameModeDescriptor GameModeDescriptor;
	} params = {};

	params.GAMEMODEID = GAMEMODEID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GameModeDescriptor != nullptr)
		*GameModeDescriptor = params.GameModeDescriptor;
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Is Sole Member Of Group and Not in Party
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bOnlyGroupMemberAndNotInParty  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeSelection_C::Is_Sole_Member_Of_Group_and_Not_in_Party(bool* bOnlyGroupMemberAndNotInParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Is Sole Member Of Group and Not in Party"));

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


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.IsInGroup
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsInGroup                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeSelection_C::IsInGroup(bool* bIsInGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.IsInGroup"));

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


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.GameModeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedGameMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::GameModeSelected(int SelectedGameMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.GameModeSelected"));

	struct
	{
		int                            SelectedGameMode;
	} params = {};

	params.SelectedGameMode = SelectedGameMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ClearGameModeSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::ClearGameModeSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ClearGameModeSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateGameModeWidgetsAndPartyContainer
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPartyId           InPartyId                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FString                 InDepartingPlayerId            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::UpdateGameModeWidgetsAndPartyContainer(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateGameModeWidgetsAndPartyContainer"));

	struct
	{
		struct FTigerPartyId           InPartyId;
		struct FString                 InDepartingPlayerId;
	} params = {};

	params.InPartyId = InPartyId;
	params.InDepartingPlayerId = InDepartingPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnPartyUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnPartyUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnPartyUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.PlayFadeAnimOnVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::PlayFadeAnimOnVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.PlayFadeAnimOnVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateFunctionalityOnLeaderChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::UpdateFunctionalityOnLeaderChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateFunctionalityOnLeaderChange"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StartQueueTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::StartQueueTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StartQueueTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateQueueLabel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::UpdateQueueLabel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateQueueLabel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StopQueueTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::StopQueueTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StopQueueTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnFindingMatchFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnFindingMatchFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnFindingMatchFailed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.LeaveParty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::LeaveParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.LeaveParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OpenSocialMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OpenSocialMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OpenSocialMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.CheckAvailability
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerGameModeDescriptor GameModeDescriptor             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTBP_UI_GameModeCard_C*  GameModeCardWidget             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::CheckAvailability(const struct FTigerGameModeDescriptor& GameModeDescriptor, class UTBP_UI_GameModeCard_C* GameModeCardWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.CheckAvailability"));

	struct
	{
		struct FTigerGameModeDescriptor GameModeDescriptor;
		class UTBP_UI_GameModeCard_C*  GameModeCardWidget;
	} params = {};

	params.GameModeDescriptor = GameModeDescriptor;
	params.GameModeCardWidget = GameModeCardWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnRankedShow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnRankedShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnRankedShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnCloseMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnCloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnCloseMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HideRankedMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::HideRankedMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HideRankedMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.BndEvt__TBP_UI_GameModeSelection_MenuPromptBack_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::BndEvt__TBP_UI_GameModeSelection_MenuPromptBack_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.BndEvt__TBP_UI_GameModeSelection_MenuPromptBack_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeSelectedChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InSelectedGameModeId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::OnGameModeSelectedChanged(const struct FString& InSelectedGameModeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeSelectedChanged"));

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


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.CreateListens
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::CreateListens()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.CreateListens"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StopListens
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::StopListens()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StopListens"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightNextGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::HighlightNextGameMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightNextGameMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.DeHighlightGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::DeHighlightGameMode(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.DeHighlightGameMode"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::HighlightGameMode(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightGameMode"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightPreviousGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::HighlightPreviousGameMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightPreviousGameMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Gamepad_LockInGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::Gamepad_LockInGameMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Gamepad_LockInGameMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitLastPlayedHighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::InitLastPlayedHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitLastPlayedHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeSelection_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.PreConstruct"));

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


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnReadyInputAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnReadyInputAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnReadyInputAction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnQeueueChanged2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsGroupReady                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeSelection_C::OnQeueueChanged2(bool bInIsGroupReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnQeueueChanged2"));

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


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OpenLeaveConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OpenLeaveConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OpenLeaveConfirm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnLeavePartyUserChoice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUserConfirmed                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeSelection_C::OnLeavePartyUserChoice(bool bUserConfirmed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnLeavePartyUserChoice"));

	struct
	{
		bool                           bUserConfirmed;
	} params = {};

	params.bUserConfirmed = bUserConfirmed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateScrollOffset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::UpdateScrollOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateScrollOffset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Gamepad_ActivateGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::Gamepad_ActivateGameMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Gamepad_ActivateGameMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModesUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnGameModesUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModesUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitializePlayerInformation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::InitializePlayerInformation(class ATigerPlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitializePlayerInformation"));

	struct
	{
		class ATigerPlayerController*  PlayerController;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitializeRankScreens
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::InitializeRankScreens()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitializeRankScreens"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ExecuteInitializeRankScrens
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::ExecuteInitializeRankScrens()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ExecuteInitializeRankScrens"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ReCreateGameModeCards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::ReCreateGameModeCards()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ReCreateGameModeCards"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.SetupForParty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::SetupForParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.SetupForParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeCardHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::OnGameModeCardHover(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeCardHover"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeCardUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::OnGameModeCardUnhover(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeCardUnhover"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeCardClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnGameModeCardClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeCardClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ExecuteUbergraph_TBP_UI_GameModeSelection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::ExecuteUbergraph_TBP_UI_GameModeSelection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ExecuteUbergraph_TBP_UI_GameModeSelection"));

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


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnShowRankedInfo__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnShowRankedInfo__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnShowRankedInfo__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnQueueChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewReady                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeSelection_C::OnQueueChanged__DelegateSignature(bool NewReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnQueueChanged__DelegateSignature"));

	struct
	{
		bool                           NewReady;
	} params = {};

	params.NewReady = NewReady;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnMoreGameModeInfoOpen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnMoreGameModeInfoOpen__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnMoreGameModeInfoOpen__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnScreenClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnScreenClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnScreenClosed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeDeselected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeSelection_C::OnGameModeDeselected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeDeselected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ChosenGameModeId               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeSelection_C::OnGameModeSelected__DelegateSignature(const struct FString& ChosenGameModeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeSelected__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
