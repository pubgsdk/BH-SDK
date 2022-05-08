// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_OutfitItemContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerVendorStoreCategoryItem> Items                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_OutfitItemContainer_C::CreateStoreItems(TArray<struct FTigerVendorStoreCategoryItem>* Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItems"));

	struct
	{
		TArray<struct FTigerVendorStoreCategoryItem> Items;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Items != nullptr)
		*Items = params.Items;
}


// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.UpdateOwnerStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    ItemClassPath                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// int                            NewInventoryCount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsEquipped                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_OutfitItemContainer_C::UpdateOwnerStatus(TSoftClassPtr<class UClass> ItemClassPath, int NewInventoryCount, bool bIsEquipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.UpdateOwnerStatus"));

	struct
	{
		TSoftClassPtr<class UClass>    ItemClassPath;
		int                            NewInventoryCount;
		bool                           bIsEquipped;
	} params = {};

	params.ItemClassPath = ItemClassPath;
	params.NewInventoryCount = NewInventoryCount;
	params.bIsEquipped = bIsEquipped;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.DoesPlayerOwnItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TSoftClassPtr<class UClass>    ItemClassPath                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_OutfitItemContainer_C::DoesPlayerOwnItem(TSoftClassPtr<class UClass> ItemClassPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.DoesPlayerOwnItem"));

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


// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.SetItemListener
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UTBP_UI_OutfitItemListener_C> ItemListener                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_OutfitItemContainer_C::SetItemListener(const TScriptInterface<class UTBP_UI_OutfitItemListener_C>& ItemListener)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.SetItemListener"));

	struct
	{
		TScriptInterface<class UTBP_UI_OutfitItemListener_C> ItemListener;
	} params = {};

	params.ItemListener = ItemListener;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Create Store Item
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FTigerVendorStoreCategoryItem StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_OutfitItem_C*    ItemWidget                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItemContainer_C::Create_Store_Item(int InIndex, struct FTigerVendorStoreCategoryItem* StoreItem, class UTBP_UI_OutfitItem_C** ItemWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Create Store Item"));

	struct
	{
		struct FTigerVendorStoreCategoryItem StoreItem;
		int                            InIndex;
		class UTBP_UI_OutfitItem_C*    ItemWidget;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (StoreItem != nullptr)
		*StoreItem = params.StoreItem;
	if (ItemWidget != nullptr)
		*ItemWidget = params.ItemWidget;
}


// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItemContainer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Tick"));

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


// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItemContainer_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItemContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.ExecuteUbergraph_TBP_UI_OutfitItemContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItemContainer_C::ExecuteUbergraph_TBP_UI_OutfitItemContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.ExecuteUbergraph_TBP_UI_OutfitItemContainer"));

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
