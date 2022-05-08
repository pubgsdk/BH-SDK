// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StatusMessage_Shackled_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_StatusMessage_Shackled.TBP_UI_StatusMessage_Shackled_C.PlayAnimationSilenced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_StatusMessage_Shackled_C::PlayAnimationSilenced()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessage_Shackled.TBP_UI_StatusMessage_Shackled_C.PlayAnimationSilenced"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusMessage_Shackled.TBP_UI_StatusMessage_Shackled_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_StatusMessage_Shackled_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessage_Shackled.TBP_UI_StatusMessage_Shackled_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_StatusMessage_Shackled.TBP_UI_StatusMessage_Shackled_C.ExecuteUbergraph_TBP_UI_StatusMessage_Shackled
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_StatusMessage_Shackled_C::ExecuteUbergraph_TBP_UI_StatusMessage_Shackled(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_StatusMessage_Shackled.TBP_UI_StatusMessage_Shackled_C.ExecuteUbergraph_TBP_UI_StatusMessage_Shackled"));

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
