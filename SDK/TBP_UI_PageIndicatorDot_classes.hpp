#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PageIndicatorDot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C
// 0x0024 (0x0284 - 0x0260)
class UTBP_UI_PageIndicatorDot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UButton*                                     Dot;                                                      // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnPressed;                                                // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                PageIndex;                                                // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C"));
		return ptr;
	}


	void UpdateSelectedState(bool bIsCurrentPage);
	void BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_PageIndicatorDot(int EntryPoint);
	void OnPressed__DelegateSignature(int PageIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
