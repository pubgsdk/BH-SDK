// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MeleeCombatLogic_RootMotion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.DecideConeOrigin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ShouldUseCameraAsOrigin        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 InCameraForward                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutConeOrigin                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MeleeCombatLogic_RootMotion_C::DecideConeOrigin(bool ShouldUseCameraAsOrigin, const struct FVector& InCameraForward, struct FVector* OutConeOrigin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.DecideConeOrigin"));

	struct
	{
		bool                           ShouldUseCameraAsOrigin;
		struct FVector                 InCameraForward;
		struct FVector                 OutConeOrigin;
	} params = {};

	params.ShouldUseCameraAsOrigin = ShouldUseCameraAsOrigin;
	params.InCameraForward = InCameraForward;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutConeOrigin != nullptr)
		*OutConeOrigin = params.OutConeOrigin;
}


// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistAngleToTargetNormalized
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMeleeAimAssistCandidate InCandidate                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerMeleeAimAssistData InAimAssistData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// float                          OutNormalizedAngle             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MeleeCombatLogic_RootMotion_C::AimAssistAngleToTargetNormalized(struct FTigerMeleeAimAssistCandidate* InCandidate, struct FTigerMeleeAimAssistData* InAimAssistData, float* OutNormalizedAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistAngleToTargetNormalized"));

	struct
	{
		struct FTigerMeleeAimAssistCandidate InCandidate;
		struct FTigerMeleeAimAssistData InAimAssistData;
		float                          OutNormalizedAngle;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InCandidate != nullptr)
		*InCandidate = params.InCandidate;
	if (InAimAssistData != nullptr)
		*InAimAssistData = params.InAimAssistData;
	if (OutNormalizedAngle != nullptr)
		*OutNormalizedAngle = params.OutNormalizedAngle;
}


// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistDistanceToTargetNormalized
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMeleeAimAssistCandidate InCandidate                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerMeleeAimAssistData InAimAssistData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// float                          OutNormalizedDistance          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MeleeCombatLogic_RootMotion_C::AimAssistDistanceToTargetNormalized(struct FTigerMeleeAimAssistCandidate* InCandidate, struct FTigerMeleeAimAssistData* InAimAssistData, float* OutNormalizedDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistDistanceToTargetNormalized"));

	struct
	{
		struct FTigerMeleeAimAssistCandidate InCandidate;
		struct FTigerMeleeAimAssistData InAimAssistData;
		float                          OutNormalizedDistance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InCandidate != nullptr)
		*InCandidate = params.InCandidate;
	if (InAimAssistData != nullptr)
		*InAimAssistData = params.InAimAssistData;
	if (OutNormalizedDistance != nullptr)
		*OutNormalizedDistance = params.OutNormalizedDistance;
}


// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.CandidateScoreMask_Cone
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMeleeAimAssistData InAimAssistData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerMeleeAimAssistCandidate InCandidate                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FVector                 InConeOrigin                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 InConeDirection                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutScoreMask                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TargetAngleFromCone            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MeleeCombatLogic_RootMotion_C::CandidateScoreMask_Cone(struct FTigerMeleeAimAssistData* InAimAssistData, struct FTigerMeleeAimAssistCandidate* InCandidate, struct FVector* InConeOrigin, struct FVector* InConeDirection, float* OutScoreMask, float* TargetAngleFromCone)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.CandidateScoreMask_Cone"));

	struct
	{
		struct FTigerMeleeAimAssistData InAimAssistData;
		struct FTigerMeleeAimAssistCandidate InCandidate;
		struct FVector                 InConeOrigin;
		struct FVector                 InConeDirection;
		float                          OutScoreMask;
		float                          TargetAngleFromCone;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InAimAssistData != nullptr)
		*InAimAssistData = params.InAimAssistData;
	if (InCandidate != nullptr)
		*InCandidate = params.InCandidate;
	if (InConeOrigin != nullptr)
		*InConeOrigin = params.InConeOrigin;
	if (InConeDirection != nullptr)
		*InConeDirection = params.InConeDirection;
	if (OutScoreMask != nullptr)
		*OutScoreMask = params.OutScoreMask;
	if (TargetAngleFromCone != nullptr)
		*TargetAngleFromCone = params.TargetAngleFromCone;
}


// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.ShouldRotatePlayer
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_MeleeCombatLogic_RootMotion_C::ShouldRotatePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.ShouldRotatePlayer"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.Debug Draw Arc
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Length                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MeleeCombatLogic_RootMotion_C::Debug_Draw_Arc(const struct FVector& StartPos, const struct FVector& Direction, float Angle, float Length, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.Debug Draw Arc"));

	struct
	{
		struct FVector                 StartPos;
		struct FVector                 Direction;
		float                          Angle;
		float                          Length;
		struct FLinearColor            Color;
	} params = {};

	params.StartPos = StartPos;
	params.Direction = Direction;
	params.Angle = Angle;
	params.Length = Length;
	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.UpdateAimTarget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerMeleeAimAssistCandidate> InCandidates                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector                 InCameraForward                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsInAir                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bInIsQuickAttack               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerMeleeWeaponAttackIdentifier InPreviousAttackIdentifier     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// float                          InSecondsSincePreviousAttack   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         OutFinalTarget                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerMeleeWeaponAttackIdentifier OutAttackIdentifier            (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UTBP_MeleeCombatLogic_RootMotion_C::UpdateAimTarget(const struct FVector& InCameraForward, bool bInIsInAir, bool bInIsQuickAttack, const struct FTigerMeleeWeaponAttackIdentifier& InPreviousAttackIdentifier, float InSecondsSincePreviousAttack, TArray<struct FTigerMeleeAimAssistCandidate>* InCandidates, class ATigerCharacter** OutFinalTarget, struct FTigerMeleeWeaponAttackIdentifier* OutAttackIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.UpdateAimTarget"));

	struct
	{
		TArray<struct FTigerMeleeAimAssistCandidate> InCandidates;
		struct FVector                 InCameraForward;
		bool                           bInIsInAir;
		bool                           bInIsQuickAttack;
		struct FTigerMeleeWeaponAttackIdentifier InPreviousAttackIdentifier;
		float                          InSecondsSincePreviousAttack;
		class ATigerCharacter*         OutFinalTarget;
		struct FTigerMeleeWeaponAttackIdentifier OutAttackIdentifier;
	} params = {};

	params.InCameraForward = InCameraForward;
	params.bInIsInAir = bInIsInAir;
	params.bInIsQuickAttack = bInIsQuickAttack;
	params.InPreviousAttackIdentifier = InPreviousAttackIdentifier;
	params.InSecondsSincePreviousAttack = InSecondsSincePreviousAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InCandidates != nullptr)
		*InCandidates = params.InCandidates;
	if (OutFinalTarget != nullptr)
		*OutFinalTarget = params.OutFinalTarget;
	if (OutAttackIdentifier != nullptr)
		*OutAttackIdentifier = params.OutAttackIdentifier;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
