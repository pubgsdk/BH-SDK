#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ProjectionDash_TargetIndicator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C
// 0x0020 (0x0248 - 0x0228)
class ATBP_ProjectionDash_TargetIndicator_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
