#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Location_Looting_Tutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Ping_Location_Looting_Tutorial.TBP_Ping_Location_Looting_Tutorial_C
// 0x0000 (0x0121 - 0x0121)
class UTBP_Ping_Location_Looting_Tutorial_C : public UTBP_Ping_Bark_Looting_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Ping_Location_Looting_Tutorial.TBP_Ping_Location_Looting_Tutorial_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
