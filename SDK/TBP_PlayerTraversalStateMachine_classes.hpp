#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PlayerTraversalStateMachine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PlayerTraversalStateMachine.TBP_PlayerTraversalStateMachine_C
// 0x0000 (0x01D8 - 0x01D8)
class UTBP_PlayerTraversalStateMachine_C : public UTigerTraversalFiniteStateMachine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PlayerTraversalStateMachine.TBP_PlayerTraversalStateMachine_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
