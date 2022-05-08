#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_AdrenalineRush_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Buff_AdrenalineRush.TBP_Buff_AdrenalineRush_C
// 0x0000 (0x0260 - 0x0260)
class UTBP_Buff_AdrenalineRush_C : public UTigerBuffAdrenalineRush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Buff_AdrenalineRush.TBP_Buff_AdrenalineRush_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
