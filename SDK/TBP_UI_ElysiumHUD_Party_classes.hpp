#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ElysiumHUD_Party_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C
// 0x0060 (0x02E0 - 0x0280)
class UTBP_UI_ElysiumHUD_Party_C : public UTigerGroupUIWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UOverlay*                                    OverlayContainer;                                         // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PartyText;                                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterCard_Icon_C*                TBP_UI_CharacterCard_Icon;                                // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterCard_Icon_C*                TBP_UI_CharacterCard_Icon_2;                              // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CharacterCard_Icon_C*                TBP_UI_CharacterCard_Icon_3;                              // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_CharacterCard_Icon_C*>        PlayerIcons;                                              // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class ATigerPlayerState*>                   PartyPlayerStates;                                        // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	float                                              UpdateTimer;                                              // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FTimerHandle                                UpdateTimerHandle;                                        // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C"));
		return ptr;
	}


	void UnbindAllPlayerStateEvents();
	void Update_Icons();
	void UpdatePlayerStates();
	void UpdateWidget();
	void Construct();
	void On_PartyUpdated();
	void OnPlayerJoiendParty(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId);
	void OnPlayerLeftPArty(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId);
	void Update_Cards();
	void UpdateIsReady(bool bInIsGroupReady);
	void GroupChanged();
	void OnCardLoaded();
	void Destruct();
	void UpdateLeaderStatus();
	void ExecuteUbergraph_TBP_UI_ElysiumHUD_Party(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
