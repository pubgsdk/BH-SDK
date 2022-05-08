#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PharmacySign_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PharmacySign_01.BP_PharmacySign_01_C
// 0x0020 (0x0248 - 0x0228)
class ABP_PharmacySign_01_C : public AActor
{
public:
	class URectLightComponent*                         RectLight1;                                               // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class URectLightComponent*                         RectLight;                                                // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_PharmacySign_01;                                       // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PharmacySign_01.BP_PharmacySign_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
