// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SuperSkill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.DeactivateSkill
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SuperSkill_C::DeactivateSkill()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.DeactivateSkill"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetSkillIconImplementation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              IconTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::SetSkillIconImplementation(class UTexture2D* IconTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetSkillIconImplementation"));

	struct
	{
		class UTexture2D*              IconTexture;
	} params = {};

	params.IconTexture = IconTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.OnSkillUsed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SuperSkill_C::OnSkillUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.OnSkillUsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.OnUnlockAnimationFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SuperSkill_C::OnUnlockAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.OnUnlockAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetUnlockAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             InAnimationOwner               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::SetUnlockAnimation(class UWidgetAnimation* InAnimation, class UUserWidget* InAnimationOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetUnlockAnimation"));

	struct
	{
		class UWidgetAnimation*        InAnimation;
		class UUserWidget*             InAnimationOwner;
	} params = {};

	params.InAnimation = InAnimation;
	params.InAnimationOwner = InAnimationOwner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SuperSkill_C::UpdateIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.UpdateIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.UpdateProgressBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SuperSkill_C::UpdateProgressBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.UpdateProgressBar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.UpdateButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SuperSkill_C::UpdateButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.UpdateButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetCooldownImplementation
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SecondsLeftCeil                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InPercentage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::SetCooldownImplementation(int SecondsLeftCeil, float InPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetCooldownImplementation"));

	struct
	{
		int                            SecondsLeftCeil;
		float                          InPercentage;
	} params = {};

	params.SecondsLeftCeil = SecondsLeftCeil;
	params.InPercentage = InPercentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetSkillData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUnlocked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bHasCharge                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bCanBeUsed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            ChargeCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::SetSkillData(bool bIsUnlocked, bool bHasCharge, bool bCanBeUsed, int ChargeCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetSkillData"));

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


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetActiveTimeLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SecondsLeftCeil                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::SetActiveTimeLeft(int SecondsLeftCeil)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetActiveTimeLeft"));

	struct
	{
		int                            SecondsLeftCeil;
	} params = {};

	params.SecondsLeftCeil = SecondsLeftCeil;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.OnInterrupted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SuperSkill_C::OnInterrupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.OnInterrupted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_SuperSkill_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.Tick"));

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


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_SuperSkill_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.PreConstruct"));

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


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetSkillIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              IconTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::SetSkillIcon(class UTexture2D* IconTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetSkillIcon"));

	struct
	{
		class UTexture2D*              IconTexture;
	} params = {};

	params.IconTexture = IconTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetCooldown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SecondsLeftCeil                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::SetCooldown(int SecondsLeftCeil, float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.SetCooldown"));

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


// Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.ExecuteUbergraph_TBP_UI_SuperSkill
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_SuperSkill_C::ExecuteUbergraph_TBP_UI_SuperSkill(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SuperSkill.TBP_UI_SuperSkill_C.ExecuteUbergraph_TBP_UI_SuperSkill"));

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
