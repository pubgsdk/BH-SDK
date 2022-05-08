// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InventoryMeleeSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateRarityMarker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::UpdateRarityMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateRarityMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingEmpty
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::PingEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingEmpty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingWeapon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::PingWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.CreateTooltipActions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::CreateTooltipActions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.CreateTooltipActions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ConstructTooltipWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerTooltipWidget*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTigerTooltipWidget* UTBP_UI_InventoryMeleeSlot_C::ConstructTooltipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ConstructTooltipWidget"));

	struct
	{
		class UTigerTooltipWidget*     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.EquipWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::EquipWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.EquipWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.DropWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::DropWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.DropWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.GetSelectedSlotColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerWeaponSlot               SelectedSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             Color                          (CPF_Parm, CPF_OutParm)

void UTBP_UI_InventoryMeleeSlot_C::GetSelectedSlotColor(ETigerWeaponSlot SelectedSlot, struct FSlateColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.GetSelectedSlotColor"));

	struct
	{
		ETigerWeaponSlot               SelectedSlot;
		struct FSlateColor             Color;
	} params = {};

	params.SelectedSlot = SelectedSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Color != nullptr)
		*Color = params.Color;
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateNoWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::UpdateNoWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateNoWeapon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateVisibleWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMeleeWeapon*       MeleeWeapon                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerItemAsset*         WeaponItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerDisciplineComponent* Discipline                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerWeaponSlot               EquippedSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InventoryMeleeSlot_C::UpdateVisibleWeapon(class UTigerMeleeWeapon* MeleeWeapon, class UTigerItemAsset* WeaponItem, class UTigerDisciplineComponent* Discipline, ETigerWeaponSlot EquippedSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateVisibleWeapon"));

	struct
	{
		class UTigerMeleeWeapon*       MeleeWeapon;
		class UTigerItemAsset*         WeaponItem;
		class UTigerDisciplineComponent* Discipline;
		ETigerWeaponSlot               EquippedSlot;
	} params = {};

	params.MeleeWeapon = MeleeWeapon;
	params.WeaponItem = WeaponItem;
	params.Discipline = Discipline;
	params.EquippedSlot = EquippedSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.BndEvt__TBP_UI_InventoryMeleeSlot_Button_142_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::BndEvt__TBP_UI_InventoryMeleeSlot_Button_142_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.BndEvt__TBP_UI_InventoryMeleeSlot_Button_142_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.BndEvt__TBP_UI_InventoryMeleeSlot_Button_142_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::BndEvt__TBP_UI_InventoryMeleeSlot_Button_142_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.BndEvt__TBP_UI_InventoryMeleeSlot_Button_142_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Melee Slot Updated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::Melee_Slot_Updated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Melee Slot Updated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Select
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Select"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Unselect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::Unselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Unselect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ExecuteUbergraph_TBP_UI_InventoryMeleeSlot
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InventoryMeleeSlot_C::ExecuteUbergraph_TBP_UI_InventoryMeleeSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ExecuteUbergraph_TBP_UI_InventoryMeleeSlot"));

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


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.MeleeSlotUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_InventoryMeleeSlot_C::MeleeSlotUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.MeleeSlotUnhovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.MeleeSlotHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_InventoryMeleeSlot_C* MeleeSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InventoryMeleeSlot_C::MeleeSlotHovered__DelegateSignature(class UTBP_UI_InventoryMeleeSlot_C* MeleeSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.MeleeSlotHovered__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
