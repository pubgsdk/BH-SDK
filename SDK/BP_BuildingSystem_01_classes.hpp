#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_BuildingSystem_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuildingSystem_01.BP_BuildingSystem_01_C
// 0x0030 (0x02C0 - 0x0290)
class ABP_BuildingSystem_01_C : public ATigerBuildingSystem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TSoftObjectPtr<class UMaterialInterface>           SimpleDebugMaterial;                                      // 0x0298(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BuildingSystem_01.BP_BuildingSystem_01_C"));
		return ptr;
	}


	void SetSimpleBuildingMaterials();
	void ExecuteUbergraph_BP_BuildingSystem_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
