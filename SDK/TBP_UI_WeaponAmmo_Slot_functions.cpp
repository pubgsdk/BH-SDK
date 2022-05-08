// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_WeaponAmmo_Slot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_WeaponAmmo_Slot.TBP_UI_WeaponAmmo_Slot_C.UpdateRarityBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_WeaponAmmo_Slot_C::UpdateRarityBorder()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo_Slot.TBP_UI_WeaponAmmo_Slot_C.UpdateRarityBorder"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo_Slot.TBP_UI_WeaponAmmo_Slot_C.Update Image
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_WeaponAmmo_Slot_C::Update_Image()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo_Slot.TBP_UI_WeaponAmmo_Slot_C.Update Image"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo_Slot.TBP_UI_WeaponAmmo_Slot_C.Update Weapon Slot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryComponent* Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponSlot               New_Slot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_Slot_C::Update_Weapon_Slot(class UTigerInventoryComponent* Inventory, ETigerWeaponSlot New_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo_Slot.TBP_UI_WeaponAmmo_Slot_C.Update Weapon Slot"));

	struct
	{
		class UTigerInventoryComponent* Inventory;
		ETigerWeaponSlot               New_Slot;
	} params = {};

	params.Inventory = Inventory;
	params.New_Slot = New_Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo_Slot.TBP_UI_WeaponAmmo_Slot_C.ExecuteUbergraph_TBP_UI_WeaponAmmo_Slot
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_Slot_C::ExecuteUbergraph_TBP_UI_WeaponAmmo_Slot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo_Slot.TBP_UI_WeaponAmmo_Slot_C.ExecuteUbergraph_TBP_UI_WeaponAmmo_Slot"));

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
