#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Small_FlowerPot_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Small_FlowerPot_02.BP_Small_FlowerPot_02_C
// 0x000C (0x0290 - 0x0284)
class ABP_Small_FlowerPot_02_C : public ABP_Planter_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Small_FlowerPot_02.BP_Small_FlowerPot_02_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
