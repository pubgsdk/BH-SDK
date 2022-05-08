#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelpComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ContextualHelpComponent.TBP_ContextualHelpComponent_C
// 0x0000 (0x0100 - 0x0100)
class UTBP_ContextualHelpComponent_C : public UTigerContextualHelpComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ContextualHelpComponent.TBP_ContextualHelpComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
