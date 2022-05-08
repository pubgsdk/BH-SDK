#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Notifications_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Notifications.TBP_UI_Notifications_C
// 0x0159 (0x0411 - 0x02B8)
class UTBP_UI_Notifications_C : public UTigerNotificationsUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_NotificationUIStacker_C*                ChallengeNotificationStacker;                             // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_NotificationUIStacker_C*                NotificationStacker;                                      // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerItemAsset*                             BloodAsset;                                               // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerItemAsset*                             DisciplineAsset;                                          // 0x02E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerChallenge*                             CachedMatchChallenge;                                     // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UTigerChallenge*>                     CachedDailyChallenges;                                    // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<class UClass* /*UTigerPingBase*/, float>      LastPingNotificationTimes;                                // 0x0300(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ETigerWeaponAmmoType, struct FName>           AmmoTypeToAudioName;                                      // 0x0350(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<ERangedWeaponModType, struct FName>           ModTypeToAudioName;                                       // 0x03A0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               FriendAddedAudioEvent;                                    // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               FriendRemovedAudioEvent;                                  // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               FriendInviteReceivedAudioEvent;                           // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               FriendInviteRejectedAudioEvent;                           // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHideKillFeed;                                            // 0x0410(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Notifications.TBP_UI_Notifications_C"));
		return ptr;
	}


	void Set_Kill_Notification_Visibility();
	void Create_Challenge_Completed_Notification(class UTigerChallenge* InCompletedChallenge, class UTBP_UI_Challenge_Notification_Item_C** Challenge_UI_Notification);
	void AddFriendNotification(class UTexture2D* InIcon, class UAkAudioEvent* InAudioEvent, struct FText* InMessage);
	void FormatPlayerNameColored(const struct FText& InNotificationText, class ATigerPlayerState* InPlayerState, struct FText* OutNotificationText);
	void AddEnemyBrokeMasqueradeNotification(class ATigerPlayerState* EnemyPlayer);
	void PlayPingVOAudio(const struct FTigerPingNotificationNetData& InPingData, class ATigerPlayerState* InPlayerState);
	void PlayCancelPingAudio(class AActor* Actor, class UObject* Object);
	void PlayCorrespondingPingAudio(bool bIsInIntrested, class UObject* PingBase);
	void CreatePingNotification(const struct FText& InNotificationText, class UTexture2D* InTexture, float InIconScale, ETigerUIColor InUIColor, class ATigerPlayerState* InPlayerState, bool bIsItem);
	void GetFormattedPingPingName(const struct FText& InNotificationText, ETigerUIColor InTigerColor, struct FText* OutNotificationText);
	void FormatColoredGroupMemberName(const struct FText& InNotificationText, class ATigerPlayerState* InPlayerState, struct FText* OutNotificationText);
	void GetItemCountText(int Count, struct FText* Text);
	void AddItemNotification(struct FTigerItemNotification* TigerItemNotification);
	void AddDeathNotification(bool IsPlayerInSameGroup, const struct FTigerPlayerStateGameData& InInstigatorData, const struct FTigerPlayerStateGameData& InDeadPlayerData);
	void OnPlayerDeath(const struct FTigerPlayerStateGameData& InKilledPlayerData, const struct FTigerPlayerStateGameData& InInstigatorPlayerData, bool bIsPlayerInSameGroup);
	void OnMemberJoinedGroup(const struct FTigerPlayerStateGameData& InPlayerData);
	void OnMemberLeftGroup(const struct FTigerPlayerStateGameData& InPlayerData);
	void HandleOnPersistentPlayerInitialisedEvent(class ATigerPlayerController* PlayerController);
	void OnHolyIncenseImminent(float Time);
	void OnInitialized();
	void OnGroupPing(const struct FTigerPingNotificationNetData& PingData, class ATigerPlayerState* InSendingPlayerState);
	void OnGroupPingResponse(class UTigerPingClientData* InPingData, class ATigerPlayerState* InRespondingPlayer, bool bInIsInterested);
	void OnGroupPingCanceled(class UTigerPingClientData* InPingData);
	void OnOtherPlayerBrokeMasquerade(class ATigerPlayerState* InPlayerState);
	void OnReceivedReward();
	void OnFriendAdded(class UTigerFriend* InNewFriend);
	void OnFriendInviteReceived(class UTigerFriendInvite* InInvite);
	void OnFriendInviteRejected(class UTigerFriendInvite* InInvite);
	void OnFriendRemoved(class UTigerFriend* InLostFriend);
	void OnGrimoireItemUnlocked(class UTigerGrimoireEntry* InGrimoireEntry);
	void OnFriendInviteSent();
	void OnChallengeCompleted(class UTigerChallenge* InCompletedChallenge);
	void OnAcceptGroupInviteFailed(const struct FTigerInviteId& InInviteId);
	void OnCollectibleFound(class UTigerCollectibleData* InCollectible);
	void OnQuestCompleted(class UTigerQuest* InCompletedQuest);
	void OnGroupInviteReceived(class UTigerPartyInvite* InInvite);
	void OnQuestObjectiveCompleted(class UTigerQuestObjective* InCompleteObjective);
	void Destruct();
	void OnQuestUnlocked(class UTigerQuest* InNewQuest);
	void OnQuestObjectiveUnlocked(class UTigerQuestObjective* InCompleteObjective);
	void ExecuteUbergraph_TBP_UI_Notifications(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
