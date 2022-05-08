#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LootVanBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_LootVanBase.TBP_LootVanBase_C
// 0x0042 (0x0342 - 0x0300)
class ATBP_LootVanBase_C : public ATBP_LootContainerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               PushBoxRight;                                             // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               PushBoxLeft;                                              // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        RightTrunkDoor;                                           // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        LeftTrunkDoor;                                            // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_Alpha_21B72AA04470F9BF4EEDBB86C39B4A15;        // 0x0328(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_21B72AA04470F9BF4EEDBB86C39B4A15;   // 0x032C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Launch_Force;                                             // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DoorOpenRotation;                                         // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShouldPushPlayers;                                        // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DoorIsOpen;                                               // 0x0341(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_LootVanBase.TBP_LootVanBase_C"));
		return ptr;
	}


	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void GetPingCategory(struct FName* OutCategory);
	void OnAnimateOpen();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__PushPlayers__EventFunc();
	void StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity);
	void OnOpenTrunk();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void CheckDoorOverlaps();
	void EnableDoorBlock(class UStaticMeshComponent* DoorComponent);
	void TriggerAlarm();
	void ExecuteUbergraph_TBP_LootVanBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
