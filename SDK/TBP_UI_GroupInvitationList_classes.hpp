#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GroupInvitationList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C
// 0x0018 (0x02B0 - 0x0298)
class UTBP_UI_GroupInvitationList_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetSwitcher*                             InvitationQueue;                                          // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_TigerGameInstance_C*                    GameInstance;                                             // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C"));
		return ptr;
	}


	void CheckIfRepeatedInviteFromPlayer(class ATigerPlayerState* Inviter, bool* NewInvite);
	void AddInvitation(const struct FTigerGroupInvitation& Invitation, class ATigerPlayerState* Inviter);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_TBP_UI_GroupInvitationList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
