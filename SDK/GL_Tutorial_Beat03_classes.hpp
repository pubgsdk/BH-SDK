#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_Tutorial_Beat03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GL_Tutorial_Beat03.GL_Tutorial_Beat03_C
// 0x0038 (0x0268 - 0x0230)
class AGL_Tutorial_Beat03_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ATigerTutorialGameMode*                      GameMode;                                                 // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_TutorialPlayer_C*                       Player;                                                   // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerBaseNPC*                               Entity;                                                   // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_Player_C*                               Bot;                                                      // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHasUsedClanPower;                                        // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bHasUsedArchetypePower;                                   // 0x0259(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Has_Used_Archetype_Power;                                 // 0x025A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x5];                                       // 0x025B(0x0005) MISSED OFFSET
	class ATriggerVolume*                              BotCircleTrigger2_ExecuteUbergraph_GL_Tutorial_Beat03_RefProperty;// 0x0260(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GL_Tutorial_Beat03.GL_Tutorial_Beat03_C"));
		return ptr;
	}


	void OnReachChimneyTrigger(class AActor* OverlappedActor1, class AActor* OtherActor1);
	void ReceiveBeginPlay();
	void OnBeat02Completed();
	void OnReachEnemyTrigger(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnLevelFeeding(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn);
	void CustomEvent();
	void CustomEvent_1(ETigerTraversalState InPreviousState, ETigerTraversalState InNewState);
	void OnEnemyDeath();
	void OnArchtypePower(ETigerDisciplineSlot InDisciplineSlot);
	void OnClanPowerUsed(ETigerDisciplineSlot InDisciplineSlot);
	void CheckPowersUsed();
	void ExecuteUbergraph_GL_Tutorial_Beat03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
