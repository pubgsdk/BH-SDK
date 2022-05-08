#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TransitionHeader_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C
// 0x0062 (0x02C2 - 0x0260)
class UTBP_UI_TransitionHeader_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            InAnimation;                                              // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      BackgroundImage;                                          // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URichTextBlock*                              TextEffectWidget;                                         // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URichTextBlock*                              TextWidget;                                               // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Text;                                                     // 0x0288(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	float                                              AnimationDelay;                                           // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              EffectSizeMultiplier;                                     // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bHasInitializedEffect;                                    // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<ETigerHeaderType>                      HeaderType;                                               // 0x02A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02AA(0x0006) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnInAnimationFinished;                                    // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TEnumAsByte<ENUM_TextStyleColor>                   StyleColor;                                               // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x02C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C"));
		return ptr;
	}


	void SetText(const struct FText& InText, const struct FText& InSubText);
	void TriggerAnimation();
	void SetTextWithHeaderType(const struct FText& InText, const struct FText& InSubText, TEnumAsByte<ETigerHeaderType> InHeaderType);
	void InitializeEffect();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void TriggerAnimationWithDelay();
	void PreConstruct(bool IsDesignTime);
	void WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1();
	void Play_Header_Animation(bool IsReversed);
	void ExecuteUbergraph_TBP_UI_TransitionHeader(int EntryPoint);
	void OnInAnimationFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
