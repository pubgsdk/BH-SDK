// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Store_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Store.TBP_UI_Store_C.TickStoreEntries
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::TickStoreEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.TickStoreEntries"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.SetStoreAsUnavailable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::SetStoreAsUnavailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.SetStoreAsUnavailable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.ContainsRankSkipsOnlyAtMaxLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerMetaStoreEntry    StoreEntry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Store_C::ContainsRankSkipsOnlyAtMaxLevel(struct FTigerMetaStoreEntry* StoreEntry, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.ContainsRankSkipsOnlyAtMaxLevel"));

	struct
	{
		struct FTigerMetaStoreEntry    StoreEntry;
		bool                           Result;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (StoreEntry != nullptr)
		*StoreEntry = params.StoreEntry;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function TBP_UI_Store.TBP_UI_Store_C.FillFlashStore
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntriesConfig InStoreConfig                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Store_C::FillFlashStore(struct FTigerMetaStoreEntriesConfig* InStoreConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.FillFlashStore"));

	struct
	{
		struct FTigerMetaStoreEntriesConfig InStoreConfig;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InStoreConfig != nullptr)
		*InStoreConfig = params.InStoreConfig;
}


// Function TBP_UI_Store.TBP_UI_Store_C.On Switch Active Page
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EStorePage>        New_Page                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Store_C::On_Switch_Active_Page(TEnumAsByte<EStorePage> New_Page)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.On Switch Active Page"));

	struct
	{
		TEnumAsByte<EStorePage>        New_Page;
	} params = {};

	params.New_Page = New_Page;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnItemHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Store_C::OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnItemHovered"));

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


// Function TBP_UI_Store.TBP_UI_Store_C.OnItemUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::OnItemUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnItemUnhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnItemPreview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Store_C::OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnItemPreview"));

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


// Function TBP_UI_Store.TBP_UI_Store_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.On Active Page Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::On_Active_Page_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.On Active Page Changed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnConfirmBuyItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntry    StoreEntry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bEquipItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Store_C::OnConfirmBuyItem(const struct FTigerMetaStoreEntry& StoreEntry, bool bEquipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnConfirmBuyItem"));

	struct
	{
		struct FTigerMetaStoreEntry    StoreEntry;
		bool                           bEquipItem;
	} params = {};

	params.StoreEntry = StoreEntry;
	params.bEquipItem = bEquipItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnCancelBuyPopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::OnCancelBuyPopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnCancelBuyPopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnBackgroundSceneShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnBackgroundSceneShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnBuySuccessful
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::OnBuySuccessful()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnBuySuccessful"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnMenuBackPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::OnMenuBackPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnMenuBackPressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.On Flash Store Items Received
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntriesConfig InConfig                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerMetaStoreEventType       InEventType                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Store_C::On_Flash_Store_Items_Received(const struct FTigerMetaStoreEntriesConfig& InConfig, ETigerMetaStoreEventType InEventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.On Flash Store Items Received"));

	struct
	{
		struct FTigerMetaStoreEntriesConfig InConfig;
		ETigerMetaStoreEventType       InEventType;
	} params = {};

	params.InConfig = InConfig;
	params.InEventType = InEventType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.Buy Item Response
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBuyStoreEntryResponsePayload InBuyResponse                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Store_C::Buy_Item_Response(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.Buy Item Response"));

	struct
	{
		struct FTigerBuyStoreEntryResponsePayload InBuyResponse;
	} params = {};

	params.InBuyResponse = InBuyResponse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Store_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.PreConstruct"));

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


// Function TBP_UI_Store.TBP_UI_Store_C.Enable Tick Remaining Store Durations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::Enable_Tick_Remaining_Store_Durations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.Enable Tick Remaining Store Durations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.Disable Tick Remaining Store Durations
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::Disable_Tick_Remaining_Store_Durations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.Disable Tick Remaining Store Durations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.Tick Timers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::Tick_Timers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.Tick Timers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.OnItemSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Store_C::OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.OnItemSelected"));

	struct
	{
		struct FTigerVendorStoreCategoryItem Item;
		class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store;
	} params = {};

	params.Item = Item;
	params.OutfitItem_Store = OutfitItem_Store;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_PremiumCurrency_K2Node_ComponentBoundEvent_2_OnCloseStore__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_PremiumCurrency_K2Node_ComponentBoundEvent_2_OnCloseStore__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_PremiumCurrency_K2Node_ComponentBoundEvent_2_OnCloseStore__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.BlockerListenForInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::BlockerListenForInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.BlockerListenForInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.HideTopMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::HideTopMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.HideTopMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.ShowTopMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Store_C::ShowTopMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.ShowTopMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Store.TBP_UI_Store_C.ExecuteUbergraph_TBP_UI_Store
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Store_C::ExecuteUbergraph_TBP_UI_Store(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Store.TBP_UI_Store_C.ExecuteUbergraph_TBP_UI_Store"));

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
