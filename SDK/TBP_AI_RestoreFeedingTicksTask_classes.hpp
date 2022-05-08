#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_RestoreFeedingTicksTask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_RestoreFeedingTicksTask.TBP_AI_RestoreFeedingTicksTask_C
// 0x0030 (0x00D8 - 0x00A8)
class UTBP_AI_RestoreFeedingTicksTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      SelfActor;                                                // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_RestoreFeedingTicksTask.TBP_AI_RestoreFeedingTicksTask_C"));
		return ptr;
	}


	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_TBP_AI_RestoreFeedingTicksTask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
