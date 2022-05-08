#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CamConf_Indoor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CamConf_Indoor.TBP_CamConf_Indoor_C
// 0x0000 (0x00A8 - 0x00A8)
class UTBP_CamConf_Indoor_C : public UTBP_CamConf_Main_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CamConf_Indoor.TBP_CamConf_Indoor_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
