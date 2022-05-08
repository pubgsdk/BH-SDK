// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_HorizontalFadeSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.SetFadeWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InLeftFadeWidth                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InRightFadeWidth               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HorizontalFadeSlot_C::SetFadeWidth(float InLeftFadeWidth, float InRightFadeWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.SetFadeWidth"));

	struct
	{
		float                          InLeftFadeWidth;
		float                          InRightFadeWidth;
	} params = {};

	params.InLeftFadeWidth = InLeftFadeWidth;
	params.InRightFadeWidth = InRightFadeWidth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_HorizontalFadeSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.PreConstruct"));

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


// Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_HorizontalFadeSlot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_HorizontalFadeSlot
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_HorizontalFadeSlot_C::ExecuteUbergraph_TBP_UI_HorizontalFadeSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_HorizontalFadeSlot"));

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
