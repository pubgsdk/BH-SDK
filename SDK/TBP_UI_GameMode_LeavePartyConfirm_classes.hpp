#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GameMode_LeavePartyConfirm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_GameMode_LeavePartyConfirm.TBP_UI_GameMode_LeavePartyConfirm_C
// 0x0050 (0x02E8 - 0x0298)
class UTBP_UI_GameMode_LeavePartyConfirm_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_MenuButton_C*                        CancelButton;                                             // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_57;                                                 // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        LeaveButton;                                              // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnLeaveSelected;                                          // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnCancelSelected;                                         // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnChoice;                                                 // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_GameMode_LeavePartyConfirm.TBP_UI_GameMode_LeavePartyConfirm_C"));
		return ptr;
	}


	void BndEvt__TBP_UI_GameMode_LeavePartyConfirm_LeaveButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_GameMode_LeavePartyConfirm_CancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void InitListeners();
	void OnLeaveParty();
	void OnCancelled();
	void StopListeners();
	void ExecuteUbergraph_TBP_UI_GameMode_LeavePartyConfirm(int EntryPoint);
	void OnChoice__DelegateSignature(bool bUserConfirmed);
	void OnCancelSelected__DelegateSignature();
	void OnLeaveSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
