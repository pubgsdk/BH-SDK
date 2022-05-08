// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_OutfitItem_Store_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SelectImageVisible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::SelectImageVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SelectImageVisible"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ScaleItemSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::ScaleItemSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ScaleItemSetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Get Time Left Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBP_UI_OutfitItem_Store_C::Get_Time_Left_Text(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Get Time Left Text"));

	struct
	{
		struct FText                   Text;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateOwnedWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::UpdateOwnedWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateOwnedWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItemAsOwned
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsOwned                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_OutfitItem_Store_C::SetItemAsOwned(bool bIsOwned)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItemAsOwned"));

	struct
	{
		bool                           bIsOwned;
	} params = {};

	params.bIsOwned = bIsOwned;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.DesaturateItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::DesaturateItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.DesaturateItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItemData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    ItemClassPath                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* InBaseItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Cost                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InventoryCount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerItemId            InSoftCurrencyId               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::SetItemData(TSoftClassPtr<class UClass> ItemClassPath, class UTigerInventoryItemBase* InBaseItem, int Cost, int InventoryCount, const struct FTigerItemId& InSoftCurrencyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItemData"));

	struct
	{
		TSoftClassPtr<class UClass>    ItemClassPath;
		class UTigerInventoryItemBase* InBaseItem;
		int                            Cost;
		int                            InventoryCount;
		struct FTigerItemId            InSoftCurrencyId;
	} params = {};

	params.ItemClassPath = ItemClassPath;
	params.InBaseItem = InBaseItem;
	params.Cost = Cost;
	params.InventoryCount = InventoryCount;
	params.InSoftCurrencyId = InSoftCurrencyId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Is A Combined Item
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerInventoryItemBase* Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_OutfitItem_Store_C::Is_A_Combined_Item(class UTigerInventoryItemBase* Target, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Is A Combined Item"));

	struct
	{
		class UTigerInventoryItemBase* Target;
		bool                           bSuccess;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* OutItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::ChooseItem(class UTigerInventoryItemBase* InItem, class UTigerInventoryItemBase** OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItem"));

	struct
	{
		class UTigerInventoryItemBase* InItem;
		class UTigerInventoryItemBase* OutItem;
	} params = {};

	params.InItem = InItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItemTintToShow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TintColor                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::ChooseItemTintToShow(class UTigerInventoryItemBase* InItem, struct FLinearColor* TintColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItemTintToShow"));

	struct
	{
		class UTigerInventoryItemBase* InItem;
		struct FLinearColor            TintColor;
	} params = {};

	params.InItem = InItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TintColor != nullptr)
		*TintColor = params.TintColor;
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItemIconToShow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> UITexture                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::ChooseItemIconToShow(class UTigerInventoryItemBase* InItem, TSoftObjectPtr<class UTexture2D>* UITexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItemIconToShow"));

	struct
	{
		class UTigerInventoryItemBase* InItem;
		TSoftObjectPtr<class UTexture2D> UITexture;
	} params = {};

	params.InItem = InItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UITexture != nullptr)
		*UITexture = params.UITexture;
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.IsItemEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TSoftClassPtr<class UClass>    ItemClassPath                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_OutfitItem_Store_C::IsItemEquipped(TSoftClassPtr<class UClass> ItemClassPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.IsItemEquipped"));

	struct
	{
		TSoftClassPtr<class UClass>    ItemClassPath;
		bool                           ReturnValue;
	} params = {};

	params.ItemClassPath = ItemClassPath;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateInventoryCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InInventoryCount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsEquipped                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsOwnedByPlayer               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_OutfitItem_Store_C::UpdateInventoryCount(int InInventoryCount, bool bInIsEquipped, bool* bIsOwnedByPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateInventoryCount"));

	struct
	{
		int                            InInventoryCount;
		bool                           bInIsEquipped;
		bool                           bIsOwnedByPlayer;
	} params = {};

	params.InInventoryCount = InInventoryCount;
	params.bInIsEquipped = bInIsEquipped;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsOwnedByPlayer != nullptr)
		*bIsOwnedByPlayer = params.bIsOwnedByPlayer;
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChangeButtonTexture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              InTexture                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::ChangeButtonTexture(class UTexture2D* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChangeButtonTexture"));

	struct
	{
		class UTexture2D*              InTexture;
	} params = {};

	params.InTexture = InTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              UITexture                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   UiName                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Cost                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InventoryCount                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsEquipped                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerItemId            InSoftCurrencyId               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::SetItem(class UTexture2D* UITexture, const struct FText& UiName, int Cost, int InventoryCount, bool bInIsEquipped, const struct FTigerItemId& InSoftCurrencyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItem"));

	struct
	{
		class UTexture2D*              UITexture;
		struct FText                   UiName;
		int                            Cost;
		int                            InventoryCount;
		bool                           bInIsEquipped;
		struct FTigerItemId            InSoftCurrencyId;
	} params = {};

	params.UITexture = UITexture;
	params.UiName = UiName;
	params.Cost = Cost;
	params.InventoryCount = InventoryCount;
	params.bInIsEquipped = bInIsEquipped;
	params.InSoftCurrencyId = InSoftCurrencyId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.OnLoaded_D094DB7F4D02E37D41DF4B991A731F54
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::OnLoaded_D094DB7F4D02E37D41DF4B991A731F54(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.OnLoaded_D094DB7F4D02E37D41DF4B991A731F54"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.LoadItemTexture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::LoadItemTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.LoadItemTexture"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Update Item
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::Update_Item()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Update Item"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.PreviewItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::PreviewItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.PreviewItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateRarityAndClanIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::UpdateRarityAndClanIcon(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateRarityAndClanIcon"));

	struct
	{
		class UTigerInventoryItemBase* InItem;
	} params = {};

	params.InItem = InItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Tick Entry Duration
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::Tick_Entry_Duration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Tick Entry Duration"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Update Item Visuals
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::Update_Item_Visuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Update Item Visuals"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ExecuteUbergraph_TBP_UI_OutfitItem_Store
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_C::ExecuteUbergraph_TBP_UI_OutfitItem_Store(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ExecuteUbergraph_TBP_UI_OutfitItem_Store"));

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


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::On_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Clicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Unhover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::On_Unhover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Unhover__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Hover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_C::On_Hover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Hover__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
