#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_FlashEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_FlashEffect.TBP_UI_FlashEffect_C
// 0x0028 (0x0288 - 0x0260)
class UTBP_UI_FlashEffect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            Flash;                                                    // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      FlashImage;                                               // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Flash_Finished;                                           // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_FlashEffect.TBP_UI_FlashEffect_C"));
		return ptr;
	}


	void PlayFlashEffect();
	void Construct();
	void WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_TBP_UI_FlashEffect(int EntryPoint);
	void Flash_Finished__DelegateSignature(class UTBP_UI_FlashEffect_C* Finished_Effect);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
