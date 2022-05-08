#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Inbox_Subscreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C
// 0x0028 (0x02B8 - 0x0290)
class UTBP_UI_Social_Inbox_Subscreen_C : public UTigerSocialInboxUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_Social_FriendInviteList_C*           FriendInviteList;                                         // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                FriendInvitePanel;                                        // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                PartyInvitationPanel;                                     // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Social_PartyInviteList_C*            PartyInviteList;                                          // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C"));
		return ptr;
	}


	void UpdateFriendAvailability();
	void OnOpen();
	void OnClose();
	void OnFriendServiceStatusChanged(ETigerOnlineServiceStatus InServiceStatus);
	void ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
