#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_FriendInviteList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C
// 0x0018 (0x02C0 - 0x02A8)
class UTBP_UI_Social_FriendInviteList_C : public UTigerSocialFriendInviteListUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UListView*                                   FriendRequestListView;                                    // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Scrollbox_C*                         TBP_UI_Scrollbox;                                         // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C"));
		return ptr;
	}


	void OnPopulateInvites(TArray<class UTigerFriendInvite*> InFriendInvites);
	void OnInviteReceived(class UTigerFriendInvite* InInvite);
	void OnInviteRemoved(class UTigerFriendInvite* InInvite);
	void ExecuteUbergraph_TBP_UI_Social_FriendInviteList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
