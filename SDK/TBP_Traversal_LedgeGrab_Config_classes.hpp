#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Traversal_LedgeGrab_Config_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Traversal_LedgeGrab_Config.TBP_Traversal_LedgeGrab_Config_C
// 0x0000 (0x00C0 - 0x00C0)
class UTBP_Traversal_LedgeGrab_Config_C : public UTigerTraversalStateLedgeGrabConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Traversal_LedgeGrab_Config.TBP_Traversal_LedgeGrab_Config_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
