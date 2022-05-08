#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_OnScreenPrompt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_OnScreenPrompt.TBP_UI_OnScreenPrompt_C
// 0x0088 (0x0330 - 0x02A8)
class UTBP_UI_OnScreenPrompt_C : public UTigerSimpleTextPrompt
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            MainAnimation;                                            // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      BackgroundWidget;                                         // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   MainTextWidget;                                           // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   SubTextWidget;                                            // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                TBP_UI_HorizontalFadeSlot;                                // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                TBP_UI_HorizontalFadeSlot_2;                              // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                TBP_UI_HorizontalFadeSlot_87;                             // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInvalidationBox*                            TextInvalidationBox;                                      // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       MainText;                                                 // 0x02F0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FText                                       SubText;                                                  // 0x0308(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	class UTexture2D*                                  Background;                                               // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    BackgroundMaterial;                                       // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_OnScreenPrompt.TBP_UI_OnScreenPrompt_C"));
		return ptr;
	}


	void SetSubText(const struct FText& InText);
	void SetMainText(const struct FText& InText);
	void PreConstruct(bool IsDesignTime);
	void OnShowPrompt();
	void Construct();
	void OnHidePrompt();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void WidgetAnimationEvt_MainAnimation_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_TBP_UI_OnScreenPrompt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
