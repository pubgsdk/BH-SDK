// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Map_ActiveQuests_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.UpdateCompletedQuest
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InQuestId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Map_ActiveQuests_C::UpdateCompletedQuest(const struct FString& InQuestId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.UpdateCompletedQuest"));

	struct
	{
		struct FString                 InQuestId;
	} params = {};

	params.InQuestId = InQuestId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.RefershQuestList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Map_ActiveQuests_C::RefershQuestList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.RefershQuestList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.ShouldUpdateQuestList
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UpdateState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Map_ActiveQuests_C::ShouldUpdateQuestList(bool* UpdateState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.ShouldUpdateQuestList"));

	struct
	{
		bool                           UpdateState;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UpdateState != nullptr)
		*UpdateState = params.UpdateState;
}


// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.ClearQuestList
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Map_ActiveQuests_C::ClearQuestList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.ClearQuestList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.AddQuestToList
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   QuestTItle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   QuestObjective                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 InQuestId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Map_ActiveQuests_C::AddQuestToList(const struct FText& QuestTItle, const struct FText& QuestObjective, const struct FString& InQuestId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.AddQuestToList"));

	struct
	{
		struct FText                   QuestTItle;
		struct FText                   QuestObjective;
		struct FString                 InQuestId;
	} params = {};

	params.QuestTItle = QuestTItle;
	params.QuestObjective = QuestObjective;
	params.InQuestId = InQuestId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.UpdateQuestList
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Map_ActiveQuests_C::UpdateQuestList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.UpdateQuestList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Map_ActiveQuests_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.PreConstruct"));

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


// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Map_ActiveQuests_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.ExecuteUbergraph_TBP_UI_Map_ActiveQuests
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Map_ActiveQuests_C::ExecuteUbergraph_TBP_UI_Map_ActiveQuests(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C.ExecuteUbergraph_TBP_UI_Map_ActiveQuests"));

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
