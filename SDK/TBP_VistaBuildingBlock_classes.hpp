#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VistaBuildingBlock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VistaBuildingBlock.TBP_VistaBuildingBlock_C
// 0x0038 (0x0260 - 0x0228)
class ATBP_VistaBuildingBlock_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        SM_Vista_Block_01;                                        // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FLinearColor>                        BuildingColor;                                            // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FRandomStream                               Stream;                                                   // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TArray<struct FLinearColor>                        WindowColor;                                              // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VistaBuildingBlock.TBP_VistaBuildingBlock_C"));
		return ptr;
	}


	void SetCustomPrimitiveData();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_VistaBuildingBlock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
