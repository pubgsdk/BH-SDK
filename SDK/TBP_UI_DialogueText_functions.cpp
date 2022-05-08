// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_DialogueText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetQuestObjective
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_DialogueText_C::SetQuestObjective(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetQuestObjective"));

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


// Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetDialogueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_DialogueText_C::SetDialogueText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetDialogueText"));

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


// Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetNameAndTitle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InName                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InTitle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              InIcon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_DialogueText_C::SetNameAndTitle(const struct FText& InName, const struct FText& InTitle, class UTexture2D* InIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetNameAndTitle"));

	struct
	{
		struct FText                   InName;
		struct FText                   InTitle;
		class UTexture2D*              InIcon;
	} params = {};

	params.InName = InName;
	params.InTitle = InTitle;
	params.InIcon = InIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
