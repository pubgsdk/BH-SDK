// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetOwnerIndicators
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::SetOwnerIndicators(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetOwnerIndicators"));

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


// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetClanOrArchetypeIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<ETigerClan>             InClans                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<ETigerPowerKitType>     InArchetypes                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::SetClanOrArchetypeIcon(TArray<ETigerClan>* InClans, TArray<ETigerPowerKitType>* InArchetypes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetClanOrArchetypeIcon"));

	struct
	{
		TArray<ETigerClan>             InClans;
		TArray<ETigerPowerKitType>     InArchetypes;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InClans != nullptr)
		*InClans = params.InClans;
	if (InArchetypes != nullptr)
		*InArchetypes = params.InArchetypes;
}


// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.CheckIfShouldDisplayDisallowedClan
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<ETigerClan>             InClans                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<ETigerPowerKitType>     InArchetypes                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bSuccessful                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::CheckIfShouldDisplayDisallowedClan(TArray<ETigerClan>* InClans, TArray<ETigerPowerKitType>* InArchetypes, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.CheckIfShouldDisplayDisallowedClan"));

	struct
	{
		TArray<ETigerClan>             InClans;
		TArray<ETigerPowerKitType>     InArchetypes;
		bool                           bSuccessful;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InClans != nullptr)
		*InClans = params.InClans;
	if (InArchetypes != nullptr)
		*InArchetypes = params.InArchetypes;
	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;
}


// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview"));

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
