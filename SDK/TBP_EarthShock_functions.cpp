// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_EarthShock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Location & Rotation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_EarthShock_C::Set_Indicator_Location___Rotation(const struct FVector& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Location & Rotation"));

	struct
	{
		struct FVector                 Location;
		struct FRotator                Rotation;
	} params = {};

	params.Location = Location;
	params.Rotation = Rotation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Visibility
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Has_Valid_Target_Location      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_EarthShock_C::Set_Indicator_Visibility(bool Has_Valid_Target_Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Visibility"));

	struct
	{
		bool                           Has_Valid_Target_Location;
	} params = {};

	params.Has_Valid_Target_Location = Has_Valid_Target_Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.Spawn Impact VFX Actor Check
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_EarthShock_C::Spawn_Impact_VFX_Actor_Check()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.Spawn Impact VFX Actor Check"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.Set Variables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Target_Is_Wall                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FRotator                Calculated_Rotation            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 Calculated_Position            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Base_Position                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_EarthShock_C::Set_Variables(bool Target_Is_Wall, const struct FRotator& Calculated_Rotation, const struct FVector& Calculated_Position, const struct FVector& Base_Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.Set Variables"));

	struct
	{
		bool                           Target_Is_Wall;
		struct FRotator                Calculated_Rotation;
		struct FVector                 Calculated_Position;
		struct FVector                 Base_Position;
	} params = {};

	params.Target_Is_Wall = Target_Is_Wall;
	params.Calculated_Rotation = Calculated_Rotation;
	params.Calculated_Position = Calculated_Position;
	params.Base_Position = Base_Position;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.CalculateConeDirection
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_EarthShock_C::CalculateConeDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.CalculateConeDirection"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_EarthShock.TBP_EarthShock_C.CalculateKnockbackForce
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATigerCharacter*         InHitCharacter                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_EarthShock_C::CalculateKnockbackForce(class ATigerCharacter* InHitCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.CalculateKnockbackForce"));

	struct
	{
		class ATigerCharacter*         InHitCharacter;
		struct FVector                 ReturnValue;
	} params = {};

	params.InHitCharacter = InHitCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_EarthShock.TBP_EarthShock_C.EvaluateIsTargetLocationValid
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           bIsWall                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              InHitSurface                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_EarthShock_C::EvaluateIsTargetLocationValid(bool bIsWall, const struct FHitResult& InHitSurface)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.EvaluateIsTargetLocationValid"));

	struct
	{
		bool                           bIsWall;
		struct FHitResult              InHitSurface;
		bool                           ReturnValue;
	} params = {};

	params.bIsWall = bIsWall;
	params.InHitSurface = InHitSurface;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_EarthShock.TBP_EarthShock_C.GetLeapTime
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FVector                 InLeapVector                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTBP_EarthShock_C::GetLeapTime(const struct FVector& InLeapVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.GetLeapTime"));

	struct
	{
		struct FVector                 InLeapVector;
		float                          ReturnValue;
	} params = {};

	params.InLeapVector = InLeapVector;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_EarthShock.TBP_EarthShock_C.CalculateDecalLocationAndRotation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 TargetLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 SurfaceNormal                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 DecalOffset                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_EarthShock_C::CalculateDecalLocationAndRotation(const struct FVector& TargetLocation, const struct FVector& SurfaceNormal, struct FRotator* Rotation, struct FVector* DecalOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.CalculateDecalLocationAndRotation"));

	struct
	{
		struct FVector                 TargetLocation;
		struct FVector                 SurfaceNormal;
		struct FRotator                Rotation;
		struct FVector                 DecalOffset;
	} params = {};

	params.TargetLocation = TargetLocation;
	params.SurfaceNormal = SurfaceNormal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (DecalOffset != nullptr)
		*DecalOffset = params.DecalOffset;
}


// Function TBP_EarthShock.TBP_EarthShock_C.OnLanded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InLocation                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InSurfaceNormal                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInTargetIsWall                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_EarthShock_C::OnLanded(const struct FVector& InLocation, const struct FVector& InSurfaceNormal, bool bInTargetIsWall)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.OnLanded"));

	struct
	{
		struct FVector                 InLocation;
		struct FVector                 InSurfaceNormal;
		bool                           bInTargetIsWall;
	} params = {};

	params.InLocation = InLocation;
	params.InSurfaceNormal = InSurfaceNormal;
	params.bInTargetIsWall = bInTargetIsWall;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.OnRemoveTargetIndicator
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_EarthShock_C::OnRemoveTargetIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.OnRemoveTargetIndicator"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.OnSpawnTargetIndicator
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_EarthShock_C::OnSpawnTargetIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.OnSpawnTargetIndicator"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.OnTargetIndicatorUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInHasTargetLocation           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 InTargetLocation               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InSurfaceNormal                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInTargetIsWall                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_EarthShock_C::OnTargetIndicatorUpdated(bool bInHasTargetLocation, const struct FVector& InTargetLocation, const struct FVector& InSurfaceNormal, bool bInTargetIsWall)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.OnTargetIndicatorUpdated"));

	struct
	{
		bool                           bInHasTargetLocation;
		struct FVector                 InTargetLocation;
		struct FVector                 InSurfaceNormal;
		bool                           bInTargetIsWall;
	} params = {};

	params.bInHasTargetLocation = bInHasTargetLocation;
	params.InTargetLocation = InTargetLocation;
	params.InSurfaceNormal = InSurfaceNormal;
	params.bInTargetIsWall = bInTargetIsWall;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.OnEnemyCharacterHit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InHitCharacter                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_EarthShock_C::OnEnemyCharacterHit(class ATigerCharacter* InHitCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.OnEnemyCharacterHit"));

	struct
	{
		class ATigerCharacter*         InHitCharacter;
	} params = {};

	params.InHitCharacter = InHitCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_EarthShock.TBP_EarthShock_C.ExecuteUbergraph_TBP_EarthShock
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_EarthShock_C::ExecuteUbergraph_TBP_EarthShock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_EarthShock.TBP_EarthShock_C.ExecuteUbergraph_TBP_EarthShock"));

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
