#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SoftCurrencyInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SoftCurrencyInventory.TBP_SoftCurrencyInventory_C
// 0x0000 (0x0108 - 0x0108)
class UTBP_SoftCurrencyInventory_C : public UTigerSoftCurrency
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SoftCurrencyInventory.TBP_SoftCurrencyInventory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
