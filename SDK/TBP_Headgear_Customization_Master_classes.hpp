#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Headgear_Customization_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Headgear_Customization_Master.TBP_Headgear_Customization_Master_C
// 0x0050 (0x0218 - 0x01C8)
class UTBP_Headgear_Customization_Master_C : public UTigerCharacterHeadgearCustomization
{
public:
	TMap<TEnumAsByte<ENUM_PiercingNames>, bool>        VisiblePiercingsFilter;                                   // 0x01C8(0x0050) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Headgear_Customization_Master.TBP_Headgear_Customization_Master_C"));
		return ptr;
	}


	void GatherPiercingFilter(TSet<struct FString>* InOutPiercingFilter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
