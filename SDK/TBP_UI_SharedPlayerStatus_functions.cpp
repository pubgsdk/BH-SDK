// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SharedPlayerStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetShieldVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::SetShieldVisibility(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetShieldVisibility"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ShowSpeakIconIfSpeaking
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SharedPlayerStatus_C::ShowSpeakIconIfSpeaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ShowSpeakIconIfSpeaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPlayerNameChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SharedPlayerStatus_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPlayerNameChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnArchetypeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPlayerClanData*    InClanData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerPowerKit*          InArchetypeData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::OnArchetypeChanged(class UTigerPlayerClanData* InClanData, class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnArchetypeChanged"));

	struct
	{
		class UTigerPlayerClanData*    InClanData;
		class UTigerPowerKit*          InArchetypeData;
	} params = {};

	params.InClanData = InClanData;
	params.InArchetypeData = InArchetypeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerHealthNumber
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
// struct FText                   HealthCurrent                  (CPF_Parm, CPF_OutParm)
// struct FText                   HealthMax                      (CPF_Parm, CPF_OutParm)

struct FText UTBP_UI_SharedPlayerStatus_C::GetPlayerHealthNumber(struct FText* HealthCurrent, struct FText* HealthMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerHealthNumber"));

	struct
	{
		struct FText                   ReturnValue;
		struct FText                   HealthCurrent;
		struct FText                   HealthMax;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HealthCurrent != nullptr)
		*HealthCurrent = params.HealthCurrent;
	if (HealthMax != nullptr)
		*HealthMax = params.HealthMax;

	return params.ReturnValue;
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerEmblem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTBP_UI_SharedPlayerStatus_C::GetPlayerEmblem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerEmblem"));

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDisconnectedStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SharedPlayerStatus_C::OnDisconnectedStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDisconnectedStateChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDeathStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SharedPlayerStatus_C::OnDeathStatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDeathStatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLifeStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerLifeStatus         InNewLifeStatus                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::OnLifeStatusChanged(ETigerPlayerLifeStatus InNewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLifeStatusChanged"));

	struct
	{
		ETigerPlayerLifeStatus         InNewLifeStatus;
	} params = {};

	params.InNewLifeStatus = InNewLifeStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnShieldChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InNewHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InNewHealthPercentage          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::OnShieldChanged(float InNewHealth, float InNewHealthPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnShieldChanged"));

	struct
	{
		float                          InNewHealth;
		float                          InNewHealthPercentage;
	} params = {};

	params.InNewHealth = InNewHealth;
	params.InNewHealthPercentage = InNewHealthPercentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnHealthChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InNewHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InNewHealthPercentage          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::OnHealthChanged(float InNewHealth, float InNewHealthPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnHealthChanged"));

	struct
	{
		float                          InNewHealth;
		float                          InNewHealthPercentage;
	} params = {};

	params.InNewHealth = InNewHealth;
	params.InNewHealthPercentage = InNewHealthPercentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetDesiredBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             InColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_SharedPlayerStatus_C::SetDesiredBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetDesiredBackgroundColor"));

	struct
	{
		struct FSlateColor             InColor;
	} params = {};

	params.InColor = InColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnStatusIconChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETBE_StatusIcon>   InStatusIcon                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::OnStatusIconChanged(TEnumAsByte<ETBE_StatusIcon> InStatusIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnStatusIconChanged"));

	struct
	{
		TEnumAsByte<ETBE_StatusIcon>   InStatusIcon;
	} params = {};

	params.InStatusIcon = InStatusIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetPlayerColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  PlayerIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::SetPlayerColor(unsigned char PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetPlayerColor"));

	struct
	{
		unsigned char                  PlayerIndex;
	} params = {};

	params.PlayerIndex = PlayerIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.IsDowned
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Is_Downed                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SharedPlayerStatus_C::IsDowned(bool* Is_Downed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.IsDowned"));

	struct
	{
		bool                           Is_Downed;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Is_Downed != nullptr)
		*Is_Downed = params.Is_Downed;
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPawnChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::OnPawnChanged(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPawnChanged"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateElysiumVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SharedPlayerStatus_C::UpdateElysiumVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateElysiumVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Set Member
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InGroupMemberState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerForceOption              InForceMemberCard              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   InPawnOverride                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::Set_Member(class ATigerPlayerState* InGroupMemberState, ETigerForceOption InForceMemberCard, class APawn* InPawnOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Set Member"));

	struct
	{
		class ATigerPlayerState*       InGroupMemberState;
		ETigerForceOption              InForceMemberCard;
		class APawn*                   InPawnOverride;
	} params = {};

	params.InGroupMemberState = InGroupMemberState;
	params.InForceMemberCard = InForceMemberCard;
	params.InPawnOverride = InPawnOverride;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SharedPlayerStatus_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateMatchmakingReadyStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsReadyForMatchmaking       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SharedPlayerStatus_C::UpdateMatchmakingReadyStatus(bool bInIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateMatchmakingReadyStatus"));

	struct
	{
		bool                           bInIsReadyForMatchmaking;
	} params = {};

	params.bInIsReadyForMatchmaking = bInIsReadyForMatchmaking;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Tick"));

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


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SharedPlayerStatus_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.PreConstruct"));

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


// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ExecuteUbergraph_TBP_UI_SharedPlayerStatus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SharedPlayerStatus_C::ExecuteUbergraph_TBP_UI_SharedPlayerStatus(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ExecuteUbergraph_TBP_UI_SharedPlayerStatus"));

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
