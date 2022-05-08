// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SmallSkillIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetSilencedIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsArchetype                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerPowerKitType             Archetype                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SmallSkillIcon_C::SetSilencedIcon(bool IsArchetype, ETigerPowerKitType Archetype)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetSilencedIcon"));

	struct
	{
		bool                           IsArchetype;
		ETigerPowerKitType             Archetype;
	} params = {};

	params.IsArchetype = IsArchetype;
	params.Archetype = Archetype;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.Toggle Silence
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UTBP_UI_SmallSkillIcon_C::Toggle_Silence(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.Toggle Silence"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.StopActiveState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bWasInterrupted                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SmallSkillIcon_C::StopActiveState(bool bWasInterrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.StopActiveState"));

	struct
	{
		bool                           bWasInterrupted;
	} params = {};

	params.bWasInterrupted = bWasInterrupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetIconImplementation
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              InSkillIcon                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SmallSkillIcon_C::SetIconImplementation(class UTexture2D* InSkillIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetIconImplementation"));

	struct
	{
		class UTexture2D*              InSkillIcon;
	} params = {};

	params.InSkillIcon = InSkillIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.FlipRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::FlipRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.FlipRight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.UpdateBrujahMomentum
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::UpdateBrujahMomentum()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.UpdateBrujahMomentum"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetupBrujahMomentum
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::SetupBrujahMomentum()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetupBrujahMomentum"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.OnSkillUsed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::OnSkillUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.OnSkillUsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.OnSkillCameOffCooldown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::OnSkillCameOffCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.OnSkillCameOffCooldown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::UpdateIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.UpdateIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.UpdateProgressBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::UpdateProgressBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.UpdateProgressBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.UpdateButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::UpdateButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.UpdateButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetCooldownText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SecondsLeftCeil                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SmallSkillIcon_C::SetCooldownText(int SecondsLeftCeil, float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetCooldownText"));

	struct
	{
		int                            SecondsLeftCeil;
		float                          Percentage;
	} params = {};

	params.SecondsLeftCeil = SecondsLeftCeil;
	params.Percentage = Percentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetSkillDataImplementation
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUnlocked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bHasCharge                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bCanBeUsed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            ChargeCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SmallSkillIcon_C::SetSkillDataImplementation(bool bIsUnlocked, bool bHasCharge, bool bCanBeUsed, int ChargeCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetSkillDataImplementation"));

	struct
	{
		bool                           bIsUnlocked;
		bool                           bHasCharge;
		bool                           bCanBeUsed;
		int                            ChargeCount;
	} params = {};

	params.bIsUnlocked = bIsUnlocked;
	params.bHasCharge = bHasCharge;
	params.bCanBeUsed = bCanBeUsed;
	params.ChargeCount = ChargeCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SmallSkillIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.PreConstruct"));

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


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.WidgetAnimationEvt_SkillInterrupted_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::WidgetAnimationEvt_SkillInterrupted_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.WidgetAnimationEvt_SkillInterrupted_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.InputActionPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::InputActionPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.InputActionPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SmallSkillIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.Tick"));

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


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetSkillIcon
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              InTexture                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SmallSkillIcon_C::SetSkillIcon(class UTexture2D* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.SetSkillIcon"));

	struct
	{
		class UTexture2D*              InTexture;
	} params = {};

	params.InTexture = InTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.OnInterrupted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::OnInterrupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.OnInterrupted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.WidgetAnimationEvt_SkillReady_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::WidgetAnimationEvt_SkillReady_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.WidgetAnimationEvt_SkillReady_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.InvalidateIconData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPlayerClanData*    InClanData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerPowerKit*          InArchetypeData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SmallSkillIcon_C::InvalidateIconData(class UTigerPlayerClanData* InClanData, class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.InvalidateIconData"));

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


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.TestLighbarFlash
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::TestLighbarFlash()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.TestLighbarFlash"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallSkillIcon_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.ExecuteUbergraph_TBP_UI_SmallSkillIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SmallSkillIcon_C::ExecuteUbergraph_TBP_UI_SmallSkillIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallSkillIcon.TBP_UI_SmallSkillIcon_C.ExecuteUbergraph_TBP_UI_SmallSkillIcon"));

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
