#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C
// 0x0070 (0x02F0 - 0x0280)
class UTBP_UI_SystemMenuItem_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_TransitionMenuButton_C*              ItemUiButton;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TextBlock;                                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnWidgetClicked;                                          // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnWidgetHovered;                                          // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnWidgetUnhovered;                                        // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UAkAudioEvent*                               HoveredAudioEvent;                                        // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickedAudioEvent;                                        // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FText                                       ButtonLabel;                                              // 0x02D8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C"));
		return ptr;
	}


	void SetIsDeselected();
	void SetIsSelected();
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_SystemMenuItem(int EntryPoint);
	void OnWidgetUnhovered__DelegateSignature();
	void OnWidgetHovered__DelegateSignature();
	void OnWidgetClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
