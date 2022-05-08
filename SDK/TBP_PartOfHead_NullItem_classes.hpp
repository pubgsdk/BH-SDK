#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PartOfHead_NullItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PartOfHead_NullItem.TBP_PartOfHead_NullItem_C
// 0x0000 (0x0108 - 0x0108)
class UTBP_PartOfHead_NullItem_C : public UTigerCharacterPartOfHeadCustomization
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PartOfHead_NullItem.TBP_PartOfHead_NullItem_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
