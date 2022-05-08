#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_NPC_SpawningSpline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_NPC_SpawningSpline.TBP_NPC_SpawningSpline_C
// 0x0010 (0x0340 - 0x0330)
class ATBP_NPC_SpawningSpline_C : public ATigerNPCSpawningSpline
{
public:
	TArray<class UStaticMeshComponent*>                VisualizedSpawnPoints;                                    // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_NPC_SpawningSpline.TBP_NPC_SpawningSpline_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
