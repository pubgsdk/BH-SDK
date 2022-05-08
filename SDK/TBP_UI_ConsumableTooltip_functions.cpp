// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ConsumableTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.Clear Contents
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ConsumableTooltip_C::Clear_Contents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.Clear Contents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.HideDropPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hide                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ConsumableTooltip_C::HideDropPrompt(bool Hide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.HideDropPrompt"));

	struct
	{
		bool                           Hide;
	} params = {};

	params.Hide = Hide;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.SetConsumableNameColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerConsumableAsset*   Consumable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ConsumableTooltip_C::SetConsumableNameColor(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.SetConsumableNameColor"));

	struct
	{
		class UTigerConsumableAsset*   Consumable;
	} params = {};

	params.Consumable = Consumable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.SetInventoryBackground
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseInventoryBackgorund         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ConsumableTooltip_C::SetInventoryBackground(bool UseInventoryBackgorund)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.SetInventoryBackground"));

	struct
	{
		bool                           UseInventoryBackgorund;
	} params = {};

	params.UseInventoryBackgorund = UseInventoryBackgorund;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.GetAlphaTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Target_Alpha                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ConsumableTooltip_C::GetAlphaTarget(float* Target_Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.GetAlphaTarget"));

	struct
	{
		float                          Target_Alpha;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Target_Alpha != nullptr)
		*Target_Alpha = params.Target_Alpha;
}


// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.SetConsumable
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerConsumableAsset*   New_Consumable                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            New_Stack                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ConsumableTooltip_C::SetConsumable(class UTigerConsumableAsset* New_Consumable, int New_Stack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.SetConsumable"));

	struct
	{
		class UTigerConsumableAsset*   New_Consumable;
		int                            New_Stack;
	} params = {};

	params.New_Consumable = New_Consumable;
	params.New_Stack = New_Stack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ConsumableTooltip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.Tick"));

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


// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ConsumableTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.ExecuteUbergraph_TBP_UI_ConsumableTooltip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ConsumableTooltip_C::ExecuteUbergraph_TBP_UI_ConsumableTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ConsumableTooltip.TBP_UI_ConsumableTooltip_C.ExecuteUbergraph_TBP_UI_ConsumableTooltip"));

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
