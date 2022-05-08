// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CamarillaLootContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.GetPingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTS_PingableActorInfo   OutInfo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_CamarillaLootContainer_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.GetPingInfo"));

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


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.FadeCrateLogo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDuration                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_CamarillaLootContainer_C::FadeCrateLogo(float InDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.FadeCrateLogo"));

	struct
	{
		float                          InDuration;
	} params = {};

	params.InDuration = InDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnSpawnLoot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::OnSpawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnSpawnLoot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnAnimateOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::OnAnimateOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnAnimateOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.LidMover__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::LidMover__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.LidMover__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.LidMover__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::LidMover__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.LidMover__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.LidMover__EnableInteraction__EventFunc
// (FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::LidMover__EnableInteraction__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.LidMover__EnableInteraction__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.LidMover__SpawnLoot__EventFunc
// (FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::LidMover__SpawnLoot__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.LidMover__SpawnLoot__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_CamarillaLootContainer_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.ReceiveTick"));

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


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnPlayOpenAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::OnPlayOpenAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnPlayOpenAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnLeaveHeightenedSenseArea
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::OnLeaveHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnLeaveHeightenedSenseArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnEnterHeightenedSenseAreaInitial
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::OnEnterHeightenedSenseAreaInitial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnEnterHeightenedSenseAreaInitial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnEnterHeightenedSenseArea
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_CamarillaLootContainer_C::OnEnterHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.OnEnterHeightenedSenseArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.ExecuteUbergraph_TBP_CamarillaLootContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_CamarillaLootContainer_C::ExecuteUbergraph_TBP_CamarillaLootContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_CamarillaLootContainer.TBP_CamarillaLootContainer_C.ExecuteUbergraph_TBP_CamarillaLootContainer"));

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
