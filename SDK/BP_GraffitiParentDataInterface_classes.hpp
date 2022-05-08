#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GraffitiParentDataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GraffitiParentDataInterface.BP_GraffitiParentDataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_GraffitiParentDataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GraffitiParentDataInterface.BP_GraffitiParentDataInterface_C"));
		return ptr;
	}


	void GetRandomMixedMaterial(int InSeed, class UMaterialInterface** OutMaterial);
	void GetRandomMaterial(int InSeed, class UMaterialInterface** OutMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
