#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_StoreSignsFlatColorSigns_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StoreSignsFlatColorSigns_01.BP_StoreSignsFlatColorSigns_01_C
// 0x0028 (0x0250 - 0x0228)
class ABP_StoreSignsFlatColorSigns_01_C : public AActor
{
public:
	class UStaticMeshComponent*                        SM_StoreFlatColor_01;                                     // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FCoreUObject_FColor                         Color;                                                    // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         MeshList;                                                 // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                SignMeshSwitch;                                           // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FCoreUObject_FColor                         Emissive;                                                 // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StoreSignsFlatColorSigns_01.BP_StoreSignsFlatColorSigns_01_C"));
		return ptr;
	}


	void SetCustomPrimitiveData();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
