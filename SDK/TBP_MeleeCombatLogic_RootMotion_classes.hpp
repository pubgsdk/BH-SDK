#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MeleeCombatLogic_RootMotion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C
// 0x0000 (0x0078 - 0x0078)
class UTBP_MeleeCombatLogic_RootMotion_C : public UTigerMeleeAimAssistBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C"));
		return ptr;
	}


	void DecideConeOrigin(bool ShouldUseCameraAsOrigin, const struct FVector& InCameraForward, struct FVector* OutConeOrigin);
	void AimAssistAngleToTargetNormalized(struct FTigerMeleeAimAssistCandidate* InCandidate, struct FTigerMeleeAimAssistData* InAimAssistData, float* OutNormalizedAngle);
	void AimAssistDistanceToTargetNormalized(struct FTigerMeleeAimAssistCandidate* InCandidate, struct FTigerMeleeAimAssistData* InAimAssistData, float* OutNormalizedDistance);
	void CandidateScoreMask_Cone(struct FTigerMeleeAimAssistData* InAimAssistData, struct FTigerMeleeAimAssistCandidate* InCandidate, struct FVector* InConeOrigin, struct FVector* InConeDirection, float* OutScoreMask, float* TargetAngleFromCone);
	bool ShouldRotatePlayer();
	void Debug_Draw_Arc(const struct FVector& StartPos, const struct FVector& Direction, float Angle, float Length, const struct FLinearColor& Color);
	void UpdateAimTarget(const struct FVector& InCameraForward, bool bInIsInAir, bool bInIsQuickAttack, const struct FTigerMeleeWeaponAttackIdentifier& InPreviousAttackIdentifier, float InSecondsSincePreviousAttack, TArray<struct FTigerMeleeAimAssistCandidate>* InCandidates, class ATigerCharacter** OutFinalTarget, struct FTigerMeleeWeaponAttackIdentifier* OutAttackIdentifier);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
