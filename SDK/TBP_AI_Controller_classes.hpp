#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_Controller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_Controller.TBP_AI_Controller_C
// 0x0018 (0x04B0 - 0x0498)
class ATBP_AI_Controller_C : public ATigerAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAIPerceptionComponent*                      AIPerception;                                             // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FName                                       SelfKey;                                                  // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_Controller.TBP_AI_Controller_C"));
		return ptr;
	}


	void DebugStimulus(const struct FAIStimulus& Stimulus);
	void HandleNonVampireStimulus(const struct FAIStimulus& Stimulus);
	void SyncKeysFromBlackboard();
	void InitBlackBoardBB_Police();
	void InitBlackBoardBB_Civilian();
	void InitBlackBoardBB_Entity();
	void InitBlackBoardValues(ETigerNPCType NPC_Type);
	void ReceiveBeginPlay();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SetupData(ETigerNPCType InNpcType);
	void ExecuteUbergraph_TBP_AI_Controller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
