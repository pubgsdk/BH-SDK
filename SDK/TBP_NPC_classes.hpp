#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_NPC.TBP_NPC_C
// 0x00BC (0x0B1C - 0x0A60)
class ATBP_NPC_C : public ATigerNPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A60(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        OutlineBillboard;                                         // 0x0A68(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        DirectionIndicator;                                       // 0x0A70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTBP_FeedingComponent_C*                     TBP_FeedingComponent;                                     // 0x0A78(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UWidgetComponent*                            HealthBarWidget;                                          // 0x0A80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPatrolComponent*                            Patrol;                                                   // 0x0A88(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              TimelineHeightenedSenses_Opacity_1EFAF17B4589A86FDB5A4DBF424780C0;// 0x0A90(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              TimelineHeightenedSenses_Emissive_1EFAF17B4589A86FDB5A4DBF424780C0;// 0x0A94(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    TimelineHeightenedSenses__Direction_1EFAF17B4589A86FDB5A4DBF424780C0;// 0x0A98(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A99(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TimelineHeightenedSenses;                                 // 0x0AA0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_1_BloodyBite_352DA62F4D7A8869132FD4B12C3940BD;   // 0x0AA8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_1_Veins_352DA62F4D7A8869132FD4B12C3940BD;        // 0x0AAC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_1_Desaturation_352DA62F4D7A8869132FD4B12C3940BD; // 0x0AB0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_352DA62F4D7A8869132FD4B12C3940BD;   // 0x0AB4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AB5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0AB8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_BloodyBite_73AE1FB04C8F7578E285F3A21FC09467;   // 0x0AC0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_Veins_73AE1FB04C8F7578E285F3A21FC09467;        // 0x0AC4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_Desaturation_73AE1FB04C8F7578E285F3A21FC09467; // 0x0AC8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_73AE1FB04C8F7578E285F3A21FC09467;   // 0x0ACC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0ACD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0AD0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               Jump_Button_Down;                                         // 0x0AD8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Crouch_Button_Down;                                       // 0x0AD9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0ADA(0x0006) MISSED OFFSET
	struct FTimerHandle                                HSensesDelayHandle;                                       // 0x0AE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerNearbySoundCueComponent*               HightPotenceBloodSoundComponent;                          // 0x0AE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    FaceMaterial;                                             // 0x0AF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           PotencyParticle;                                          // 0x0AF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SmoothTime;                                               // 0x0B00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	class UMaterialInterface*                          EntityVisorLODMaterial;                                   // 0x0B08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                HeartBeatAkEventID;                                       // 0x0B10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       MasqueradeBreakVO;                                        // 0x0B14(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_NPC.TBP_NPC_C"));
		return ptr;
	}


	void RemoveAwarenessParticle();
	void GetStencilIndex(int* OutIndex);
	void ResetEntityVisor();
	void MakeEntityVisorVisibleInHS();
	void SetPotencyParticleActive(bool InIsActive);
	void DisableScreenCullSize();
	void InitHealthBar();
	void UpdateOutlineParameters();
	void RemoveHighPotenceBloodSoundComp();
	void CreateHighPotenceBloodSoundComp();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void TimelineHeightenedSenses__FinishedFunc();
	void TimelineHeightenedSenses__UpdateFunc();
	void OnEnterHeightenedSenseAreaInitial();
	void OnEnterHeightenedSenseArea();
	void OnLeaveHeightenedSenseArea();
	void OnShowDamageAmount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent);
	void SpawnBloodDecal();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnPlayMeleeHitEffects(class UTigerMeleeWeapon* WeaponHitBy, const struct FVector& ImpactLocation, const struct FVector& HitDirection);
	void OnBloodPotencyChanged(ETigerBloodPotency InBloodPotency);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PickHeartMeshes();
	void OnDeath();
	void OnGainedSightOfLocalPlayer(class ATigerPlayer* InPlayer);
	void OnLostSightOfLocalPlayer(class ATigerPlayer* InPlayer);
	void BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature(ETigerOutlineMode HighestPrioOutline);
	void OnBecameClosestNpcWithPotencyInHeightenedSenses();
	void OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses();
	void OnLocalPlayerUsedHS(bool bIsNowActive);
	void ToggleUIVisibility();
	void OnFeedingStart(int FeedingTicksLeft, int MaxFeedingTicks);
	void OnFeedingEnd();
	void OnSawLocalPlayerBreachMasquerade();
	void ExecuteUbergraph_TBP_NPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
