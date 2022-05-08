// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_QuestGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.SelectFirstQuest
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestGrid_C::SelectFirstQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.SelectFirstQuest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.OnButtonClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_QuestPreview_C*  InClickedWidget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestGrid_C::OnButtonClicked(class UTBP_UI_QuestPreview_C* InClickedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.OnButtonClicked"));

	struct
	{
		class UTBP_UI_QuestPreview_C*  InClickedWidget;
	} params = {};

	params.InClickedWidget = InClickedWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.PopulateGrid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InStartIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UTigerQuest*>     InQuests                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_QuestGrid_C::PopulateGrid(int InStartIndex, TArray<class UTigerQuest*>* InQuests)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.PopulateGrid"));

	struct
	{
		int                            InStartIndex;
		TArray<class UTigerQuest*>     InQuests;
	} params = {};

	params.InStartIndex = InStartIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InQuests != nullptr)
		*InQuests = params.InQuests;
}


// Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.QuestSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuest*             InSelectedQuest                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestGrid_C::QuestSelected__DelegateSignature(class UTigerQuest* InSelectedQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestGrid.TBP_UI_QuestGrid_C.QuestSelected__DelegateSignature"));

	struct
	{
		class UTigerQuest*             InSelectedQuest;
	} params = {};

	params.InSelectedQuest = InSelectedQuest;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
