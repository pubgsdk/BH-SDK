#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Platform_StoreOverlayIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Platform_StoreOverlayIcon.TBP_UI_Platform_StoreOverlayIcon_C
// 0x0000 (0x0268 - 0x0268)
class UTBP_UI_Platform_StoreOverlayIcon_C : public UTigerPS5StoreIconWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Platform_StoreOverlayIcon.TBP_UI_Platform_StoreOverlayIcon_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
