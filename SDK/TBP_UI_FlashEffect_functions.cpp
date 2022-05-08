// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_FlashEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.PlayFlashEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_FlashEffect_C::PlayFlashEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.PlayFlashEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_FlashEffect_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_FlashEffect_C::WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.ExecuteUbergraph_TBP_UI_FlashEffect
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_FlashEffect_C::ExecuteUbergraph_TBP_UI_FlashEffect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.ExecuteUbergraph_TBP_UI_FlashEffect"));

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


// Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Flash Finished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_FlashEffect_C*   Finished_Effect                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_FlashEffect_C::Flash_Finished__DelegateSignature(class UTBP_UI_FlashEffect_C* Finished_Effect)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Flash Finished__DelegateSignature"));

	struct
	{
		class UTBP_UI_FlashEffect_C*   Finished_Effect;
	} params = {};

	params.Finished_Effect = Finished_Effect;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
