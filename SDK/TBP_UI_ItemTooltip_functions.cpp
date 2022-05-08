// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ItemTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.ResetTooltip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ItemTooltip_C::ResetTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.ResetTooltip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.InitializeAsQuestCollectible
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsCollectible                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   OverrideItemName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   OverrideItemAction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ItemTooltip_C::InitializeAsQuestCollectible(bool IsCollectible, const struct FText& OverrideItemName, const struct FText& OverrideItemAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.InitializeAsQuestCollectible"));

	struct
	{
		bool                           IsCollectible;
		struct FText                   OverrideItemName;
		struct FText                   OverrideItemAction;
	} params = {};

	params.IsCollectible = IsCollectible;
	params.OverrideItemName = OverrideItemName;
	params.OverrideItemAction = OverrideItemAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.InitializeFromItemAsset
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         ItemAsset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerTooltipAction> Actions                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UTBP_UI_ItemTooltip_C::InitializeFromItemAsset(class UTigerItemAsset* ItemAsset, TArray<struct FTigerTooltipAction>* Actions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.InitializeFromItemAsset"));

	struct
	{
		class UTigerItemAsset*         ItemAsset;
		TArray<struct FTigerTooltipAction> Actions;
	} params = {};

	params.ItemAsset = ItemAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actions != nullptr)
		*Actions = params.Actions;
}


// Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ItemTooltip_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.PreConstruct"));

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


// Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.PopulateFromItemAsset
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         InItemAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerTooltipAction> InInputActions                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UTBP_UI_ItemTooltip_C::PopulateFromItemAsset(class UTigerItemAsset* InItemAsset, TArray<struct FTigerTooltipAction> InInputActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.PopulateFromItemAsset"));

	struct
	{
		class UTigerItemAsset*         InItemAsset;
		TArray<struct FTigerTooltipAction> InInputActions;
	} params = {};

	params.InItemAsset = InItemAsset;
	params.InInputActions = InInputActions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.ExecuteUbergraph_TBP_UI_ItemTooltip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ItemTooltip_C::ExecuteUbergraph_TBP_UI_ItemTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ItemTooltip.TBP_UI_ItemTooltip_C.ExecuteUbergraph_TBP_UI_ItemTooltip"));

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
