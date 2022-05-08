#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_FootprintsDataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FootprintsDataInterface.BP_FootprintsDataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_FootprintsDataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FootprintsDataInterface.BP_FootprintsDataInterface_C"));
		return ptr;
	}


	void GetMaterial(int InIndex, class UMaterialInterface** OutMaterial);
	void GetMesh(int InIndex, class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
