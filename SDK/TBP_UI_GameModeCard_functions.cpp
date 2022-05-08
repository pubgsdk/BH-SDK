// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GameModeCard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeLockedIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::OnGameModeLockedIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeLockedIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.Is Group Leader
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsGroupLeader                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeCard_C::Is_Group_Leader(bool* bIsGroupLeader)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.Is Group Leader"));

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


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.InitLabels
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::InitLabels()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.InitLabels"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.FetchImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeCard_C::FetchImage(class UTexture* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.FetchImage"));

	struct
	{
		class UTexture*                Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnFail_AF3319F843F19AC102DF3591797F2102
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeCard_C::OnFail_AF3319F843F19AC102DF3591797F2102(class UTexture2DDynamic* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnFail_AF3319F843F19AC102DF3591797F2102"));

	struct
	{
		class UTexture2DDynamic*       Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnSuccess_AF3319F843F19AC102DF3591797F2102
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeCard_C::OnSuccess_AF3319F843F19AC102DF3591797F2102(class UTexture2DDynamic* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnSuccess_AF3319F843F19AC102DF3591797F2102"));

	struct
	{
		class UTexture2DDynamic*       Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.SetWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldDisableCard              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   NewWarningText                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           ShowLockIcon                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int64_t                        MinLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeCard_C::SetWarning(bool ShouldDisableCard, const struct FText& NewWarningText, bool ShowLockIcon, int64_t MinLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.SetWarning"));

	struct
	{
		bool                           ShouldDisableCard;
		struct FText                   NewWarningText;
		bool                           ShowLockIcon;
		int64_t                        MinLevel;
	} params = {};

	params.ShouldDisableCard = ShouldDisableCard;
	params.NewWarningText = NewWarningText;
	params.ShowLockIcon = ShowLockIcon;
	params.MinLevel = MinLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.ClearWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::ClearWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.ClearWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.Deselect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.Deselect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.Highlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::Highlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.Highlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.DeHighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::DeHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.DeHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnSetGameModeActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsActive                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeCard_C::OnSetGameModeActive(bool bInIsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnSetGameModeActive"));

	struct
	{
		bool                           bInIsActive;
	} params = {};

	params.bInIsActive = bInIsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.SetPreviewOnly
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::SetPreviewOnly()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.SetPreviewOnly"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.UpdateShouldShowRanked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsRanked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeCard_C::UpdateShouldShowRanked(bool IsRanked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.UpdateShouldShowRanked"));

	struct
	{
		bool                           IsRanked;
	} params = {};

	params.IsRanked = IsRanked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_GameModeCard_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.PreConstruct"));

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


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.LockInGameMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::LockInGameMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.LockInGameMode"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.ExecuteUbergraph_TBP_UI_GameModeCard
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeCard_C::ExecuteUbergraph_TBP_UI_GameModeCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.ExecuteUbergraph_TBP_UI_GameModeCard"));

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


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::OnGameModeClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnMouseRightClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::OnMouseRightClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnMouseRightClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OutIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeCard_C::OnGameModeUnhovered__DelegateSignature(int OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeUnhovered__DelegateSignature"));

	struct
	{
		int                            OutIndex;
	} params = {};

	params.OutIndex = OutIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OutIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeCard_C::OnGameModeHovered__DelegateSignature(int OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeHovered__DelegateSignature"));

	struct
	{
		int                            OutIndex;
	} params = {};

	params.OutIndex = OutIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeDeselected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_GameModeCard_C::OnGameModeDeselected__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeDeselected__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SelectedGameMode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_GameModeCard_C::OnGameModeSelected__DelegateSignature(int SelectedGameMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_GameModeCard.TBP_UI_GameModeCard_C.OnGameModeSelected__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
