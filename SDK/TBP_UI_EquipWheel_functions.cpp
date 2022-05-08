// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_EquipWheel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.GetInterfaceWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerWheelInterfaceWidget* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTigerWheelInterfaceWidget* UTBP_UI_EquipWheel_C::GetInterfaceWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.GetInterfaceWidget"));

	struct
	{
		class UTigerWheelInterfaceWidget* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.BndEvt__TBP_UI_EquipWheel_Button_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_EquipWheel_C::BndEvt__TBP_UI_EquipWheel_Button_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.BndEvt__TBP_UI_EquipWheel_Button_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.BindAlternate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EquipWheel_C::BindAlternate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.BindAlternate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.UnbindAlternate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EquipWheel_C::UnbindAlternate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.UnbindAlternate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.CancelSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_EquipWheel_C::CancelSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.CancelSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.ExecuteUbergraph_TBP_UI_EquipWheel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_EquipWheel_C::ExecuteUbergraph_TBP_UI_EquipWheel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_EquipWheel.TBP_UI_EquipWheel_C.ExecuteUbergraph_TBP_UI_EquipWheel"));

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
