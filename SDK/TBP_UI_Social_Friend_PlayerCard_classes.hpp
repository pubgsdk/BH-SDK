#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Friend_PlayerCard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C
// 0x001D (0x0381 - 0x0364)
class UTBP_UI_Social_Friend_PlayerCard_C : public UTBP_UI_Social_PlayerCardBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTigerFriend*                                Friend;                                                   // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class ATigerElysiumPlayerState*                    ElysiumPlayerState;                                       // 0x0378(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bCouldInviteToParty;                                      // 0x0380(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C"));
		return ptr;
	}


	void OnPlayerNameChanged();
	void UpdateGroupStatus();
	void CouldInviteToParty(bool* bCouldInvite);
	void OnExtra();
	void OnAdd();
	void OnLocationChanged(const struct FString& InLocation);
	void InviteToParty();
	void RemoveFriend();
	void OnIsInPartyChanged(bool bInIsInParty);
	void UpdateRepresentedPlayerInfo();
	void SetupCard();
	void Construct();
	void OnStateAdded(class ATigerPlayerState* InPlayerState);
	void OnOnlineStatusChanged(bool bInOnline);
	void ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
