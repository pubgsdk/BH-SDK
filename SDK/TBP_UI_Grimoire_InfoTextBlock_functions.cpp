// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_InfoTextBlock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ShowHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Highlight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_InfoTextBlock_C::ShowHighlight(bool Highlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ShowHighlight"));

	struct
	{
		bool                           Highlight;
	} params = {};

	params.Highlight = Highlight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_InfoTextBlock_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoTextBlock_C::ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock"));

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
