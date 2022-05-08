#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HairColorCustomization_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C
// 0x0008 (0x0148 - 0x0140)
class UTBP_HairColorCustomization_Master_C : public UTigerCharacterHairColorCustomization
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C"));
		return ptr;
	}


	class UMaterialInterface* GetUiMaterialOverride();
	void SetUIMaterialParameters(class UMaterialInstanceDynamic* InMaterial);
	void ExecuteUbergraph_TBP_HairColorCustomization_Master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
