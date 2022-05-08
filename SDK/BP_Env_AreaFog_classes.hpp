#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Env_AreaFog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Env_AreaFog.BP_Env_AreaFog_C
// 0x0030 (0x0258 - 0x0228)
class ABP_Env_AreaFog_C : public AActor
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                    // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Alpha;                                                    // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpawnHight;                                               // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpawnArea;                                                // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Particle_Size;                                            // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Env_AreaFog.BP_Env_AreaFog_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
