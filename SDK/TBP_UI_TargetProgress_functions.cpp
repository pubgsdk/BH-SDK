// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TargetProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.UpdateProgressWithChallengeData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InChallenge                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TargetProgress_C::UpdateProgressWithChallengeData(class UTigerChallenge* InChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.UpdateProgressWithChallengeData"));

	struct
	{
		class UTigerChallenge*         InChallenge;
	} params = {};

	params.InChallenge = InChallenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.InitialiseWithChallengeData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InChallenge                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TargetProgress_C::InitialiseWithChallengeData(class UTigerChallenge* InChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.InitialiseWithChallengeData"));

	struct
	{
		class UTigerChallenge*         InChallenge;
	} params = {};

	params.InChallenge = InChallenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.UpdateProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InProgress                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InTarget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TargetProgress_C::UpdateProgress(int InProgress, int InTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.UpdateProgress"));

	struct
	{
		int                            InProgress;
		int                            InTarget;
	} params = {};

	params.InProgress = InProgress;
	params.InTarget = InTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.Initialise
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InVariableName                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            InProgress                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InTarget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TargetProgress_C::Initialise(const struct FText& InVariableName, int InProgress, int InTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.Initialise"));

	struct
	{
		struct FText                   InVariableName;
		int                            InProgress;
		int                            InTarget;
	} params = {};

	params.InVariableName = InVariableName;
	params.InProgress = InProgress;
	params.InTarget = InTarget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_TargetProgress_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.PreConstruct"));

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


// Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.ExecuteUbergraph_TBP_UI_TargetProgress
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TargetProgress_C::ExecuteUbergraph_TBP_UI_TargetProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TargetProgress.TBP_UI_TargetProgress_C.ExecuteUbergraph_TBP_UI_TargetProgress"));

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
