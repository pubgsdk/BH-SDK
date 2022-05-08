// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RankSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RankSection.TBP_UI_RankSection_C.GetRomanNumeral
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InNumber                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OutNumeral                     (CPF_Parm, CPF_OutParm)

void UTBP_UI_RankSection_C::GetRomanNumeral(int InNumber, struct FText* OutNumeral)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RankSection.TBP_UI_RankSection_C.GetRomanNumeral"));

	struct
	{
		int                            InNumber;
		struct FText                   OutNumeral;
	} params = {};

	params.InNumber = InNumber;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutNumeral != nullptr)
		*OutNumeral = params.OutNumeral;
}


// Function TBP_UI_RankSection.TBP_UI_RankSection_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RankSection_C::Init(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RankSection.TBP_UI_RankSection_C.Init"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
