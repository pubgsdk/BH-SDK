// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_QuestObjective_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.SequenceEvent__ENTRYPOINTTBP_UI_QuestObjective_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestObjective_C::SequenceEvent__ENTRYPOINTTBP_UI_QuestObjective_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.SequenceEvent__ENTRYPOINTTBP_UI_QuestObjective_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.PlayFadeIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestObjective_C::PlayFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.PlayFadeIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.IsFadeInAnimationPlaying
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           OutIsPlaying                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_QuestObjective_C::IsFadeInAnimationPlaying(bool* OutIsPlaying)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.IsFadeInAnimationPlaying"));

	struct
	{
		bool                           OutIsPlaying;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIsPlaying != nullptr)
		*OutIsPlaying = params.OutIsPlaying;
}


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.SetObjectiveText
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_QuestObjective_C::SetObjectiveText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.SetObjectiveText"));

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


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ConfigureAsSingleObjective
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_QuestObjective_C::ConfigureAsSingleObjective(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ConfigureAsSingleObjective"));

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


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ConfigureAsObjectiveSummary
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InMultipleObjectivesDisplayMode (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            InNumberOfObjectives           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InNumberOfCompleteObjectives   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerQuestObjective*    InObjective                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestObjective_C::ConfigureAsObjectiveSummary(bool InMultipleObjectivesDisplayMode, int InNumberOfObjectives, int InNumberOfCompleteObjectives, class UTigerQuestObjective* InObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ConfigureAsObjectiveSummary"));

	struct
	{
		bool                           InMultipleObjectivesDisplayMode;
		int                            InNumberOfObjectives;
		int                            InNumberOfCompleteObjectives;
		class UTigerQuestObjective*    InObjective;
	} params = {};

	params.InMultipleObjectivesDisplayMode = InMultipleObjectivesDisplayMode;
	params.InNumberOfObjectives = InNumberOfObjectives;
	params.InNumberOfCompleteObjectives = InNumberOfCompleteObjectives;
	params.InObjective = InObjective;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ConfigureAsObjectiveInfo
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuestObjective*    InObjective                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestObjective_C::ConfigureAsObjectiveInfo(class UTigerQuestObjective* InObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ConfigureAsObjectiveInfo"));

	struct
	{
		class UTigerQuestObjective*    InObjective;
	} params = {};

	params.InObjective = InObjective;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Activate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InObjectiveText                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_QuestObjective_C::Activate(const struct FText& InObjectiveText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Activate"));

	struct
	{
		struct FText                   InObjectiveText;
	} params = {};

	params.InObjectiveText = InObjectiveText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.FadeInComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestObjective_C::FadeInComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.FadeInComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_QuestObjective_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ExecuteUbergraph_TBP_UI_QuestObjective
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestObjective_C::ExecuteUbergraph_TBP_UI_QuestObjective(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ExecuteUbergraph_TBP_UI_QuestObjective"));

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
