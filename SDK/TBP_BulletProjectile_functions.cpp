// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BulletProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.SelectCharacterSurfaceType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  InSurfaceType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EPhysicalSurface>  OutSurfaceType                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::SelectCharacterSurfaceType(TEnumAsByte<EPhysicalSurface> InSurfaceType, class ATigerCharacter* Character, TEnumAsByte<EPhysicalSurface>* OutSurfaceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.SelectCharacterSurfaceType"));

	struct
	{
		TEnumAsByte<EPhysicalSurface>  InSurfaceType;
		class ATigerCharacter*         Character;
		TEnumAsByte<EPhysicalSurface>  OutSurfaceType;
	} params = {};

	params.InSurfaceType = InSurfaceType;
	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutSurfaceType != nullptr)
		*OutSurfaceType = params.OutSurfaceType;
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.GetParticleSystem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetRole>          Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNiagaraSystem*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UNiagaraSystem* ATBP_BulletProjectile_C::GetParticleSystem(TEnumAsByte<ENetRole> Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.GetParticleSystem"));

	struct
	{
		TEnumAsByte<ENetRole>          Index;
		class UNiagaraSystem*          ReturnValue;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.PlayHitAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::PlayHitAudio(TEnumAsByte<EPhysicalSurface> SurfaceType, class UPrimitiveComponent* HitComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.PlayHitAudio"));

	struct
	{
		TEnumAsByte<EPhysicalSurface>  SurfaceType;
		class UPrimitiveComponent*     HitComponent;
	} params = {};

	params.SurfaceType = SurfaceType;
	params.HitComponent = HitComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.CreateWorldImpactParticles
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         ParticleSystem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ImpactPoint                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::CreateWorldImpactParticles(class AActor** Actor, class UParticleSystem** ParticleSystem, struct FVector* ImpactPoint, struct FRotator* Rotation, class UPrimitiveComponent** Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.CreateWorldImpactParticles"));

	struct
	{
		class AActor*                  Actor;
		class UParticleSystem*         ParticleSystem;
		struct FVector                 ImpactPoint;
		struct FRotator                Rotation;
		class UPrimitiveComponent*     Component;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (ParticleSystem != nullptr)
		*ParticleSystem = params.ParticleSystem;
	if (ImpactPoint != nullptr)
		*ImpactPoint = params.ImpactPoint;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (Component != nullptr)
		*Component = params.Component;
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.CreateBloodParticles
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ImpactPoint                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UPrimitiveComponent*     Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         PS_BodyShot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         PS_HeadShot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         PS_ShieldShot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         PS_VentrueShield               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Spawn_Decal                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_BulletProjectile_C::CreateBloodParticles(TEnumAsByte<EPhysicalSurface> SurfaceType, class UParticleSystem* PS_BodyShot, class UParticleSystem* PS_HeadShot, class UParticleSystem* PS_ShieldShot, class UParticleSystem* PS_VentrueShield, class ATigerCharacter** Character, struct FVector* ImpactPoint, struct FRotator* Rotation, class UPrimitiveComponent** Component, bool* Spawn_Decal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.CreateBloodParticles"));

	struct
	{
		class ATigerCharacter*         Character;
		TEnumAsByte<EPhysicalSurface>  SurfaceType;
		struct FVector                 ImpactPoint;
		struct FRotator                Rotation;
		class UPrimitiveComponent*     Component;
		class UParticleSystem*         PS_BodyShot;
		class UParticleSystem*         PS_HeadShot;
		class UParticleSystem*         PS_ShieldShot;
		class UParticleSystem*         PS_VentrueShield;
		bool                           Spawn_Decal;
	} params = {};

	params.SurfaceType = SurfaceType;
	params.PS_BodyShot = PS_BodyShot;
	params.PS_HeadShot = PS_HeadShot;
	params.PS_ShieldShot = PS_ShieldShot;
	params.PS_VentrueShield = PS_VentrueShield;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Character != nullptr)
		*Character = params.Character;
	if (ImpactPoint != nullptr)
		*ImpactPoint = params.ImpactPoint;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (Component != nullptr)
		*Component = params.Component;
	if (Spawn_Decal != nullptr)
		*Spawn_Decal = params.Spawn_Decal;
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.CreateBloodDecals
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::CreateBloodDecals(const struct FVector& HitLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.CreateBloodDecals"));

	struct
	{
		struct FVector                 HitLocation;
	} params = {};

	params.HitLocation = HitLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.GetTraceHit
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              InHit                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           UsingTrace                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Component                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPhysicalMaterial*       PhysMat                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Impact_Point                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Normal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           BlockingHit                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_BulletProjectile_C::GetTraceHit(const struct FHitResult& InHit, bool* UsingTrace, class AActor** Actor, class UPrimitiveComponent** Component, class UPhysicalMaterial** PhysMat, struct FVector* Impact_Point, struct FVector* Normal, bool* BlockingHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.GetTraceHit"));

	struct
	{
		struct FHitResult              InHit;
		bool                           UsingTrace;
		class AActor*                  Actor;
		class UPrimitiveComponent*     Component;
		class UPhysicalMaterial*       PhysMat;
		struct FVector                 Impact_Point;
		struct FVector                 Normal;
		bool                           BlockingHit;
	} params = {};

	params.InHit = InHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UsingTrace != nullptr)
		*UsingTrace = params.UsingTrace;
	if (Actor != nullptr)
		*Actor = params.Actor;
	if (Component != nullptr)
		*Component = params.Component;
	if (PhysMat != nullptr)
		*PhysMat = params.PhysMat;
	if (Impact_Point != nullptr)
		*Impact_Point = params.Impact_Point;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (BlockingHit != nullptr)
		*BlockingHit = params.BlockingHit;
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReportPlayerAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_BulletProjectile_C::ReportPlayerAction(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReportPlayerAction"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.SelectParticleSystem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  Surface_Type                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystem*         NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::SelectParticleSystem(TEnumAsByte<EPhysicalSurface> Surface_Type, class UParticleSystem** NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.SelectParticleSystem"));

	struct
	{
		TEnumAsByte<EPhysicalSurface>  Surface_Type;
		class UParticleSystem*         NewParam;
	} params = {};

	params.Surface_Type = Surface_Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.ValidatedTriggerEffects
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       PhysMaterial                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ImpactPoint                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Normal                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     PotentialSceneComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::ValidatedTriggerEffects(class UPhysicalMaterial** PhysMaterial, struct FVector* ImpactPoint, struct FVector* Normal, class UPrimitiveComponent** PotentialSceneComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.ValidatedTriggerEffects"));

	struct
	{
		class UPhysicalMaterial*       PhysMaterial;
		struct FVector                 ImpactPoint;
		struct FVector                 Normal;
		class UPrimitiveComponent*     PotentialSceneComponent;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PhysMaterial != nullptr)
		*PhysMaterial = params.PhysMaterial;
	if (ImpactPoint != nullptr)
		*ImpactPoint = params.ImpactPoint;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (PotentialSceneComponent != nullptr)
		*PotentialSceneComponent = params.PotentialSceneComponent;
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.InstantaneousSpawnParticles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  Surface_Type                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Impact_Point                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UPrimitiveComponent*     Potential_Scene_Component      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           BlockingHit                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_BulletProjectile_C::InstantaneousSpawnParticles(TEnumAsByte<EPhysicalSurface> Surface_Type, const struct FVector& Impact_Point, const struct FRotator& Rotation, class UPrimitiveComponent* Potential_Scene_Component, bool BlockingHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.InstantaneousSpawnParticles"));

	struct
	{
		TEnumAsByte<EPhysicalSurface>  Surface_Type;
		struct FVector                 Impact_Point;
		struct FRotator                Rotation;
		class UPrimitiveComponent*     Potential_Scene_Component;
		bool                           BlockingHit;
	} params = {};

	params.Surface_Type = Surface_Type;
	params.Impact_Point = Impact_Point;
	params.Rotation = Rotation;
	params.Potential_Scene_Component = Potential_Scene_Component;
	params.BlockingHit = BlockingHit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.InstantaneousTriggerEffects
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       PhysMaterial                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     Hit_Component                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ImpactPoint                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Normal                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           BlockingHit                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_BulletProjectile_C::InstantaneousTriggerEffects(class UPhysicalMaterial** PhysMaterial, class UPrimitiveComponent** Hit_Component, struct FVector* ImpactPoint, struct FVector* Normal, bool* BlockingHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.InstantaneousTriggerEffects"));

	struct
	{
		class UPhysicalMaterial*       PhysMaterial;
		class UPrimitiveComponent*     Hit_Component;
		struct FVector                 ImpactPoint;
		struct FVector                 Normal;
		bool                           BlockingHit;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PhysMaterial != nullptr)
		*PhysMaterial = params.PhysMaterial;
	if (Hit_Component != nullptr)
		*Hit_Component = params.Hit_Component;
	if (ImpactPoint != nullptr)
		*ImpactPoint = params.ImpactPoint;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (BlockingHit != nullptr)
		*BlockingHit = params.BlockingHit;
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_BulletProjectile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerHitEffects
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_BulletProjectile_C::TriggerHitEffects(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerHitEffects"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveTick"));

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


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.OnReactivate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_BulletProjectile_C::OnReactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.OnReactivate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerInstantaneousHitEffects
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_BulletProjectile_C::TriggerInstantaneousHitEffects(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerInstantaneousHitEffects"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerValidatedHitEffects
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_BulletProjectile_C::TriggerValidatedHitEffects(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerValidatedHitEffects"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.DoTransparentTrace
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BulletProjectile_C::DoTransparentTrace()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.DoTransparentTrace"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.CreateProjectileParticleSystem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetRole>          InLocalNetRole                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::CreateProjectileParticleSystem(TEnumAsByte<ENetRole> InLocalNetRole)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.CreateProjectileParticleSystem"));

	struct
	{
		TEnumAsByte<ENetRole>          InLocalNetRole;
	} params = {};

	params.InLocalNetRole = InLocalNetRole;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.Reactivate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BulletProjectile_C::Reactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.Reactivate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.Spawn particle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BulletProjectile_C::Spawn_particle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.Spawn particle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.SetupParticle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UNiagaraSystem*          System                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::SetupParticle(class UNiagaraSystem* System)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.SetupParticle"));

	struct
	{
		class UNiagaraSystem*          System;
	} params = {};

	params.System = System;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BulletProjectile.TBP_BulletProjectile_C.ExecuteUbergraph_TBP_BulletProjectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BulletProjectile_C::ExecuteUbergraph_TBP_BulletProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BulletProjectile.TBP_BulletProjectile_C.ExecuteUbergraph_TBP_BulletProjectile"));

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
