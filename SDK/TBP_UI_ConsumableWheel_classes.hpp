#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ConsumableWheel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ConsumableWheel.TBP_UI_ConsumableWheel_C
// 0x0018 (0x0348 - 0x0330)
class UTBP_UI_ConsumableWheel_C : public UTigerConsumableWheelWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_ConsumableTooltip_C*                 ToolTip;                                                  // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_WheelInterface_C*                    WheelInterface;                                           // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ConsumableWheel.TBP_UI_ConsumableWheel_C"));
		return ptr;
	}


	void Update_Item_Appearances();
	class UTigerWheelInterfaceWidget* GetInterfaceWidget();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnOpen();
	void OnClose();
	void ExecuteUbergraph_TBP_UI_ConsumableWheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
