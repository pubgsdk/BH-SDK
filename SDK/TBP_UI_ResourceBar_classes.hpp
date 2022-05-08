#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ResourceBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ResourceBar.TBP_UI_ResourceBar_C
// 0x003C (0x03D4 - 0x0398)
class UTBP_UI_ResourceBar_C : public UTigerResourceBarUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            DamageBackgroundAnimation;                                // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      DamageBackground;                                         // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              SegmentPanel;                                             // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_FlashEffect_C*>               Recycled_Flash_Effects;                                   // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               Enable_Flash_Effect;                                      // 0x03D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Enable_Damaged_Background;                                // 0x03D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               BaseBar;                                                  // 0x03D2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	bool                                               EmptyBar;                                                 // 0x03D3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ResourceBar.TBP_UI_ResourceBar_C"));
		return ptr;
	}


	void OnSegmentAdded(int InIndex, class UTBP_UI_ResourceBarSegment_C* InSegment, class UHorizontalBoxSlot* InHorizontalBoxSlot);
	void ClearSegments();
	void CreateFlashEffect(class UTBP_UI_FlashEffect_C** Output_Get);
	void OnHealthLost();
	void OnSegmentEmptied(float HorizontalProgress);
	void RecycleFlashEffect(class UTBP_UI_FlashEffect_C* Finished_Effect);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_ResourceBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
