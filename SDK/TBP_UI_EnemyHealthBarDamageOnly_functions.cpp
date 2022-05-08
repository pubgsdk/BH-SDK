// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_EnemyHealthBarDamageOnly_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.SetTigerCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         TigerCharacter                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBarDamageOnly_C::SetTigerCharacter(class ATigerCharacter* TigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.SetTigerCharacter"));

	struct
	{
		class ATigerCharacter*         TigerCharacter;
	} params = {};

	params.TigerCharacter = TigerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Set Damage Amount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InHitLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            InDamageColor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InTotalDamageAmount            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InHealthDamageAmount           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InHasExtraHealth               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           InHasShield                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InRangedDamageFalloffPercent   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InBelowLowHealthThreshold      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_EnemyHealthBarDamageOnly_C::Set_Damage_Amount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool InHasExtraHealth, bool InHasShield, float InRangedDamageFalloffPercent, bool InBelowLowHealthThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Set Damage Amount"));

	struct
	{
		struct FVector                 InHitLocation;
		struct FLinearColor            InDamageColor;
		int                            InTotalDamageAmount;
		int                            InHealthDamageAmount;
		bool                           InHasExtraHealth;
		bool                           InHasShield;
		float                          InRangedDamageFalloffPercent;
		bool                           InBelowLowHealthThreshold;
	} params = {};

	params.InHitLocation = InHitLocation;
	params.InDamageColor = InDamageColor;
	params.InTotalDamageAmount = InTotalDamageAmount;
	params.InHealthDamageAmount = InHealthDamageAmount;
	params.InHasExtraHealth = InHasExtraHealth;
	params.InHasShield = InHasShield;
	params.InRangedDamageFalloffPercent = InRangedDamageFalloffPercent;
	params.InBelowLowHealthThreshold = InBelowLowHealthThreshold;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.UpdateCurrentDamageNumber
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBarDamageOnly_C::UpdateCurrentDamageNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.UpdateCurrentDamageNumber"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_EnemyHealthBarDamageOnly_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBarDamageOnly_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Tick"));

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


// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EnemyHealthBarDamageOnly_C::ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly"));

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
