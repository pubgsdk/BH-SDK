#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ServerSelection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ServerSelection.TBP_UI_ServerSelection_C
// 0x0070 (0x0308 - 0x0298)
class UTBP_UI_ServerSelection_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_MenuButton_C*                        CancelButton;                                             // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        ContinueButton;                                           // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UComboBoxString*                             ServerComboBox;                                           // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_BasicMenu_C*                         TBP_UI_BasicMenu;                                         // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FTigerBpFindSessionResultList               Sessions;                                                 // 0x02C0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    OnServerSelected;                                         // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnCancel;                                                 // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ServerSelection.TBP_UI_ServerSelection_C"));
		return ptr;
	}


	void OnMatchServerList(const struct FTigerBpFindSessionResultList& SessionAlternatives);
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void JointSelectedServer();
	void ExecuteUbergraph_TBP_UI_ServerSelection(int EntryPoint);
	void OnCancel__DelegateSignature();
	void OnServerSelected__DelegateSignature(const struct FTigerBpFindSessionSelectedSession& Session);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
