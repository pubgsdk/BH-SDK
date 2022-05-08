#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TransitionRetainerBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_UI_TransitionRetainerBox.TBP_UI_TransitionRetainerBox_C
// 0x0000 (0x0150 - 0x0150)
class UTBP_UI_TransitionRetainerBox_C : public URetainerBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_UI_TransitionRetainerBox.TBP_UI_TransitionRetainerBox_C"));
		return ptr;
	}


	void CreateDynamicEffectMaterial(class UMaterialInstanceDynamic** EffectMaterial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
