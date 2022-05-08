#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Tutorial_Input_Walk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ContextualHelp_Tutorial_Input_Walk.TBP_ContextualHelp_Tutorial_Input_Walk_C
// 0x0000 (0x00F0 - 0x00F0)
class UTBP_ContextualHelp_Tutorial_Input_Walk_C : public UTBP_ContextualHelpBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ContextualHelp_Tutorial_Input_Walk.TBP_ContextualHelp_Tutorial_Input_Walk_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
