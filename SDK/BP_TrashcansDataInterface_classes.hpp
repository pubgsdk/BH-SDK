#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TrashcansDataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TrashcansDataInterface.BP_TrashcansDataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_TrashcansDataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TrashcansDataInterface.BP_TrashcansDataInterface_C"));
		return ptr;
	}


	void GetTrashFlippedMesh(class UStaticMesh** OutMesh);
	void GetStickerMesh(int InIndex, class UStaticMesh** OutMesh);
	void GetTrashMesh(class UStaticMesh** OutTrashMesh);
	void GetGraffitiMesh(int InIndex, class UStaticMesh** OutMesh);
	void GetMixedGraffitiMaterial(int InIndex, class UMaterialInstance** OutMaterial);
	void GetGraffitiMaterial(int InIndex, class UMaterialInstance** OutMaterial);
	void GetMaterial(int InIndex, class UMaterialInstance** OutMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
