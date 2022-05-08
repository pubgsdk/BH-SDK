// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InputTray_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InputTray.TBP_UI_InputTray_C.UpdateHSensesCooldown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InCooldownTimeLeft             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InputTray_C::UpdateHSensesCooldown(float InCooldownTimeLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.UpdateHSensesCooldown"));

	struct
	{
		float                          InCooldownTimeLeft;
	} params = {};

	params.InCooldownTimeLeft = InCooldownTimeLeft;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.SetHSensesActivated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputTray_C::SetHSensesActivated(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.SetHSensesActivated"));

	struct
	{
		bool                           bActive;
	} params = {};

	params.bActive = bActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.Get_ConsumableIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTBP_UI_InputTray_C::Get_ConsumableIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.Get_ConsumableIcon"));

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


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.Get_UtilityPowerPanel_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UTBP_UI_InputTray_C::Get_UtilityPowerPanel_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.Get_UtilityPowerPanel_Visibility_1"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputTray_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.PreConstruct"));

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


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InputTray_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.ToggledHSenses
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsNowActive                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InputTray_C::ToggledHSenses(bool bIsNowActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.ToggledHSenses"));

	struct
	{
		bool                           bIsNowActive;
	} params = {};

	params.bIsNowActive = bIsNowActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.OnUpdateHSensesCooldown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InputTray_C::OnUpdateHSensesCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.OnUpdateHSensesCooldown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.OnPlayerBegunPlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InputTray_C::OnPlayerBegunPlay(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.OnPlayerBegunPlay"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InputTray.TBP_UI_InputTray_C.ExecuteUbergraph_TBP_UI_InputTray
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InputTray_C::ExecuteUbergraph_TBP_UI_InputTray(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InputTray.TBP_UI_InputTray_C.ExecuteUbergraph_TBP_UI_InputTray"));

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
