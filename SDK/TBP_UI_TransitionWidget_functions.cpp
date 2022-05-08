// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TransitionWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ChangeAnimationSpeed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InAnimationSpeed               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionWidget_C::ChangeAnimationSpeed(float InAnimationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ChangeAnimationSpeed"));

	struct
	{
		float                          InAnimationSpeed;
	} params = {};

	params.InAnimationSpeed = InAnimationSpeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.EnableRendering
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionWidget_C::EnableRendering()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.EnableRendering"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.DisableRendering
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_TransitionWidget_C::DisableRendering()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.DisableRendering"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ExecuteUbergraph_TBP_UI_TransitionWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionWidget_C::ExecuteUbergraph_TBP_UI_TransitionWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ExecuteUbergraph_TBP_UI_TransitionWidget"));

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
