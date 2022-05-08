#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_FriendInvite_ActionMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C
// 0x0028 (0x02B0 - 0x0288)
class UTBP_UI_Social_FriendInvite_ActionMenu_C : public UTBP_UI_Social_ActionMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_Social_ActionMenuItem_C*             AcceptMenuItem;                                           // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBorder*                                     Border_190;                                               // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_99;                                                 // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Social_ActionMenuItem_C*             RejectMenuItem;                                           // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInvite_ActionMenu.TBP_UI_Social_FriendInvite_ActionMenu_C"));
		return ptr;
	}


	void GetFriendRequestCard(class UTBP_UI_Social_FriendInvite_PlayerCard_C** OutPlayerCard);
	void BndEvt__AcceptMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature();
	void BndEvt__RejectMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_TBP_UI_Social_FriendInvite_ActionMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
