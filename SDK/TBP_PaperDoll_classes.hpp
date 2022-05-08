#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PaperDoll_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PaperDoll.TBP_PaperDoll_C
// 0x0038 (0x0658 - 0x0620)
class ATBP_PaperDoll_C : public ATigerPaperDoll
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0620(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0628(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                   // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_CharacterCustomizationComp_C*           TBP_CharacterCustomization;                               // 0x0638(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0640(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableOutlines;                                           // 0x0648(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0649(0x0003) MISSED OFFSET
	int                                                Player;                                                   // 0x064C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    Particle;                                                 // 0x0650(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PaperDoll.TBP_PaperDoll_C"));
		return ptr;
	}


	void UpdateOutlines();
	void UserConstructionScript();
	void PostNewCharacterSelected();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void SetPlayerOutlineMemberId(unsigned char InPlayerMemberId);
	void Particle_Destroy();
	void ExecuteUbergraph_TBP_PaperDoll(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
