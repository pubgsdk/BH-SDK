#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LightMasterDataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LightMasterDataInterface.BP_LightMasterDataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LightMasterDataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LightMasterDataInterface.BP_LightMasterDataInterface_C"));
		return ptr;
	}


	void GetIESProfile(int InIndex, class UTextureLightProfile** OutIESProfile);
	void GetLightMateriales(int InIndex, class UMaterialInstance** OutMaterial);
	void GetLightMeshes(int InIndex, class UStaticMesh** OutMesh);
	void GetLightFlickerMaterial(int InIndex, class UMaterialInstance** OutMaterial);
	void GetLightOffMaterial(int InIndex, class UMaterialInstance** OutMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
