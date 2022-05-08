#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Party_Panel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C
// 0x0028 (0x02A8 - 0x0280)
class UTBP_UI_Social_Party_Panel_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UListView*                                   MemberList;                                               // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        TBP_UI_Button_CTA;                                        // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                           // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                            // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C"));
		return ptr;
	}


	void UpdateMemberList();
	void OnOpen();
	void OnClose();
	void OnPartyUpdated();
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_Social_Party_Panel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
