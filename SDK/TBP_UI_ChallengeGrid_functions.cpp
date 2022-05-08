// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ChallengeGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeGrid_C::SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeGrid_C::SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.CreateChallengeWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsMastery                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTigerChallenge*         InChallenge                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerWidget*            OutWidget                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeGrid_C::CreateChallengeWidget(bool InIsMastery, class UTigerChallenge* InChallenge, class UTigerWidget** OutWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.CreateChallengeWidget"));

	struct
	{
		bool                           InIsMastery;
		class UTigerChallenge*         InChallenge;
		class UTigerWidget*            OutWidget;
	} params = {};

	params.InIsMastery = InIsMastery;
	params.InChallenge = InChallenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SetChallengeWidgetSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeGrid_C::SetChallengeWidgetSize(float Width, float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SetChallengeWidgetSize"));

	struct
	{
		float                          Width;
		float                          Height;
	} params = {};

	params.Width = Width;
	params.Height = Height;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.UpdateChallengeProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeGrid_C::UpdateChallengeProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.UpdateChallengeProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.FillGrid
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeGrid_C::FillGrid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.FillGrid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeGrid_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.CallAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeGrid_C::CallAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.CallAnimationFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.ExecuteUbergraph_TBP_UI_ChallengeGrid
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeGrid_C::ExecuteUbergraph_TBP_UI_ChallengeGrid(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.ExecuteUbergraph_TBP_UI_ChallengeGrid"));

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


// Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.AnimationFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeGrid_C::AnimationFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.AnimationFinished__DelegateSignature"));

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
