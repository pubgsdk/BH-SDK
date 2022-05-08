#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StoreSignsDataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StoreSignsDataInterface.BP_StoreSignsDataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_StoreSignsDataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StoreSignsDataInterface.BP_StoreSignsDataInterface_C"));
		return ptr;
	}


	void GetStickerMesh(int InIndex, class UStaticMesh** OutMesh);
	void GetHolderMesh(int InIndex, class UStaticMesh** OutMesh);
	void GetSignMaterial(int InIndex, class UMaterialInstance** OutMesh);
	void GetSignMesh(int InIndex, class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
