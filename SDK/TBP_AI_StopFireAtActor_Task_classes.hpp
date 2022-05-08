#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_StopFireAtActor_Task_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_StopFireAtActor_Task.TBP_AI_StopFireAtActor_Task_C
// 0x0058 (0x0100 - 0x00A8)
class UTBP_AI_StopFireAtActor_Task_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      FocusActorKey;                                            // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      SelfActorKey;                                             // 0x00D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_StopFireAtActor_Task.TBP_AI_StopFireAtActor_Task_C"));
		return ptr;
	}


	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_TBP_AI_StopFireAtActor_Task(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
