// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InventoryRangedModSlots_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.SetModBorderColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InSlotIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            InColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InventoryRangedModSlots_C::SetModBorderColor(int InSlotIndex, const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.SetModBorderColor"));

	struct
	{
		int                            InSlotIndex;
		struct FLinearColor            InColor;
	} params = {};

	params.InSlotIndex = InSlotIndex;
	params.InColor = InColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PopulateMods
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerWeaponSlot               InWeaponSlot                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerModSlotInfo> InModSlots                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InventoryRangedModSlots_C::PopulateMods(ETigerWeaponSlot InWeaponSlot, TArray<struct FTigerModSlotInfo> InModSlots)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PopulateMods"));

	struct
	{
		ETigerWeaponSlot               InWeaponSlot;
		TArray<struct FTigerModSlotInfo> InModSlots;
	} params = {};

	params.InWeaponSlot = InWeaponSlot;
	params.InModSlots = InModSlots;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InventoryRangedModSlots_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PreConstruct"));

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


// Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.ExecuteUbergraph_TBP_UI_InventoryRangedModSlots
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InventoryRangedModSlots_C::ExecuteUbergraph_TBP_UI_InventoryRangedModSlots(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.ExecuteUbergraph_TBP_UI_InventoryRangedModSlots"));

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
