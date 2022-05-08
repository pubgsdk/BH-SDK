// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PharmacyStore_Marker1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PharmacyStore_Marker1.TBP_UI_PharmacyStore_Marker1_C.GetToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UTBP_UI_PharmacyStore_Marker1_C::GetToolTipWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PharmacyStore_Marker1.TBP_UI_PharmacyStore_Marker1_C.GetToolTipWidget_1"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_PharmacyStore_Marker1.TBP_UI_PharmacyStore_Marker1_C.GetColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UTBP_UI_PharmacyStore_Marker1_C::GetColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PharmacyStore_Marker1.TBP_UI_PharmacyStore_Marker1_C.GetColorAndOpacity_1"));

	struct
	{
		struct FLinearColor            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_PharmacyStore_Marker1.TBP_UI_PharmacyStore_Marker1_C.OnIsOnMinimapIsSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnMinimap                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PharmacyStore_Marker1_C::OnIsOnMinimapIsSet(bool bInIsOnMinimap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PharmacyStore_Marker1.TBP_UI_PharmacyStore_Marker1_C.OnIsOnMinimapIsSet"));

	struct
	{
		bool                           bInIsOnMinimap;
	} params = {};

	params.bInIsOnMinimap = bInIsOnMinimap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PharmacyStore_Marker1.TBP_UI_PharmacyStore_Marker1_C.ExecuteUbergraph_TBP_UI_PharmacyStore_Marker1
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PharmacyStore_Marker1_C::ExecuteUbergraph_TBP_UI_PharmacyStore_Marker1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PharmacyStore_Marker1.TBP_UI_PharmacyStore_Marker1_C.ExecuteUbergraph_TBP_UI_PharmacyStore_Marker1"));

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
