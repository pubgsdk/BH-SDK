#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AnimMetaData_TurnStartActive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AnimMetaData_TurnStartActive.TBP_AnimMetaData_TurnStartActive_C
// 0x0000 (0x0028 - 0x0028)
class UTBP_AnimMetaData_TurnStartActive_C : public UAnimMetaData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AnimMetaData_TurnStartActive.TBP_AnimMetaData_TurnStartActive_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
