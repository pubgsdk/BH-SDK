#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ArchetypeSelect_PowersWithVideoPreviews_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C
// 0x0098 (0x02F8 - 0x0260)
class UTBP_ArchetypeSelect_PowersWithVideoPreviews_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            VideoStopped;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            VideoStarted;                                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UButton*                                     CloseButton;                                              // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      CloseButtonBG;                                            // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ClosebuttonCross;                                         // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_ArchetypeSelect_SkillsSummary_C*        SkillSummary;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                TBP_UI_HorizontalFadeSlot;                                // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    VideoCanvas;                                              // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UProgressBar*                                VideoPlaybackBar;                                         // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      VideoWidget;                                              // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnVideoStarted;                                           // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnVideoEnded;                                             // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UMediaSource*                                Right_Discipline_Video_Source;                            // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMediaSource*                                Left_Discipline_Video_Source;                             // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMediaSource*                                Passive_Video_Source;                                     // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C"));
		return ptr;
	}


	void UpdatePassivesViewOrCloseText();
	void ViewOrCloseVideoText(class UMediaSource* Media_Source);
	void Update_Video_Text_Properties(const struct FText& PostfixText);
	void DeselectOnUnhover(class UTBP_UI_TransitionMenuButton_C* ButtonWidget);
	void OnVideoButtonClicked(class UMediaSource* InVIdeoSource);
	void StopVideo();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMediaOpened(const struct FString& OpenedUrl);
	void OnClickedMoveSkill();
	void OnClickedArchetypeSkill();
	void OnClickedPassiveSkill();
	void Hovered_PassiveSkill();
	void Hovered_ArchetypeSkill();
	void Hovered_MoveSkill();
	void OnMediaEndReached();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void PlayVideo(class UMediaSource* InVIdeoSource);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ChangeArchetype(class UTigerPowerKit* InArchetypeData);
	void On_Open();
	void ExecuteUbergraph_TBP_ArchetypeSelect_PowersWithVideoPreviews(int EntryPoint);
	void OnVideoEnded__DelegateSignature();
	void OnVideoStarted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
