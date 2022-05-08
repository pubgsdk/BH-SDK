// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_WeaponAmmo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.UpdateWeaponType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryComponent* Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponSlot               NewSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::UpdateWeaponType(class UTigerInventoryComponent* Inventory, ETigerWeaponSlot NewSlot, class UTigerRangedWeaponComponent** RangedWeaponComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.UpdateWeaponType"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		class UTigerInventoryComponent* Inventory;
		ETigerWeaponSlot               NewSlot;
	} params = {};

	params.Inventory = Inventory;
	params.NewSlot = NewSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RangedWeaponComponent != nullptr)
		*RangedWeaponComponent = params.RangedWeaponComponent;
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.SetAmmoText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AmmoInMagazine                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            AmmoInInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::SetAmmoText(int AmmoInMagazine, int AmmoInInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.SetAmmoText"));

	struct
	{
		int                            AmmoInMagazine;
		int                            AmmoInInventory;
	} params = {};

	params.AmmoInMagazine = AmmoInMagazine;
	params.AmmoInInventory = AmmoInInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.UpdateMeleeItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryComponent* Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponSlot               Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::UpdateMeleeItems(class UTigerInventoryComponent** Inventory, ETigerWeaponSlot* Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.UpdateMeleeItems"));

	struct
	{
		class UTigerInventoryComponent* Inventory;
		ETigerWeaponSlot               Slot;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.UpdateRangedItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* InRangedWeaponComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryComponent* InInventory                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponSlot               InSlot                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::UpdateRangedItems(class UTigerRangedWeaponComponent** InRangedWeaponComponent, class UTigerInventoryComponent** InInventory, ETigerWeaponSlot* InSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.UpdateRangedItems"));

	struct
	{
		class UTigerRangedWeaponComponent* InRangedWeaponComponent;
		class UTigerInventoryComponent* InInventory;
		ETigerWeaponSlot               InSlot;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InRangedWeaponComponent != nullptr)
		*InRangedWeaponComponent = params.InRangedWeaponComponent;
	if (InInventory != nullptr)
		*InInventory = params.InInventory;
	if (InSlot != nullptr)
		*InSlot = params.InSlot;
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_WeaponAmmo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.AmmoUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            AmmoInMagazine                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            AmmoInInventory                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::AmmoUpdated(int AmmoInMagazine, int AmmoInInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.AmmoUpdated"));

	struct
	{
		int                            AmmoInMagazine;
		int                            AmmoInInventory;
	} params = {};

	params.AmmoInMagazine = AmmoInMagazine;
	params.AmmoInInventory = AmmoInInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.SelectedSlotUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryComponent* Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponSlot               NewSlot                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::SelectedSlotUpdated(class UTigerRangedWeaponComponent* RangedWeaponComponent, class UTigerInventoryComponent* Inventory, ETigerWeaponSlot NewSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.SelectedSlotUpdated"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		class UTigerInventoryComponent* Inventory;
		ETigerWeaponSlot               NewSlot;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.Inventory = Inventory;
	params.NewSlot = NewSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.WeaponEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         InWeaponAsset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InItemCount                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerLootBox*           InLootBox                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponSlot               InWeaponSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::WeaponEquipped(class UTigerItemAsset* InWeaponAsset, int InItemCount, class ATigerLootBox* InLootBox, ETigerWeaponSlot InWeaponSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.WeaponEquipped"));

	struct
	{
		class UTigerItemAsset*         InWeaponAsset;
		int                            InItemCount;
		class ATigerLootBox*           InLootBox;
		ETigerWeaponSlot               InWeaponSlot;
	} params = {};

	params.InWeaponAsset = InWeaponAsset;
	params.InItemCount = InItemCount;
	params.InLootBox = InLootBox;
	params.InWeaponSlot = InWeaponSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.ArtifactUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         InArtifactAsset                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::ArtifactUpdated(class UTigerItemAsset* InArtifactAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.ArtifactUpdated"));

	struct
	{
		class UTigerItemAsset*         InArtifactAsset;
	} params = {};

	params.InArtifactAsset = InArtifactAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.ExecuteUbergraph_TBP_UI_WeaponAmmo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WeaponAmmo_C::ExecuteUbergraph_TBP_UI_WeaponAmmo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WeaponAmmo.TBP_UI_WeaponAmmo_C.ExecuteUbergraph_TBP_UI_WeaponAmmo"));

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
