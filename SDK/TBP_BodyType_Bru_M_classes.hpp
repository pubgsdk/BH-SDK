#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BodyType_Bru_M_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BodyType_Bru_M.TBP_BodyType_Bru_M_C
// 0x0000 (0x0130 - 0x0130)
class UTBP_BodyType_Bru_M_C : public UTigerCharacterBodyTypeCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BodyType_Bru_M.TBP_BodyType_Bru_M_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
