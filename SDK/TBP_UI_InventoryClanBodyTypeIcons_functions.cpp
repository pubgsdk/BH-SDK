// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InventoryClanBodyTypeIcons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetOwnerIndicators
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_InventoryClanBodyTypeIcons_C::SetOwnerIndicators(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetOwnerIndicators"));

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


// Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetClanOrArchetypeIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<ETigerClan>             InClans                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<ETigerPowerKitType>     InArchetypes                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_InventoryClanBodyTypeIcons_C::SetClanOrArchetypeIcon(TArray<ETigerClan>* InClans, TArray<ETigerPowerKitType>* InArchetypes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetClanOrArchetypeIcon"));

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


// Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.CheckIfShouldDisplayDisallowedClan
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<ETigerClan>             InClans                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<ETigerPowerKitType>     InArchetypes                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bSuccessful                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_InventoryClanBodyTypeIcons_C::CheckIfShouldDisplayDisallowedClan(TArray<ETigerClan>* InClans, TArray<ETigerPowerKitType>* InArchetypes, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.CheckIfShouldDisplayDisallowedClan"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
