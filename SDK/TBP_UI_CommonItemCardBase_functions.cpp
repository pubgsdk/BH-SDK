// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CommonItemCardBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.ChooseItemIconToShow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> UITexture                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::ChooseItemIconToShow(class UTigerInventoryItemBase* InItem, TSoftObjectPtr<class UTexture2D>* UITexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.ChooseItemIconToShow"));

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


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.GetInventoryItemFromPossiblecombineditemContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* PotentialCombinedItem          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::GetInventoryItemFromPossiblecombineditemContainer(class UTigerInventoryItemBase** PotentialCombinedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.GetInventoryItemFromPossiblecombineditemContainer"));

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


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.GetUITexture
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> UITexture                      (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::GetUITexture(TSoftObjectPtr<class UTexture2D>* UITexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.GetUITexture"));

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


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.UpdateRarity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CommonItemCardBase_C::UpdateRarity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.UpdateRarity"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.UpdateAlignments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CommonItemCardBase_C::UpdateAlignments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.UpdateAlignments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.OnLoaded_97B679FE49F637758657B59EE4DBCEA0
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::OnLoaded_97B679FE49F637758657B59EE4DBCEA0(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.OnLoaded_97B679FE49F637758657B59EE4DBCEA0"));

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


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.ItemSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CommonItemCardBase_C::ItemSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.ItemSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.OnTextureLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              ImageTexture                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::OnTextureLoaded(class UTexture2D* ImageTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.OnTextureLoaded"));

	struct
	{
		class UTexture2D*              ImageTexture;
	} params = {};

	params.ImageTexture = ImageTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.UpdateItemId
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::UpdateItemId(const struct FTigerItemId& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.UpdateItemId"));

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


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.OnItemLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::OnItemLoaded(const struct FTigerItemId& ItemId, class UTigerInventoryItemBase* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.OnItemLoaded"));

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


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.UpdateItemVisuals
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> _2DTexture                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// ETigerItemRarity               StoreItemRarity                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerPersistentStoreCategory  StoreCategory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::UpdateItemVisuals(TSoftObjectPtr<class UTexture2D> _2DTexture, ETigerItemRarity StoreItemRarity, ETigerPersistentStoreCategory StoreCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.UpdateItemVisuals"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> _2DTexture;
		ETigerItemRarity               StoreItemRarity;
		ETigerPersistentStoreCategory  StoreCategory;
	} params = {};

	params._2DTexture = _2DTexture;
	params.StoreItemRarity = StoreItemRarity;
	params.StoreCategory = StoreCategory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_CommonItemCardBase_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CommonItemCardBase_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.PreConstruct"));

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


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.SetAndUpdateRarityVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShowRarityGlow               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_CommonItemCardBase_C::SetAndUpdateRarityVisibility(bool InShowRarityGlow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.SetAndUpdateRarityVisibility"));

	struct
	{
		bool                           InShowRarityGlow;
	} params = {};

	params.InShowRarityGlow = InShowRarityGlow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.SetInventoryItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* NewInventoryItem               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::SetInventoryItem(class UTigerInventoryItemBase* NewInventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.SetInventoryItem"));

	struct
	{
		class UTigerInventoryItemBase* NewInventoryItem;
	} params = {};

	params.NewInventoryItem = NewInventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.ExecuteUbergraph_TBP_UI_CommonItemCardBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::ExecuteUbergraph_TBP_UI_CommonItemCardBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.ExecuteUbergraph_TBP_UI_CommonItemCardBase"));

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


// Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.OnItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CommonItemCardBase_C::OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CommonItemCardBase.TBP_UI_CommonItemCardBase_C.OnItemSelected__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
