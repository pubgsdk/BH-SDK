// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Crosshair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.PlayInteractionAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EUMGSequencePlayMode> InPlayMode                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Crosshair_C::PlayInteractionAnimation(class UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> InPlayMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.PlayInteractionAnimation"));

	struct
	{
		class UWidgetAnimation*        InAnimation;
		TEnumAsByte<EUMGSequencePlayMode> InPlayMode;
	} params = {};

	params.InAnimation = InAnimation;
	params.InPlayMode = InPlayMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ShouldHideInteractionPromptDueToInventory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETargetInteraction             interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_Crosshair_C::ShouldHideInteractionPromptDueToInventory(ETargetInteraction interactionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ShouldHideInteractionPromptDueToInventory"));

	struct
	{
		ETargetInteraction             interactionType;
		bool                           ReturnValue;
	} params = {};

	params.interactionType = interactionType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.InitializeForQuests
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsQuest                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Crosshair_C::InitializeForQuests(bool* IsQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.InitializeForQuests"));

	struct
	{
		bool                           IsQuest;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsQuest != nullptr)
		*IsQuest = params.IsQuest;
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateFeedingTooltip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::UpdateFeedingTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateFeedingTooltip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateFeedingPromtWithBloodPotency
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::UpdateFeedingPromtWithBloodPotency()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateFeedingPromtWithBloodPotency"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ShowAmmoStateWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::ShowAmmoStateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ShowAmmoStateWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetInteractionText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_UI_Crosshair_C::GetInteractionText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetInteractionText"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInputPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETargetInteraction             InInteraction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsActionEnabled               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bHasKeyPrompt                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Crosshair_C::UpdateInputPrompt(ETargetInteraction InInteraction, bool bIsActionEnabled, bool bHasKeyPrompt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInputPrompt"));

	struct
	{
		ETargetInteraction             InInteraction;
		bool                           bIsActionEnabled;
		bool                           bHasKeyPrompt;
	} params = {};

	params.InInteraction = InInteraction;
	params.bIsActionEnabled = bIsActionEnabled;
	params.bHasKeyPrompt = bHasKeyPrompt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetActionFromItemAsset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerItemAsset*         InItemAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Item_Count                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ActionText                     (CPF_Parm, CPF_OutParm)
// struct FLinearColor            TextColor                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bCanPickUp                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsSwap                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Crosshair_C::GetActionFromItemAsset(class UTigerItemAsset* InItemAsset, int Item_Count, struct FText* ActionText, struct FLinearColor* TextColor, bool* bCanPickUp, bool* bIsSwap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetActionFromItemAsset"));

	struct
	{
		class UTigerItemAsset*         InItemAsset;
		int                            Item_Count;
		struct FText                   ActionText;
		struct FLinearColor            TextColor;
		bool                           bCanPickUp;
		bool                           bIsSwap;
	} params = {};

	params.InItemAsset = InItemAsset;
	params.Item_Count = Item_Count;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActionText != nullptr)
		*ActionText = params.ActionText;
	if (TextColor != nullptr)
		*TextColor = params.TextColor;
	if (bCanPickUp != nullptr)
		*bCanPickUp = params.bCanPickUp;
	if (bIsSwap != nullptr)
		*bIsSwap = params.bIsSwap;
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnChangeInteraction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::OnChangeInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnChangeInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteractionPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETargetInteraction             InInteraction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 InInteractionObject            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Crosshair_C::UpdateInteractionPrompt(ETargetInteraction InInteraction, class UObject* InInteractionObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteractionPrompt"));

	struct
	{
		ETargetInteraction             InInteraction;
		class UObject*                 InInteractionObject;
	} params = {};

	params.InInteraction = InInteraction;
	params.InInteractionObject = InInteractionObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowHitMarker
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            HitmarkerColor                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bWasDownedOrKilled             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Crosshair_C::OnShowHitMarker(const struct FLinearColor& HitmarkerColor, bool bWasDownedOrKilled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowHitMarker"));

	struct
	{
		struct FLinearColor            HitmarkerColor;
		bool                           bWasDownedOrKilled;
	} params = {};

	params.HitmarkerColor = HitmarkerColor;
	params.bWasDownedOrKilled = bWasDownedOrKilled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteraction
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ETargetInteraction             Interaction                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 InteractionObject              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Crosshair_C::UpdateInteraction(ETargetInteraction Interaction, class UObject* InteractionObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteraction"));

	struct
	{
		ETargetInteraction             Interaction;
		class UObject*                 InteractionObject;
	} params = {};

	params.Interaction = Interaction;
	params.InteractionObject = InteractionObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ChangeInteraction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::ChangeInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ChangeInteraction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnSwitchInteractionFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::OnSwitchInteractionFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnSwitchInteractionFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.SetProgressBarColor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ETigerUIColor                  UIColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Crosshair_C::SetProgressBarColor(ETigerUIColor UIColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.SetProgressBarColor"));

	struct
	{
		ETigerUIColor                  UIColor;
	} params = {};

	params.UIColor = UIColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowCrosshairAmmoState_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::OnShowCrosshairAmmoState_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowCrosshairAmmoState_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnInventoryUpdated
// (FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::OnInventoryUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnInventoryUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Crosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Tick"));

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


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.HandleIsRespawnsEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsFeatureEnabled              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Crosshair_C::HandleIsRespawnsEnabled(bool bIsFeatureEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.HandleIsRespawnsEnabled"));

	struct
	{
		bool                           bIsFeatureEnabled;
	} params = {};

	params.bIsFeatureEnabled = bIsFeatureEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_4
// (FUNC_BlueprintEvent)

void UTBP_UI_Crosshair_C::WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ExecuteUbergraph_TBP_UI_Crosshair
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Crosshair_C::ExecuteUbergraph_TBP_UI_Crosshair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ExecuteUbergraph_TBP_UI_Crosshair"));

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
