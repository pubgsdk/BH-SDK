#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TeamMenu_Playercard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_TeamMenu_Playercard.TBP_UI_TeamMenu_Playercard_C
// 0x004D (0x030D - 0x02C0)
class UTBP_UI_TeamMenu_Playercard_C : public UTigerTeamMenuUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            HoverMuteButton;                                          // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UButton*                                     CardButton;                                               // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      MuteBackGlow;                                             // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     MuteButton;                                               // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      MuteButtonBorder;                                         // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      MuteIcon;                                                 // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_PlayerCard_C*                        TBP_UI_PlayerCard;                                        // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_TeamMenu_C*                          Parent;                                                   // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                RepresentedPlayerID;                                      // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	bool                                               bIsSelected;                                              // 0x030C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_TeamMenu_Playercard.TBP_UI_TeamMenu_Playercard_C"));
		return ptr;
	}


	void UpdateMuteStatus();
	void UpdateRepresentedPlayer(int InRepresentedPlayerID);
	void BndEvt__TBP_UI_TeamMenu_Playercard_Button_212_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TBP_UI_TeamMenu_Playercard_Button_212_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TBP_UI_TeamMenu_Playercard_Button_212_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TBP_UI_TeamMenu_Playercard_Button_212_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__TBP_UI_TeamMenu_Playercard_Button_212_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Initalize(class UTBP_UI_TeamMenu_C* InParent);
	void BndEvt__TBP_UI_TeamMenu_Playercard_MuteButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__TBP_UI_TeamMenu_Playercard_MuteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TBP_UI_TeamMenu_Playercard_MuteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_TeamMenu_Playercard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
