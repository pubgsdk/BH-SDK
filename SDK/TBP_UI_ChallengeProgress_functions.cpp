// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ChallengeProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHorizontalBox*          ChallengeProgressHB            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeProgress_C::SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1(class UHorizontalBox* ChallengeProgressHB)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1"));

	struct
	{
		class UHorizontalBox*          ChallengeProgressHB;
	} params = {};

	params.ChallengeProgressHB = ChallengeProgressHB;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Setup Reward Display from Item
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeProgress_C::Setup_Reward_Display_from_Item(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Setup Reward Display from Item"));

	struct
	{
		class UTigerInventoryItemBase* InItem;
	} params = {};

	params.InItem = InItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OverrideMinSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MinWidth                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MinHeight                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeProgress_C::OverrideMinSize(float MinWidth, float MinHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OverrideMinSize"));

	struct
	{
		float                          MinWidth;
		float                          MinHeight;
	} params = {};

	params.MinWidth = MinWidth;
	params.MinHeight = MinHeight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HideExpRewardText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeProgress_C::HideExpRewardText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HideExpRewardText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Setup Reward Display
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeProgress_C::Setup_Reward_Display()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Setup Reward Display"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HasFinishedProgressBarAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasUpdatedProgressBar          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChallengeProgress_C::HasFinishedProgressBarAnimation(bool* HasUpdatedProgressBar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HasFinishedProgressBarAnimation"));

	struct
	{
		bool                           HasUpdatedProgressBar;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasUpdatedProgressBar != nullptr)
		*HasUpdatedProgressBar = params.HasUpdatedProgressBar;
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Progress
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InProgressBarPercentage        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   InProgressText                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ChallengeProgress_C::Set_Progress(float InProgressBarPercentage, const struct FText& InProgressText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Progress"));

	struct
	{
		float                          InProgressBarPercentage;
		struct FText                   InProgressText;
	} params = {};

	params.InProgressBarPercentage = InProgressBarPercentage;
	params.InProgressText = InProgressText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.MoveProgressBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          LerpValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeProgress_C::MoveProgressBar(float LerpValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.MoveProgressBar"));

	struct
	{
		float                          LerpValue;
	} params = {};

	params.LerpValue = LerpValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Challenge Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerProgressedChallengeWrapper Challenge_Progress_Wrapper     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ChallengeProgress_C::Set_Challenge_Data(const struct FTigerProgressedChallengeWrapper& Challenge_Progress_Wrapper)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Challenge Data"));

	struct
	{
		struct FTigerProgressedChallengeWrapper Challenge_Progress_Wrapper;
	} params = {};

	params.Challenge_Progress_Wrapper = Challenge_Progress_Wrapper;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ShowComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHorizontalBox*          ChallengeProgressHB            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeProgress_C::ShowComplete(class UHorizontalBox* ChallengeProgressHB)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ShowComplete"));

	struct
	{
		class UHorizontalBox*          ChallengeProgressHB;
	} params = {};

	params.ChallengeProgressHB = ChallengeProgressHB;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeProgress_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OnChallengeCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeProgress_C::OnChallengeCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OnChallengeCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ChallengeProgress_C::UpdateProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.UpdateProgress"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ChallengeProgress_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.PreConstruct"));

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


// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ExecuteUbergraph_TBP_UI_ChallengeProgress
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ChallengeProgress_C::ExecuteUbergraph_TBP_UI_ChallengeProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ExecuteUbergraph_TBP_UI_ChallengeProgress"));

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
