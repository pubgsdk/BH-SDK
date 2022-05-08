#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Graffiti_DataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Graffiti_DataInterface.BP_Graffiti_DataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Graffiti_DataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Graffiti_DataInterface.BP_Graffiti_DataInterface_C"));
		return ptr;
	}


	void GetPaintOverMaterial(int InIndex, class UMaterialInterface** OutMaterial);
	void GetMaterial(int InIndex, class UMaterialInterface** OutMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
