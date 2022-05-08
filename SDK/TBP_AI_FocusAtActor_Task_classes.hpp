#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_FocusAtActor_Task_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_FocusAtActor_Task.TBP_AI_FocusAtActor_Task_C
// 0x0031 (0x00D9 - 0x00A8)
class UTBP_AI_FocusAtActor_Task_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      FocusActorKey;                                            // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               ShouldClearValue;                                         // 0x00D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_FocusAtActor_Task.TBP_AI_FocusAtActor_Task_C"));
		return ptr;
	}


	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_TBP_AI_FocusAtActor_Task(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
