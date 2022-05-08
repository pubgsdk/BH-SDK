#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_VoiceChatPopup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C
// 0x0060 (0x02E0 - 0x0280)
class UTBP_UI_VoiceChatPopup_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                VoiceChatVerticalBox;                                     // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FText>                               PlayerNames;                                              // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance)
	TArray<struct FTigerPersistentVoipID>              PlayerVoipIDs;                                            // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance)
	TArray<class ATigerPlayerState*>                   PlayerStates;                                             // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               PopupEnabled;                                             // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	TArray<class UWidget*>                             PreviousUserWidgets;                                      // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_VoiceChatPopup.TBP_UI_VoiceChatPopup_C"));
		return ptr;
	}


	void RefreshDisplayNames();
	void Enable(bool InEnable);
	void ClearPlayers();
	void AddPlayer(const struct FTigerPersistentVoipID& InVoipID, const struct FText& InPlayerName, class ATigerPlayerState* InPlayerState);
	void AddPlayerFromTigerState(class ATigerPlayerState* inTigerPlayerState);
	bool ShouldIgnoreVisibilityChanges();
	void UpdateGroupMemberIcons();
	void AddUser(const struct FTigerPersistentVoipID& InPlayerPersistentVoipID, class ATigerPlayerState* InPlayerState, const struct FText& InPlayerName);
	void Construct();
	void OnPlayerStateReceived(class ATigerPlayerState* InPlayerState);
	void TigerGroupStateComponentGroupChanged(class UTigerGroupStateComponent* InTigerGroupStateComponent, TArray<class ATigerPlayerState*> InPlayerState);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnPartyUpdate();
	void ExecuteUbergraph_TBP_UI_VoiceChatPopup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
