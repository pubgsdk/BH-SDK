#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Entity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Entity.TBP_Entity_C
// 0x0044 (0x0B60 - 0x0B1C)
class ATBP_Entity_C : public ATBP_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B1C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B20(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            ProjectileDetectionSphere;                                // 0x0B28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    LaserPointerFakeGlow;                                     // 0x0B30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        LaserPointer;                                             // 0x0B38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        MuzzleLight;                                              // 0x0B40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             ProjectileSpawnLocator;                                   // 0x0B48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             MuzzleLocator;                                            // 0x0B50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Weapon;                                                   // 0x0B58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Entity.TBP_Entity_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnWeaponFired(bool bSecondaryWeaponFired);
	void ExecuteUbergraph_TBP_Entity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
