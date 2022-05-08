#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_EyewearCustomization_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_EyewearCustomization_Master.TBP_EyewearCustomization_Master_C
// 0x0050 (0x0208 - 0x01B8)
class UTBP_EyewearCustomization_Master_C : public UTigerCharacterEyewearCustomization
{
public:
	TMap<TEnumAsByte<ENUM_PiercingNames>, bool>        VisiblePiercingsFilter;                                   // 0x01B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_EyewearCustomization_Master.TBP_EyewearCustomization_Master_C"));
		return ptr;
	}


	void GatherPiercingFilter(TSet<struct FString>* InOutPiercingFilter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
