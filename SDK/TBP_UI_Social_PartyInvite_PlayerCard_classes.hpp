#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_PartyInvite_PlayerCard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_PartyInvite_PlayerCard.TBP_UI_Social_PartyInvite_PlayerCard_C
// 0x0014 (0x0378 - 0x0364)
class UTBP_UI_Social_PartyInvite_PlayerCard_C : public UTBP_UI_Social_PlayerCardBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTigerPartyInvite*                           Invite;                                                   // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_PartyInvite_PlayerCard.TBP_UI_Social_PartyInvite_PlayerCard_C"));
		return ptr;
	}


	void OnRemove();
	void RejectPartyInvite();
	void AcceptPartyInvite();
	void OnAccept();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void UpdateRepresentedPlayerInfo();
	void ExecuteUbergraph_TBP_UI_Social_PartyInvite_PlayerCard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
