#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PingWheelWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PingWheelWidget.TBP_UI_PingWheelWidget_C
// 0x0008 (0x02D0 - 0x02C8)
class UTBP_UI_PingWheelWidget_C : public UTigerPingWheelWidget
{
public:
	class UTBP_UI_WheelInterface_C*                    WheelInterface;                                           // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PingWheelWidget.TBP_UI_PingWheelWidget_C"));
		return ptr;
	}


	class UTigerWheelInterfaceWidget* GetInterfaceWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
