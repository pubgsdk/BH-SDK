#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LightMasterData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LightMasterData.BP_LightMasterData_C
// 0x0050 (0x0078 - 0x0028)
class UBP_LightMasterData_C : public UBP_LightMasterDataInterface_C
{
public:
	TArray<TSoftObjectPtr<class UMaterialInstance>>    LightOffMaterial;                                         // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    LightFlickerMaterial;                                     // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>          LightMeshes;                                              // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UMaterialInstance>>    LightMaterials;                                           // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UTextureLightProfile>> LightIESProfiles;                                         // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LightMasterData.BP_LightMasterData_C"));
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
