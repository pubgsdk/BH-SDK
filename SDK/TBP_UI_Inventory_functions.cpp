// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Inventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Inventory.TBP_UI_Inventory_C.HandleGamepadRightStickSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::HandleGamepadRightStickSelection(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.HandleGamepadRightStickSelection"));

	struct
	{
		float                          InDeltaTime;
	} params = {};

	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Selected Melee Descriptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::Update_Selected_Melee_Descriptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Selected Melee Descriptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.UpdateInputOnSlotSelected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InventorySlot_C* InItemSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_InventoryRangedSlot_C* InRangedSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_InventoryMeleeSlot_C* InMeleeSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::UpdateInputOnSlotSelected(class UTBP_UI_InventorySlot_C* InItemSlot, class UTBP_UI_InventoryRangedSlot_C* InRangedSlot, class UTBP_UI_InventoryMeleeSlot_C* InMeleeSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.UpdateInputOnSlotSelected"));

	struct
	{
		class UTBP_UI_InventorySlot_C* InItemSlot;
		class UTBP_UI_InventoryRangedSlot_C* InRangedSlot;
		class UTBP_UI_InventoryMeleeSlot_C* InMeleeSlot;
	} params = {};

	params.InItemSlot = InItemSlot;
	params.InRangedSlot = InRangedSlot;
	params.InMeleeSlot = InMeleeSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Selected Firearm Descriptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         Current_Hovered_Item           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::Update_Selected_Firearm_Descriptions(class UTigerItemAsset* Current_Hovered_Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Selected Firearm Descriptions"));

	struct
	{
		class UTigerItemAsset*         Current_Hovered_Item;
	} params = {};

	params.Current_Hovered_Item = Current_Hovered_Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Selected Item Descriptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         Current_Hovered_Item           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::Update_Selected_Item_Descriptions(class UTigerItemAsset* Current_Hovered_Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Selected Item Descriptions"));

	struct
	{
		class UTigerItemAsset*         Current_Hovered_Item;
	} params = {};

	params.Current_Hovered_Item = Current_Hovered_Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.InitSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::InitSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.InitSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Slots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::Update_Slots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Slots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.DisableSpecificHudElements
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::DisableSpecificHudElements()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.DisableSpecificHudElements"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.EnableSpecificHudElements
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::EnableSpecificHudElements()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.EnableSpecificHudElements"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnInventoryUpdatedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::OnInventoryUpdatedBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnInventoryUpdatedBP"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ToggleInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::ToggleInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ToggleInventory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ToggleInventoryOnInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::ToggleInventoryOnInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ToggleInventoryOnInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Inventory_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.PreConstruct"));

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


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Switcher
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::Update_Switcher()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.Update Switcher"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.OpenMainMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::OpenMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.OpenMainMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.OpenMap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::OpenMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.OpenMap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.bLocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::bLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.bLocked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.BlockArchetypePower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::BlockArchetypePower()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.BlockArchetypePower"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.BlockClanPower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::BlockClanPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.BlockClanPower"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ItemSlot Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::ItemSlot_Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ItemSlot Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ItemSlot Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InventorySlot_C* Hovered_Slot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::ItemSlot_Hovered(class UTBP_UI_InventorySlot_C* Hovered_Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ItemSlot Hovered"));

	struct
	{
		class UTBP_UI_InventorySlot_C* Hovered_Slot;
	} params = {};

	params.Hovered_Slot = Hovered_Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.RangedSlotHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InventoryRangedSlot_C* RangedSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::RangedSlotHovered(class UTBP_UI_InventoryRangedSlot_C* RangedSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.RangedSlotHovered"));

	struct
	{
		class UTBP_UI_InventoryRangedSlot_C* RangedSlot;
	} params = {};

	params.RangedSlot = RangedSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.MeleeSlot Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InventoryMeleeSlot_C* MeleeSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::MeleeSlot_Hovered(class UTBP_UI_InventoryMeleeSlot_C* MeleeSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.MeleeSlot Hovered"));

	struct
	{
		class UTBP_UI_InventoryMeleeSlot_C* MeleeSlot;
	} params = {};

	params.MeleeSlot = MeleeSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ItemSlotSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InventorySlot_C* InSelectedSlot                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::ItemSlotSelected(class UTBP_UI_InventorySlot_C* InSelectedSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ItemSlotSelected"));

	struct
	{
		class UTBP_UI_InventorySlot_C* InSelectedSlot;
	} params = {};

	params.InSelectedSlot = InSelectedSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ItemSlotUnselected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::ItemSlotUnselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ItemSlotUnselected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ClearDesciptionTexts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::ClearDesciptionTexts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ClearDesciptionTexts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.RangedSlotSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InventoryRangedSlot_C* InRangedSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::RangedSlotSelected(class UTBP_UI_InventoryRangedSlot_C* InRangedSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.RangedSlotSelected"));

	struct
	{
		class UTBP_UI_InventoryRangedSlot_C* InRangedSlot;
	} params = {};

	params.InRangedSlot = InRangedSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.RangedSlotUnselected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::RangedSlotUnselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.RangedSlotUnselected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.UnSelectAll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::UnSelectAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.UnSelectAll"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.MeleeSlot Unselected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::MeleeSlot_Unselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.MeleeSlot Unselected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.MeleeSlot Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InventoryMeleeSlot_C* InMeleeSlot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::MeleeSlot_Selected(class UTBP_UI_InventoryMeleeSlot_C* InMeleeSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.MeleeSlot Selected"));

	struct
	{
		class UTBP_UI_InventoryMeleeSlot_C* InMeleeSlot;
	} params = {};

	params.InMeleeSlot = InMeleeSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.RangedSlot Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::RangedSlot_Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.RangedSlot Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.BindHoverFunc
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::BindHoverFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.BindHoverFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.MeleeSlot Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::MeleeSlot_Unhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.MeleeSlot Unhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.Select Next Slot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::Select_Next_Slot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.Select Next Slot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.SelectPrevious Slot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::SelectPrevious_Slot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.SelectPrevious Slot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.SelectSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::SelectSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.SelectSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.Tick"));

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


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.RefreshSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::RefreshSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.RefreshSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ShowQuickKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::ShowQuickKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ShowQuickKey"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.UpdateCurrentlyUsedWeaponSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Inventory_C::UpdateCurrentlyUsedWeaponSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.UpdateCurrentlyUsedWeaponSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Inventory.TBP_UI_Inventory_C.ExecuteUbergraph_TBP_UI_Inventory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Inventory_C::ExecuteUbergraph_TBP_UI_Inventory(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Inventory.TBP_UI_Inventory_C.ExecuteUbergraph_TBP_UI_Inventory"));

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
