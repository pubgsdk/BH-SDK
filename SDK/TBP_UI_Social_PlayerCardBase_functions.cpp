// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_PlayerCardBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ResetUI
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::ResetUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ResetUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetStateFromID
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PlayerCardBase_C::GetStateFromID(class ATigerPlayerState** NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetStateFromID"));

	struct
	{
		class ATigerPlayerState*       NewParam;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetPlayerStateFromPersistentID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerID InID                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_PlayerCardBase_C::SetPlayerStateFromPersistentID(const struct FTigerPersistentPlayerID& InID, bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetPlayerStateFromPersistentID"));

	struct
	{
		struct FTigerPersistentPlayerID InID;
		bool                           Success;
	} params = {};

	params.InID = InID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Success != nullptr)
		*Success = params.Success;
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetDataFromID
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerPlayerStateGameData OutData                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_Social_PlayerCardBase_C::GetDataFromID(bool* IsValid, struct FTigerPlayerStateGameData* OutData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetDataFromID"));

	struct
	{
		bool                           IsValid;
		struct FTigerPlayerStateGameData OutData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnPlayerNameChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnPlayerNameChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnExtra
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::OnExtra()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnExtra"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAdd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::OnAdd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAdd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAddButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           In_Show                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_PlayerCardBase_C::ShowAddButton(bool In_Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAddButton"));

	struct
	{
		bool                           In_Show;
	} params = {};

	params.In_Show = In_Show;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowExtraButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsShow                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_PlayerCardBase_C::ShowExtraButton(bool IsShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowExtraButton"));

	struct
	{
		bool                           IsShow;
	} params = {};

	params.IsShow = IsShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetOnlineStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInOnline                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_PlayerCardBase_C::SetOnlineStatus(bool bInOnline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetOnlineStatus"));

	struct
	{
		bool                           bInOnline;
	} params = {};

	params.bInOnline = bInOnline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShow                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_PlayerCardBase_C::ShowStatus(bool InShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowStatus"));

	struct
	{
		bool                           InShow;
	} params = {};

	params.InShow = InShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OpenActionMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               InCursorScreenSpace            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PlayerCardBase_C::OpenActionMenu(const struct FVector2D& InCursorScreenSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OpenActionMenu"));

	struct
	{
		struct FVector2D               InCursorScreenSpace;
	} params = {};

	params.InCursorScreenSpace = InCursorScreenSpace;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.CloseActionMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::CloseActionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.CloseActionMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetActionMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UTBP_UI_Social_PlayerCardBase_C::GetActionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetActionMenu"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_Social_PlayerCardBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnMouseButtonDown"));

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


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnRemove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::OnRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnRemove"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowRemoveButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShow                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_PlayerCardBase_C::ShowRemoveButton(bool InShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowRemoveButton"));

	struct
	{
		bool                           InShow;
	} params = {};

	params.InShow = InShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetPlayerName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// ESharkPlatformType             InPlatform                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PlayerCardBase_C::SetPlayerName(const struct FText& InText, ESharkPlatformType InPlatform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetPlayerName"));

	struct
	{
		struct FText                   InText;
		ESharkPlatformType             InPlatform;
	} params = {};

	params.InText = InText;
	params.InPlatform = InPlatform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetStatusText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Social_PlayerCardBase_C::SetStatusText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetStatusText"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAcceptButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShow                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_PlayerCardBase_C::ShowAcceptButton(bool InShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAcceptButton"));

	struct
	{
		bool                           InShow;
	} params = {};

	params.InShow = InShow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAccept
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::OnAccept()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAccept"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Social_PlayerCardBase_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.PreConstruct"));

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


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::Social_PlayerCard_SetBorder_Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_Hovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_UnHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::Social_PlayerCard_SetBorder_UnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_UnHovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.UpdateRepresentedPlayerInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardBase_C::UpdateRepresentedPlayerInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.UpdateRepresentedPlayerInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ExecuteUbergraph_TBP_UI_Social_PlayerCardBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PlayerCardBase_C::ExecuteUbergraph_TBP_UI_Social_PlayerCardBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ExecuteUbergraph_TBP_UI_Social_PlayerCardBase"));

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
