// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Tutorial_Objective_ProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.Add 1 To Progress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_Objective_ProgressBar_C::Add_1_To_Progress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.Add 1 To Progress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_Objective_ProgressBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_Objective_ProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.Update Fill to Target Percentage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tutorial_Objective_ProgressBar_C::Update_Fill_to_Target_Percentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.Update Fill to Target Percentage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.ExecuteUbergraph_TBP_UI_Tutorial_Objective_ProgressBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tutorial_Objective_ProgressBar_C::ExecuteUbergraph_TBP_UI_Tutorial_Objective_ProgressBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tutorial_Objective_ProgressBar.TBP_UI_Tutorial_Objective_ProgressBar_C.ExecuteUbergraph_TBP_UI_Tutorial_Objective_ProgressBar"));

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
