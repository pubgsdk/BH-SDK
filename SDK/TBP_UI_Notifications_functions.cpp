// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Notifications_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.Set Kill Notification Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Notifications_C::Set_Kill_Notification_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.Set Kill Notification Visibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.Create Challenge Completed Notification
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InCompletedChallenge           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_Challenge_Notification_Item_C* Challenge_UI_Notification      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::Create_Challenge_Completed_Notification(class UTigerChallenge* InCompletedChallenge, class UTBP_UI_Challenge_Notification_Item_C** Challenge_UI_Notification)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.Create Challenge Completed Notification"));

	struct
	{
		class UTigerChallenge*         InCompletedChallenge;
		class UTBP_UI_Challenge_Notification_Item_C* Challenge_UI_Notification;
	} params = {};

	params.InCompletedChallenge = InCompletedChallenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Challenge_UI_Notification != nullptr)
		*Challenge_UI_Notification = params.Challenge_UI_Notification;
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddFriendNotification
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              InIcon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   InMessage                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UAkAudioEvent*           InAudioEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::AddFriendNotification(class UTexture2D* InIcon, class UAkAudioEvent* InAudioEvent, struct FText* InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddFriendNotification"));

	struct
	{
		class UTexture2D*              InIcon;
		struct FText                   InMessage;
		class UAkAudioEvent*           InAudioEvent;
	} params = {};

	params.InIcon = InIcon;
	params.InAudioEvent = InAudioEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InMessage != nullptr)
		*InMessage = params.InMessage;
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatPlayerNameColored
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   InNotificationText             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OutNotificationText            (CPF_Parm, CPF_OutParm)

void UTBP_UI_Notifications_C::FormatPlayerNameColored(const struct FText& InNotificationText, class ATigerPlayerState* InPlayerState, struct FText* OutNotificationText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatPlayerNameColored"));

	struct
	{
		struct FText                   InNotificationText;
		class ATigerPlayerState*       InPlayerState;
		struct FText                   OutNotificationText;
	} params = {};

	params.InNotificationText = InNotificationText;
	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutNotificationText != nullptr)
		*OutNotificationText = params.OutNotificationText;
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddEnemyBrokeMasqueradeNotification
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       EnemyPlayer                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::AddEnemyBrokeMasqueradeNotification(class ATigerPlayerState* EnemyPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddEnemyBrokeMasqueradeNotification"));

	struct
	{
		class ATigerPlayerState*       EnemyPlayer;
	} params = {};

	params.EnemyPlayer = EnemyPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayPingVOAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingNotificationNetData InPingData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::PlayPingVOAudio(const struct FTigerPingNotificationNetData& InPingData, class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayPingVOAudio"));

	struct
	{
		struct FTigerPingNotificationNetData InPingData;
		class ATigerPlayerState*       InPlayerState;
	} params = {};

	params.InPingData = InPingData;
	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCancelPingAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::PlayCancelPingAudio(class AActor* Actor, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCancelPingAudio"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 Object;
	} params = {};

	params.Actor = Actor;
	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCorrespondingPingAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsInIntrested                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 PingBase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::PlayCorrespondingPingAudio(bool bIsInIntrested, class UObject* PingBase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCorrespondingPingAudio"));

	struct
	{
		bool                           bIsInIntrested;
		class UObject*                 PingBase;
	} params = {};

	params.bIsInIntrested = bIsInIntrested;
	params.PingBase = PingBase;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.CreatePingNotification
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InNotificationText             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              InTexture                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InIconScale                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerUIColor                  InUIColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Notifications_C::CreatePingNotification(const struct FText& InNotificationText, class UTexture2D* InTexture, float InIconScale, ETigerUIColor InUIColor, class ATigerPlayerState* InPlayerState, bool bIsItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.CreatePingNotification"));

	struct
	{
		struct FText                   InNotificationText;
		class UTexture2D*              InTexture;
		float                          InIconScale;
		ETigerUIColor                  InUIColor;
		class ATigerPlayerState*       InPlayerState;
		bool                           bIsItem;
	} params = {};

	params.InNotificationText = InNotificationText;
	params.InTexture = InTexture;
	params.InIconScale = InIconScale;
	params.InUIColor = InUIColor;
	params.InPlayerState = InPlayerState;
	params.bIsItem = bIsItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetFormattedPingPingName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   InNotificationText             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// ETigerUIColor                  InTigerColor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OutNotificationText            (CPF_Parm, CPF_OutParm)

void UTBP_UI_Notifications_C::GetFormattedPingPingName(const struct FText& InNotificationText, ETigerUIColor InTigerColor, struct FText* OutNotificationText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetFormattedPingPingName"));

	struct
	{
		struct FText                   InNotificationText;
		ETigerUIColor                  InTigerColor;
		struct FText                   OutNotificationText;
	} params = {};

	params.InNotificationText = InNotificationText;
	params.InTigerColor = InTigerColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutNotificationText != nullptr)
		*OutNotificationText = params.OutNotificationText;
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatColoredGroupMemberName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   InNotificationText             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OutNotificationText            (CPF_Parm, CPF_OutParm)

void UTBP_UI_Notifications_C::FormatColoredGroupMemberName(const struct FText& InNotificationText, class ATigerPlayerState* InPlayerState, struct FText* OutNotificationText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatColoredGroupMemberName"));

	struct
	{
		struct FText                   InNotificationText;
		class ATigerPlayerState*       InPlayerState;
		struct FText                   OutNotificationText;
	} params = {};

	params.InNotificationText = InNotificationText;
	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutNotificationText != nullptr)
		*OutNotificationText = params.OutNotificationText;
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetItemCountText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBP_UI_Notifications_C::GetItemCountText(int Count, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetItemCountText"));

	struct
	{
		int                            Count;
		struct FText                   Text;
	} params = {};

	params.Count = Count;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddItemNotification
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemNotification  TigerItemNotification          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Notifications_C::AddItemNotification(struct FTigerItemNotification* TigerItemNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddItemNotification"));

	struct
	{
		struct FTigerItemNotification  TigerItemNotification;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TigerItemNotification != nullptr)
		*TigerItemNotification = params.TigerItemNotification;
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddDeathNotification
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPlayerInSameGroup            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerPlayerStateGameData InInstigatorData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FTigerPlayerStateGameData InDeadPlayerData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Notifications_C::AddDeathNotification(bool IsPlayerInSameGroup, const struct FTigerPlayerStateGameData& InInstigatorData, const struct FTigerPlayerStateGameData& InDeadPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddDeathNotification"));

	struct
	{
		bool                           IsPlayerInSameGroup;
		struct FTigerPlayerStateGameData InInstigatorData;
		struct FTigerPlayerStateGameData InDeadPlayerData;
	} params = {};

	params.IsPlayerInSameGroup = IsPlayerInSameGroup;
	params.InInstigatorData = InInstigatorData;
	params.InDeadPlayerData = InDeadPlayerData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerDeath
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPlayerStateGameData InKilledPlayerData             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTigerPlayerStateGameData InInstigatorPlayerData         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bIsPlayerInSameGroup           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Notifications_C::OnPlayerDeath(const struct FTigerPlayerStateGameData& InKilledPlayerData, const struct FTigerPlayerStateGameData& InInstigatorPlayerData, bool bIsPlayerInSameGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerDeath"));

	struct
	{
		struct FTigerPlayerStateGameData InKilledPlayerData;
		struct FTigerPlayerStateGameData InInstigatorPlayerData;
		bool                           bIsPlayerInSameGroup;
	} params = {};

	params.InKilledPlayerData = InKilledPlayerData;
	params.InInstigatorPlayerData = InInstigatorPlayerData;
	params.bIsPlayerInSameGroup = bIsPlayerInSameGroup;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberJoinedGroup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPlayerStateGameData InPlayerData                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Notifications_C::OnMemberJoinedGroup(const struct FTigerPlayerStateGameData& InPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberJoinedGroup"));

	struct
	{
		struct FTigerPlayerStateGameData InPlayerData;
	} params = {};

	params.InPlayerData = InPlayerData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberLeftGroup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPlayerStateGameData InPlayerData                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Notifications_C::OnMemberLeftGroup(const struct FTigerPlayerStateGameData& InPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberLeftGroup"));

	struct
	{
		struct FTigerPlayerStateGameData InPlayerData;
	} params = {};

	params.InPlayerData = InPlayerData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.HandleOnPersistentPlayerInitialisedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::HandleOnPersistentPlayerInitialisedEvent(class ATigerPlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.HandleOnPersistentPlayerInitialisedEvent"));

	struct
	{
		class ATigerPlayerController*  PlayerController;
	} params = {};

	params.PlayerController = PlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnHolyIncenseImminent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnHolyIncenseImminent(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnHolyIncenseImminent"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Notifications_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPing
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingNotificationNetData PingData                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class ATigerPlayerState*       InSendingPlayerState           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnGroupPing(const struct FTigerPingNotificationNetData& PingData, class ATigerPlayerState* InSendingPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPing"));

	struct
	{
		struct FTigerPingNotificationNetData PingData;
		class ATigerPlayerState*       InSendingPlayerState;
	} params = {};

	params.PingData = PingData;
	params.InSendingPlayerState = InSendingPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingResponse
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPingClientData*    InPingData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayerState*       InRespondingPlayer             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsInterested                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Notifications_C::OnGroupPingResponse(class UTigerPingClientData* InPingData, class ATigerPlayerState* InRespondingPlayer, bool bInIsInterested)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingResponse"));

	struct
	{
		class UTigerPingClientData*    InPingData;
		class ATigerPlayerState*       InRespondingPlayer;
		bool                           bInIsInterested;
	} params = {};

	params.InPingData = InPingData;
	params.InRespondingPlayer = InRespondingPlayer;
	params.bInIsInterested = bInIsInterested;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingCanceled
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPingClientData*    InPingData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnGroupPingCanceled(class UTigerPingClientData* InPingData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingCanceled"));

	struct
	{
		class UTigerPingClientData*    InPingData;
	} params = {};

	params.InPingData = InPingData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnOtherPlayerBrokeMasquerade
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnOtherPlayerBrokeMasquerade(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnOtherPlayerBrokeMasquerade"));

	struct
	{
		class ATigerPlayerState*       InPlayerState;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnReceivedReward
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Notifications_C::OnReceivedReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnReceivedReward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendAdded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriend*            InNewFriend                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnFriendAdded(class UTigerFriend* InNewFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendAdded"));

	struct
	{
		class UTigerFriend*            InNewFriend;
	} params = {};

	params.InNewFriend = InNewFriend;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriendInvite*      InInvite                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnFriendInviteReceived(class UTigerFriendInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteReceived"));

	struct
	{
		class UTigerFriendInvite*      InInvite;
	} params = {};

	params.InInvite = InInvite;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteRejected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriendInvite*      InInvite                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnFriendInviteRejected(class UTigerFriendInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteRejected"));

	struct
	{
		class UTigerFriendInvite*      InInvite;
	} params = {};

	params.InInvite = InInvite;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendRemoved
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerFriend*            InLostFriend                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnFriendRemoved(class UTigerFriend* InLostFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendRemoved"));

	struct
	{
		class UTigerFriend*            InLostFriend;
	} params = {};

	params.InLostFriend = InLostFriend;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGrimoireItemUnlocked
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     InGrimoireEntry                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnGrimoireItemUnlocked(class UTigerGrimoireEntry* InGrimoireEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGrimoireItemUnlocked"));

	struct
	{
		class UTigerGrimoireEntry*     InGrimoireEntry;
	} params = {};

	params.InGrimoireEntry = InGrimoireEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteSent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Notifications_C::OnFriendInviteSent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteSent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnChallengeCompleted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InCompletedChallenge           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnChallengeCompleted(class UTigerChallenge* InCompletedChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnChallengeCompleted"));

	struct
	{
		class UTigerChallenge*         InCompletedChallenge;
	} params = {};

	params.InCompletedChallenge = InCompletedChallenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnAcceptGroupInviteFailed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerInviteId          InInviteId                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UTBP_UI_Notifications_C::OnAcceptGroupInviteFailed(const struct FTigerInviteId& InInviteId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnAcceptGroupInviteFailed"));

	struct
	{
		struct FTigerInviteId          InInviteId;
	} params = {};

	params.InInviteId = InInviteId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnCollectibleFound
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerCollectibleData*   InCollectible                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnCollectibleFound(class UTigerCollectibleData* InCollectible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnCollectibleFound"));

	struct
	{
		class UTigerCollectibleData*   InCollectible;
	} params = {};

	params.InCollectible = InCollectible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestCompleted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuest*             InCompletedQuest               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnQuestCompleted(class UTigerQuest* InCompletedQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestCompleted"));

	struct
	{
		class UTigerQuest*             InCompletedQuest;
	} params = {};

	params.InCompletedQuest = InCompletedQuest;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupInviteReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPartyInvite*       InInvite                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnGroupInviteReceived(class UTigerPartyInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupInviteReceived"));

	struct
	{
		class UTigerPartyInvite*       InInvite;
	} params = {};

	params.InInvite = InInvite;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveCompleted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuestObjective*    InCompleteObjective            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnQuestObjectiveCompleted(class UTigerQuestObjective* InCompleteObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveCompleted"));

	struct
	{
		class UTigerQuestObjective*    InCompleteObjective;
	} params = {};

	params.InCompleteObjective = InCompleteObjective;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Notifications_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestUnlocked
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuest*             InNewQuest                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnQuestUnlocked(class UTigerQuest* InNewQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestUnlocked"));

	struct
	{
		class UTigerQuest*             InNewQuest;
	} params = {};

	params.InNewQuest = InNewQuest;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveUnlocked
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerQuestObjective*    InCompleteObjective            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::OnQuestObjectiveUnlocked(class UTigerQuestObjective* InCompleteObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveUnlocked"));

	struct
	{
		class UTigerQuestObjective*    InCompleteObjective;
	} params = {};

	params.InCompleteObjective = InCompleteObjective;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Notifications.TBP_UI_Notifications_C.ExecuteUbergraph_TBP_UI_Notifications
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Notifications_C::ExecuteUbergraph_TBP_UI_Notifications(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Notifications.TBP_UI_Notifications_C.ExecuteUbergraph_TBP_UI_Notifications"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
