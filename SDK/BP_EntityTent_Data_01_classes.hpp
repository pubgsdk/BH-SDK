#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_EntityTent_Data_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EntityTent_Data_01.BP_EntityTent_Data_01_C
// 0x0010 (0x0038 - 0x0028)
class UBP_EntityTent_Data_01_C : public UBP_EntityTent_DataInterface_01_C
{
public:
	TArray<TSoftObjectPtr<class UStaticMesh>>          TentMeshes;                                               // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EntityTent_Data_01.BP_EntityTent_Data_01_C"));
		return ptr;
	}


	void GetTentMesh(int TentNr, class UStaticMesh** Static_Mesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
