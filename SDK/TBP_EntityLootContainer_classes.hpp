#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_EntityLootContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_EntityLootContainer.TBP_EntityLootContainer_C
// 0x0048 (0x0348 - 0x0300)
class ATBP_EntityLootContainer_C : public ATBP_LootContainerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               InteractionBlocker;                                       // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_EntityWpnCrate_Lid_02;                                 // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_EntityWpnCrate_Lid_01;                                 // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FVector                                     LidMover_NewTrack_5_0F46E3934B490A48F0CD098612324A40;     // 0x0328(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LidMover_Lid_2_Rotation_Y_0F46E3934B490A48F0CD098612324A40;// 0x0334(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              LidMover_Lid_1_Rotation_Y_0F46E3934B490A48F0CD098612324A40;// 0x0338(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    LidMover__Direction_0F46E3934B490A48F0CD098612324A40;     // 0x033C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LidMover;                                                 // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_EntityLootContainer.TBP_EntityLootContainer_C"));
		return ptr;
	}


	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void OnSpawnLoot();
	void OnAnimateOpen();
	void LidMover__FinishedFunc();
	void LidMover__UpdateFunc();
	void LidMover__EnableInteraction__EventFunc();
	void LidMover__SpawnLoot__EventFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnPlayOpenAnimation();
	void ExecuteUbergraph_TBP_EntityLootContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
