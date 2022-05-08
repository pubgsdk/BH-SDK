#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Battlepass_SoftCurrencyPack_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Battlepass_SoftCurrencyPack_Small.TBP_Battlepass_SoftCurrencyPack_Small_C
// 0x0000 (0x0118 - 0x0118)
class UTBP_Battlepass_SoftCurrencyPack_Small_C : public UTBP_SoftCurrencyPack_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Battlepass_SoftCurrencyPack_Small.TBP_Battlepass_SoftCurrencyPack_Small_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
