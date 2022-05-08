#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ScoutingFamiliar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C
// 0x00A0 (0x0358 - 0x02B8)
class ATBP_ScoutingFamiliar_C : public ATigerFamiliarScout
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    BatProjectileUpgrade;                                     // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    BatProjectile;                                            // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ATigerCharacter*>                     RevealedCharacters;                                       // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               AKEvent_StartScanning;                                    // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    ScoutEchoLocationSphereEffect;                            // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     ForwardVector;                                            // 0x02F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AKEvent_StopScanning;                                     // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    ScoutBatEffect;                                           // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Projectile_Smoke_Trail;                                   // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ScanEffectAkEventID;                                      // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             NiagaraParticlePath;                                      // 0x0320(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UNiagaraSystem*                              CachedEffect;                                             // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           NiagaraBats;                                              // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_Discipline_Scout_WorldMarker_C*      WorldMarkerWidget;                                        // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerPlayer*                                CachedPlayer;                                             // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C"));
		return ptr;
	}


	void CreateInWorldWidget(class APawn* OwningPawn);
	void Ravaging_Bats_Trait(class AActor* DamagedActor, class AActor* DamageCauser, class ATigerPlayer* Player);
	void StartScanAudio();
	void ColorCodeEffect(class UParticleSystemComponent* ParticleComponentToColor, bool bShouldOverrideDefaultColor, const struct FLinearColor& StandardColorOverride, const struct FLinearColor& EnemyColorOverride, bool bShouldOverrideEnemyCoor);
	void SpawnEmitterColorCoded(class UParticleSystem* InParticleAssetToSpawn, const struct FTransform& InRelativeTransform, const struct FName& InAttachPointName, class USceneComponent* InComponentAttachedTo, bool bInShouldSpawnForEnemy, bool bInShouldSpawnForAlly, class UParticleSystemComponent** SpawnedParticle);
	void Deactivate_Projectile_Effects();
	void Activate_Projectile_Effects();
	void Spawn_Projectile_Trail();
	void Despawn_Projectile_Trail();
	void Try_Hide_World_Marker_Detection();
	void Try_Show_World_Marker_Detection();
	void GetWorldMarkerWidget(bool* bIsWorldMarkerClass, class UTBP_UI_Discipline_Scout_WorldMarker_C** WorldMarker);
	void Toggle_WorldMarker_Detection_State();
	void IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* Potentially_Friendly_Character, bool* Is_Friendly);
	void IsLocallyControlled(bool* Is_Locally_Controlled);
	void GetScoutingDistanceToOwnerLimit(float* MaxScoutingDistance);
	void AddRevealedChar(class ATigerCharacter* Character, float Time);
	void PlaySound(class UAkAudioEvent* Audio);
	void IsServerOrOwner(bool* Is_Owner_Or_Server);
	void ActivateScouting();
	void ActivateFeedback();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void TickRevealedCharacters();
	void OnTargetLocationChanged();
	void OnScoutStartedReturnToOwner();
	void OnArrivedAtOwner();
	void BatDestroy();
	void BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Progress_Scouting_Achievement(class ATigerPlayer* InScoutedTigerPlayer);
	void ExecuteUbergraph_TBP_ScoutingFamiliar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
