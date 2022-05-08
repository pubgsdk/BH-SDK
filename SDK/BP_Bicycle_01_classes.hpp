#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Bicycle_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bicycle_01.BP_Bicycle_01_C
// 0x0040 (0x0268 - 0x0228)
class ABP_Bicycle_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        SM_Bicycle_01;                                            // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                BicycleVariation;                                         // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Broken_;                                                  // 0x023C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Basket;                                                   // 0x023D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Seat;                                                     // 0x023E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x023F(0x0001) MISSED OFFSET
	int                                                Color;                                                    // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	TArray<struct FCoreUObject_FColor>                 Colors;                                                   // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               HasCollision;                                             // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UBP_Bicycle_01_DataInterface_C*              BicycleDataCDO;                                           // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Bicycle_01.BP_Bicycle_01_C"));
		return ptr;
	}


	void SetCustomPrimitiveData();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Bicycle_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
