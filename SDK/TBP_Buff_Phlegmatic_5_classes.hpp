#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Buff_Phlegmatic_5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Buff_Phlegmatic_5.TBP_Buff_Phlegmatic_4_C
// 0x0000 (0x0268 - 0x0268)
class UTBP_Buff_Phlegmatic_4_C : public UTigerBuffHealthRegenBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Buff_Phlegmatic_5.TBP_Buff_Phlegmatic_4_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
