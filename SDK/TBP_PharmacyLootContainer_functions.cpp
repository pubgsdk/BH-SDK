// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PharmacyLootContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.GetPingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTS_PingableActorInfo   OutInfo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PharmacyLootContainer_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.GetPingInfo"));

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


// Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OnSpawnLoot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PharmacyLootContainer_C::OnSpawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OnSpawnLoot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OpenPoster__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_PharmacyLootContainer_C::OpenPoster__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OpenPoster__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OpenPoster__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_PharmacyLootContainer_C::OpenPoster__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OpenPoster__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OpenPoster__Spawn Loot__EventFunc
// (FUNC_BlueprintEvent)

void ATBP_PharmacyLootContainer_C::OpenPoster__Spawn_Loot__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OpenPoster__Spawn Loot__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OnAnimateOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PharmacyLootContainer_C::OnAnimateOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.OnAnimateOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PharmacyLootContainer_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.ReceiveTick"));

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


// Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.ExecuteUbergraph_TBP_PharmacyLootContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PharmacyLootContainer_C::ExecuteUbergraph_TBP_PharmacyLootContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C.ExecuteUbergraph_TBP_PharmacyLootContainer"));

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
