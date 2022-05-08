// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Wardrobe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowTurnInputBasedOnWardrobeCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::ShowTurnInputBasedOnWardrobeCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowTurnInputBasedOnWardrobeCategory"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ServerEquipItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem InItemToEquip                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class ATigerElysiumPlayerState* InElysiumPlayer                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InSlot                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Wardrobe_C::ServerEquipItem(const struct FTigerVendorStoreCategoryItem& InItemToEquip, class ATigerElysiumPlayerState* InElysiumPlayer, int InSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ServerEquipItem"));

	struct
	{
		struct FTigerVendorStoreCategoryItem InItemToEquip;
		class ATigerElysiumPlayerState* InElysiumPlayer;
		int                            InSlot;
	} params = {};

	params.InItemToEquip = InItemToEquip;
	params.InElysiumPlayer = InElysiumPlayer;
	params.InSlot = InSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SelectTabBasedOnIndex
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::SelectTabBasedOnIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SelectTabBasedOnIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Reset Camera
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::Reset_Camera()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Reset Camera"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_Wardrobe_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseMove"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_Wardrobe_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonUp"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetEmotePreviewZPoint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::SetEmotePreviewZPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetEmotePreviewZPoint"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdatePlayerCardVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPersistentStoreCategory  InCategory                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Wardrobe_C::UpdatePlayerCardVisibility(ETigerPersistentStoreCategory InCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdatePlayerCardVisibility"));

	struct
	{
		ETigerPersistentStoreCategory  InCategory;
	} params = {};

	params.InCategory = InCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShouldShowFacialHairCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OutShow                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Wardrobe_C::ShouldShowFacialHairCategory(bool* OutShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShouldShowFacialHairCategory"));

	struct
	{
		bool                           OutShow;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutShow != nullptr)
		*OutShow = params.OutShow;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideEyebrowsForNosferatu
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::HideEyebrowsForNosferatu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideEyebrowsForNosferatu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetDefaultOverrideItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerVendorStoreCategoryItem> InItems                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Wardrobe_C::SetDefaultOverrideItem(TArray<struct FTigerVendorStoreCategoryItem> InItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetDefaultOverrideItem"));

	struct
	{
		TArray<struct FTigerVendorStoreCategoryItem> InItems;
	} params = {};

	params.InItems = InItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_Wardrobe_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_Wardrobe_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseWheel"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowItemTooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem InItem                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Wardrobe_C::ShowItemTooltip(const struct FTigerVendorStoreCategoryItem& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowItemTooltip"));

	struct
	{
		struct FTigerVendorStoreCategoryItem InItem;
	} params = {};

	params.InItem = InItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideFilters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::HideFilters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideFilters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.PreviewOutfitMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::PreviewOutfitMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.PreviewOutfitMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.GetPlayerOutfitSetup
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerPersistentOutfitSetup OutfitSetup                    (CPF_Parm, CPF_OutParm)

void UTBP_UI_Wardrobe_C::GetPlayerOutfitSetup(struct FTigerPersistentOutfitSetup* OutfitSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.GetPlayerOutfitSetup"));

	struct
	{
		struct FTigerPersistentOutfitSetup OutfitSetup;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutfitSetup != nullptr)
		*OutfitSetup = params.OutfitSetup;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Item Selected
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Wardrobe_C::On_Item_Selected(struct FTigerVendorStoreCategoryItem* StoreItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Item Selected"));

	struct
	{
		struct FTigerVendorStoreCategoryItem StoreItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (StoreItem != nullptr)
		*StoreItem = params.StoreItem;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCloseVendorWidget
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldRemoveWidget            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Wardrobe_C::OnCloseVendorWidget(bool* bShouldRemoveWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCloseVendorWidget"));

	struct
	{
		bool                           bShouldRemoveWidget;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bShouldRemoveWidget != nullptr)
		*bShouldRemoveWidget = params.bShouldRemoveWidget;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategorySelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerVendorStoreCategory* SelectedCategory               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Wardrobe_C::OnCategorySelected(class UTigerVendorStoreCategory* SelectedCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategorySelected"));

	struct
	{
		class UTigerVendorStoreCategory* SelectedCategory;
	} params = {};

	params.SelectedCategory = SelectedCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ResetPlayerApperance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::ResetPlayerApperance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ResetPlayerApperance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOverlayClosed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnOverlayClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOverlayClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SaveCharacterApperance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentOutfitSetup PersistentOutfitSetup          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Wardrobe_C::SaveCharacterApperance(struct FTigerPersistentOutfitSetup* PersistentOutfitSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SaveCharacterApperance"));

	struct
	{
		struct FTigerPersistentOutfitSetup PersistentOutfitSetup;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PersistentOutfitSetup != nullptr)
		*PersistentOutfitSetup = params.PersistentOutfitSetup;
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSelectedSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnSelectedSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSelectedSlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSlotSelectionCanceled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnSlotSelectionCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSlotSelectionCanceled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemPreview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Wardrobe_C::OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemPreview"));

	struct
	{
		struct FTigerVendorStoreCategoryItem InItem;
	} params = {};

	params.InItem = InItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnGotStoreCategories
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnGotStoreCategories()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnGotStoreCategories"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Wardrobe_C::OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemHovered"));

	struct
	{
		struct FTigerVendorStoreCategoryItem Item;
	} params = {};

	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewCardLocally
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCardData InCard                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UTBP_UI_Wardrobe_C::SetNewCardLocally(const struct FTigerPersistentPlayerCardData& InCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewCardLocally"));

	struct
	{
		struct FTigerPersistentPlayerCardData InCard;
	} params = {};

	params.InCard = InCard;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Set is Using Gamepad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewIsProbablyUsingGamepad     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Wardrobe_C::Set_is_Using_Gamepad(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Set is Using Gamepad"));

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


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBodyTypeChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ETigerGender                   InBodyType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Wardrobe_C::OnBodyTypeChanged(ETigerGender InBodyType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBodyTypeChanged"));

	struct
	{
		ETigerGender                   InBodyType;
	} params = {};

	params.InBodyType = InBodyType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Toggle Zoom
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::Toggle_Zoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Toggle Zoom"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_Wardrobe_LandingPage_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__TBP_UI_Wardrobe_LandingPage_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_Wardrobe_LandingPage_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnPlayerInventoryUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnPlayerInventoryUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnPlayerInventoryUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Wardrobe_C::BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature"));

	struct
	{
		bool                           bIsChecked;
	} params = {};

	params.bIsChecked = bIsChecked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBackgroundSceneShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBackgroundSceneShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewAppearanceLocally
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPreviewerData     InPreviewerAppearance          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Wardrobe_C::SetNewAppearanceLocally(const struct FTigerPreviewerData& InPreviewerAppearance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewAppearanceLocally"));

	struct
	{
		struct FTigerPreviewerData     InPreviewerAppearance;
	} params = {};

	params.InPreviewerAppearance = InPreviewerAppearance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdateCloseButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::UpdateCloseButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdateCloseButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Wardrobe_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Tick"));

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


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnItemUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemUnhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowCategoryItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPersistentStoreCategory  Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Wardrobe_C::ShowCategoryItems(ETigerPersistentStoreCategory Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowCategoryItems"));

	struct
	{
		ETigerPersistentStoreCategory  Category;
	} params = {};

	params.Category = Category;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategoryItemsReceived
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// ETigerPersistentStoreCategory  CategoryType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerVendorStoreCategoryItem> CategoryItems                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Wardrobe_C::OnCategoryItemsReceived(ETigerPersistentStoreCategory CategoryType, TArray<struct FTigerVendorStoreCategoryItem> CategoryItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategoryItemsReceived"));

	struct
	{
		ETigerPersistentStoreCategory  CategoryType;
		TArray<struct FTigerVendorStoreCategoryItem> CategoryItems;
	} params = {};

	params.CategoryType = CategoryType;
	params.CategoryItems = CategoryItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnInventoryActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::OnInventoryActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnInventoryActivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Mouse Button Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::On_Mouse_Button_Up()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Mouse Button Up"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Track Start Pos on Click
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseData                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Wardrobe_C::Track_Start_Pos_on_Click(const struct FPointerEvent& MouseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Track Start Pos on Click"));

	struct
	{
		struct FPointerEvent           MouseData;
	} params = {};

	params.MouseData = MouseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Wardrobe_C::BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTBP_UI_OutfitItem_C*    OutfitItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Wardrobe_C::OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_C* OutfitItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemSelected"));

	struct
	{
		struct FTigerVendorStoreCategoryItem Item;
		class UTBP_UI_OutfitItem_C*    OutfitItem;
	} params = {};

	params.Item = Item;
	params.OutfitItem = OutfitItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ExecuteUbergraph_TBP_UI_Wardrobe
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Wardrobe_C::ExecuteUbergraph_TBP_UI_Wardrobe(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ExecuteUbergraph_TBP_UI_Wardrobe"));

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
