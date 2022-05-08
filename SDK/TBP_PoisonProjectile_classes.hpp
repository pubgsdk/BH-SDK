#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PoisonProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PoisonProjectile.TBP_PoisonProjectile_C
// 0x0008 (0x0440 - 0x0438)
class ATBP_PoisonProjectile_C : public ATBP_BulletProjectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PoisonProjectile.TBP_PoisonProjectile_C"));
		return ptr;
	}


	void SpawnVFX(const struct FVector& Location, const struct FRotator& Rotation);
	void InstantaneousSpawnParticles(TEnumAsByte<EPhysicalSurface> Surface_Type, const struct FVector& Impact_Point, const struct FRotator& Rotation, class UPrimitiveComponent* Potential_Scene_Component, bool BlockingHit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_PoisonProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
