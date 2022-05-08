#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_SpreadPatternHelpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_SpreadPatternHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C"));
		return ptr;
	}


	static void GetPositionInGrid(int Index, int Width, int Height, class UObject* __WorldContext, int* X, int* Y);
	static void AddNoise(const struct FVector& InDirection, float MagnitudeInDegrees, class UObject* __WorldContext, struct FTigerRangedRandomState* RandomState, struct FVector* OutDirection);
	static void GetSpreadRange(bool ShouldBeInsideSpreadRadius, class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, float* NegativeSpreadInDegrees, float* PositiveSpreadInDegrees);
	static void GetBulletsPerFire(class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, int* BulletCount);
	static void GetBulletProgressInSectionFloat(float SectionStart, float SectionEnd, float BulletProgress, class UObject* __WorldContext, bool* IsInSection, float* ProgressInSection);
	static void RotateDirectionLeft(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection);
	static void RotateDirectionRight(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection);
	static void RotateDirectionDown(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection);
	static void RotateDirectionUp(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection);
	static void GetBulletProgressInSection(int BulletSectionStart, int BulletSectionEnd, int BulletIndex, class UObject* __WorldContext, bool* IsInSection, float* Progress);
	static void GetBulletProgress(int BulletIndex, class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, float* BulletProgress);
	static void DirectionAlongLine(float BeginYaw, float EndYaw, float BeginPitch, float EndPitch, float Progress, const struct FVector& AimDirection, class UObject* __WorldContext, struct FVector* Direction);
	static void DirectionInCircle(const struct FVector& AimDirection, float ProgressionZeroToOne, float RadiusDegrees, float RotationOffset, class UObject* __WorldContext, struct FVector* Point);
	static void DirectionInArc(float MinRotationDegrees, float MaxRotationDegrees, float ProgressZeroToOne, const struct FVector& AimDirection, float RadiusDegrees, class UObject* __WorldContext, struct FVector* Point);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
