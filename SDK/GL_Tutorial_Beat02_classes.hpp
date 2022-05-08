#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_Tutorial_Beat02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GL_Tutorial_Beat02.GL_Tutorial_Beat02_C
// 0x00A0 (0x02D0 - 0x0230)
class AGL_Tutorial_Beat02_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Timeline_0_NewTrack_0_C2E15BB74FAC37855342C3837060B3A0;   // 0x0238(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_C2E15BB74FAC37855342C3837060B3A0;   // 0x023C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATigerTutorialGameMode*                      GameMode;                                                 // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_TutorialPlayer_C*                       Player;                                                   // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bWasOnPrimary;                                            // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bHasUsedArmor;                                            // 0x0259(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	class ATigerBaseNPC*                               HealingNPC;                                               // 0x0260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHasFed;                                                  // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bHasLootedSecondaryWeapon;                                // 0x0269(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bHasLootedArmor;                                          // 0x026A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x5];                                       // 0x026B(0x0005) MISSED OFFSET
	TArray<class ATigerBaseNPC*>                       CivilianList;                                             // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               bAllNpcDead;                                              // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class ATBP_AISpawner_C*                            ResoNPC_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;  // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATBP_AISpawner_C*                            ResoNPC_2_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;// 0x0290(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATBP_AISpawner_C*                            ResoNPC_3_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;// 0x0298(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATBP_AISpawner_C*                            ResoNPC_4_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;// 0x02A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATBP_AISpawner_C*                            ResoNPC_5_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;// 0x02A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class ATBP_AISpawner_C*                            ResoNPC_6_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;// 0x02B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      LootSpawner5_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;// 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner10_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;// 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class AActor*                                      ConsumableSpawner7_Armor_ExecuteUbergraph_GL_Tutorial_Beat02_RefProperty;// 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GL_Tutorial_Beat02.GL_Tutorial_Beat02_C"));
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnBBUsedFailsafe(class UTigerConsumableAsset* Consumable);
	void OnBeat01Completed();
	void OnInventoryToggle(ESlateVisibility InVisibility);
	void ReceiveBeginPlay();
	void CustomEvent_2(bool bIsNowActive);
	void CustomEvent_1(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn);
	void CustomEvent(class UTigerItemAsset* Item, int Count);
	void OnClimb(ETigerTraversalState InPreviousState, ETigerTraversalState InNewState);
	void DoneUsedConsumable(class UTigerConsumableAsset* Consumable);
	void OnTutorialStart();
	void OnNPCDeath();
	void ExecuteUbergraph_GL_Tutorial_Beat02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
