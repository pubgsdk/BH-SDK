// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_DamageNumber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnShieldBreakUI
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DamageNumber_C::OnShieldBreakUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnShieldBreakUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnExtraHelathBreakUI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DamageNumber_C::OnExtraHelathBreakUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnExtraHelathBreakUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateFontSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DamageNumber_C::UpdateFontSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateFontSize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.StartMoving
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_DamageNumber_C::StartMoving()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.StartMoving"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdatePosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaSeconds                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DamageNumber_C::UpdatePosition(float InDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdatePosition"));

	struct
	{
		float                          InDeltaSeconds;
	} params = {};

	params.InDeltaSeconds = InDeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateNumber
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InWorldSpawnPosition           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InDamageAmount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            InDamageColor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InHealthLeft                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InHasExtraHealth               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           InHasShield                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InRangedDamageFalloffPercent   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InBelowLowHealthThreshold      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_DamageNumber_C::UpdateNumber(const struct FVector& InWorldSpawnPosition, int InDamageAmount, const struct FLinearColor& InDamageColor, float InHealthLeft, bool InHasExtraHealth, bool InHasShield, float InRangedDamageFalloffPercent, bool InBelowLowHealthThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateNumber"));

	struct
	{
		struct FVector                 InWorldSpawnPosition;
		int                            InDamageAmount;
		struct FLinearColor            InDamageColor;
		float                          InHealthLeft;
		bool                           InHasExtraHealth;
		bool                           InHasShield;
		float                          InRangedDamageFalloffPercent;
		bool                           InBelowLowHealthThreshold;
	} params = {};

	params.InWorldSpawnPosition = InWorldSpawnPosition;
	params.InDamageAmount = InDamageAmount;
	params.InDamageColor = InDamageColor;
	params.InHealthLeft = InHealthLeft;
	params.InHasExtraHealth = InHasExtraHealth;
	params.InHasShield = InHasShield;
	params.InRangedDamageFalloffPercent = InRangedDamageFalloffPercent;
	params.InBelowLowHealthThreshold = InBelowLowHealthThreshold;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DamageNumber_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Tick"));

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


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DamageNumber_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_DamageNumber_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.ExecuteUbergraph_TBP_UI_DamageNumber
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DamageNumber_C::ExecuteUbergraph_TBP_UI_DamageNumber(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.ExecuteUbergraph_TBP_UI_DamageNumber"));

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
