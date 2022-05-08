#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ConcreteTrashcan_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C
// 0x0030 (0x0270 - 0x0240)
class ABP_ConcreteTrashcan_01_C : public ATigerRebuildableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        SM_ConcreteTrashCan_01;                                   // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Stickers;                                                 // 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Graffiti;                                                 // 0x0251(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Full_of_Trash;                                            // 0x0252(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0253(0x0001) MISSED OFFSET
	int                                                WorldRandomInt;                                           // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FCoreUObject_FColor>                 Color;                                                    // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UBP_TrashcansDataInterface_C*                ConcreteTashCan01CDO;                                     // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ConcreteTrashcan_01.BP_ConcreteTrashcan_01_C"));
		return ptr;
	}


	void AddGraffitiMeshAndMaterial(int InMeshIndex, int InMaterialSeed, int InColorSeed);
	void GetRandomBoolFromSeed(int InSeed, bool* OutBool);
	void OnRebuild();
	void ExecuteUbergraph_BP_ConcreteTrashcan_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
