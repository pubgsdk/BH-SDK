// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PointOfInterestMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ConvertToHighTierLootMarker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    InHighTierLootGroup            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UTBP_UI_PointOfInterestMarker_C::ConvertToHighTierLootMarker(TSoftClassPtr<class UClass> InHighTierLootGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ConvertToHighTierLootMarker"));

	struct
	{
		TSoftClassPtr<class UClass>    InHighTierLootGroup;
	} params = {};

	params.InHighTierLootGroup = InHighTierLootGroup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.SetToHighTierLootLocation
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    InHighTierLootGroup            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_UI_PointOfInterestMarker_C::SetToHighTierLootLocation(TSoftClassPtr<class UClass> InHighTierLootGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.SetToHighTierLootLocation"));

	struct
	{
		TSoftClassPtr<class UClass>    InHighTierLootGroup;
	} params = {};

	params.InHighTierLootGroup = InHighTierLootGroup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ExecuteUbergraph_TBP_UI_PointOfInterestMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PointOfInterestMarker_C::ExecuteUbergraph_TBP_UI_PointOfInterestMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ExecuteUbergraph_TBP_UI_PointOfInterestMarker"));

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
