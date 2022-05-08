#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Bush_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Bush_Master.TBP_Bush_Master_C
// 0x0060 (0x02E0 - 0x0280)
class ATBP_Bush_Master_C : public ATigerActivatedObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            PlayerInfluenceTrigger;                                   // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    PS_Bushes_InteractableLeaves;                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Deactivate_Movement_StopMovement_27D78C1C4F8769AD82098BBC68A89089;// 0x0298(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Deactivate_Movement__Direction_27D78C1C4F8769AD82098BBC68A89089;// 0x029C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Deactivate_Movement;                                      // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Timer;                                                    // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DoOnceMove;                                               // 0x02B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DoOnceStandStill;                                         // 0x02B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02B2(0x0006) MISSED OFFSET
	TArray<class ATigerPlayer*>                        Players;                                                  // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FVector                                     PlayerVelocity;                                           // 0x02C8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     PlayerDirection;                                          // 0x02D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Bush_Master.TBP_Bush_Master_C"));
		return ptr;
	}


	void AccumulateVelocity(class ATigerPlayer* InPlayer);
	void FindMostActivePlayer(class ATigerPlayer** OutPlayer);
	void UserConstructionScript();
	void Deactivate_Movement__FinishedFunc();
	void Deactivate_Movement__UpdateFunc();
	void Update_Player_Position();
	void ActivateMovement();
	void DeactivateMovement();
	void ReceiveBeginPlay();
	void OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount);
	void OnEndCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount);
	void ExecuteUbergraph_TBP_Bush_Master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
