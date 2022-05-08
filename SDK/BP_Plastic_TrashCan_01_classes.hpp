#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Plastic_TrashCan_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Plastic_TrashCan_01.BP_Plastic_TrashCan_01_C
// 0x0020 (0x02A0 - 0x0280)
class ABP_Plastic_TrashCan_01_C : public ATigerActivatedObject
{
public:
	bool                                               Stickers;                                                 // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Graffiti;                                                 // 0x0281(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0282(0x0002) MISSED OFFSET
	int                                                RandomIntFromWorld;                                       // 0x0284(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FCoreUObject_FColor>                 Colors;                                                   // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UBP_TrashcansDataInterface_C*                PlasticTrashcan01CDO;                                     // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Plastic_TrashCan_01.BP_Plastic_TrashCan_01_C"));
		return ptr;
	}


	void SetGraffitiMeshAndMaterial(int InMaterialSeed, int InColorSeed, int InMeshIndex);
	bool GetRandomBoolFromSeed(int InIndex);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
