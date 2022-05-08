#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Birds_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Birds.TBP_Birds_C
// 0x0052 (0x02D2 - 0x0280)
class ATBP_Birds_C : public ATigerActivatedObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            FlyAwayTrigger;                                           // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ResetTime;                                                // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Trigger_Radius;                                           // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Fly_In_Emitter_Direction;                                 // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	int                                                Number_Of_Birds;                                          // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>                Birds;                                                    // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	float                                              Spawn_Radius;                                             // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Flying;                                                   // 0x02BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET
	float                                              Rotation;                                                 // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Raycast;                                                  // 0x02C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	int                                                BirdId;                                                   // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FlyawayTime;                                              // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               WaitingToSpawn;                                           // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShouldSpawn;                                              // 0x02D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Birds.TBP_Birds_C"));
		return ptr;
	}


	void SpawnBirdParticles(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	void UserConstructionScript();
	void OnEnterHeightenedSenseArea();
	void OnEnterHeightenedSenseAreaInitial();
	void OnLeaveHeightenedSenseArea();
	void OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount);
	void ReceiveBeginPlay();
	void OnObjectActivated();
	void OnObjectDeactivated();
	void OnEndCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount);
	void ExecuteUbergraph_TBP_Birds(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
