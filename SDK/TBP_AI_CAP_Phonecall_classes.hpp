#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_Phonecall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_CAP_Phonecall.TBP_AI_CAP_Phonecall_C
// 0x0010 (0x0278 - 0x0268)
class ATBP_AI_CAP_Phonecall_C : public ATigerAICAP
{
public:
	class USphereComponent*                            Sphere;                                                   // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_CAP_Phonecall.TBP_AI_CAP_Phonecall_C"));
		return ptr;
	}


	bool OnCheckNPCEligibility(class ATigerNPC* NPC);
	void CreateEditorMarkerMesh(const struct FVector& NewParam, class UStaticMeshComponent** Mesh);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
