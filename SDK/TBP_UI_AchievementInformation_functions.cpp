// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_AchievementInformation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_AchievementInformation.TBP_UI_AchievementInformation_C.UpdateProgressWithChallegeData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InChallenge                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AchievementInformation_C::UpdateProgressWithChallegeData(class UTigerChallenge* InChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AchievementInformation.TBP_UI_AchievementInformation_C.UpdateProgressWithChallegeData"));

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


// Function TBP_UI_AchievementInformation.TBP_UI_AchievementInformation_C.InitialiseFromChallengeData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InChallenge                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AchievementInformation_C::InitialiseFromChallengeData(class UTigerChallenge* InChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AchievementInformation.TBP_UI_AchievementInformation_C.InitialiseFromChallengeData"));

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


// Function TBP_UI_AchievementInformation.TBP_UI_AchievementInformation_C.UpdateProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InProgress                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InTarget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AchievementInformation_C::UpdateProgress(int InProgress, int InTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AchievementInformation.TBP_UI_AchievementInformation_C.UpdateProgress"));

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


// Function TBP_UI_AchievementInformation.TBP_UI_AchievementInformation_C.Initialise
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InAchievementName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InDescription                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   InVariableName                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            InProgress                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InTarget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* InReward                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_AchievementInformation_C::Initialise(const struct FText& InAchievementName, const struct FText& InDescription, const struct FText& InVariableName, int InProgress, int InTarget, class UTigerInventoryItemBase* InReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_AchievementInformation.TBP_UI_AchievementInformation_C.Initialise"));

	struct
	{
		struct FText                   InAchievementName;
		struct FText                   InDescription;
		struct FText                   InVariableName;
		int                            InProgress;
		int                            InTarget;
		class UTigerInventoryItemBase* InReward;
	} params = {};

	params.InAchievementName = InAchievementName;
	params.InDescription = InDescription;
	params.InVariableName = InVariableName;
	params.InProgress = InProgress;
	params.InTarget = InTarget;
	params.InReward = InReward;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
