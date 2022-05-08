#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_GuardSuspiciousOfPlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_GuardSuspiciousOfPlayer.TBP_AI_GuardSuspiciousOfPlayer_C
// 0x0034 (0x00CC - 0x0098)
class UTBP_AI_GuardSuspiciousOfPlayer_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      Suspicious_Target;                                        // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ReportSusBehaviourDistanceSqrd;                           // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_GuardSuspiciousOfPlayer.TBP_AI_GuardSuspiciousOfPlayer_C"));
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_TBP_AI_GuardSuspiciousOfPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
