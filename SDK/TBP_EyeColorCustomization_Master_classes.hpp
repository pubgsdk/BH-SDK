#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_EyeColorCustomization_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_EyeColorCustomization_Master.TBP_EyeColorCustomization_Master_C
// 0x0000 (0x0140 - 0x0140)
class UTBP_EyeColorCustomization_Master_C : public UTigerCharacterEyeColorCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_EyeColorCustomization_Master.TBP_EyeColorCustomization_Master_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
