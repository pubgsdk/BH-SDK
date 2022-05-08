// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BloodresonanceTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.SetBloodType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonanceTooltip_C::SetBloodType(ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.SetBloodType"));

	struct
	{
		ETigerBloodType                InBloodType;
	} params = {};

	params.InBloodType = InBloodType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonanceTooltip_C::OnBloodResonanceAdded(ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceAdded"));

	struct
	{
		ETigerBloodType                InBloodType;
	} params = {};

	params.InBloodType = InBloodType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_BloodResonanceTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceWasCappedAfterFeed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerBloodResonanceBlockType  InBlockType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonanceTooltip_C::OnBloodResonanceWasCappedAfterFeed(ETigerBloodType InBloodType, ETigerBloodResonanceBlockType InBlockType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceWasCappedAfterFeed"));

	struct
	{
		ETigerBloodType                InBloodType;
		ETigerBloodResonanceBlockType  InBlockType;
	} params = {};

	params.InBloodType = InBloodType;
	params.InBlockType = InBlockType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.GamepadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewIsProbablyUsingGamepad     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BloodResonanceTooltip_C::GamepadChanged(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.GamepadChanged"));

	struct
	{
		bool                           bNewIsProbablyUsingGamepad;
	} params = {};

	params.bNewIsProbablyUsingGamepad = bNewIsProbablyUsingGamepad;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.ExecuteUbergraph_TBP_UI_BloodResonanceTooltip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonanceTooltip_C::ExecuteUbergraph_TBP_UI_BloodResonanceTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.ExecuteUbergraph_TBP_UI_BloodResonanceTooltip"));

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
