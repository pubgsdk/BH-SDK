#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialBlockingWalls_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TutorialBlockingWalls.TutorialBlockingWalls_C
// 0x0044 (0x026C - 0x0228)
class ATutorialBlockingWalls_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USplineComponent*                            Spline;                                                   // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Debug;                                                    // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	TArray<class USplineMeshComponent*>                MeshList;                                                 // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               ClosedLoop;                                               // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0259(0x0003) MISSED OFFSET
	float                                              Wall_Height;                                              // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Permament;                                                // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	int                                                GenerateCounter;                                          // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PointDensisty;                                            // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TutorialBlockingWalls.TutorialBlockingWalls_C"));
		return ptr;
	}


	void BuildWall();
	void GeneratePoints();
	void ActivateWalls();
	void DeactivateWalls();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TutorialBlockingWalls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
