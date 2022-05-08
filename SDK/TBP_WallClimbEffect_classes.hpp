#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_WallClimbEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_WallClimbEffect.TBP_WallClimbEffect_C
// 0x0008 (0x0030 - 0x0028)
class UTBP_WallClimbEffect_C : public UTigerCharacterEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_WallClimbEffect.TBP_WallClimbEffect_C"));
		return ptr;
	}


	void HandleVFX(class UObject* WorldContextObject, class UParticleSystem* ParticleSystem, class UMaterialInterface* Decal, const struct FVector& VFXLocation, const struct FRotator& ParticleRotation, const struct FRotator& DecalRotation);
	void ApplyWithSocket(class ATigerCharacter* Character, const struct FName& SocketName);
	void ExecuteUbergraph_TBP_WallClimbEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
