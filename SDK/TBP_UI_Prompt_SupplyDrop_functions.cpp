// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Prompt_SupplyDrop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Prompt_SupplyDrop_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.PreConstruct"));

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


// Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Prompt_SupplyDrop_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Prompt_SupplyDrop_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_Prompt_SupplyDrop_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.OnHidePrompt
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Prompt_SupplyDrop_C::OnHidePrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.OnHidePrompt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.ExecuteUbergraph_TBP_UI_Prompt_SupplyDrop
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Prompt_SupplyDrop_C::ExecuteUbergraph_TBP_UI_Prompt_SupplyDrop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Prompt_SupplyDrop.TBP_UI_Prompt_SupplyDrop_C.ExecuteUbergraph_TBP_UI_Prompt_SupplyDrop"));

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
