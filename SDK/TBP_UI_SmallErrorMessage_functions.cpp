// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SmallErrorMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_SmallErrorMessage.TBP_UI_SmallErrorMessage_C.SetError
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InError                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_SmallErrorMessage_C::SetError(bool InError, const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallErrorMessage.TBP_UI_SmallErrorMessage_C.SetError"));

	struct
	{
		bool                           InError;
		struct FText                   InText;
	} params = {};

	params.InError = InError;
	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_SmallErrorMessage.TBP_UI_SmallErrorMessage_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_SmallErrorMessage_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_SmallErrorMessage.TBP_UI_SmallErrorMessage_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
