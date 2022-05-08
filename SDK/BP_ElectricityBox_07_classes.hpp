#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ElectricityBox_07_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ElectricityBox_07.BP_ElectricityBox_07_C
// 0x002C (0x0278 - 0x024C)
class ABP_ElectricityBox_07_C : public ABP_GraffitiParent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        SM_ElectricityBox_01;                                     // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               off;                                                      // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               off02;                                                    // 0x0261(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0262(0x0006) MISSED OFFSET
	class UStaticMeshComponent*                        CreatedStaticMesh1;                                       // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        CreatedStaticMesh2;                                       // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ElectricityBox_07.BP_ElectricityBox_07_C"));
		return ptr;
	}


	void SetCustomPrimitiveData2();
	void SetCustomPrimitiveData1();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ElectricityBox_07(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
