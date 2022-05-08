// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_DeathScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.Set Information BP
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InPlayerPlacement              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InNumGroupsAtStart             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ESharkPlatformType             InInstigatorPlatform           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   InInstigatorName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bInPlayerInstigator            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DeathScreen_C::Set_Information_BP(int InPlayerPlacement, int InNumGroupsAtStart, ESharkPlatformType InInstigatorPlatform, const struct FText& InInstigatorName, bool bInPlayerInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.Set Information BP"));

	struct
	{
		int                            InPlayerPlacement;
		int                            InNumGroupsAtStart;
		ESharkPlatformType             InInstigatorPlatform;
		struct FText                   InInstigatorName;
		bool                           bInPlayerInstigator;
	} params = {};

	params.InPlayerPlacement = InPlayerPlacement;
	params.InNumGroupsAtStart = InNumGroupsAtStart;
	params.InInstigatorPlatform = InInstigatorPlatform;
	params.InInstigatorName = InInstigatorName;
	params.bInPlayerInstigator = bInPlayerInstigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.TrySpectate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DeathScreen_C::TrySpectate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.TrySpectate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_DeathScreen_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.TransitionToSpectate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DeathScreen_C::TransitionToSpectate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.TransitionToSpectate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DeathScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.PreConstruct"));

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


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_DeathScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.SetInformation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InPlayerPlacement              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InNumGroupsAtStart             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerPlayerStateGameData InPlayerStateGameData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerKillerType               InKillerType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DeathScreen_C::SetInformation(int InPlayerPlacement, int InNumGroupsAtStart, const struct FTigerPlayerStateGameData& InPlayerStateGameData, ETigerKillerType InKillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.SetInformation"));

	struct
	{
		int                            InPlayerPlacement;
		int                            InNumGroupsAtStart;
		struct FTigerPlayerStateGameData InPlayerStateGameData;
		ETigerKillerType               InKillerType;
	} params = {};

	params.InPlayerPlacement = InPlayerPlacement;
	params.InNumGroupsAtStart = InNumGroupsAtStart;
	params.InPlayerStateGameData = InPlayerStateGameData;
	params.InKillerType = InKillerType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.WidgetAnimationEvt_Defeat_FadeOut_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_DeathScreen_C::WidgetAnimationEvt_Defeat_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.WidgetAnimationEvt_Defeat_FadeOut_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.Reshow Deathscreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DeathScreen_C::Reshow_Deathscreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.Reshow Deathscreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.ExecuteUbergraph_TBP_UI_DeathScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DeathScreen_C::ExecuteUbergraph_TBP_UI_DeathScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DeathScreen.TBP_UI_DeathScreen_C.ExecuteUbergraph_TBP_UI_DeathScreen"));

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
