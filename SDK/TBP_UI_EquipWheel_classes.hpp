#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_EquipWheel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_EquipWheel.TBP_UI_EquipWheel_C
// 0x0020 (0x02C8 - 0x02A8)
class UTBP_UI_EquipWheel_C : public UTigerEquipWheelWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UButton*                                     HoverSlowdownButton;                                      // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_WheelInterface_C*                    TBP_UI_WheelInterface;                                    // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Wardrobe_C*                          WardrobeUIRef;                                            // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_EquipWheel.TBP_UI_EquipWheel_C"));
		return ptr;
	}


	class UTigerWheelInterfaceWidget* GetInterfaceWidget();
	void BndEvt__TBP_UI_EquipWheel_Button_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BindAlternate();
	void UnbindAlternate();
	void CancelSelection();
	void ExecuteUbergraph_TBP_UI_EquipWheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
