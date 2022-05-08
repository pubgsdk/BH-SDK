#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Friend_ActionMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C
// 0x0020 (0x02A8 - 0x0288)
class UTBP_UI_Social_Friend_ActionMenu_C : public UTBP_UI_Social_ActionMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UBorder*                                     Border_190;                                               // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Social_ActionMenuItem_C*             InviteToGroupMenuItem;                                    // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Social_ActionMenuItem_C*             RemoveFriendMenuItem;                                     // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_ActionMenu.TBP_UI_Social_Friend_ActionMenu_C"));
		return ptr;
	}


	void ShouldEnableRemoveFriend(bool* bShouldEnable);
	void ShouldEnableGroupInvite(bool* bShouldEnable);
	void GetFriendPlayerCard(class UTBP_UI_Social_Friend_PlayerCard_C** OutPlayerCard);
	void BndEvt__InviteToGroupMenuItem_K2Node_ComponentBoundEvent_0_MenuClicked__DelegateSignature();
	void BndEvt__RemoveFriendMenuItem_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_Social_Friend_ActionMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
