#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LootContainerBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_LootContainerBase.TBP_LootContainerBase_C
// 0x0068 (0x0300 - 0x0298)
class ATBP_LootContainerBase_C : public ATigerLootContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAkComponent*                                ContainerOpenAudioEvent;                                  // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkComponent*                                HeigthenedSensesDetectLoopAudioEvent;                     // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            HeightenedSensesCollider;                                 // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        OutlineMesh;                                              // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        LootMistGlow;                                             // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBP_DynamicLootSpawner_C*                    BP_DynamicLootSpawner;                                    // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        BaseMesh;                                                 // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        HeightenedSensesMesh;                                     // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HeightenedSensesTimeline_Item_Alpha_19091A904278DD250B11EC9B6FF28B50;// 0x02E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    HeightenedSensesTimeline__Direction_19091A904278DD250B11EC9B6FF28B50;// 0x02E4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HeightenedSensesTimeline;                                 // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FTransform>                          ItemSpawnTransforms;                                      // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_LootContainerBase.TBP_LootContainerBase_C"));
		return ptr;
	}


	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void GetPingCategory(struct FName* OutCategory);
	void PostInteractionAudio();
	void OnAnimateOpen();
	void OnSpawnLoot();
	void OnInteractFinished();
	void UserConstructionScript();
	void HeightenedSensesTimeline__FinishedFunc();
	void HeightenedSensesTimeline__UpdateFunc();
	void OnInteract(EInteractiveObjectState ActivatedTrigger);
	void ReceiveTick(float DeltaSeconds);
	void OnLeaveHeightenedSenseArea();
	void OnEnterHeightenedSenseAreaInitial();
	void OnEnterHeightenedSenseArea();
	void OnBecameClosestLootContainerInHeightenedSenses();
	void OnStoppedBeingClosestLootContainerInHeightenedSenses();
	void OnJumpToFinalState();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_LootContainerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
