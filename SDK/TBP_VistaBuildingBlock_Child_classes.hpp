#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VistaBuildingBlock_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VistaBuildingBlock_Child.TBP_VistaBuildingBlock_Child_C
// 0x0000 (0x0260 - 0x0260)
class ATBP_VistaBuildingBlock_Child_C : public ATBP_VistaBuildingBlock_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VistaBuildingBlock_Child.TBP_VistaBuildingBlock_Child_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
