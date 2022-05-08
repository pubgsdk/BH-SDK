// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_WheelItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bVisible                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_WheelItem_C::SetBackgroundColor(const struct FLinearColor& Color, bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetBackgroundColor"));

	struct
	{
		struct FLinearColor            Color;
		bool                           bVisible;
	} params = {};

	params.Color = Color;
	params.bVisible = bVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateCanUse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Can_Use                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_WheelItem_C::UpdateCanUse(bool Can_Use)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateCanUse"));

	struct
	{
		bool                           Can_Use;
	} params = {};

	params.Can_Use = Can_Use;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ResetAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_WheelItem_C::ResetAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ResetAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_WheelItem_C::SetSelected(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetSelected"));

	struct
	{
		bool                           IsSelected;
	} params = {};

	params.IsSelected = IsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WheelItem_C::UpdateData(const struct FText& Name, class UTexture2D* Icon, int Count, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateData"));

	struct
	{
		struct FText                   Name;
		class UTexture2D*              Icon;
		int                            Count;
		struct FLinearColor            Color;
	} params = {};

	params.Name = Name;
	params.Icon = Icon;
	params.Count = Count;
	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_WheelItem_C::WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void UTBP_UI_WheelItem_C::WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ExecuteUbergraph_TBP_UI_WheelItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_WheelItem_C::ExecuteUbergraph_TBP_UI_WheelItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ExecuteUbergraph_TBP_UI_WheelItem"));

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
