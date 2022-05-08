// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Quest_Objective_Notification_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Quest_Objective_Notification_Item.TBP_UI_Quest_Objective_Notification_Item_C.SetupDataFromQuestObjective
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsCompleting                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTigerQuestObjective*    TigerQuestObjective            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Quest_Objective_Notification_Item_C::SetupDataFromQuestObjective(bool InIsCompleting, class UTigerQuestObjective* TigerQuestObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Quest_Objective_Notification_Item.TBP_UI_Quest_Objective_Notification_Item_C.SetupDataFromQuestObjective"));

	struct
	{
		bool                           InIsCompleting;
		class UTigerQuestObjective*    TigerQuestObjective;
	} params = {};

	params.InIsCompleting = InIsCompleting;
	params.TigerQuestObjective = TigerQuestObjective;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Quest_Objective_Notification_Item.TBP_UI_Quest_Objective_Notification_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Quest_Objective_Notification_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Quest_Objective_Notification_Item.TBP_UI_Quest_Objective_Notification_Item_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Quest_Objective_Notification_Item.TBP_UI_Quest_Objective_Notification_Item_C.ExecuteUbergraph_TBP_UI_Quest_Objective_Notification_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Quest_Objective_Notification_Item_C::ExecuteUbergraph_TBP_UI_Quest_Objective_Notification_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Quest_Objective_Notification_Item.TBP_UI_Quest_Objective_Notification_Item_C.ExecuteUbergraph_TBP_UI_Quest_Objective_Notification_Item"));

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
