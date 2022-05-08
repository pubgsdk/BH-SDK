// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Carousel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSwappableRange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InMinIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InMaxIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Carousel_C::SetSwappableRange(int InMinIndex, int InMaxIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSwappableRange"));

	struct
	{
		int                            InMinIndex;
		int                            InMaxIndex;
	} params = {};

	params.InMinIndex = InMinIndex;
	params.InMaxIndex = InMaxIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSelectedItemIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Carousel_C::SetSelectedItemIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSelectedItemIndex"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Carousel.TBP_UI_Carousel_C.UpdateSelectedItemLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Carousel_C::UpdateSelectedItemLabel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.UpdateSelectedItemLabel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetItemLabels
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FText>           NewItemLabels                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            NewSelectedItemIndex           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Carousel_C::SetItemLabels(int NewSelectedItemIndex, TArray<struct FText>* NewItemLabels)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetItemLabels"));

	struct
	{
		TArray<struct FText>           NewItemLabels;
		int                            NewSelectedItemIndex;
	} params = {};

	params.NewSelectedItemIndex = NewSelectedItemIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewItemLabels != nullptr)
		*NewItemLabels = params.NewItemLabels;
}


// Function TBP_UI_Carousel.TBP_UI_Carousel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Carousel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.PreConstruct"));

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


// Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Carousel_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Carousel_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Carousel.TBP_UI_Carousel_C.ExecuteUbergraph_TBP_UI_Carousel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Carousel_C::ExecuteUbergraph_TBP_UI_Carousel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.ExecuteUbergraph_TBP_UI_Carousel"));

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


// Function TBP_UI_Carousel.TBP_UI_Carousel_C.SelectedItemIndexChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Carousel_C::SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Carousel.TBP_UI_Carousel_C.SelectedItemIndexChanged__DelegateSignature"));

	struct
	{
		int                            NewIndex;
	} params = {};

	params.NewIndex = NewIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
