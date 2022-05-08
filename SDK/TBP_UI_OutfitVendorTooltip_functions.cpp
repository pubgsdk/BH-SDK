// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_OutfitVendorTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.GetItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* OutItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitVendorTooltip_C::GetItem(class UTigerInventoryItemBase* InItem, class UTigerInventoryItemBase** OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.GetItem"));

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


// Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.SetItem
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   ErrorMessage                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FKey                    GamepadInputKey                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// struct FText                   ActionText                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_OutfitVendorTooltip_C::SetItem(const struct FTigerVendorStoreCategoryItem& Item, const struct FText& ErrorMessage, const struct FKey& GamepadInputKey, const struct FText& ActionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.SetItem"));

	struct
	{
		struct FTigerVendorStoreCategoryItem Item;
		struct FText                   ErrorMessage;
		struct FKey                    GamepadInputKey;
		struct FText                   ActionText;
	} params = {};

	params.Item = Item;
	params.ErrorMessage = ErrorMessage;
	params.GamepadInputKey = GamepadInputKey;
	params.ActionText = ActionText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_OutfitVendorTooltip_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.ExecuteUbergraph_TBP_UI_OutfitVendorTooltip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitVendorTooltip_C::ExecuteUbergraph_TBP_UI_OutfitVendorTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.ExecuteUbergraph_TBP_UI_OutfitVendorTooltip"));

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
