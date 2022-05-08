#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_HorizontalArchetypeSelector_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C
// 0x0000 (0x02F9 - 0x02F9)
class UTBP_UI_HorizontalArchetypeSelector_Default_C : public UTBP_UI_HorizontalArchetypeSelector_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C"));
		return ptr;
	}


	void HideArchetypeLevels();
	void UpdateArchetypeLevels();
	class UUserWidget* CreateWidgetForArchetype(ETigerPowerKitType InArchetypeType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
