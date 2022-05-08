// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PageIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.GetCurrentPageIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            CurrentIndex                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PageIndicator_C::GetCurrentPageIndex(int* CurrentIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.GetCurrentPageIndex"));

	struct
	{
		int                            CurrentIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrentIndex != nullptr)
		*CurrentIndex = params.CurrentIndex;
}


// Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SetNumPages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumPages                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PageIndicator_C::SetNumPages(int NumPages)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SetNumPages"));

	struct
	{
		int                            NumPages;
	} params = {};

	params.NumPages = NumPages;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PageIndicator_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PreConstruct"));

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


// Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SelectPage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewPageIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PageIndicator_C::SelectPage(int NewPageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SelectPage"));

	struct
	{
		int                            NewPageIndex;
	} params = {};

	params.NewPageIndex = NewPageIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PageIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PageSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PageIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PageIndicator_C::PageSelected(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PageSelected"));

	struct
	{
		int                            PageIndex;
	} params = {};

	params.PageIndex = PageIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.ExecuteUbergraph_TBP_UI_PageIndicator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PageIndicator_C::ExecuteUbergraph_TBP_UI_PageIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.ExecuteUbergraph_TBP_UI_PageIndicator"));

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


// Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.OnPageSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PageIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PageIndicator_C::OnPageSelected__DelegateSignature(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.OnPageSelected__DelegateSignature"));

	struct
	{
		int                            PageIndex;
	} params = {};

	params.PageIndex = PageIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
