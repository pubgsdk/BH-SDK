// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_OutfitItem_Store_Listener_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C.OnItemPreview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_OutfitItem_Store_Listener_C::OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C.OnItemPreview"));

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


// Function TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C.OnItemUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_OutfitItem_Store_Listener_C::OnItemUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C.OnItemUnhovered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C.OnItemSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_OutfitItem_Store_Listener_C::OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C.OnItemSelected"));

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


// Function TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C.OnItemHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerVendorStoreCategoryItem Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_OutfitItem_Store_Listener_C::OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C.OnItemHovered"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
