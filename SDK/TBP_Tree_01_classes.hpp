#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Tree_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Tree_01.TBP_Tree_01_C
// 0x0050 (0x02D0 - 0x0280)
class ATBP_Tree_01_C : public ATigerActivatedObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        LeavesCollisionProc;                                      // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UAkComponent*                                AkComponent;                                              // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<E_TreeType_01>                         Select_Tree_Type;                                         // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Leaves_;                                                  // 0x0299(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ThickLeaves_;                                             // 0x029A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x5];                                       // 0x029B(0x0005) MISSED OFFSET
	class UTBP_Tree_01DataInterface_C*                 TreeCDO;                                                  // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Timer_Handle;                                             // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class ATigerPlayer*>                        Players;                                                  // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               StartedMoving;                                            // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	struct FVector                                     ParticleSpawningPosition;                                 // 0x02C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Tree_01.TBP_Tree_01_C"));
		return ptr;
	}


	void ActivateMovement();
	void GetMostMovingPlayer(class ATigerPlayer** OutPlayer, float* OutVelocity);
	void UserConstructionScript();
	void RemoveTrees();
	void UpdateMovement();
	void OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount);
	void OnEndCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount);
	void OnObjectDeactivated();
	void ExecuteUbergraph_TBP_Tree_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
