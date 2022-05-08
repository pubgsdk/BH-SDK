// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_EnemyHealthBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.SetTigerCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         TigerCharacter                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBar_C::SetTigerCharacter(class ATigerCharacter* TigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.SetTigerCharacter"));

	struct
	{
		class ATigerCharacter*         TigerCharacter;
	} params = {};

	params.TigerCharacter = TigerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateHealthBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentShield                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxHealth                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBar_C::UpdateHealthBar(float CurrentShield, float CurrentHealth, float MaxHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateHealthBar"));

	struct
	{
		float                          CurrentShield;
		float                          CurrentHealth;
		float                          MaxHealth;
	} params = {};

	params.CurrentShield = CurrentShield;
	params.CurrentHealth = CurrentHealth;
	params.MaxHealth = MaxHealth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPowerKitChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::OnPowerKitChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPowerKitChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.GetClanIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTBP_UI_EnemyHealthBar_C::GetClanIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.GetClanIcon"));

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


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETBE_StatusIcon>   InNewState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBar_C::OnPlayerStatusChanged(TEnumAsByte<ETBE_StatusIcon> InNewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerStatusChanged"));

	struct
	{
		TEnumAsByte<ETBE_StatusIcon>   InNewState;
	} params = {};

	params.InNewState = InNewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateIsGroupMember
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsGroupmember               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_EnemyHealthBar_C::UpdateIsGroupMember(bool bInIsGroupmember)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateIsGroupMember"));

	struct
	{
		bool                           bInIsGroupmember;
	} params = {};

	params.bInIsGroupmember = bInIsGroupmember;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsAlliedWithLocalPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATigerCharacter*         TigerCharacter                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_EnemyHealthBar_C::IsAlliedWithLocalPlayer(class ATigerCharacter* TigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsAlliedWithLocalPlayer"));

	struct
	{
		class ATigerCharacter*         TigerCharacter;
		bool                           ReturnValue;
	} params = {};

	params.TigerCharacter = TigerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShieldBreak
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::ShieldBreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShieldBreak"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExtraHealthBreak
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::ExtraHealthBreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExtraHealthBreak"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OldShouldBeVisible
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsAlive                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_EnemyHealthBar_C::OldShouldBeVisible(bool* bVisible, bool* bIsAlive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OldShouldBeVisible"));

	struct
	{
		bool                           bVisible;
		bool                           bIsAlive;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bVisible != nullptr)
		*bVisible = params.bVisible;
	if (bIsAlive != nullptr)
		*bIsAlive = params.bIsAlive;
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateDownedTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::UpdateDownedTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateDownedTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnUpdatedPlayerState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBar_C::OnUpdatedPlayerState(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnUpdatedPlayerState"));

	struct
	{
		class APlayerState*            PlayerState;
	} params = {};

	params.PlayerState = PlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.RemoveMarkingAsGroupMember
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::RemoveMarkingAsGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.RemoveMarkingAsGroupMember"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.MarkAsGroupMember
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::MarkAsGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.MarkAsGroupMember"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsPlayerInElysim
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPlayerInElyusium             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_EnemyHealthBar_C::IsPlayerInElysim(bool* IsPlayerInElyusium)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsPlayerInElysim"));

	struct
	{
		bool                           IsPlayerInElyusium;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsPlayerInElyusium != nullptr)
		*IsPlayerInElyusium = params.IsPlayerInElyusium;
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsVisible                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsAlive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBar_C::UpdateVisibility(bool InIsVisible, bool bIsAlive, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateVisibility"));

	struct
	{
		bool                           InIsVisible;
		bool                           bIsAlive;
		float                          DeltaSeconds;
	} params = {};

	params.InIsVisible = InIsVisible;
	params.bIsAlive = bIsAlive;
	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShouldBeVisible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsAlive                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_EnemyHealthBar_C::ShouldBeVisible(bool* bVisible, bool* bIsAlive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShouldBeVisible"));

	struct
	{
		bool                           bVisible;
		bool                           bIsAlive;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bVisible != nullptr)
		*bVisible = params.bVisible;
	if (bIsAlive != nullptr)
		*bIsAlive = params.bIsAlive;
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerNameChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.AddHealAmount
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            InHealAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBar_C::AddHealAmount(int InHealAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.AddHealAmount"));

	struct
	{
		int                            InHealAmount;
	} params = {};

	params.InHealAmount = InHealAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Tick"));

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


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.NewOwner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBar_C::NewOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.NewOwner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExecuteUbergraph_TBP_UI_EnemyHealthBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBar_C::ExecuteUbergraph_TBP_UI_EnemyHealthBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExecuteUbergraph_TBP_UI_EnemyHealthBar"));

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
