#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DirtyWork_Part1_Explosives_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_DirtyWork_Part1_Explosives.TBP_DirtyWork_Part1_Explosives_C
// 0x0000 (0x0324 - 0x0324)
class ATBP_DirtyWork_Part1_Explosives_C : public ATBP_Quest_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_DirtyWork_Part1_Explosives.TBP_DirtyWork_Part1_Explosives_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
