// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BattlepassReward_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.UpdateClanIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::UpdateClanIcon(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.UpdateClanIcon"));

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


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Get UI Background ITexture
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> UITexture                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::Get_UI_Background_ITexture(TSoftObjectPtr<class UTexture2D>* UITexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Get UI Background ITexture"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> UITexture;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UITexture != nullptr)
		*UITexture = params.UITexture;
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetUITexture
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> UITexture                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::GetUITexture(TSoftObjectPtr<class UTexture2D>* UITexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetUITexture"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> UITexture;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UITexture != nullptr)
		*UITexture = params.UITexture;
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetInventoryItemFromPossiblecombineditemContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* PotentialCombinedItem          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::GetInventoryItemFromPossiblecombineditemContainer(class UTigerInventoryItemBase** PotentialCombinedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetInventoryItemFromPossiblecombineditemContainer"));

	struct
	{
		class UTigerInventoryItemBase* PotentialCombinedItem;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PotentialCombinedItem != nullptr)
		*PotentialCombinedItem = params.PotentialCombinedItem;
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InRank                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InIsFree                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_Battlepass_C*    InBattlepassRef                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::Init(int InRank, int InIndex, bool InIsFree, class UTBP_UI_Battlepass_C* InBattlepassRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Init"));

	struct
	{
		int                            InRank;
		int                            InIndex;
		bool                           InIsFree;
		class UTBP_UI_Battlepass_C*    InBattlepassRef;
	} params = {};

	params.InRank = InRank;
	params.InIndex = InIndex;
	params.InIsFree = InIsFree;
	params.InBattlepassRef = InBattlepassRef;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ConstructTooltipWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerTooltipWidget*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTigerTooltipWidget* UTBP_UI_BattlepassReward_C::ConstructTooltipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ConstructTooltipWidget"));

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


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoaded_0E0168EB4C4BB527325A47BED659224C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::OnLoaded_0E0168EB4C4BB527325A47BED659224C(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoaded_0E0168EB4C4BB527325A47BED659224C"));

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


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_BattlepassReward_C::BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassReward_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.PreConstruct"));

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


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_BattlepassReward_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ItemSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BattlepassReward_C::ItemSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ItemSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_BattlepassReward_C::BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_BattlepassReward_C::BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemFocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BattlepassReward_C::OnItemFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemFocused"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemUnfocused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BattlepassReward_C::OnItemUnfocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemUnfocused"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnBackgroundTextureLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              BackgroundTexture              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::OnBackgroundTextureLoaded(class UTexture2D* BackgroundTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnBackgroundTextureLoaded"));

	struct
	{
		class UTexture2D*              BackgroundTexture;
	} params = {};

	params.BackgroundTexture = BackgroundTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoadedItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::OnLoadedItem(const struct FTigerItemId& ItemId, class UTigerInventoryItemBase* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoadedItem"));

	struct
	{
		struct FTigerItemId            ItemId;
		class UTigerInventoryItemBase* InventoryItem;
	} params = {};

	params.ItemId = ItemId;
	params.InventoryItem = InventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ExecuteUbergraph_TBP_UI_BattlepassReward
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::ExecuteUbergraph_TBP_UI_BattlepassReward(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ExecuteUbergraph_TBP_UI_BattlepassReward"));

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


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemSelected__DelegateSignature"));

	struct
	{
		struct FTigerItemId            InItemId;
	} params = {};

	params.InItemId = InItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassReward_C::OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemHovered__DelegateSignature"));

	struct
	{
		struct FTigerItemId            ItemId;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
