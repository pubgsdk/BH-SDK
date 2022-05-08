#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LocalAI_Controller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_LocalAI_Controller.TBP_LocalAI_Controller_C
// 0x0008 (0x05C8 - 0x05C0)
class ATBP_LocalAI_Controller_C : public ATigerLocalAIController
{
public:
	class UAIPerceptionComponent*                      AIPerception;                                             // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_LocalAI_Controller.TBP_LocalAI_Controller_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
