#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SmgCrosshair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SmgCrosshair.TBP_UI_SmgCrosshair_C
// 0x0008 (0x0388 - 0x0380)
class UTBP_UI_SmgCrosshair_C : public UTBP_UI_BaseRangedCrosshair_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_SmgCrosshair.TBP_UI_SmgCrosshair_C"));
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_SmgCrosshair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
