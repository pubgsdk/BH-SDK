#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Bicycle_01_Data_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bicycle_01_Data.BP_Bicycle_01_Data_C
// 0x0070 (0x0098 - 0x0028)
class UBP_Bicycle_01_Data_C : public UBP_Bicycle_01_DataInterface_C
{
public:
	TArray<TSoftObjectPtr<class UStaticMesh>>          Meshes;                                                   // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>          BrokenMeshes;                                             // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TSoftObjectPtr<class UStaticMesh>                  BasketMesh;                                               // 0x0048(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>                  ChildSeatMesh;                                            // 0x0070(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Bicycle_01_Data.BP_Bicycle_01_Data_C"));
		return ptr;
	}


	void GetChildSeatMesh(class UStaticMesh** OutMesh);
	void GetBasketMesh(class UStaticMesh** OutMesh);
	void GetBikeMesh(int InIndex, bool InIsBroken, class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
