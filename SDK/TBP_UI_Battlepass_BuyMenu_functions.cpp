// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Battlepass_BuyMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ClearTimeoutHandleAndHideThrobber
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::ClearTimeoutHandleAndHideThrobber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ClearTimeoutHandleAndHideThrobber"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.GetRankSkipsCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerMetaStoreEntry    InEntry                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bContainsNonRankSkipItem       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Battlepass_BuyMenu_C::GetRankSkipsCount(struct FTigerMetaStoreEntry* InEntry, int* Count, bool* bContainsNonRankSkipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.GetRankSkipsCount"));

	struct
	{
		struct FTigerMetaStoreEntry    InEntry;
		int                            Count;
		bool                           bContainsNonRankSkipItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InEntry != nullptr)
		*InEntry = params.InEntry;
	if (Count != nullptr)
		*Count = params.Count;
	if (bContainsNonRankSkipItem != nullptr)
		*bContainsNonRankSkipItem = params.bContainsNonRankSkipItem;
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassMenuData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::SetBattlepassMenuData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassMenuData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateRankSkipsBuyEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bFoundBuyEntries               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Battlepass_BuyMenu_C::CreateRankSkipsBuyEntry(bool* bFoundBuyEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateRankSkipsBuyEntry"));

	struct
	{
		bool                           bFoundBuyEntries;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bFoundBuyEntries != nullptr)
		*bFoundBuyEntries = params.bFoundBuyEntries;
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetRankSkipMenuData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::SetRankSkipMenuData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetRankSkipMenuData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseRankSkipEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntriesConfig InConfig                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Battlepass_BuyMenu_C::ParseRankSkipEntries(struct FTigerMetaStoreEntriesConfig* InConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseRankSkipEntries"));

	struct
	{
		struct FTigerMetaStoreEntriesConfig InConfig;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InConfig != nullptr)
		*InConfig = params.InConfig;
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseBattlepassEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntriesConfig InConfig                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Battlepass_BuyMenu_C::ParseBattlepassEntries(struct FTigerMetaStoreEntriesConfig* InConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseBattlepassEntries"));

	struct
	{
		struct FTigerMetaStoreEntriesConfig InConfig;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InConfig != nullptr)
		*InConfig = params.InConfig;
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassParent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Battlepass_C*    Battlepass                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_BuyMenu_C::SetBattlepassParent(class UTBP_UI_Battlepass_C* Battlepass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassParent"));

	struct
	{
		class UTBP_UI_Battlepass_C*    Battlepass;
	} params = {};

	params.Battlepass = Battlepass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsBuyBattlepass                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Battlepass_BuyMenu_C::Show(bool IsBuyBattlepass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Show"));

	struct
	{
		bool                           IsBuyBattlepass;
	} params = {};

	params.IsBuyBattlepass = IsBuyBattlepass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Hide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Hide"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetStoreEntry
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntry    InStoreEntry                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bInIsBundle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Battlepass_BuyMenu_C::SetStoreEntry(const struct FTigerMetaStoreEntry& InStoreEntry, bool bInIsBundle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetStoreEntry"));

	struct
	{
		struct FTigerMetaStoreEntry    InStoreEntry;
		bool                           bInIsBundle;
	} params = {};

	params.InStoreEntry = InStoreEntry;
	params.bInIsBundle = bInIsBundle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Battlepass Store Config
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntriesConfig InConfig                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerMetaStoreEventType       InEventType                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_BuyMenu_C::On_Get_Battlepass_Store_Config(const struct FTigerMetaStoreEntriesConfig& InConfig, ETigerMetaStoreEventType InEventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Battlepass Store Config"));

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


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassPurchased
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBuyStoreEntryResponsePayload InBuyResponse                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Battlepass_BuyMenu_C::OnBattlepassPurchased(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassPurchased"));

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


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Season Rank Skip Store Config
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntriesConfig InConfig                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerMetaStoreEventType       InEventType                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_BuyMenu_C::On_Get_Season_Rank_Skip_Store_Config(const struct FTigerMetaStoreEntriesConfig& InConfig, ETigerMetaStoreEventType InEventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Season Rank Skip Store Config"));

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


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTierSkipsBought
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBuyStoreEntryResponsePayload InBuyResponse                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Battlepass_BuyMenu_C::OnTierSkipsBought(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTierSkipsBought"));

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


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassTypeChosen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::OnBattlepassTypeChosen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassTypeChosen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.FetchStoreConfigs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::FetchStoreConfigs()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.FetchStoreConfigs"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Buy Battlepass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::Buy_Battlepass()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Buy Battlepass"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateTimeoutHandle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::CreateTimeoutHandle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateTimeoutHandle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTimedOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::OnTimedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTimedOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Empty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_BuyMenu_C::Empty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Empty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_BuyMenu_C::ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu"));

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
