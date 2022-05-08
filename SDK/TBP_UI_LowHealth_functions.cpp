// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_LowHealth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateBloodSplatter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::UpdateBloodSplatter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateBloodSplatter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.IsLowHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_LowHealth_C::IsLowHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.IsLowHealth"));

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


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.StopLowHealthAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::StopLowHealthAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.StopLowHealthAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.GetHitDirection
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBP_Player_C*           Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 DamageLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LowHealth_C::GetHitDirection(class ATBP_Player_C* Player, const struct FVector& DamageLocation, struct FVector* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.GetHitDirection"));

	struct
	{
		class ATBP_Player_C*           Player;
		struct FVector                 DamageLocation;
		struct FVector                 Output;
	} params = {};

	params.Player = Player;
	params.DamageLocation = DamageLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output != nullptr)
		*Output = params.Output;
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnDamage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 DamageLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NewHealthAmount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsHandled                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_LowHealth_C::OnDamage(const struct FVector& DamageLocation, float DamageAmount, float NewHealthAmount, bool* IsHandled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnDamage"));

	struct
	{
		struct FVector                 DamageLocation;
		float                          DamageAmount;
		float                          NewHealthAmount;
		bool                           IsHandled;
	} params = {};

	params.DamageLocation = DamageLocation;
	params.DamageAmount = DamageAmount;
	params.NewHealthAmount = NewHealthAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsHandled != nullptr)
		*IsHandled = params.IsHandled;
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdatePulse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LowHealth_C::UpdatePulse(float Delta_Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdatePulse"));

	struct
	{
		float                          Delta_Seconds;
	} params = {};

	params.Delta_Seconds = Delta_Seconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Update Low Health Overlay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LowHealth_C::Update_Low_Health_Overlay(float Delta_Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Update Low Health Overlay"));

	struct
	{
		float                          Delta_Seconds;
	} params = {};

	params.Delta_Seconds = Delta_Seconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LowHealth_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Tick"));

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


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnExtraHealthDepleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::OnExtraHealthDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnExtraHealthDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::ExtraHealthAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::ExtraHealthAnimationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::TakeDamageAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::TakeDamageAnimationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnShieldDepleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::OnShieldDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnShieldDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::ShieldDepletedAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_LowHealth_C::ShieldDepletedAnimationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.PlayLowHealthOneShot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewHealth                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LowHealth_C::PlayLowHealthOneShot(float NewHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.PlayLowHealthOneShot"));

	struct
	{
		float                          NewHealth;
	} params = {};

	params.NewHealth = NewHealth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExecuteUbergraph_TBP_UI_LowHealth
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_LowHealth_C::ExecuteUbergraph_TBP_UI_LowHealth(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExecuteUbergraph_TBP_UI_LowHealth"));

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
