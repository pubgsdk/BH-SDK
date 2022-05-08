// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ActiveQuest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ActiveQuest.TBP_UI_ActiveQuest_C.SetQuestQbjective
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ActiveQuest_C::SetQuestQbjective(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveQuest.TBP_UI_ActiveQuest_C.SetQuestQbjective"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ActiveQuest.TBP_UI_ActiveQuest_C.SetQuestTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ActiveQuest_C::SetQuestTitle(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ActiveQuest.TBP_UI_ActiveQuest_C.SetQuestTitle"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
