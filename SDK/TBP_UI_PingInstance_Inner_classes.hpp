#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PingInstance_Inner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C
// 0x0004 (0x02D4 - 0x02D0)
class UTBP_UI_PingInstance_Inner_C : public UTigerPingWorldInstanceUI
{
public:
	float                                              CONFIG_OffscreenIconOffset;                               // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C"));
		return ptr;
	}


	void GetHorizontalIconOffset(float* OutIconOffset);
	void GetVerticalIconOffset(float* OutIconOffset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
