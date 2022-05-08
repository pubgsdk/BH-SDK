// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TailorLootContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.GetPingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTS_PingableActorInfo   OutInfo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TailorLootContainer_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.GetPingInfo"));

	struct
	{
		struct FTS_PingableActorInfo   OutInfo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;
}


// Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.OnSpawnLoot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TailorLootContainer_C::OnSpawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.OnSpawnLoot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.OnAnimateOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TailorLootContainer_C::OnAnimateOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.OnAnimateOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.MoveDoors__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_TailorLootContainer_C::MoveDoors__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.MoveDoors__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.MoveDoors__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_TailorLootContainer_C::MoveDoors__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.MoveDoors__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TailorLootContainer_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.EventOpenDoors
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TailorLootContainer_C::EventOpenDoors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.EventOpenDoors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.ExecuteUbergraph_TBP_TailorLootContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TailorLootContainer_C::ExecuteUbergraph_TBP_TailorLootContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TailorLootContainer.TBP_TailorLootContainer_C.ExecuteUbergraph_TBP_TailorLootContainer"));

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
