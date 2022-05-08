#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TableSetDataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TableSetDataInterface.BP_TableSetDataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_TableSetDataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TableSetDataInterface.BP_TableSetDataInterface_C"));
		return ptr;
	}


	void GetChairMeshes(int InIndex, class UStaticMesh** OutMesh);
	void GetTableMeshes(int InIndex, class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
