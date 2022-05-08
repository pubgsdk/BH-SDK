#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PlayerWallGrindState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C
// 0x00F8 (0x0248 - 0x0150)
class UTBP_PlayerWallGrindState_C : public UTigerTraversalWallGrindState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TMap<struct FName, class UParticleSystemComponent*> ParticleSystems;                                          // 0x0158(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TMap<struct FName, TEnumAsByte<EPhysicalSurface>>  PhysicalMaterial;                                         // 0x01A8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FName>  SurfaceToAudioName;                                       // 0x01F8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C"));
		return ptr;
	}


	void AssignPhysicalMaterial(const struct FHitResult& Hit, const struct FName& BoneName);
	void CheckForParticleSystemUpdate(const struct FName& BoneName, const struct FHitResult& HitResult, class ACharacter* Character);
	void DestroyParticleSystem(const struct FName& BoneName);
	void CreateParticleSystem(const struct FName& BoneName, const struct FHitResult& HitResult, class ACharacter* Character);
	void StartEffect(const struct FName& InAssociatedBoneName, const struct FHitResult& InHitResult, class ATigerCharacter* InTigerCharacter);
	void StopEffect(const struct FName& InAssociatedBoneName, class ATigerCharacter* InTigerCharacter);
	void UpdateEffect(const struct FName& InAssociatedBoneName, const struct FHitResult& InHitResult, class ATigerCharacter* InTigerCharacter);
	void ExecuteUbergraph_TBP_PlayerWallGrindState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
