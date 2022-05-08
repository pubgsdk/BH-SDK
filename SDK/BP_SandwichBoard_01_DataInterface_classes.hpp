#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SandwichBoard_01_DataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SandwichBoard_01_DataInterface.BP_SandwichBoard_01_DataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SandwichBoard_01_DataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SandwichBoard_01_DataInterface.BP_SandwichBoard_01_DataInterface_C"));
		return ptr;
	}


	void GetMaterial(TEnumAsByte<Enum_ChalkBoards> InType, class UMaterialInterface** OutMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
