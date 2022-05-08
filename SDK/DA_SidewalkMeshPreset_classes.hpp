#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DA_SidewalkMeshPreset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DA_SidewalkMeshPreset.DA_SidewalkMeshPreset_C
// 0x0010 (0x0040 - 0x0030)
class UDA_SidewalkMeshPreset_C : public UPrimaryDataAsset
{
public:
	TArray<class UStaticMesh*>                         Meshes;                                                   // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass DA_SidewalkMeshPreset.DA_SidewalkMeshPreset_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
