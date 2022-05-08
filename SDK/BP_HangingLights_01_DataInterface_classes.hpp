#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_HangingLights_01_DataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HangingLights_01_DataInterface.BP_HangingLights_01_DataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_HangingLights_01_DataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HangingLights_01_DataInterface.BP_HangingLights_01_DataInterface_C"));
		return ptr;
	}


	void GetMeshes(int InIndex, class UStaticMesh** OutMesh);
	void GetLightMaterials(int InIndex, class UMaterialInstance** OutMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
