#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Sidewalk_Spline_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C
// 0x0054 (0x02A4 - 0x0250)
class ABP_Sidewalk_Spline_01_C : public ATigerSidewalkSpline
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USplineComponent*                            SplineComponentExample;                                   // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Spacing;                                                  // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	class UStaticMesh*                                 SidewalkMesh;                                             // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Width;                                                    // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Height;                                                   // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Padding;                                                  // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstance*>                   OverrideMaterials;                                        // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Use_padding_on_single_pieces;                             // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Use_point_rotation;                                       // 0x0291(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Reverse;                                                  // 0x0292(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseNoCollision;                                           // 0x0293(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	class UHierarchicalInstancedStaticMeshComponent*   StraightMeshes;                                           // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SectionLength_Internal;                                   // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C"));
		return ptr;
	}


	float GetSectionLengthBasedOnMesh(class UStaticMesh* InMesh);
	float GetReversedOffsetAmount();
	void AddSplineMeshes();
	void GetBestMeshesFromDistance(float InDistance, class UDA_SidewalkMeshPreset_C* InPreset, TArray<class UStaticMesh*>* OutMeshes, float* OutCombinedLength);
	class UDA_SidewalkMeshPreset_C* LoadPreset();
	float GetMeshLength(class UStaticMesh* InMesh);
	void SetOverrideMaterialOnAllComponents();
	void GetBestMeshFromDistance(float InDistance, class UDA_SidewalkMeshPreset_C* InPreset, class UStaticMesh** OutMesh);
	void HandleCollisionResponse(class USplineMeshComponent* InMesh);
	void SetOverrideMaterial(class UPrimitiveComponent* Target);
	void OnRebuild();
	void ExecuteUbergraph_BP_Sidewalk_Spline_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
