#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_Tutorial_Beat01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GL_Tutorial_Beat01.GL_Tutorial_Beat01_C
// 0x01F8 (0x0428 - 0x0230)
class AGL_Tutorial_Beat01_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Timeline_0_NewTrack_0_AD6D032F4801DE59B30DA09D984BBAEE;   // 0x0238(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_AD6D032F4801DE59B30DA09D984BBAEE;   // 0x023C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATigerTutorialGameMode*                      GameMode;                                                 // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_TutorialPlayer_C*                       Player;                                                   // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_VFX_Tutorial_Container_C*            UI_VFX;                                                   // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<ETigerClan, struct FName>                     ClanToAudioName;                                          // 0x0260(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               bHasUsedArmor;                                            // 0x02B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bHasLootedWeapon;                                         // 0x02B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02B2(0x0006) MISSED OFFSET
	class ATutorialBlockingWalls_C*                    TutorialBlockingWalls_2_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner1_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner2_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner3_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner4_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner6_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner7_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner9_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner10_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner1_Armor_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0300(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner2_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0308(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner3_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0310(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner4_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0318(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      MeleeSpawner2_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0320(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      MeleeSpawner3_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0328(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner1_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0330(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner2_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0338(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner3_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0340(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner4_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0348(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner5_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0350(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner6_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0358(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner7_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0360(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner9_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0368(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner10_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0370(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner11_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0378(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner12_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0380(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner13_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0388(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATriggerVolume*                              ResurrectionTrigger2_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0390(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner5_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0398(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner6_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      MeleeSpawner8_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner8_Armor_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner9_Armor_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner5_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner11_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner15_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner12_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner16_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner11_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner17_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner18_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner19_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0400(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner13_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0408(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner12_Armor_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0410(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner14_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0418(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      AmmoSpawner20_ExecuteUbergraph_GL_Tutorial_Beat01_RefProperty;// 0x0420(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GL_Tutorial_Beat01.GL_Tutorial_Beat01_C"));
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void CustomEvent_5();
	void CustomEvent_7(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void CustomEvent_2(bool bIsNowActive);
	void ReceiveBeginPlay();
	void OnReachResurrectTrigger(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnFired();
	void OnClimb(ETigerTraversalState InPreviousState, ETigerTraversalState InNewState);
	void ExecuteUbergraph_GL_Tutorial_Beat01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
