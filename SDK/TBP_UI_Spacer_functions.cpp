// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Spacer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Spacer.TBP_UI_Spacer_C.SetHeight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Spacer_C::SetHeight(float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Spacer.TBP_UI_Spacer_C.SetHeight"));

	struct
	{
		float                          Height;
	} params = {};

	params.Height = Height;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Spacer.TBP_UI_Spacer_C.SetWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Spacer_C::SetWidth(float Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Spacer.TBP_UI_Spacer_C.SetWidth"));

	struct
	{
		float                          Width;
	} params = {};

	params.Width = Width;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Spacer.TBP_UI_Spacer_C.Set Size
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Spacer_C::Set_Size(float Width, float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Spacer.TBP_UI_Spacer_C.Set Size"));

	struct
	{
		float                          Width;
		float                          Height;
	} params = {};

	params.Width = Width;
	params.Height = Height;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
