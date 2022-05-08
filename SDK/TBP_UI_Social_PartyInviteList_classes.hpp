#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_PartyInviteList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C
// 0x0020 (0x02A8 - 0x0288)
class UTBP_UI_Social_PartyInviteList_C : public UTigerSocialPartyInviteListUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UListView*                                   PartyInviteListView;                                      // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_22;                                             // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Scrollbox_C*                         TBP_UI_Scrollbox;                                         // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C"));
		return ptr;
	}


	void Open();
	void Close();
	void OnInviteReceived(class UTigerPartyInvite* InInvite);
	void OnInviteRemoved(class UTigerPartyInvite* InInvite);
	void ExecuteUbergraph_TBP_UI_Social_PartyInviteList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
