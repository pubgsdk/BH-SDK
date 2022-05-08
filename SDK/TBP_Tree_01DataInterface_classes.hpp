#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Tree_01DataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UTBP_Tree_01DataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C"));
		return ptr;
	}


	void GetImpostorMaterial(TEnumAsByte<E_TreeType_01> InIndex, bool InHasLeaves, class UMaterialInstance** OutMaterial);
	void GetThickLeavesMaterial(TEnumAsByte<E_TreeType_01> InIndex, class UMaterialInstance** OutMaterial);
	void GetLeavesMaterial(TEnumAsByte<E_TreeType_01> InIndex, class UMaterialInstance** OutMaterial);
	void GetNoLeavesMaterial(TEnumAsByte<E_TreeType_01> InIndex, class UMaterialInstance** OutMaterial);
	void GetTreeMeshWithCollisionProc(TEnumAsByte<E_TreeType_01> InIndex, class UStaticMesh** OutMesh, class UStaticMesh** OutCollionMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
