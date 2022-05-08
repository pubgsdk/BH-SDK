// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ShockwaveWall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StrongBarrierTrait
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isStrong                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_ShockwaveWall_C::StrongBarrierTrait(bool* isStrong)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StrongBarrierTrait"));

	struct
	{
		bool                           isStrong;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (isStrong != nullptr)
		*isStrong = params.isStrong;
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.DetermineDamageOnEnemy
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class ATigerCharacter*         InEnemyCharacter               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ATBP_ShockwaveWall_C::DetermineDamageOnEnemy(class ATigerCharacter* InEnemyCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.DetermineDamageOnEnemy"));

	struct
	{
		class ATigerCharacter*         InEnemyCharacter;
		float                          ReturnValue;
	} params = {};

	params.InEnemyCharacter = InEnemyCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.SlowBarrierTrait
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ShockwaveWall_C::SlowBarrierTrait(class ATigerCharacter* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.SlowBarrierTrait"));

	struct
	{
		class ATigerCharacter*         Actor;
	} params = {};

	params.Actor = Actor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierImpactPlayerAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ShockwaveWall_C::PlayBarrierImpactPlayerAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierImpactPlayerAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ShockwaveWall_C::PlayBarrierAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ShockwaveWall_C::StopBarrierAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudioPlayImpactAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ShockwaveWall_C::StopBarrierAudioPlayImpactAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudioPlayImpactAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.CalculateKnockbackVector
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InHitEnemyCharacter            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector ATBP_ShockwaveWall_C::CalculateKnockbackVector(class ATigerCharacter* InHitEnemyCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.CalculateKnockbackVector"));

	struct
	{
		class ATigerCharacter*         InHitEnemyCharacter;
		struct FVector                 ReturnValue;
	} params = {};

	params.InHitEnemyCharacter = InHitEnemyCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ShockwaveWall_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnEffectBoxOverlap
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_ShockwaveWall_C::OnEffectBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnEffectBoxOverlap"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ShockwaveWall_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ShockwaveWall_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveTick"));

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


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ShockwaveWall_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnShockwaveWallDestroyed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EShockwaveWallDestroyReason    InDestroyReason                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ShockwaveWall_C::OnShockwaveWallDestroyed(EShockwaveWallDestroyReason InDestroyReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnShockwaveWallDestroyed"));

	struct
	{
		EShockwaveWallDestroyReason    InDestroyReason;
	} params = {};

	params.InDestroyReason = InDestroyReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnCharacterHit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         InCharacterHit                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ShockwaveWall_C::OnCharacterHit(class ATigerCharacter* InCharacterHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnCharacterHit"));

	struct
	{
		class ATigerCharacter*         InCharacterHit;
	} params = {};

	params.InCharacterHit = InCharacterHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ExecuteUbergraph_TBP_ShockwaveWall
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ShockwaveWall_C::ExecuteUbergraph_TBP_ShockwaveWall(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ExecuteUbergraph_TBP_ShockwaveWall"));

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
