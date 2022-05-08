#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PiercingSetCustomization_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PiercingSetCustomization_Master.TBP_PiercingSetCustomization_Master_C
// 0x0060 (0x0168 - 0x0108)
class UTBP_PiercingSetCustomization_Master_C : public UTigerCharacterPiercingSetCustomization
{
public:
	TMap<TEnumAsByte<ENUM_PiercingNames>, class UStaticMesh*> Piercings;                                                // 0x0108(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class UClass* /*UTBP_PoseableMesh_Master_C*/> PoseablePiercings;                                        // 0x0158(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PiercingSetCustomization_Master.TBP_PiercingSetCustomization_Master_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
