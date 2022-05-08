// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BloodResonance_Inventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInventoryResonance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_BloodResonance_InventoryItem_C* InTarget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerBloodResonanceAsset* InDataAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_Inventory_C::UpdateInventoryResonance(class UTBP_UI_BloodResonance_InventoryItem_C* InTarget, class UTigerBloodResonanceAsset* InDataAsset, ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInventoryResonance"));

	struct
	{
		class UTBP_UI_BloodResonance_InventoryItem_C* InTarget;
		class UTigerBloodResonanceAsset* InDataAsset;
		ETigerBloodType                InBloodType;
	} params = {};

	params.InTarget = InTarget;
	params.InDataAsset = InDataAsset;
	params.InBloodType = InBloodType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.InitializeInventoryResonance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_BloodResonance_InventoryItem_C* InTarget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerBloodResonanceAsset* InDataAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_Inventory_C::InitializeInventoryResonance(class UTBP_UI_BloodResonance_InventoryItem_C* InTarget, class UTigerBloodResonanceAsset* InDataAsset, ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.InitializeInventoryResonance"));

	struct
	{
		class UTBP_UI_BloodResonance_InventoryItem_C* InTarget;
		class UTigerBloodResonanceAsset* InDataAsset;
		ETigerBloodType                InBloodType;
	} params = {};

	params.InTarget = InTarget;
	params.InDataAsset = InDataAsset;
	params.InBloodType = InBloodType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BloodResonance_Inventory_C::UpdateInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.ExecuteUbergraph_TBP_UI_BloodResonance_Inventory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_Inventory_C::ExecuteUbergraph_TBP_UI_BloodResonance_Inventory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.ExecuteUbergraph_TBP_UI_BloodResonance_Inventory"));

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
