// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PowerCharges_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.PowerReady
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PowerCharges_C::PowerReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.PowerReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.MarkAllAsUsed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PowerCharges_C::MarkAllAsUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.MarkAllAsUsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.RestoreChargeUsage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PowerCharges_C::RestoreChargeUsage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.RestoreChargeUsage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.MarkLastChargeAsUsed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PowerCharges_C::MarkLastChargeAsUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.MarkLastChargeAsUsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.ClearChargeContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PowerCharges_C::ClearChargeContainer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.ClearChargeContainer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.CalculatePadding
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTBP_UI_PowerCharges_C::CalculatePadding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.CalculatePadding"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InMaxCharges                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           UsesCharges                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PowerCharges_C::Initialize(int InMaxCharges, bool UsesCharges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.Initialize"));

	struct
	{
		int                            InMaxCharges;
		bool                           UsesCharges;
	} params = {};

	params.InMaxCharges = InMaxCharges;
	params.UsesCharges = UsesCharges;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.AddPowerCharge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PowerCharges_C::AddPowerCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.AddPowerCharge"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.HasCharges
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_PowerCharges_C::HasCharges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.HasCharges"));

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


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.SetNumberOfCharges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InNumCharges                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PowerCharges_C::SetNumberOfCharges(int InNumCharges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.SetNumberOfCharges"));

	struct
	{
		int                            InNumCharges;
	} params = {};

	params.InNumCharges = InNumCharges;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PowerCharges_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.PreConstruct"));

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


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PowerCharges_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.RechargeOpacityToggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PowerCharges_C::RechargeOpacityToggle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.RechargeOpacityToggle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.ExecuteUbergraph_TBP_UI_PowerCharges
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PowerCharges_C::ExecuteUbergraph_TBP_UI_PowerCharges(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PowerCharges.TBP_UI_PowerCharges_C.ExecuteUbergraph_TBP_UI_PowerCharges"));

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
