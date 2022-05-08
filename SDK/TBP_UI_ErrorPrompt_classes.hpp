#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ErrorPrompt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C
// 0x0020 (0x0280 - 0x0260)
class UTBP_UI_ErrorPrompt_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_ConfirmMenu_C*                       ConfirmMenu;                                              // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnClose;                                                  // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C"));
		return ptr;
	}


	void ShowErrorString(const struct FString& InSourceString);
	void BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_ErrorPrompt(int EntryPoint);
	void OnClose__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
