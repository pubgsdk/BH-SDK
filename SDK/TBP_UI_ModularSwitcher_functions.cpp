// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ModularSwitcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.HighlightSwitcher
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ModularSwitcher_C::HighlightSwitcher()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.HighlightSwitcher"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.HighlightTabsList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ModularSwitcher_C::HighlightTabsList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.HighlightTabsList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.OnTabSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularSwitcher_C::OnTabSelected(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.OnTabSelected"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.OnTabHovered
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularSwitcher_C::OnTabHovered(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.OnTabHovered"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.AddTabsWithPrebuiltWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerModularListItemInfo> InTabItemsInfo                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class UTigerWidget*>    InWidgets                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UTBP_UI_ModularSwitcher_C::AddTabsWithPrebuiltWidgets(TArray<struct FTigerModularListItemInfo>* InTabItemsInfo, TArray<class UTigerWidget*>* InWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.AddTabsWithPrebuiltWidgets"));

	struct
	{
		TArray<struct FTigerModularListItemInfo> InTabItemsInfo;
		TArray<class UTigerWidget*>    InWidgets;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InTabItemsInfo != nullptr)
		*InTabItemsInfo = params.InTabItemsInfo;
	if (InWidgets != nullptr)
		*InWidgets = params.InWidgets;
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.AddTabs
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerModularListItemInfo> InTabItemsInfo                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class UClass* /*UTigerWidget*/> InWidgetsToBuild               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ModularSwitcher_C::AddTabs(TArray<struct FTigerModularListItemInfo>* InTabItemsInfo, TArray<class UClass* /*UTigerWidget*/>* InWidgetsToBuild)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.AddTabs"));

	struct
	{
		TArray<struct FTigerModularListItemInfo> InTabItemsInfo;
		TArray<class UClass* /*UTigerWidget*/> InWidgetsToBuild;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InTabItemsInfo != nullptr)
		*InTabItemsInfo = params.InTabItemsInfo;
	if (InWidgetsToBuild != nullptr)
		*InWidgetsToBuild = params.InWidgetsToBuild;
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.AddTabWithPrebuiltWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerWidget*            InWidgetForSwitcher            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerModularListItemInfo InInfo                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ModularSwitcher_C::AddTabWithPrebuiltWidget(class UTigerWidget* InWidgetForSwitcher, const struct FTigerModularListItemInfo& InInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.AddTabWithPrebuiltWidget"));

	struct
	{
		class UTigerWidget*            InWidgetForSwitcher;
		struct FTigerModularListItemInfo InInfo;
	} params = {};

	params.InWidgetForSwitcher = InWidgetForSwitcher;
	params.InInfo = InInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.AddTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerWidget*/ InWidgetForSwitcher            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerModularListItemInfo InInfo                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ModularSwitcher_C::AddTab(class UClass* /*UTigerWidget*/ InWidgetForSwitcher, const struct FTigerModularListItemInfo& InInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.AddTab"));

	struct
	{
		class UClass* /*UTigerWidget*/ InWidgetForSwitcher;
		struct FTigerModularListItemInfo InInfo;
	} params = {};

	params.InWidgetForSwitcher = InWidgetForSwitcher;
	params.InInfo = InInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.BndEvt__TBP_UI_ModularSwitcher_HoverSensor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ModularSwitcher_C::BndEvt__TBP_UI_ModularSwitcher_HoverSensor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.BndEvt__TBP_UI_ModularSwitcher_HoverSensor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.ExecuteUbergraph_TBP_UI_ModularSwitcher
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ModularSwitcher_C::ExecuteUbergraph_TBP_UI_ModularSwitcher(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ModularSwitcher.TBP_UI_ModularSwitcher_C.ExecuteUbergraph_TBP_UI_ModularSwitcher"));

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
