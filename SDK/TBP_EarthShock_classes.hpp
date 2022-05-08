#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_EarthShock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_EarthShock.TBP_EarthShock_C
// 0x0064 (0x01DC - 0x0178)
class UTBP_EarthShock_C : public UTigerDisciplineEarthshock
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDecalComponent*                             Indicator;                                                // 0x0180(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              IndicatorOffset;                                          // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                AimingAkEventID;                                          // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCurveFloat*                                 LeapTimeCurve;                                            // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        IndicatorMesh;                                            // 0x0198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_Vfx_GroundSlam_Marker_C*                Indicator_Actor;                                          // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Target_Is_Wall;                                           // 0x01A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	class ATBP_VFX_GroundSlam_Impact_C*                Impact_VFX_Actor;                                         // 0x01B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    Calculated_Rotation;                                      // 0x01B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     Calculated_Position;                                      // 0x01C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Base_Position;                                            // 0x01D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_EarthShock.TBP_EarthShock_C"));
		return ptr;
	}


	void Set_Indicator_Location___Rotation(const struct FVector& Location, const struct FRotator& Rotation);
	void Set_Indicator_Visibility(bool Has_Valid_Target_Location);
	void Spawn_Impact_VFX_Actor_Check();
	void Set_Variables(bool Target_Is_Wall, const struct FRotator& Calculated_Rotation, const struct FVector& Calculated_Position, const struct FVector& Base_Position);
	struct FVector CalculateConeDirection();
	struct FVector CalculateKnockbackForce(class ATigerCharacter* InHitCharacter);
	bool EvaluateIsTargetLocationValid(bool bIsWall, const struct FHitResult& InHitSurface);
	float GetLeapTime(const struct FVector& InLeapVector);
	void CalculateDecalLocationAndRotation(const struct FVector& TargetLocation, const struct FVector& SurfaceNormal, struct FRotator* Rotation, struct FVector* DecalOffset);
	void OnLanded(const struct FVector& InLocation, const struct FVector& InSurfaceNormal, bool bInTargetIsWall);
	void OnRemoveTargetIndicator();
	void OnSpawnTargetIndicator();
	void OnTargetIndicatorUpdated(bool bInHasTargetLocation, const struct FVector& InTargetLocation, const struct FVector& InSurfaceNormal, bool bInTargetIsWall);
	void OnEnemyCharacterHit(class ATigerCharacter* InHitCharacter);
	void ExecuteUbergraph_TBP_EarthShock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
