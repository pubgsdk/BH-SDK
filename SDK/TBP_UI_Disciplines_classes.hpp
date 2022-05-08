#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Disciplines_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Disciplines.TBP_UI_Disciplines_C
// 0x0111 (0x03D1 - 0x02C0)
class UTBP_UI_Disciplines_C : public UTigerDisciplinesUi
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeOutPassiveVFX;                                        // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeInPassiveVFX;                                         // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            PoweredUpFadeOut;                                         // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            PoweredUpFadeIn;                                          // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            SignatureSkillAnimation;                                  // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallSkillIcon_C*                    ArchetypeIcon;                                            // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_3;                                            // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SmallSkillIcon_C*                    ClanIcon;                                                 // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_PowerCharges_C*                      LeftSlotCharges;                                          // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SuperSkill_C*                        Melee_Weapon_Ability_Icon;                                // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      PassiveIcon;                                              // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Image_Addative_C*                    PoweredUpFlash;                                           // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Image_Addative_C*                    PoweredUpGlow;                                            // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_PowerCharges_C*                      RightSlotCharges;                                         // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTexture*                                    LeftImage;                                                // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AlphaLerpSpeed;                                           // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsShowing;                                               // 0x035C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTigerFeedingComponent*                      FeedingComponent_1;                                       // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerWidget*                                PassiveCustomWidget;                                      // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerWidget*                                PassiveIconWidget;                                        // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerPassiveComponent*                      PassiveComponent;                                         // 0x0378(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FString, struct FName>                 PassiveToAudioName;                                       // 0x0380(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               bHasPassiveFinalAct;                                      // 0x03D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Disciplines.TBP_UI_Disciplines_C"));
		return ptr;
	}


	void SetupCameOffCooldownAudio();
	void SetDisciplineSlotActiveState(ETigerDisciplineSlot InSlot, bool bInActivated);
	void UpdatePassiveWidgets();
	void AddWidgetToCanvas(class UTigerWidget* Widget);
	bool DisciplineIsRecharging(ETigerDisciplinesEnum InDisciplineType);
	float DisciplineRechargePercentage(ETigerDisciplinesEnum InDisciplineType);
	int DisciplineRechargeRemainingSeconds(ETigerDisciplinesEnum InDisciplineType);
	bool DisciplineIsVisible(ETigerDisciplineSlot Slot);
	bool DisciplineIsUnlocked(ETigerDisciplinesEnum InDisciplineType);
	bool DisciplineCanBeUsed(ETigerDisciplineSlot Slot);
	float DisciplineCooldownPercentage(ETigerDisciplineSlot Slot);
	int DisciplineCooldownRemainingSeconds(ETigerDisciplinesEnum InDisciplineType);
	void InitializePowerCharges(class UTBP_UI_PowerCharges_C* PowerChargesUi, ETigerDisciplineSlot DisciplineSlot);
	void GetSkillIcon(ETigerDisciplineSlot Slot, class UTexture2D** UIIcon);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnLifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus);
	void PreConstruct(bool IsDesignTime);
	void OnSetNumberOfCharges(ETigerDisciplineSlot DisciplineSlot);
	void OnInitializeDisciplineUi();
	void OnUpdatePassiveUI();
	void Destruct();
	void OnActivatedDiscipline(ETigerDisciplinesEnum InDiscipline);
	void OnDeactivatedDiscipline(ETigerDisciplinesEnum InDiscipline);
	void OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth);
	void OnUpdatePassiveActiveState();
	void OnDisciplineInterrupted(ETigerDisciplineSlot InDisciplineSlot);
	void UpdatePassiveActiveState();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1();
	void On_Respawn_Set_Opacity_to_1();
	void OnSilencedChanged(bool bIsSilenced);
	void ExecuteUbergraph_TBP_UI_Disciplines(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
