#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AwningDataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AwningDataInterface.BP_AwningDataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AwningDataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AwningDataInterface.BP_AwningDataInterface_C"));
		return ptr;
	}


	void GetSmallBrandingMaterial(int InIndex, class UMaterialInterface** OutMaterial);
	void GetBrandingMaterial(int InIndex, class UMaterialInterface** OutMaterial);
	void GetAwningMesh(int InIndex, class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
