#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Vehicle_01_DataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C
// 0x0005 (0x002D - 0x0028)
class UTBP_Vehicle_01_DataInterface_C : public UObject
{
public:
	bool                                               Bounceable;                                               // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Squashable;                                               // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasCarAlam;                                               // 0x002A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanBeTinted;                                              // 0x002B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasTwoExteriorMaterials;                                  // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C"));
		return ptr;
	}


	void GetBrandingMaterial(int InIndex, class UMaterialInstance** OutMaterial);
	void GetLootableAsset(class UClass* /*AActor*/* OutAsset);
	void GetBodyMesh(class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
