#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PistolCrosshair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PistolCrosshair.TBP_UI_PistolCrosshair_C
// 0x0008 (0x0388 - 0x0380)
class UTBP_UI_PistolCrosshair_C : public UTBP_UI_BaseRangedCrosshair_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PistolCrosshair.TBP_UI_PistolCrosshair_C"));
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_PistolCrosshair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
