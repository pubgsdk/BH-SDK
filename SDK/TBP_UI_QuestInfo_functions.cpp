// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_QuestInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.SetQuest
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuest*             InNewQuest                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestInfo_C::SetQuest(class UTigerQuest* InNewQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.SetQuest"));

	struct
	{
		class UTigerQuest*             InNewQuest;
	} params = {};

	params.InNewQuest = InNewQuest;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestInfo_C::BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.BndEvt__TBP_UI_QuestInfo_ContentScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature"));

	struct
	{
		float                          CurrentOffset;
	} params = {};

	params.CurrentOffset = CurrentOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.Tick"));

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


// Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.ExecuteUbergraph_TBP_UI_QuestInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestInfo_C::ExecuteUbergraph_TBP_UI_QuestInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestInfo.TBP_UI_QuestInfo_C.ExecuteUbergraph_TBP_UI_QuestInfo"));

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
