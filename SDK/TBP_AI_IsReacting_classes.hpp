#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_IsReacting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_IsReacting.TBP_AI_IsReacting_C
// 0x0028 (0x0090 - 0x0068)
class UTBP_AI_IsReacting_C : public UTigerAIIsReactingDecorator
{
public:
	struct FBlackboardKeySelector                      Self_Actor;                                               // 0x0068(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_IsReacting.TBP_AI_IsReacting_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
