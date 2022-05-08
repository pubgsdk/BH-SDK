// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_PlayerCardList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.FixLayout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardList_C::FixLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.FixLayout"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.ClearList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_PlayerCardList_C::ClearList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.ClearList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.AddPlayerWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             InPlayerWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PlayerCardList_C::AddPlayerWidget(class UUserWidget* InPlayerWidget, int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.AddPlayerWidget"));

	struct
	{
		class UUserWidget*             InPlayerWidget;
		int                            InIndex;
	} params = {};

	params.InPlayerWidget = InPlayerWidget;
	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.RowColumnFromIndex
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Row                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Column                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_PlayerCardList_C::RowColumnFromIndex(int InIndex, int* Row, int* Column)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.RowColumnFromIndex"));

	struct
	{
		int                            InIndex;
		int                            Row;
		int                            Column;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Row != nullptr)
		*Row = params.Row;
	if (Column != nullptr)
		*Column = params.Column;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
