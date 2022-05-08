#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BulletProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BulletProjectile.TBP_BulletProjectile_C
// 0x0168 (0x0438 - 0x02D0)
class ATBP_BulletProjectile_C : public ATigerProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMaterialInstanceDynamic*                    Decal_Concrete;                                           // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     StartPosition;                                            // 0x02E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             NiagaraTrailPath;                                         // 0x02F0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FSoftObjectPath                             RemoteNiagaraTrailPath;                                   // 0x0308(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UNiagaraSystem*                              CachedTrailEffect;                                        // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     StartVelocity;                                            // 0x0328(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     LastTraceLocation;                                        // 0x0334(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                TotalTraces;                                              // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     TraceEndLocation;                                         // 0x0344(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                TraceColor;                                               // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SmokeWidth;                                               // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SmokeLifetime;                                            // 0x0364(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SmokeVisibility;                                          // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DotSize;                                                  // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SmokeCurlAmount;                                          // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<EPhysicalSurface>, struct FName>  SurfaceToAudioName;                                       // 0x0378(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              TraceLifetime;                                            // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TraceWidth;                                               // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                FlyByAkEventID;                                           // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasSmokeTrail;                                            // 0x03D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	struct FName                                       RangedWeaponToAudioSwitch;                                // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<ENUM_RangedWeaponCategories>, struct FName> WeaponTypeToAudioName;                                    // 0x03E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UClass* /*AActor*/                           BloodDecalBlueprint;                                      // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BulletProjectile.TBP_BulletProjectile_C"));
		return ptr;
	}


	void SelectCharacterSurfaceType(TEnumAsByte<EPhysicalSurface> InSurfaceType, class ATigerCharacter* Character, TEnumAsByte<EPhysicalSurface>* OutSurfaceType);
	class UNiagaraSystem* GetParticleSystem(TEnumAsByte<ENetRole> Index);
	void PlayHitAudio(TEnumAsByte<EPhysicalSurface> SurfaceType, class UPrimitiveComponent* HitComponent);
	void CreateWorldImpactParticles(class AActor** Actor, class UParticleSystem** ParticleSystem, struct FVector* ImpactPoint, struct FRotator* Rotation, class UPrimitiveComponent** Component);
	void CreateBloodParticles(TEnumAsByte<EPhysicalSurface> SurfaceType, class UParticleSystem* PS_BodyShot, class UParticleSystem* PS_HeadShot, class UParticleSystem* PS_ShieldShot, class UParticleSystem* PS_VentrueShield, class ATigerCharacter** Character, struct FVector* ImpactPoint, struct FRotator* Rotation, class UPrimitiveComponent** Component, bool* Spawn_Decal);
	void CreateBloodDecals(const struct FVector& HitLocation);
	void GetTraceHit(const struct FHitResult& InHit, bool* UsingTrace, class AActor** Actor, class UPrimitiveComponent** Component, class UPhysicalMaterial** PhysMat, struct FVector* Impact_Point, struct FVector* Normal, bool* BlockingHit);
	void ReportPlayerAction(const struct FHitResult& Hit);
	void SelectParticleSystem(TEnumAsByte<EPhysicalSurface> Surface_Type, class UParticleSystem** NewParam);
	void ValidatedTriggerEffects(class UPhysicalMaterial** PhysMaterial, struct FVector* ImpactPoint, struct FVector* Normal, class UPrimitiveComponent** PotentialSceneComponent);
	void InstantaneousSpawnParticles(TEnumAsByte<EPhysicalSurface> Surface_Type, const struct FVector& Impact_Point, const struct FRotator& Rotation, class UPrimitiveComponent* Potential_Scene_Component, bool BlockingHit);
	void InstantaneousTriggerEffects(class UPhysicalMaterial** PhysMaterial, class UPrimitiveComponent** Hit_Component, struct FVector* ImpactPoint, struct FVector* Normal, bool* BlockingHit);
	void ReceiveBeginPlay();
	void TriggerHitEffects(const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void OnReactivate();
	void TriggerInstantaneousHitEffects(const struct FHitResult& Hit);
	void TriggerValidatedHitEffects(const struct FHitResult& Hit);
	void DoTransparentTrace();
	void CreateProjectileParticleSystem(TEnumAsByte<ENetRole> InLocalNetRole);
	void Reactivate();
	void Spawn_particle();
	void SetupParticle(class UNiagaraSystem* System);
	void ExecuteUbergraph_TBP_BulletProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
