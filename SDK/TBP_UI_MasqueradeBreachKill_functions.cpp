// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MasqueradeBreachKill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MasqueradeBreachKill.TBP_UI_MasqueradeBreachKill_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MasqueradeBreachKill_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MasqueradeBreachKill.TBP_UI_MasqueradeBreachKill_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MasqueradeBreachKill.TBP_UI_MasqueradeBreachKill_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MasqueradeBreachKill_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MasqueradeBreachKill.TBP_UI_MasqueradeBreachKill_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params = {};

	params.Animation = Animation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MasqueradeBreachKill.TBP_UI_MasqueradeBreachKill_C.ExecuteUbergraph_TBP_UI_MasqueradeBreachKill
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MasqueradeBreachKill_C::ExecuteUbergraph_TBP_UI_MasqueradeBreachKill(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MasqueradeBreachKill.TBP_UI_MasqueradeBreachKill_C.ExecuteUbergraph_TBP_UI_MasqueradeBreachKill"));

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
