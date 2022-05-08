// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_InteractableSlidingDoor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.GetPingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTS_PingableActorInfo   OutInfo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_InteractableSlidingDoor_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.GetPingInfo"));

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


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.GetPingCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   OutCategory                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_InteractableSlidingDoor_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.GetPingCategory"));

	struct
	{
		struct FName                   OutCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutCategory != nullptr)
		*OutCategory = params.OutCategory;
}


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_InteractableSlidingDoor_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.DoorDriver__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_InteractableSlidingDoor_C::DoorDriver__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.DoorDriver__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.DoorDriver__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_InteractableSlidingDoor_C::DoorDriver__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.DoorDriver__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.OnInteract
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EInteractiveObjectState        ActivatedTrigger               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_InteractableSlidingDoor_C::OnInteract(EInteractiveObjectState ActivatedTrigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.OnInteract"));

	struct
	{
		EInteractiveObjectState        ActivatedTrigger;
	} params = {};

	params.ActivatedTrigger = ActivatedTrigger;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_InteractableSlidingDoor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_InteractableSlidingDoor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.ReceiveTick"));

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


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.OnJumpToFinalState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_InteractableSlidingDoor_C::OnJumpToFinalState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.OnJumpToFinalState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.ExecuteUbergraph_TBP_InteractableSlidingDoor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_InteractableSlidingDoor_C::ExecuteUbergraph_TBP_InteractableSlidingDoor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.ExecuteUbergraph_TBP_InteractableSlidingDoor"));

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


// Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.EventOnDoorOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_InteractableSlidingDoor_C::EventOnDoorOpened__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_InteractableSlidingDoor.TBP_InteractableSlidingDoor_C.EventOnDoorOpened__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
