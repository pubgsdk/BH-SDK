#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TableSetData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TableSetData.BP_TableSetData_C
// 0x0020 (0x0048 - 0x0028)
class UBP_TableSetData_C : public UBP_TableSetDataInterface_C
{
public:
	TArray<TSoftObjectPtr<class UStaticMesh>>          ChairMeshes;                                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>          TableMeshes;                                              // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TableSetData.BP_TableSetData_C"));
		return ptr;
	}


	void GetTableMeshes(int InIndex, class UStaticMesh** OutMesh);
	void GetChairMeshes(int InIndex, class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
