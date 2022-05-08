#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_Graffiti_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_CAP_Graffiti.TBP_AI_CAP_Graffiti_C
// 0x0010 (0x0278 - 0x0268)
class ATBP_AI_CAP_Graffiti_C : public ATigerAICAP
{
public:
	class USphereComponent*                            Sphere;                                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_CAP_Graffiti.TBP_AI_CAP_Graffiti_C"));
		return ptr;
	}


	bool OnCheckNPCEligibility(class ATigerNPC* NPC);
	void CreateEditorMarkerMesh(struct FTigerAIMoveToLocationData* MoveToData);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
