#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BikeStand_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BikeStand_01.BP_BikeStand_01_C
// 0x0078 (0x02B8 - 0x0240)
class ABP_BikeStand_01_C : public ATigerRebuildableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        BikeStand;                                                // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                Number_of_bikes;                                          // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             LocationList;                                             // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FCoreUObject_FColor>                 Colors;                                                   // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               Basket;                                                   // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Seat;                                                     // 0x0281(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0282(0x0006) MISSED OFFSET
	TArray<struct FVector>                             ColorList;                                                // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                StaticMeshList;                                           // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               ShadowCasting;                                            // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	class UBP_Bicycle_01_DataInterface_C*              BicycleDataCDO;                                           // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BikeStand_01.BP_BikeStand_01_C"));
		return ptr;
	}


	void RandomFloatInRangeFromWorld(int InOffset, float InMin, float InMax, float* OutValue);
	void RandomIntInRangeFromWorld(int InOffset, int InMin, int InMax, int* OutValue);
	void AddBike(int InIndex);
	void OnRebuild();
	void ExecuteUbergraph_BP_BikeStand_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
