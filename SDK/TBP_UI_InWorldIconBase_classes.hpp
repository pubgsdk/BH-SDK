#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InWorldIconBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C
// 0x0058 (0x0320 - 0x02C8)
class UTBP_UI_InWorldIconBase_C : public UTigerInWorldWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            OffscreenAnimation;                                       // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                ContentCanvas;                                            // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      OffScreenDirectionIndicator;                              // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                OffscreenDirectionParent;                                 // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  OffScreenMeterText;                                       // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                OnScreen;                                                 // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              CONFIG_OffscreenIconOffset;                               // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTS_InWorldIconDistanceScaling              CONFIG_DistanceScaling;                                   // 0x0304(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C"));
		return ptr;
	}


	void UpdatePlayerDistanceForTextWidget(class UTextBlock* InTextWidget, bool InDist2D);
	void MoveWidgetsToOffscreenPositions(float InAngle, class UWidget* InTranslationWidget, class UWidget* InRotationWidget, class UWidget* InInverseTranslationWidget);
	void UpdateDistanceWidgetScaling(TArray<class UWidget*>* InWidgets, struct FTS_InWorldIconDistanceScaling* InDistanceScalingParams);
	void UpdateOffScreenWidgets(float InAngle);
	void GetVerticalIconOffset(float* OutIconOffset);
	void GetHorizontalIconOffset(float* OutIconOffset);
	void UpdateVisuals(bool bInIsOnScreen);
	void UpdatePlayerDistance();
	void UpdateOffScreenState(float InRotationDegrees);
	void OnScreenStateChanged(bool bInIsOnScreen);
	void OnInnerWidgetChanged();
	void Construct();
	void UpdatePlayerDistanceScalingWidgets();
	void ExecuteUbergraph_TBP_UI_InWorldIconBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
