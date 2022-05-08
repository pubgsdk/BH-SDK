#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CancelLureTask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_CancelLureTask.TBP_AI_CancelLureTask_C
// 0x0008 (0x00B0 - 0x00A8)
class UTBP_AI_CancelLureTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_CancelLureTask.TBP_AI_CancelLureTask_C"));
		return ptr;
	}


	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_TBP_AI_CancelLureTask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
