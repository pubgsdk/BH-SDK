#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PoseableMesh_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PoseableMesh_Master.TBP_PoseableMesh_Master_C
// 0x0050 (0x0088 - 0x0038)
class UTBP_PoseableMesh_Master_C : public UTigerCharacterPoseableMesh
{
public:
	TMap<struct FName, TEnumAsByte<ENUM_PiercingNames>> BoneMappings;                                             // 0x0038(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PoseableMesh_Master.TBP_PoseableMesh_Master_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
