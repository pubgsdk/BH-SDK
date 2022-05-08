// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BaseRangedCrosshair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetBrushAspect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             SlateBrush                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTBP_UI_BaseRangedCrosshair_C::GetBrushAspect(const struct FSlateBrush& SlateBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetBrushAspect"));

	struct
	{
		struct FSlateBrush             SlateBrush;
		float                          ReturnValue;
	} params = {};

	params.SlateBrush = SlateBrush;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetFov
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          OutFov                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BaseRangedCrosshair_C::GetFov(float* OutFov)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetFov"));

	struct
	{
		float                          OutFov;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutFov != nullptr)
		*OutFov = params.OutFov;
}


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScalingCrosshairImage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerWeaponScalingCrosshairSlot ScalingCrosshairSlot           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_BaseRangedCrosshair_C::SetupScalingCrosshairImage(const struct FTigerWeaponScalingCrosshairSlot& ScalingCrosshairSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScalingCrosshairImage"));

	struct
	{
		struct FTigerWeaponScalingCrosshairSlot ScalingCrosshairSlot;
	} params = {};

	params.ScalingCrosshairSlot = ScalingCrosshairSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupCrosshairImage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerWeaponCrosshairSlot TigerWeaponCrosshairSlot       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_BaseRangedCrosshair_C::SetupCrosshairImage(const struct FTigerWeaponCrosshairSlot& TigerWeaponCrosshairSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupCrosshairImage"));

	struct
	{
		struct FTigerWeaponCrosshairSlot TigerWeaponCrosshairSlot;
	} params = {};

	params.TigerWeaponCrosshairSlot = TigerWeaponCrosshairSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScopeVignette
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BaseRangedCrosshair_C::SetupScopeVignette()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScopeVignette"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetAspectRatio
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTBP_UI_BaseRangedCrosshair_C::GetAspectRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetAspectRatio"));

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


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetCrosshairScale
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          InScreenSpaceSpread            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InAspectRatio                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               Scale                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BaseRangedCrosshair_C::GetCrosshairScale(float InScreenSpaceSpread, float InAspectRatio, struct FVector2D* Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetCrosshairScale"));

	struct
	{
		float                          InScreenSpaceSpread;
		float                          InAspectRatio;
		struct FVector2D               Scale;
	} params = {};

	params.InScreenSpaceSpread = InScreenSpaceSpread;
	params.InAspectRatio = InAspectRatio;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.UpdateCrosshairPositions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BaseRangedCrosshair_C::UpdateCrosshairPositions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.UpdateCrosshairPositions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BaseRangedCrosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.Tick"));

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


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BaseRangedCrosshair_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.PreConstruct"));

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


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_BaseRangedCrosshair_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.ExecuteUbergraph_TBP_UI_BaseRangedCrosshair
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BaseRangedCrosshair_C::ExecuteUbergraph_TBP_UI_BaseRangedCrosshair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.ExecuteUbergraph_TBP_UI_BaseRangedCrosshair"));

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
