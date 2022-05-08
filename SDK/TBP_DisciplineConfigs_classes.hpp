#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DisciplineConfigs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_DisciplineConfigs.TBP_DisciplineConfigs_C
// 0x0000 (0x0078 - 0x0078)
class UTBP_DisciplineConfigs_C : public UTigerDisciplineConfigs
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_DisciplineConfigs.TBP_DisciplineConfigs_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
