#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_KostelSalvatore_Tower_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KostelSalvatore_Tower.BP_KostelSalvatore_Tower_C
// 0x0008 (0x0240 - 0x0238)
class ABP_KostelSalvatore_Tower_C : public ABP_SpireCollision_C
{
public:
	class UStaticMeshComponent*                        Cone;                                                     // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_KostelSalvatore_Tower.BP_KostelSalvatore_Tower_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
