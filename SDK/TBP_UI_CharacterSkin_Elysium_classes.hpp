#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CharacterSkin_Elysium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C
// 0x01B4 (0x0434 - 0x0280)
class UTBP_UI_CharacterSkin_Elysium_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            OnHover;                                                  // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowCustomizeButton;                                      // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ActiveTextRich;                                           // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Button_Text_3;                                            // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             CharacterSlotSwitcher;                                    // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TransitionMenuButton_C*              CreateNewCharacterButton;                                 // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        Customize_Button2;                                        // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     ExistingCharacterButton;                                  // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBorder*                                     Unlock_Border;                                            // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FTigerPersistentPlayerCharacter             PersistentCharacter;                                      // 0x02D0(0x00E8) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    OnClick;                                                  // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               bIsSelected;                                              // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class ATBP_PaperDoll_C*                            PaperDoll;                                                // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                PaperDollIndex;                                           // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CONFIG_HighlightChangeSpeed;                              // 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<class UActorComponent*, float>                HighlightComponentTargetValues;                           // 0x03E0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               bHasPlayerIntroAnimation;                                 // 0x0430(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bShouldBeLit;                                             // 0x0431(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bIsMiddle;                                                // 0x0432(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ArchetypeDetailsIsActive;                                 // 0x0433(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C"));
		return ptr;
	}


	void UpdateHighlight();
	void FindPaperDollAndCameraActors(TArray<class AActor*>* InActors);
	void GetAnimMontageIfNotAlreadyPlaying(class USkeletalMeshComponent** BodyMesh, class UAnimMontage** AnimMontage);
	void OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void DeselectCharacter();
	void BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnAppearanceLoaded();
	void BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature();
	void SelectCharacter();
	void InitializeActors(TArray<class AActor*> InArchetypeSelectActors);
	void BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void DoClick();
	void SetAsExistingCharacter(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
	void Update_Ui_State(TEnumAsByte<E_ElysiumChangeCharacterState> Ui_State);
	void BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void SetAsEmptySlot(ETigerPowerKitType InArchetypeType);
	void ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium(int EntryPoint);
	void OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
