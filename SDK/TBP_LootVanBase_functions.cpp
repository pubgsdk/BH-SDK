// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LootVanBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTS_PingableActorInfo   OutInfo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootVanBase_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingInfo"));

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


// Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   OutCategory                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootVanBase_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingCategory"));

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


// Function TBP_LootVanBase.TBP_LootVanBase_C.OnAnimateOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_LootVanBase_C::OnAnimateOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.OnAnimateOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_LootVanBase_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_LootVanBase_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__PushPlayers__EventFunc
// (FUNC_BlueprintEvent)

void ATBP_LootVanBase_C::Timeline_0__PushPlayers__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__PushPlayers__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.StaticMeshComponentHit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootVanBase_C::StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.StaticMeshComponentHit"));

	struct
	{
		struct FHitResult              HitResult;
		struct FVector                 ImpactVelocity;
	} params = {};

	params.HitResult = HitResult;
	params.ImpactVelocity = ImpactVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.OnOpenTrunk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_LootVanBase_C::OnOpenTrunk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.OnOpenTrunk"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootVanBase_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.ReceiveTick"));

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


// Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootVanBase_C::BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootVanBase_C::BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.CheckDoorOverlaps
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_LootVanBase_C::CheckDoorOverlaps()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.CheckDoorOverlaps"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.EnableDoorBlock
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    DoorComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootVanBase_C::EnableDoorBlock(class UStaticMeshComponent* DoorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.EnableDoorBlock"));

	struct
	{
		class UStaticMeshComponent*    DoorComponent;
	} params = {};

	params.DoorComponent = DoorComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.TriggerAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_LootVanBase_C::TriggerAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.TriggerAlarm"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_LootVanBase.TBP_LootVanBase_C.ExecuteUbergraph_TBP_LootVanBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_LootVanBase_C::ExecuteUbergraph_TBP_LootVanBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LootVanBase.TBP_LootVanBase_C.ExecuteUbergraph_TBP_LootVanBase"));

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
