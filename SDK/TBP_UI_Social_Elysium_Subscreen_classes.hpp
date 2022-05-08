#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Elysium_Subscreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C
// 0x0048 (0x02D0 - 0x0288)
class UTBP_UI_Social_Elysium_Subscreen_C : public UTigerSocialElysiumUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTigerStyledRichTextBlock*                   NumberOfPlayerInElysium;                                  // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Social_PlayerCardList_C*             PlayerList;                                               // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_Social_Elysium_PlayerCard_C*> PlayerCards;                                              // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class APlayerState*>                        PlayerStates;                                             // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<struct FTigerPlayerStateFriendPair>         PlayerFriendPairs;                                        // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C"));
		return ptr;
	}


	void RefreshPlayerListIfNeeded();
	void AddPlayerEntry(class ATigerElysiumPlayerState* PlayerState, int Index);
	void RefreshPlayerList();
	void OnOpen();
	void OnClose();
	void AddPlayer(class ATigerPlayerState* PlayerState, int Index);
	void OnPartyUpdated();
	void ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
