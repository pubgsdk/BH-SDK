#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SmallChimneys_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallChimneys_01.BP_SmallChimneys_01_C
// 0x0020 (0x0248 - 0x0228)
class ABP_SmallChimneys_01_C : public AActor
{
public:
	class UStaticMeshComponent*                        SM_Chimney_05;                                            // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsLarge;                                                  // 0x0230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	TArray<class UStaticMesh*>                         NewVar_1;                                                 // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallChimneys_01.BP_SmallChimneys_01_C"));
		return ptr;
	}


	void RAndom_Float(int Seed_offset, float Min, float Max, float* Float, int* Int);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
