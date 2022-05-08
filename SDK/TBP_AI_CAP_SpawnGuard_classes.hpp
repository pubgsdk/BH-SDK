#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_SpawnGuard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_CAP_SpawnGuard.TBP_AI_CAP_SpawnGuard_C
// 0x0010 (0x02B0 - 0x02A0)
class ATBP_AI_CAP_SpawnGuard_C : public ATigerAIGroupCAP
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_CAP_SpawnGuard.TBP_AI_CAP_SpawnGuard_C"));
		return ptr;
	}


	bool OnIsAvailableCheck();
	bool OnRequestNewCommands(class ATigerNPC* NPC);
	bool OnCheckNPCEligibility(class ATigerNPC* NPC);
	void CreateMarkerMeshes();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_AI_CAP_SpawnGuard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
