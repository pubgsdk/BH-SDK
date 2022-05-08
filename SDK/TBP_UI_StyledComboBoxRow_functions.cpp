// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StyledComboBoxRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsSelected                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_StyledComboBoxRow_C::SetSelected(bool InIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.SetSelected"));

	struct
	{
		bool                           InIsSelected;
	} params = {};

	params.InIsSelected = InIsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FDataTableRowHandle     InTextStyle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UTBP_UI_StyledComboBox_C* InParentBox                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StyledComboBoxRow_C::Init(const struct FText& InText, const struct FDataTableRowHandle& InTextStyle, class UTBP_UI_StyledComboBox_C* InParentBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.Init"));

	struct
	{
		struct FText                   InText;
		struct FDataTableRowHandle     InTextStyle;
		class UTBP_UI_StyledComboBox_C* InParentBox;
	} params = {};

	params.InText = InText;
	params.InTextStyle = InTextStyle;
	params.InParentBox = InParentBox;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_StyledComboBoxRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_StyledComboBoxRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_StyledComboBoxRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.ExecuteUbergraph_TBP_UI_StyledComboBoxRow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StyledComboBoxRow_C::ExecuteUbergraph_TBP_UI_StyledComboBoxRow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.ExecuteUbergraph_TBP_UI_StyledComboBoxRow"));

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
