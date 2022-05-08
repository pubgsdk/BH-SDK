// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_OutOfAmmoText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.SetNonReloadWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_OutOfAmmoText_C::SetNonReloadWidget(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.SetNonReloadWidget"));

	struct
	{
		class UWidget*                 Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationDone
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::ReloadAnimationDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationDone"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadAborted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::OnReloadAborted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadAborted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadFinished
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::OnReloadFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadStart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::OnReloadStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationStartFadeOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::ReloadAnimationStartFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationStartFadeOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.PlayReloadEndAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReloadAnimation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_OutOfAmmoText_C::PlayReloadEndAnimation(class UWidgetAnimation* ReloadAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.PlayReloadEndAnimation"));

	struct
	{
		class UWidgetAnimation*        ReloadAnimation;
	} params = {};

	params.ReloadAnimation = ReloadAnimation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.IsWaitingForReloadingAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           AnimationPlaying               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_OutOfAmmoText_C::IsWaitingForReloadingAnimation(bool* AnimationPlaying)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.IsWaitingForReloadingAnimation"));

	struct
	{
		bool                           AnimationPlaying;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimationPlaying != nullptr)
		*AnimationPlaying = params.AnimationPlaying;
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_OutOfAmmoText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Tick"));

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


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Aborted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::Reload_Aborted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Aborted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::Reload_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Finished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_OutOfAmmoText_C::Reload_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Start"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ExecuteUbergraph_TBP_OutOfAmmoText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_OutOfAmmoText_C::ExecuteUbergraph_TBP_OutOfAmmoText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ExecuteUbergraph_TBP_OutOfAmmoText"));

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
