// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Progress_Bar_Small_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Progress_Bar_Small.TBP_UI_Progress_Bar_Small_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Progress_Bar_Small_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Progress_Bar_Small.TBP_UI_Progress_Bar_Small_C.PreConstruct"));

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


// Function TBP_UI_Progress_Bar_Small.TBP_UI_Progress_Bar_Small_C.SetPercentage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InPercent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Progress_Bar_Small_C::SetPercentage(float InPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Progress_Bar_Small.TBP_UI_Progress_Bar_Small_C.SetPercentage"));

	struct
	{
		float                          InPercent;
	} params = {};

	params.InPercent = InPercent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Progress_Bar_Small.TBP_UI_Progress_Bar_Small_C.ExecuteUbergraph_TBP_UI_Progress_Bar_Small
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Progress_Bar_Small_C::ExecuteUbergraph_TBP_UI_Progress_Bar_Small(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Progress_Bar_Small.TBP_UI_Progress_Bar_Small_C.ExecuteUbergraph_TBP_UI_Progress_Bar_Small"));

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
