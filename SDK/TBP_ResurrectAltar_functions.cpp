// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ResurrectAltar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.GetPingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTS_PingableActorInfo   OutInfo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ResurrectAltar_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.GetPingInfo"));

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


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.GetPingCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   OutCategory                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ResurrectAltar_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.GetPingCategory"));

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


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.SpawnResurrectGlowEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::SpawnResurrectGlowEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.SpawnResurrectGlowEnd"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.FXOnResurrectInteractionFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::FXOnResurrectInteractionFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.FXOnResurrectInteractionFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.FXOnResurrect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ResurrectAltar_C::FXOnResurrect(const struct FVector& A)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.FXOnResurrect"));

	struct
	{
		struct FVector                 A;
	} params = {};

	params.A = A;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.GetRespawnLocationOffset
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         InSceneComponent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InCurrenctResurrectIndex       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InResurrectCount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ATBP_ResurrectAltar_C::GetRespawnLocationOffset(class USceneComponent* InSceneComponent, int InCurrenctResurrectIndex, int InResurrectCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.GetRespawnLocationOffset"));

	struct
	{
		class USceneComponent*         InSceneComponent;
		int                            InCurrenctResurrectIndex;
		int                            InResurrectCount;
		struct FVector                 ReturnValue;
	} params = {};

	params.InSceneComponent = InSceneComponent;
	params.InCurrenctResurrectIndex = InCurrenctResurrectIndex;
	params.InResurrectCount = InResurrectCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.GetRespawnRotationOffset
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         InSceneComponent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InCurrenctResurrectIndex       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InResurrectCount               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

struct FRotator ATBP_ResurrectAltar_C::GetRespawnRotationOffset(class USceneComponent* InSceneComponent, int InCurrenctResurrectIndex, int InResurrectCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.GetRespawnRotationOffset"));

	struct
	{
		class USceneComponent*         InSceneComponent;
		int                            InCurrenctResurrectIndex;
		int                            InResurrectCount;
		struct FRotator                ReturnValue;
	} params = {};

	params.InSceneComponent = InSceneComponent;
	params.InCurrenctResurrectIndex = InCurrenctResurrectIndex;
	params.InResurrectCount = InResurrectCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.StationDisapearCurve__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::StationDisapearCurve__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.StationDisapearCurve__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.StationDisapearCurve__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::StationDisapearCurve__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.StationDisapearCurve__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnInteract
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EInteractiveObjectState        ActivatedTrigger               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ResurrectAltar_C::OnInteract(EInteractiveObjectState ActivatedTrigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnInteract"));

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


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ResurrectAltar_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.ReceiveTick"));

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


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnEnterHeightenedSenseArea
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::OnEnterHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnEnterHeightenedSenseArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnLeaveHeightenedSenseArea
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::OnLeaveHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnLeaveHeightenedSenseArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnEnterHeightenedSenseAreaInitial
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::OnEnterHeightenedSenseAreaInitial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnEnterHeightenedSenseAreaInitial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.ToggleUIVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.ToggleUIVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnResurrect
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         InUsedSceneComponent           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InResurrectLocation            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                InResurrectRotation            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_ResurrectAltar_C::OnResurrect(class USceneComponent* InUsedSceneComponent, const struct FVector& InResurrectLocation, const struct FRotator& InResurrectRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnResurrect"));

	struct
	{
		class USceneComponent*         InUsedSceneComponent;
		struct FVector                 InResurrectLocation;
		struct FRotator                InResurrectRotation;
	} params = {};

	params.InUsedSceneComponent = InUsedSceneComponent;
	params.InResurrectLocation = InResurrectLocation;
	params.InResurrectRotation = InResurrectRotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnAltarDeactivatedAfterUse
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::OnAltarDeactivatedAfterUse()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnAltarDeactivatedAfterUse"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnAltarDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::OnAltarDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnAltarDeactivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnResurrectInteractionFinished
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ResurrectAltar_C::OnResurrectInteractionFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.OnResurrectInteractionFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.ExecuteUbergraph_TBP_ResurrectAltar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ResurrectAltar_C::ExecuteUbergraph_TBP_ResurrectAltar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ResurrectAltar.TBP_ResurrectAltar_C.ExecuteUbergraph_TBP_ResurrectAltar"));

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
