// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TigerPlayerCameraManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.OnChangingCameraPreset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerCameraPreset*/ InCurrentCameraPresetClass     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// class UClass* /*UTigerCameraPreset*/ InNewCameraPresetClass         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void ATBP_TigerPlayerCameraManager_C::OnChangingCameraPreset(class UClass* /*UTigerCameraPreset*/ InCurrentCameraPresetClass, class UClass* /*UTigerCameraPreset*/ InNewCameraPresetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.OnChangingCameraPreset"));

	struct
	{
		class UClass* /*UTigerCameraPreset*/ InCurrentCameraPresetClass;
		class UClass* /*UTigerCameraPreset*/ InNewCameraPresetClass;
	} params = {};

	params.InCurrentCameraPresetClass = InCurrentCameraPresetClass;
	params.InNewCameraPresetClass = InNewCameraPresetClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.SelectPresetTransitionCurve
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerCameraPreset*      InPreviousPreset               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerCameraPreset*      InNewPreset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCurveFloat*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UCurveFloat* ATBP_TigerPlayerCameraManager_C::SelectPresetTransitionCurve(class UTigerCameraPreset* InPreviousPreset, class UTigerCameraPreset* InNewPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.SelectPresetTransitionCurve"));

	struct
	{
		class UTigerCameraPreset*      InPreviousPreset;
		class UTigerCameraPreset*      InNewPreset;
		class UCurveFloat*             ReturnValue;
	} params = {};

	params.InPreviousPreset = InPreviousPreset;
	params.InNewPreset = InNewPreset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.EvaluateCameraPreset
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerCameraPreset*/ ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

class UClass* /*UTigerCameraPreset*/ ATBP_TigerPlayerCameraManager_C::EvaluateCameraPreset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.EvaluateCameraPreset"));

	struct
	{
		class UClass* /*UTigerCameraPreset*/ ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
