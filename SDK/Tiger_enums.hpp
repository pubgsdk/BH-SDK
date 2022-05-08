#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Tiger.ETigerDisciplineCooldownReductionType
enum class ETigerDisciplineCooldownReductionType : uint8_t
{
	ETigerDisciplineCooldownReductionType__Seconds = 0,
	ETigerDisciplineCooldownReductionType__MultiplierOfTotal = 1,
	ETigerDisciplineCooldownReductionType__MultiplierOfRemaining = 2,
	ETigerDisciplineCooldownReductionType__ETigerDisciplineCooldownReductionType_MAX = 3
};


// Enum Tiger.ETigerDisciplinesEnum
enum class ETigerDisciplinesEnum : uint8_t
{
	ETigerDisciplinesEnum__TE_DisciplineNone = 0,
	ETigerDisciplinesEnum__TE_DisciplineTeleport = 1,
	ETigerDisciplinesEnum__TE_DisciplineStun = 2,
	ETigerDisciplinesEnum__TE_DisciplineFOTT = 3,
	ETigerDisciplinesEnum__TE_DisciplineJump = 4,
	ETigerDisciplinesEnum__TE_DisciplineSwiftStrike = 5,
	ETigerDisciplinesEnum__TE_DisciplineFlowerOfDeath = 6,
	ETigerDisciplinesEnum__TE_DisciplineDisplacement = 7,
	ETigerDisciplinesEnum__TE_DisciplineEarthshock = 8,
	ETigerDisciplinesEnum__TE_DisciplineFrenzy = 9,
	ETigerDisciplinesEnum__TE_DisciplineVanish = 10,
	ETigerDisciplinesEnum__TE_DisciplineScouts = 11,
	ETigerDisciplinesEnum__TE_DisciplineLaceratingThrow = 12,
	ETigerDisciplinesEnum__TE_DisciplineReposition = 13,
	ETigerDisciplinesEnum__TE_DisciplineIncitePain = 14,
	ETigerDisciplinesEnum__TE_DisciplineMajesty = 15,
	ETigerDisciplinesEnum__TE_DisciplineGuardBreak = 16,
	ETigerDisciplinesEnum__TE_DisciplinePassion = 17,
	ETigerDisciplinesEnum__TE_DisciplineCharm = 18,
	ETigerDisciplinesEnum__TE_DisciplineProjectionDash = 19,
	ETigerDisciplinesEnum__TE_DisciplineBlindingBeauty = 20,
	ETigerDisciplinesEnum__TE_DisciplineRejuvenatingVoice = 21,
	ETigerDisciplinesEnum__TE_DisciplineShackles = 22,
	ETigerDisciplinesEnum__TE_DisciplineTraps = 23,
	ETigerDisciplinesEnum__TE_DisciplineShockwavePunch = 24,
	ETigerDisciplinesEnum__TE_WeaponAbilityAxeThrow = 25,
	ETigerDisciplinesEnum__TE_WeaponAbilityDash = 26,
	ETigerDisciplinesEnum__TE_WeaponAbilityHook = 27,
	ETigerDisciplinesEnum__TE_WeaponAbilityReflect = 28,
	ETigerDisciplinesEnum__TE_WeaponAbilitySpikedBat = 29,
	ETigerDisciplinesEnum__TE_WeaponAbilityGreatsword = 30,
	ETigerDisciplinesEnum__TE_WeaponAbilityThrowingKnifes = 31,
	ETigerDisciplinesEnum__TE_DisciplineFleshOfMarble = 32,
	ETigerDisciplinesEnum__TE_DisciplineTankyCharge = 33,
	ETigerDisciplinesEnum__TE_DisciplineCount = 34,
	ETigerDisciplinesEnum__TE_MAX  = 35
};


// Enum Tiger.ETigerDisciplineSlot
enum class ETigerDisciplineSlot : uint8_t
{
	ETigerDisciplineSlot__TE_DisciplineSlotLeft = 0,
	ETigerDisciplineSlot__TE_DisciplineSlotSuper = 1,
	ETigerDisciplineSlot__TE_DisciplineSlotRight = 2,
	ETigerDisciplineSlot__TE_DisciplineSlotCount = 3,
	ETigerDisciplineSlot__TE_MAX   = 4
};


// Enum Tiger.ETigerCharacterActions
enum class ETigerCharacterActions : uint8_t
{
	ETigerCharacterActions__Reloading = 0,
	ETigerCharacterActions__Shooting = 1,
	ETigerCharacterActions__Aiming = 2,
	ETigerCharacterActions__Blocking = 3,
	ETigerCharacterActions__MeleeAttack = 4,
	ETigerCharacterActions__Climbing = 5,
	ETigerCharacterActions__LedgeGrab = 6,
	ETigerCharacterActions__LowVault = 7,
	ETigerCharacterActions__Interacting = 8,
	ETigerCharacterActions__UseDiscipline = 9,
	ETigerCharacterActions__SwitchWeapon = 10,
	ETigerCharacterActions__Jump   = 11,
	ETigerCharacterActions__Sprinting = 12,
	ETigerCharacterActions__AlternateAction = 13,
	ETigerCharacterActions__UseConsumable = 14,
	ETigerCharacterActions__None   = 15,
	ETigerCharacterActions__ETigerCharacterActions_MAX = 16
};


// Enum Tiger.ETigerDisciplineEvent
enum class ETigerDisciplineEvent : uint8_t
{
	ETigerDisciplineEvent__ScoutSpawned = 0,
	ETigerDisciplineEvent__ScoutDespawned = 1,
	ETigerDisciplineEvent__AnimationCallback = 2,
	ETigerDisciplineEvent__ProjectionDied = 3,
	ETigerDisciplineEvent__TeleportToProjection = 4,
	ETigerDisciplineEvent__EnablePlayerMovement = 5,
	ETigerDisciplineEvent__WeaponAbility_ThrowHook = 6,
	ETigerDisciplineEvent__ProjectionDiedDueToOutOfRange = 7,
	ETigerDisciplineEvent__ETigerDisciplineEvent_MAX = 8
};


// Enum Tiger.ETigerInputActionResult
enum class ETigerInputActionResult : uint8_t
{
	ETigerInputActionResult__Failed = 0,
	ETigerInputActionResult__Buffer = 1,
	ETigerInputActionResult__Success = 2,
	ETigerInputActionResult__ETigerInputActionResult_MAX = 3
};


// Enum Tiger.ETigerTraversalAction
enum class ETigerTraversalAction : uint8_t
{
	ETigerTraversalAction__Jump    = 0,
	ETigerTraversalAction__WallJump = 1,
	ETigerTraversalAction__SlideBegin = 2,
	ETigerTraversalAction__SlideEnd = 3,
	ETigerTraversalAction__SlideJump = 4,
	ETigerTraversalAction__AirDash = 5,
	ETigerTraversalAction__WallGrindStarted = 6,
	ETigerTraversalAction__WallGrindEnded = 7,
	ETigerTraversalAction__ClimbStarted = 8,
	ETigerTraversalAction__ClimbEnded = 9,
	ETigerTraversalAction__HardLanding = 10,
	ETigerTraversalAction__ETigerTraversalAction_MAX = 11
};


// Enum Tiger.ETigerCharacterAkAlignmentType
enum class ETigerCharacterAkAlignmentType : uint8_t
{
	ETigerCharacterAkAlignmentType__Me = 0,
	ETigerCharacterAkAlignmentType__Ally = 1,
	ETigerCharacterAkAlignmentType__Enemy = 2,
	ETigerCharacterAkAlignmentType__Count = 3,
	ETigerCharacterAkAlignmentType__ETigerCharacterAkAlignmentType_MAX = 4
};


// Enum Tiger.ETigerCharacterAction
enum class ETigerCharacterAction : uint8_t
{
	ETigerCharacterAction__Dodged  = 0,
	ETigerCharacterAction__MeleeAttack = 1,
	ETigerCharacterAction__RangedAttack = 2,
	ETigerCharacterAction__Aimed   = 3,
	ETigerCharacterAction__DisciplineActivated = 4,
	ETigerCharacterAction__SuperDisciplineActivated = 5,
	ETigerCharacterAction__PickedUpItem = 6,
	ETigerCharacterAction__BeginBlock = 7,
	ETigerCharacterAction__RangedDamageTaken = 8,
	ETigerCharacterAction__MeleeDamageTaken = 9,
	ETigerCharacterAction__DisciplineDamageTaken = 10,
	ETigerCharacterAction__OtherDamageTaken = 11,
	ETigerCharacterAction__DodgeAborted = 12,
	ETigerCharacterAction__DisciplineReleased = 13,
	ETigerCharacterAction__Downed  = 14,
	ETigerCharacterAction__DamageDealt = 15,
	ETigerCharacterAction__ETigerCharacterAction_MAX = 16
};


// Enum Tiger.ETigerClan
enum class ETigerClan : uint8_t
{
	ETigerClan__Brujah             = 0,
	ETigerClan__Nosferatu          = 1,
	ETigerClan__Toreador           = 2,
	ETigerClan__Ventrue            = 3,
	ETigerClan__Count              = 4,
	ETigerClan__ETigerClan_MAX     = 5
};


// Enum Tiger.ETigerCharacterType
enum class ETigerCharacterType : uint8_t
{
	ETigerCharacterType__Player    = 0,
	ETigerCharacterType__Npc       = 1,
	ETigerCharacterType__TutorialTrainer = 2,
	ETigerCharacterType__PlayerBot = 3,
	ETigerCharacterType__Count     = 4,
	ETigerCharacterType__ETigerCharacterType_MAX = 5
};


// Enum Tiger.ETigerGender
enum class ETigerGender : uint8_t
{
	ETigerGender__Female           = 0,
	ETigerGender__Male             = 1,
	ETigerGender__Count            = 2,
	ETigerGender__ETigerGender_MAX = 3
};


// Enum Tiger.ETigerServerScalabilityTarget
enum class ETigerServerScalabilityTarget : uint8_t
{
	ETigerServerScalabilityTarget__Target_10Hz = 0,
	ETigerServerScalabilityTarget__Target_20Hz = 1,
	ETigerServerScalabilityTarget__Target_30Hz = 2,
	ETigerServerScalabilityTarget__Target_MAX = 3
};


// Enum Tiger.ETigerMatchMode
enum class ETigerMatchMode : uint8_t
{
	ETigerMatchMode__Default       = 0,
	ETigerMatchMode__Ranked        = 1,
	ETigerMatchMode__Tutorial      = 2,
	ETigerMatchMode__Count         = 3,
	ETigerMatchMode__ETigerMatchMode_MAX = 4
};


// Enum Tiger.ETigerMatchSettingState
enum class ETigerMatchSettingState : uint8_t
{
	ETigerMatchSettingState__Default = 0,
	ETigerMatchSettingState__Active = 1,
	ETigerMatchSettingState__ActiveAsVariation = 2,
	ETigerMatchSettingState__ETigerMatchSettingState_MAX = 3
};


// Enum Tiger.ETigerItemRarity
enum class ETigerItemRarity : uint8_t
{
	ETigerItemRarity__TigerItemRarity_Common = 0,
	ETigerItemRarity__TigerItemRarity_Uncommon = 1,
	ETigerItemRarity__TigerItemRarity_Rare = 2,
	ETigerItemRarity__TigerItemRarity_Epic = 3,
	ETigerItemRarity__TigerItemRarity_Legendary = 4,
	ETigerItemRarity__TigerItemRarity_Size = 5,
	ETigerItemRarity__TigerItemRarity_MAX = 6
};


// Enum Tiger.ETigerMatchState
enum class ETigerMatchState : uint8_t
{
	ETigerMatchState__MatchNotStarted = 0,
	ETigerMatchState__MatchStarted = 1,
	ETigerMatchState__OneLastGroupAlive = 2,
	ETigerMatchState__CapturePointCaptured = 3,
	ETigerMatchState__MatchEnded   = 4,
	ETigerMatchState__ETigerMatchState_MAX = 5
};


// Enum Tiger.ETigerPreMatchState
enum class ETigerPreMatchState : uint8_t
{
	ETigerPreMatchState__Unknown   = 0,
	ETigerPreMatchState__WaitingForGroups = 1,
	ETigerPreMatchState__WaitingForPlayerConnections = 2,
	ETigerPreMatchState__RebalancingGroups = 3,
	ETigerPreMatchState__PreSpawnSelect = 4,
	ETigerPreMatchState__SpawnSelect = 5,
	ETigerPreMatchState__PostSpawnSelect = 6,
	ETigerPreMatchState__ArchetypeSelect = 7,
	ETigerPreMatchState__SpawnPawns = 8,
	ETigerPreMatchState__TeamView  = 9,
	ETigerPreMatchState__WaitingForLoadingPlayers = 10,
	ETigerPreMatchState__FreeLookPreparationCountdown = 11,
	ETigerPreMatchState__PreMatchEnded = 12,
	ETigerPreMatchState__ETigerPreMatchState_MAX = 13
};


// Enum Tiger.EMatchBalanceMode
enum class EMatchBalanceMode : uint8_t
{
	EMatchBalanceMode__Solo        = 0,
	EMatchBalanceMode__Group       = 1,
	EMatchBalanceMode__Count       = 2,
	EMatchBalanceMode__EMatchBalanceMode_MAX = 3
};


// Enum Tiger.ETigerMatchType
enum class ETigerMatchType : uint8_t
{
	ETigerMatchType__RegularMatch  = 0,
	ETigerMatchType__IntroMatch    = 1,
	ETigerMatchType__ETigerMatchType_MAX = 2
};


// Enum Tiger.ETigerMetaStoreEventType
enum class ETigerMetaStoreEventType : uint8_t
{
	ETigerMetaStoreEventType__ConfigAdded = 0,
	ETigerMetaStoreEventType__ConfigChanged = 1,
	ETigerMetaStoreEventType__ConfigGetFailed = 2,
	ETigerMetaStoreEventType__ETigerMetaStoreEventType_MAX = 3
};


// Enum Tiger.ETigerMetaStoreCategoryType
enum class ETigerMetaStoreCategoryType : uint8_t
{
	ETigerMetaStoreCategoryType__All = 0,
	ETigerMetaStoreCategoryType__FlashStore = 1,
	ETigerMetaStoreCategoryType__Battlepass = 2,
	ETigerMetaStoreCategoryType__SeasonRankSkip = 3,
	ETigerMetaStoreCategoryType__ETigerMetaStoreCategoryType_MAX = 4
};


// Enum Tiger.ETigerBuyStoreEntryResponseCode
enum class ETigerBuyStoreEntryResponseCode : uint8_t
{
	ETigerBuyStoreEntryResponseCode__Success = 0,
	ETigerBuyStoreEntryResponseCode__Error_InsufficentFunds = 1,
	ETigerBuyStoreEntryResponseCode__Error_NoVendor = 2,
	ETigerBuyStoreEntryResponseCode__Error_InvalidEntry = 3,
	ETigerBuyStoreEntryResponseCode__Error_NoPlayerDataService = 4,
	ETigerBuyStoreEntryResponseCode__Error_BackendError = 5,
	ETigerBuyStoreEntryResponseCode__Error_NoResponse = 6,
	ETigerBuyStoreEntryResponseCode__Error_ParsePlayerTransactionalData = 7,
	ETigerBuyStoreEntryResponseCode__Error_BuyResult_InsufficentFunds = 8,
	ETigerBuyStoreEntryResponseCode__Error_BuyResult_InsufficientItems = 9,
	ETigerBuyStoreEntryResponseCode__Error_BuyResult_ExpiredItem = 10,
	ETigerBuyStoreEntryResponseCode__Error_BuyResult_Unknown = 11,
	ETigerBuyStoreEntryResponseCode__Error_TimedOut = 12,
	ETigerBuyStoreEntryResponseCode__Error_AlreadyOwned = 13,
	ETigerBuyStoreEntryResponseCode__Error_NoDatabase = 14,
	ETigerBuyStoreEntryResponseCode__ETigerBuyStoreEntryResponseCode_MAX = 15
};


// Enum Tiger.ETigerPowerKitType
enum class ETigerPowerKitType : uint8_t
{
	ETigerPowerKitType__None       = 0,
	ETigerPowerKitType__Veteran    = 1,
	ETigerPowerKitType__Outlaw     = 2,
	ETigerPowerKitType__Siren      = 3,
	ETigerPowerKitType__Nightingale = 4,
	ETigerPowerKitType__Animalist  = 5,
	ETigerPowerKitType__Technocrat = 6,
	ETigerPowerKitType__Ventrue01  = 7,
	ETigerPowerKitType__Count      = 8,
	ETigerPowerKitType__ETigerPowerKitType_MAX = 9
};


// Enum Tiger.ETigerThrallId
enum class ETigerThrallId : uint8_t
{
	ETigerThrallId__None           = 0,
	ETigerThrallId__Brutallist     = 1,
	ETigerThrallId__Rebel          = 2,
	ETigerThrallId__Hacker         = 3,
	ETigerThrallId__Monster        = 4,
	ETigerThrallId__Lover          = 5,
	ETigerThrallId__Model          = 6,
	ETigerThrallId__Max            = 7
};


// Enum Tiger.ETigerChallengeCategory
enum class ETigerChallengeCategory : uint8_t
{
	ETigerChallengeCategory__None  = 0,
	ETigerChallengeCategory__Daily = 1,
	ETigerChallengeCategory__Weekly = 2,
	ETigerChallengeCategory__Mastery = 3,
	ETigerChallengeCategory__Event = 4,
	ETigerChallengeCategory__Test  = 5,
	ETigerChallengeCategory__Count = 6,
	ETigerChallengeCategory__ETigerChallengeCategory_MAX = 7
};


// Enum Tiger.ETigerEventSystemActivationState
enum class ETigerEventSystemActivationState : uint8_t
{
	ETigerEventSystemActivationState__Pending = 0,
	ETigerEventSystemActivationState__Active = 1,
	ETigerEventSystemActivationState__Expired = 2,
	ETigerEventSystemActivationState__ETigerEventSystemActivationState_MAX = 3
};


// Enum Tiger.ETigerPlayerEvent
enum class ETigerPlayerEvent : uint8_t
{
	ETigerPlayerEvent__None        = 0,
	ETigerPlayerEvent__OnFeedingCompleted = 1,
	ETigerPlayerEvent__OnRatFeedingCompleted = 2,
	ETigerPlayerEvent__OnFedOnHighPotenceBlood = 3,
	ETigerPlayerEvent__OnDownedPlayer = 4,
	ETigerPlayerEvent__OnDownedBloodHuntedPlayer = 5,
	ETigerPlayerEvent__OnDownedPlayerWithHeadshot = 6,
	ETigerPlayerEvent__OnDownedPlayerWithMelee = 7,
	ETigerPlayerEvent__OnDownedEntity = 8,
	ETigerPlayerEvent__OnDiablerizedPlayer = 9,
	ETigerPlayerEvent__OnDiablerizedBloodHuntedPlayer = 10,
	ETigerPlayerEvent__OnSurvivedHolyIncenseWave = 11,
	ETigerPlayerEvent__OnKilledEntityGrunt = 12,
	ETigerPlayerEvent__OnKilledOtherPlayer = 13,
	ETigerPlayerEvent__OnKilledBloodHuntedPlayer = 14,
	ETigerPlayerEvent__OnPickedUpRelic = 15,
	ETigerPlayerEvent__OnFedOnSuperHighPotenceBlood = 16,
	ETigerPlayerEvent__OnFedOnEntity = 17,
	ETigerPlayerEvent__OnPickedUpArtifact = 18,
	ETigerPlayerEvent__OnNewTrackingTrailSpawned = 19,
	ETigerPlayerEvent__OnAssistDowned = 20,
	ETigerPlayerEvent__OnAssistKill = 21,
	ETigerPlayerEvent__OnRevivedPlayer = 22,
	ETigerPlayerEvent__OnSurviveBloodHunted = 23,
	ETigerPlayerEvent__OnSurviveDownedState = 24,
	ETigerPlayerEvent__OnOpenedCrate = 25,
	ETigerPlayerEvent__OnFirstStoreBurglary = 26,
	ETigerPlayerEvent__OnWipedOtherGroup = 27,
	ETigerPlayerEvent__OnPickedUpCollectible = 28,
	ETigerPlayerEvent__OnPlayerSharkDeath = 29,
	ETigerPlayerEvent__OnAssistShark = 30,
	ETigerPlayerEvent__OnDowned    = 31,
	ETigerPlayerEvent__Size        = 32,
	ETigerPlayerEvent__ETigerPlayerEvent_MAX = 33
};


// Enum Tiger.ETigerSeasonExperienceSource
enum class ETigerSeasonExperienceSource : uint8_t
{
	ETigerSeasonExperienceSource__Placement = 0,
	ETigerSeasonExperienceSource__PlacementBonus = 1,
	ETigerSeasonExperienceSource__SurvivalTime = 2,
	ETigerSeasonExperienceSource__DownedEnemies = 3,
	ETigerSeasonExperienceSource__Eliminations = 4,
	ETigerSeasonExperienceSource__Diableries = 5,
	ETigerSeasonExperienceSource__Assists = 6,
	ETigerSeasonExperienceSource__DamageDealt = 7,
	ETigerSeasonExperienceSource__EntityKilled = 8,
	ETigerSeasonExperienceSource__IngameAchievements = 9,
	ETigerSeasonExperienceSource__ChallengeRewards = 10,
	ETigerSeasonExperienceSource__Collectible = 11,
	ETigerSeasonExperienceSource__QuestRewards = 12,
	ETigerSeasonExperienceSource__Count = 13,
	ETigerSeasonExperienceSource__ETigerSeasonExperienceSource_MAX = 14
};


// Enum Tiger.ETigerGrimoireEntryState
enum class ETigerGrimoireEntryState : uint8_t
{
	ETigerGrimoireEntryState__Locked = 0,
	ETigerGrimoireEntryState__Unlocked = 1,
	ETigerGrimoireEntryState__Read = 2,
	ETigerGrimoireEntryState__ETigerGrimoireEntryState_MAX = 3
};


// Enum Tiger.ETigerLoginStatus
enum class ETigerLoginStatus : uint8_t
{
	ETigerLoginStatus__NotLoggedIn = 0,
	ETigerLoginStatus__LoggingIn   = 1,
	ETigerLoginStatus__LoggedIn    = 2,
	ETigerLoginStatus__ETigerLoginStatus_MAX = 3
};


// Enum Tiger.ETigerOnlinePrivilegeCheckStatus
enum class ETigerOnlinePrivilegeCheckStatus : uint8_t
{
	ETigerOnlinePrivilegeCheckStatus__NotChecked = 0,
	ETigerOnlinePrivilegeCheckStatus__Checking = 1,
	ETigerOnlinePrivilegeCheckStatus__Checked = 2,
	ETigerOnlinePrivilegeCheckStatus__ETigerOnlinePrivilegeCheckStatus_MAX = 3
};


// Enum Tiger.ETigerVersionCheckStatus
enum class ETigerVersionCheckStatus : uint8_t
{
	ETigerVersionCheckStatus__NotChecked = 0,
	ETigerVersionCheckStatus__Checking = 1,
	ETigerVersionCheckStatus__Validated = 2,
	ETigerVersionCheckStatus__ETigerVersionCheckStatus_MAX = 3
};


// Enum Tiger.ETigerLegalDocumentType
enum class ETigerLegalDocumentType : uint8_t
{
	ETigerLegalDocumentType__Eula  = 0,
	ETigerLegalDocumentType__ExportGate = 1,
	ETigerLegalDocumentType__ExportGateDenied = 2,
	ETigerLegalDocumentType__PrivacyPolicy = 3,
	ETigerLegalDocumentType__Newsletter = 4,
	ETigerLegalDocumentType__NewsletterKorea = 5,
	ETigerLegalDocumentType__KoreaSpecial1 = 6,
	ETigerLegalDocumentType__KoreaSpecial2 = 7,
	ETigerLegalDocumentType__KoreaSpecial3 = 8,
	ETigerLegalDocumentType__KoreaSpecial4 = 9,
	ETigerLegalDocumentType__KoreaSpecial5 = 10,
	ETigerLegalDocumentType__MaxLegalDocumentType = 11,
	ETigerLegalDocumentType__ETigerLegalDocumentType_MAX = 12
};


// Enum Tiger.ETigerTraversalTransitionAction
enum class ETigerTraversalTransitionAction : uint8_t
{
	ETigerTraversalTransitionAction__Jump = 0,
	ETigerTraversalTransitionAction__Crouch = 1,
	ETigerTraversalTransitionAction__OnMovementUpdated = 2,
	ETigerTraversalTransitionAction__OnMovementModeChanged = 3,
	ETigerTraversalTransitionAction__DeltaCorrection = 4,
	ETigerTraversalTransitionAction__InitialReplication = 5,
	ETigerTraversalTransitionAction__Climb = 6,
	ETigerTraversalTransitionAction__Downed = 7,
	ETigerTraversalTransitionAction__FromSavedMove = 8,
	ETigerTraversalTransitionAction__StartedForcedMove = 9,
	ETigerTraversalTransitionAction__Reset = 10,
	ETigerTraversalTransitionAction__FromCorrection = 11,
	ETigerTraversalTransitionAction__ETigerTraversalTransitionAction_MAX = 12
};


// Enum Tiger.ETigerTraversalState
enum class ETigerTraversalState : uint8_t
{
	ETigerTraversalState__Walking  = 0,
	ETigerTraversalState__Falling  = 1,
	ETigerTraversalState__Jumping  = 2,
	ETigerTraversalState__WallGrinding = 3,
	ETigerTraversalState__WallJumping = 4,
	ETigerTraversalState__AirDashing = 5,
	ETigerTraversalState__Climbing = 6,
	ETigerTraversalState__LedgeGrabbing = 7,
	ETigerTraversalState__Sliding  = 8,
	ETigerTraversalState__Crouching = 9,
	ETigerTraversalState__SlideJump = 10,
	ETigerTraversalState__Downed   = 11,
	ETigerTraversalState__LowVault = 12,
	ETigerTraversalState__ForcedMove = 13,
	ETigerTraversalState__WallHang = 14,
	ETigerTraversalState__Count    = 15,
	ETigerTraversalState__ETigerTraversalState_MAX = 16
};


// Enum Tiger.ETigerPlayerLifeStatus
enum class ETigerPlayerLifeStatus : uint8_t
{
	ETigerPlayerLifeStatus__Alive  = 0,
	ETigerPlayerLifeStatus__Downed = 1,
	ETigerPlayerLifeStatus__Dead   = 2,
	ETigerPlayerLifeStatus__ETigerPlayerLifeStatus_MAX = 3
};


// Enum Tiger.ETigerBloodType
enum class ETigerBloodType : uint8_t
{
	ETigerBloodType__Choleric      = 0,
	ETigerBloodType__Melancholic   = 1,
	ETigerBloodType__Phlegmatic    = 2,
	ETigerBloodType__Sanguine      = 3,
	ETigerBloodType__None          = 4,
	ETigerBloodType__Count         = 5,
	ETigerBloodType__CountBloodTypes = 6,
	ETigerBloodType__ETigerBloodType_MAX = 7
};


// Enum Tiger.ETigerBloodPotency
enum class ETigerBloodPotency : uint8_t
{
	ETigerBloodPotency__Drained    = 0,
	ETigerBloodPotency__Normal     = 1,
	ETigerBloodPotency__Potent     = 2,
	ETigerBloodPotency__HighPotent = 3,
	ETigerBloodPotency__Count      = 4,
	ETigerBloodPotency__ETigerBloodPotency_MAX = 5
};


// Enum Tiger.ETigerNPCType
enum class ETigerNPCType : uint8_t
{
	ETigerNPCType__Civilian        = 0,
	ETigerNPCType__Guard           = 1,
	ETigerNPCType__Entity          = 2,
	ETigerNPCType__Judge           = 3,
	ETigerNPCType__Count           = 4,
	ETigerNPCType__ETigerNPCType_MAX = 5
};


// Enum Tiger.ETigerDetachMethod
enum class ETigerDetachMethod : uint8_t
{
	ETigerDetachMethod__Destroy    = 0,
	ETigerDetachMethod__Drop       = 1,
	ETigerDetachMethod__ETigerDetachMethod_MAX = 2
};


// Enum Tiger.ETigerAIAnimationMode
enum class ETigerAIAnimationMode : uint8_t
{
	ETigerAIAnimationMode__Neutral = 0,
	ETigerAIAnimationMode__Suspicious = 1,
	ETigerAIAnimationMode__Threatened = 2,
	ETigerAIAnimationMode__BloodDrained = 3,
	ETigerAIAnimationMode__Lured   = 4,
	ETigerAIAnimationMode__Downed  = 5,
	ETigerAIAnimationMode__Sprinting = 6,
	ETigerAIAnimationMode__Strafing = 7,
	ETigerAIAnimationMode__ETigerAIAnimationMode_MAX = 8
};


// Enum Tiger.ETigerAIMasqueradeState
enum class ETigerAIMasqueradeState : uint8_t
{
	ETigerAIMasqueradeState__None  = 0,
	ETigerAIMasqueradeState__Downed = 1,
	ETigerAIMasqueradeState__Suspicious = 2,
	ETigerAIMasqueradeState__Threatened = 3,
	ETigerAIMasqueradeState__Count = 4,
	ETigerAIMasqueradeState__ETigerAIMasqueradeState_MAX = 5
};


// Enum Tiger.ETigerCivilianEmotionalState
enum class ETigerCivilianEmotionalState : uint8_t
{
	ETigerCivilianEmotionalState__Neutral = 0,
	ETigerCivilianEmotionalState__Cocky = 1,
	ETigerCivilianEmotionalState__Disbelief = 2,
	ETigerCivilianEmotionalState__Drunk = 3,
	ETigerCivilianEmotionalState__Fearful = 4,
	ETigerCivilianEmotionalState__Flirty = 5,
	ETigerCivilianEmotionalState__Count = 6,
	ETigerCivilianEmotionalState__ETigerCivilianEmotionalState_MAX = 7
};


// Enum Tiger.ETigerGameType
enum class ETigerGameType : uint8_t
{
	ETigerGameType__Elysium        = 0,
	ETigerGameType__BattleRoyale   = 1,
	ETigerGameType__Tutorial       = 2,
	ETigerGameType__PvpArena       = 3,
	ETigerGameType__Benchmark      = 4,
	ETigerGameType__Invalid        = 5,
	ETigerGameType__ETigerGameType_MAX = 6
};


// Enum Tiger.ESessionType
enum class ESessionType : uint8_t
{
	ESessionType__Elysium          = 0,
	ESessionType__Match            = 1,
	ESessionType__TransferFromMatch = 2,
	ESessionType__Tutorial         = 3,
	ESessionType__Boot             = 4,
	ESessionType__Unknown          = 5,
	ESessionType__ESessionType_MAX = 6
};


// Enum Tiger.ETigerSessionSearchStatus
enum class ETigerSessionSearchStatus : uint8_t
{
	ETigerSessionSearchStatus__ReadyToSearch = 0,
	ETigerSessionSearchStatus__Searching = 1,
	ETigerSessionSearchStatus__SessionFound = 2,
	ETigerSessionSearchStatus__JoiningSession = 3,
	ETigerSessionSearchStatus__CouldNotFindSession = 4,
	ETigerSessionSearchStatus__CouldNotJoinSession = 5,
	ETigerSessionSearchStatus__ETigerSessionSearchStatus_MAX = 6
};


// Enum Tiger.ETigerSeasonMatchStatType
enum class ETigerSeasonMatchStatType : uint8_t
{
	ETigerSeasonMatchStatType__Placement = 0,
	ETigerSeasonMatchStatType__LevelReached = 1,
	ETigerSeasonMatchStatType__Kills = 2,
	ETigerSeasonMatchStatType__KillAssists = 3,
	ETigerSeasonMatchStatType__Diableries = 4,
	ETigerSeasonMatchStatType__DamageDone = 5,
	ETigerSeasonMatchStatType__Count = 6,
	ETigerSeasonMatchStatType__ETigerSeasonMatchStatType_MAX = 7
};


// Enum Tiger.ETigerKillerType
enum class ETigerKillerType : uint8_t
{
	ETigerKillerType__Unknown      = 0,
	ETigerKillerType__Player       = 1,
	ETigerKillerType__Entity       = 2,
	ETigerKillerType__RedGas       = 3,
	ETigerKillerType__Shark        = 4,
	ETigerKillerType__Fire         = 5,
	ETigerKillerType__ETigerKillerType_MAX = 6
};


// Enum Tiger.ETigerReportReason
enum class ETigerReportReason : uint8_t
{
	ETigerReportReason__INVALID    = 0,
	ETigerReportReason__CHEATING   = 1,
	ETigerReportReason__EXPLOITING = 2,
	ETigerReportReason__OFFENSIVE_PROFILE = 3,
	ETigerReportReason__VERBAL_ABUSE = 4,
	ETigerReportReason__SCAMMING   = 5,
	ETigerReportReason__SPAMMING   = 6,
	ETigerReportReason__OTHER      = 7,
	ETigerReportReason__COUNT      = 8,
	ETigerReportReason__ETigerReportReason_MAX = 9
};


// Enum Tiger.ETigerGroupingMode
enum class ETigerGroupingMode : uint8_t
{
	ETigerGroupingMode__Solo       = 0,
	ETigerGroupingMode__Group      = 1,
	ETigerGroupingMode__Count      = 2,
	ETigerGroupingMode__ETigerGroupingMode_MAX = 3
};


// Enum Tiger.ETigerGraphicsQualityPS5
enum class ETigerGraphicsQualityPS5 : uint8_t
{
	ETigerGraphicsQualityPS5__Quality = 0,
	ETigerGraphicsQualityPS5__Performance = 1,
	ETigerGraphicsQualityPS5__ETigerGraphicsQualityPS5_MAX = 2
};


// Enum Tiger.ETigerGameActivityType
enum class ETigerGameActivityType : uint8_t
{
	ETigerGameActivityType__SoloCasual = 0,
	ETigerGameActivityType__GroupCasual = 1,
	ETigerGameActivityType__SoloHardcore = 2,
	ETigerGameActivityType__Tutorial = 3,
	ETigerGameActivityType__Count  = 4,
	ETigerGameActivityType__ETigerGameActivityType_MAX = 5
};


// Enum Tiger.ETigerRewardReason
enum class ETigerRewardReason : uint8_t
{
	ETigerRewardReason__Unknown    = 0,
	ETigerRewardReason__Battlepass = 1,
	ETigerRewardReason__Challenge  = 2,
	ETigerRewardReason__ETigerRewardReason_MAX = 3
};


// Enum Tiger.ETigerBattlepassActiveState
enum class ETigerBattlepassActiveState : uint8_t
{
	ETigerBattlepassActiveState__NotStarted = 0,
	ETigerBattlepassActiveState__Active = 1,
	ETigerBattlepassActiveState__Ended = 2,
	ETigerBattlepassActiveState__ETigerBattlepassActiveState_MAX = 3
};


// Enum Tiger.ETigerColourSpace
enum class ETigerColourSpace : uint8_t
{
	ETigerColourSpace__LinearSpace = 0,
	ETigerColourSpace__SrgbSpace   = 1,
	ETigerColourSpace__ETigerColourSpace_MAX = 2
};


// Enum Tiger.ETigerUIColor
enum class ETigerUIColor : uint8_t
{
	ETigerUIColor__Masquerade_None = 0,
	ETigerUIColor__Masquerade_Suspicious = 1,
	ETigerUIColor__Masquerade_Threatened = 2,
	ETigerUIColor__Masquerade_BloodHunted = 3,
	ETigerUIColor__Ally            = 4,
	ETigerUIColor__GroupMember     = 5,
	ETigerUIColor__Crosshair_ActionText = 6,
	ETigerUIColor__Crosshair_ItemPickupDenied = 7,
	ETigerUIColor__Crosshair_ItemPickupDeniedInputKey = 8,
	ETigerUIColor__Text_Header_Orange = 9,
	ETigerUIColor__Text_Header_Red = 10,
	ETigerUIColor__Text_Header_DarkRed = 11,
	ETigerUIColor__Text_HardCurrency = 12,
	ETigerUIColor__Text_NeutralPlayerName = 13,
	ETigerUIColor__Text_PlayerTitle = 14,
	ETigerUIColor__Brand_MedallionYellow = 15,
	ETigerUIColor__Brand_SpurseBlue = 16,
	ETigerUIColor__Brand_JadeGreen = 17,
	ETigerUIColor__Brand_CarmineRed = 18,
	ETigerUIColor__Hitmarker_NoExtraHealth = 19,
	ETigerUIColor__Group_Player1   = 20,
	ETigerUIColor__Group_Player2   = 21,
	ETigerUIColor__Group_Player3   = 22,
	ETigerUIColor__Group_Player4   = 23,
	ETigerUIColor__Rarity_Common   = 24,
	ETigerUIColor__Rarity_Uncommon = 25,
	ETigerUIColor__Rarity_Rare     = 26,
	ETigerUIColor__Rarity_Epic     = 27,
	ETigerUIColor__Rarity_Legendary = 28,
	ETigerUIColor__Heal            = 29,
	ETigerUIColor__ItemType_Weapon = 30,
	ETigerUIColor__ItemType_Ammo   = 31,
	ETigerUIColor__ItemType_Mod    = 32,
	ETigerUIColor__ItemType_Healing = 33,
	ETigerUIColor__ItemType_Consumable = 34,
	ETigerUIColor__ItemType_Artifact = 35,
	ETigerUIColor__Count           = 36,
	ETigerUIColor__ETigerUIColor_MAX = 37
};


// Enum Tiger.ETigerTelemetryMapIds
enum class ETigerTelemetryMapIds : uint8_t
{
	ETigerTelemetryMapIds__Prague  = 0,
	ETigerTelemetryMapIds__Elysium = 1,
	ETigerTelemetryMapIds__Null    = 2,
	ETigerTelemetryMapIds__Tutorial = 3,
	ETigerTelemetryMapIds__Boot    = 4,
	ETigerTelemetryMapIds__TransferFromMatch = 5,
	ETigerTelemetryMapIds__Prague2 = 6,
	ETigerTelemetryMapIds__ETigerTelemetryMapIds_MAX = 7
};


// Enum Tiger.ETargetInteraction
enum class ETargetInteraction : uint8_t
{
	ETargetInteraction__None       = 0,
	ETargetInteraction__PickupItem = 1,
	ETargetInteraction__Lure       = 2,
	ETargetInteraction__Feed       = 3,
	ETargetInteraction__TalkTo     = 4,
	ETargetInteraction__UsingConsumable = 5,
	ETargetInteraction__InteractWithObject = 6,
	ETargetInteraction__DiablerizeTrainer = 7,
	ETargetInteraction__ReviveTrainer = 8,
	ETargetInteraction__JudgeFeed  = 9,
	ETargetInteraction__Diablerize = 10,
	ETargetInteraction__Revive     = 11,
	ETargetInteraction__ETargetInteraction_MAX = 12
};


// Enum Tiger.ETigerWeaponMeleeAttackType
enum class ETigerWeaponMeleeAttackType : uint8_t
{
	ETigerWeaponMeleeAttackType__Invalid = 0,
	ETigerWeaponMeleeAttackType__Normal = 1,
	ETigerWeaponMeleeAttackType__Sprinting = 2,
	ETigerWeaponMeleeAttackType__Aerial = 3,
	ETigerWeaponMeleeAttackType__QuickAttack = 4,
	ETigerWeaponMeleeAttackType__UNUSED = 5,
	ETigerWeaponMeleeAttackType__StrafeAttack = 6,
	ETigerWeaponMeleeAttackType__Heavy = 7,
	ETigerWeaponMeleeAttackType__Count = 8,
	ETigerWeaponMeleeAttackType__ETigerWeaponMeleeAttackType_MAX = 9
};


// Enum Tiger.ETigerTelemetryMatchmackingCancelReason
enum class ETigerTelemetryMatchmackingCancelReason : uint8_t
{
	ETigerTelemetryMatchmackingCancelReason__Input = 0,
	ETigerTelemetryMatchmackingCancelReason__Timeout = 1,
	ETigerTelemetryMatchmackingCancelReason__ExitGame = 2,
	ETigerTelemetryMatchmackingCancelReason__ETigerTelemetryMatchmackingCancelReason_MAX = 3
};


// Enum Tiger.ETigerWeaponSlot
enum class ETigerWeaponSlot : uint8_t
{
	ETigerWeaponSlot__First        = 0,
	ETigerWeaponSlot__Ranged_Primary = 1,
	ETigerWeaponSlot__Ranged_Secondary = 2,
	ETigerWeaponSlot__Melee        = 3,
	ETigerWeaponSlot__Unarmed      = 4,
	ETigerWeaponSlot__Last         = 5,
	ETigerWeaponSlot__Count        = 6,
	ETigerWeaponSlot__ETigerWeaponSlot_MAX = 7
};


// Enum Tiger.ETigerOnlineErrorCategory
enum class ETigerOnlineErrorCategory : uint8_t
{
	ETigerOnlineErrorCategory__ACC = 0,
	ETigerOnlineErrorCategory__SYS = 1,
	ETigerOnlineErrorCategory__SRV = 2,
	ETigerOnlineErrorCategory__NET = 3,
	ETigerOnlineErrorCategory__PLA = 4,
	ETigerOnlineErrorCategory__ETigerOnlineErrorCategory_MAX = 5
};


// Enum Tiger.ETigerAIPlayerAction
enum class ETigerAIPlayerAction : uint8_t
{
	ETigerAIPlayerAction__None     = 0,
	ETigerAIPlayerAction__BulletImpactEnvironment = 1,
	ETigerAIPlayerAction__CollideWithCivilian = 2,
	ETigerAIPlayerAction__CollideWithGuard = 3,
	ETigerAIPlayerAction__DamageDealing = 4,
	ETigerAIPlayerAction__Dodge    = 5,
	ETigerAIPlayerAction__AirDodgeRecovery = 6,
	ETigerAIPlayerAction__FeedingStart = 7,
	ETigerAIPlayerAction__FeedingTick = 8,
	ETigerAIPlayerAction__FeedingEnd = 9,
	ETigerAIPlayerAction__FeedingStoppedOnSpecificNPC = 10,
	ETigerAIPlayerAction__GenericDisciplineActivation = 11,
	ETigerAIPlayerAction__HardLanding = 12,
	ETigerAIPlayerAction__InsideSuspiciousVolume = 13,
	ETigerAIPlayerAction__InsideThreatVolume = 14,
	ETigerAIPlayerAction__MeleeAttack = 15,
	ETigerAIPlayerAction__Mobility = 16,
	ETigerAIPlayerAction__Sprinting = 17,
	ETigerAIPlayerAction__Climbing = 18,
	ETigerAIPlayerAction__AirTime  = 19,
	ETigerAIPlayerAction__ReportSuspectPlayer = 20,
	ETigerAIPlayerAction__ReportThreateningPlayer = 21,
	ETigerAIPlayerAction__ShowingMeleeWeapon = 22,
	ETigerAIPlayerAction__ShowingRangedWeapon = 23,
	ETigerAIPlayerAction__AimingRangedWeapon = 24,
	ETigerAIPlayerAction__WeaponFired = 25,
	ETigerAIPlayerAction__SeenByEntity = 26,
	ETigerAIPlayerAction__SeenByEntityWhenBloodHunted = 27,
	ETigerAIPlayerAction__NotifyMasqueradeBreachSpecificNPC = 28,
	ETigerAIPlayerAction__SeenByGuardWhenBloodHunted = 29,
	ETigerAIPlayerAction__SeenBySuspectingGuard = 30,
	ETigerAIPlayerAction__FeedingStartGuard = 31,
	ETigerAIPlayerAction__FeedingTickGuard = 32,
	ETigerAIPlayerAction__FeedingEndGuard = 33,
	ETigerAIPlayerAction__DiablerizeStart = 34,
	ETigerAIPlayerAction__DiablerizeTick = 35,
	ETigerAIPlayerAction__DiablerizeEnd = 36,
	ETigerAIPlayerAction__HideousPassiveTick = 37,
	ETigerAIPlayerAction__AttackedByGuard = 38,
	ETigerAIPlayerAction__AttackedByEntity = 39,
	ETigerAIPlayerAction__UtilityRoarPower = 40,
	ETigerAIPlayerAction__UtilityRoarPowerCloseRange = 41,
	ETigerAIPlayerAction__ActivateCarAlarm = 42,
	ETigerAIPlayerAction__ActivateInvisibility = 43,
	ETigerAIPlayerAction__DeactivateInvisibility = 44,
	ETigerAIPlayerAction__TeleportToProjectionDash = 45,
	ETigerAIPlayerAction__KilledNPC = 46,
	ETigerAIPlayerAction__ActivateStoreAlarm = 47,
	ETigerAIPlayerAction__SeenByCivilianWhenBloodHunted = 48,
	ETigerAIPlayerAction__DisciplineBegin = 49,
	ETigerAIPlayerAction__DisciplineActivationFOTT = 50,
	ETigerAIPlayerAction__DisciplineActivationMightyLeap = 51,
	ETigerAIPlayerAction__DisciplineActivationSwiftStrike = 52,
	ETigerAIPlayerAction__DisciplineActivationDisplacement = 53,
	ETigerAIPlayerAction__DisciplineActivationGroundSlam = 54,
	ETigerAIPlayerAction__DisciplineActivationFrenzy = 55,
	ETigerAIPlayerAction__DisciplineActivationVanish = 56,
	ETigerAIPlayerAction__DisciplineActivationScouts = 57,
	ETigerAIPlayerAction__DisciplineActivationGuardBreak = 58,
	ETigerAIPlayerAction__DisciplineActivationPassion = 59,
	ETigerAIPlayerAction__DisciplineActivationCharm = 60,
	ETigerAIPlayerAction__DisciplineActivationProjectionDash = 61,
	ETigerAIPlayerAction__DisciplineActivationShackles = 62,
	ETigerAIPlayerAction__DisciplineActivationRejuvanatingVoice = 63,
	ETigerAIPlayerAction__DisciplineActivationAxe = 64,
	ETigerAIPlayerAction__DisciplineActivationKatana = 65,
	ETigerAIPlayerAction__DisciplineActivationDualBlades = 66,
	ETigerAIPlayerAction__DisciplineActivationLaceratingThrow = 67,
	ETigerAIPlayerAction__DisciplineEnd = 68,
	ETigerAIPlayerAction__Count    = 69,
	ETigerAIPlayerAction__ETigerAIPlayerAction_MAX = 70
};


// Enum Tiger.EBodyPart
enum class EBodyPart : uint8_t
{
	EBodyPart__None                = 0,
	EBodyPart__Head                = 1,
	EBodyPart__Chest               = 2,
	EBodyPart__Body                = 3,
	EBodyPart__Arms                = 4,
	EBodyPart__Legs                = 5,
	EBodyPart__MAX                 = 6
};


// Enum Tiger.ETigerTelemetryItemSourceID
enum class ETigerTelemetryItemSourceID : uint8_t
{
	ETigerTelemetryItemSourceID__Cheat = 0,
	ETigerTelemetryItemSourceID__BotCheat = 1,
	ETigerTelemetryItemSourceID__Spawn = 2,
	ETigerTelemetryItemSourceID__Floor = 3,
	ETigerTelemetryItemSourceID__Van = 4,
	ETigerTelemetryItemSourceID__Store = 5,
	ETigerTelemetryItemSourceID__EntityCorpse = 6,
	ETigerTelemetryItemSourceID__JudgeCorpse = 7,
	ETigerTelemetryItemSourceID__PlayerCorpse = 8,
	ETigerTelemetryItemSourceID__PlayerDrop = 9,
	ETigerTelemetryItemSourceID__LootCrate = 10,
	ETigerTelemetryItemSourceID__Collectible = 11,
	ETigerTelemetryItemSourceID__Perk = 12,
	ETigerTelemetryItemSourceID__ServerCorrection = 13,
	ETigerTelemetryItemSourceID__ETigerTelemetryItemSourceID_MAX = 14
};


// Enum Tiger.ETigerMusicAudioState
enum class ETigerMusicAudioState : uint8_t
{
	ETigerMusicAudioState__None    = 0,
	ETigerMusicAudioState__Unknown = 1,
	ETigerMusicAudioState__Silent  = 2,
	ETigerMusicAudioState__TitleScreen = 3,
	ETigerMusicAudioState__Ambient = 4,
	ETigerMusicAudioState__Feeding = 5,
	ETigerMusicAudioState__Elysium = 6,
	ETigerMusicAudioState__RedGas  = 7,
	ETigerMusicAudioState__Combat  = 8,
	ETigerMusicAudioState__Deployment = 9,
	ETigerMusicAudioState__PreLoading = 10,
	ETigerMusicAudioState__PostMatch = 11,
	ETigerMusicAudioState__EntityNearby = 12,
	ETigerMusicAudioState__LastStage = 13,
	ETigerMusicAudioState__MasqueradeBreak = 14,
	ETigerMusicAudioState__MainMenu = 15,
	ETigerMusicAudioState__Spectating = 16,
	ETigerMusicAudioState__Count   = 17,
	ETigerMusicAudioState__ETigerMusicAudioState_MAX = 18
};


// Enum Tiger.ETigerAimGlideAudioState
enum class ETigerAimGlideAudioState : uint8_t
{
	ETigerAimGlideAudioState__None = 0,
	ETigerAimGlideAudioState__AimGlide_On = 1,
	ETigerAimGlideAudioState__AimGlide_Off = 2,
	ETigerAimGlideAudioState__Count = 3,
	ETigerAimGlideAudioState__ETigerAimGlideAudioState_MAX = 4
};


// Enum Tiger.ETigerFeedingAudioState
enum class ETigerFeedingAudioState : uint8_t
{
	ETigerFeedingAudioState__None  = 0,
	ETigerFeedingAudioState__IsFeeding = 1,
	ETigerFeedingAudioState__Count = 2,
	ETigerFeedingAudioState__ETigerFeedingAudioState_MAX = 3
};


// Enum Tiger.ETigerCombatAudioState
enum class ETigerCombatAudioState : uint8_t
{
	ETigerCombatAudioState__None   = 0,
	ETigerCombatAudioState__Kindred = 1,
	ETigerCombatAudioState__Entity = 2,
	ETigerCombatAudioState__Count  = 3,
	ETigerCombatAudioState__ETigerCombatAudioState_MAX = 4
};


// Enum Tiger.ETigerAmbienceAudioState
enum class ETigerAmbienceAudioState : uint8_t
{
	ETigerAmbienceAudioState__None = 0,
	ETigerAmbienceAudioState__AmbienceOn = 1,
	ETigerAmbienceAudioState__AmbienceOff = 2,
	ETigerAmbienceAudioState__Count = 3,
	ETigerAmbienceAudioState__ETigerAmbienceAudioState_MAX = 4
};


// Enum Tiger.ETigerMainMenuAudioState
enum class ETigerMainMenuAudioState : uint8_t
{
	ETigerMainMenuAudioState__None = 0,
	ETigerMainMenuAudioState__InMainMenu = 1,
	ETigerMainMenuAudioState__OutMainMenu = 2,
	ETigerMainMenuAudioState__Count = 3,
	ETigerMainMenuAudioState__ETigerMainMenuAudioState_MAX = 4
};


// Enum Tiger.ETigerIndoorAudioState
enum class ETigerIndoorAudioState : uint8_t
{
	ETigerIndoorAudioState__None   = 0,
	ETigerIndoorAudioState__Indoor = 1,
	ETigerIndoorAudioState__Count  = 2,
	ETigerIndoorAudioState__ETigerIndoorAudioState_MAX = 3
};


// Enum Tiger.ETigerBlindedAudioState
enum class ETigerBlindedAudioState : uint8_t
{
	ETigerBlindedAudioState__None  = 0,
	ETigerBlindedAudioState__Blind = 1,
	ETigerBlindedAudioState__Count = 2,
	ETigerBlindedAudioState__ETigerBlindedAudioState_MAX = 3
};


// Enum Tiger.FTigerPerformanceState
enum class EFTigerPerformanceState : uint8_t
{
	FTigerPerformanceState__NotAvailable = 0,
	FTigerPerformanceState__OK     = 1,
	FTigerPerformanceState__Warning = 2,
	FTigerPerformanceState__Severe = 3,
	FTigerPerformanceState__NUM    = 4,
	FTigerPerformanceState__FTigerPerformanceState_MAX = 5
};


// Enum Tiger.ETigerLodSplitMeshQuality
enum class ETigerLodSplitMeshQuality : uint8_t
{
	ETigerLodSplitMeshQuality__FullMesh = 0,
	ETigerLodSplitMeshQuality__OnlyLod0 = 1,
	ETigerLodSplitMeshQuality__NoLod0 = 2,
	ETigerLodSplitMeshQuality__ETigerLodSplitMeshQuality_MAX = 3
};


// Enum Tiger.ETigerCharacterMeshPart
enum class ETigerCharacterMeshPart : uint8_t
{
	ETigerCharacterMeshPart__Body  = 0,
	ETigerCharacterMeshPart__Head  = 1,
	ETigerCharacterMeshPart__Hair  = 2,
	ETigerCharacterMeshPart__Hoodie = 3,
	ETigerCharacterMeshPart__Headgear = 4,
	ETigerCharacterMeshPart__Eyewear = 5,
	ETigerCharacterMeshPart__Weapon = 6,
	ETigerCharacterMeshPart__SecondaryWeapon = 7,
	ETigerCharacterMeshPart__HolsteredWeapon = 8,
	ETigerCharacterMeshPart__SecondaryHolsteredWeapon = 9,
	ETigerCharacterMeshPart__BodyAdditional = 10,
	ETigerCharacterMeshPart__Count = 11,
	ETigerCharacterMeshPart__ETigerCharacterMeshPart_MAX = 12
};


// Enum Tiger.ETigerCharacterDynamicMeshType
enum class ETigerCharacterDynamicMeshType : uint8_t
{
	ETigerCharacterDynamicMeshType__Generic = 0,
	ETigerCharacterDynamicMeshType__Piercing = 1,
	ETigerCharacterDynamicMeshType__Beard = 2,
	ETigerCharacterDynamicMeshType__Count = 3,
	ETigerCharacterDynamicMeshType__ETigerCharacterDynamicMeshType_MAX = 4
};


// Enum Tiger.ETigerOutlineMode
enum class ETigerOutlineMode : uint8_t
{
	ETigerOutlineMode__HeightenedSenses = 0,
	ETigerOutlineMode__Lure        = 1,
	ETigerOutlineMode__EnemyPlayer = 2,
	ETigerOutlineMode__ScoutingFamiliarsGroupMember = 3,
	ETigerOutlineMode__ScoutingFamiliars = 4,
	ETigerOutlineMode__BloodHuntedHSReveal = 5,
	ETigerOutlineMode__BloodHunted = 6,
	ETigerOutlineMode__CapturingHaven = 7,
	ETigerOutlineMode__CharmingUs  = 8,
	ETigerOutlineMode__GroupMember = 9,
	ETigerOutlineMode__LocalPlayer = 10,
	ETigerOutlineMode__Count       = 11,
	ETigerOutlineMode__None        = 12,
	ETigerOutlineMode__ETigerOutlineMode_MAX = 13
};


// Enum Tiger.ETigerPersistentStoreCategory
enum class ETigerPersistentStoreCategory : uint8_t
{
	ETigerPersistentStoreCategory__Featured = 0,
	ETigerPersistentStoreCategory__Apparel = 1,
	ETigerPersistentStoreCategory__Character = 2,
	ETigerPersistentStoreCategory__SkinColor = 3,
	ETigerPersistentStoreCategory__EyeBrows = 4,
	ETigerPersistentStoreCategory__EyebrowColors = 5,
	ETigerPersistentStoreCategory__EyebrowCategory = 6,
	ETigerPersistentStoreCategory__Beards = 7,
	ETigerPersistentStoreCategory__Hair = 8,
	ETigerPersistentStoreCategory__EyeColors = 9,
	ETigerPersistentStoreCategory__Accessories = 10,
	ETigerPersistentStoreCategory__Ink = 11,
	ETigerPersistentStoreCategory__Ethnicity = 12,
	ETigerPersistentStoreCategory__HairStyle = 13,
	ETigerPersistentStoreCategory__HairColor = 14,
	ETigerPersistentStoreCategory__FacialHair = 15,
	ETigerPersistentStoreCategory__FacialHairColor = 16,
	ETigerPersistentStoreCategory__FacePaint = 17,
	ETigerPersistentStoreCategory__Tattoo = 18,
	ETigerPersistentStoreCategory__Mask = 19,
	ETigerPersistentStoreCategory__Glasses = 20,
	ETigerPersistentStoreCategory__Body = 21,
	ETigerPersistentStoreCategory__BodyCategory = 22,
	ETigerPersistentStoreCategory__Emote = 23,
	ETigerPersistentStoreCategory__PlayerIcon = 24,
	ETigerPersistentStoreCategory__PlayerCardBackground = 25,
	ETigerPersistentStoreCategory__PlayerCardShape = 26,
	ETigerPersistentStoreCategory__Count = 27,
	ETigerPersistentStoreCategory__ETigerPersistentStoreCategory_MAX = 28
};


// Enum Tiger.ETigerPlayerApperanceChangeReason
enum class ETigerPlayerApperanceChangeReason : uint8_t
{
	ETigerPlayerApperanceChangeReason__Generic = 0,
	ETigerPlayerApperanceChangeReason__CharacterSwitch = 1,
	ETigerPlayerApperanceChangeReason__ETigerPlayerApperanceChangeReason_MAX = 2
};


// Enum Tiger.ETigerMatchmakingPlatform
enum class ETigerMatchmakingPlatform : uint8_t
{
	ETigerMatchmakingPlatform__All = 0,
	ETigerMatchmakingPlatform__PlatformOnly = 1,
	ETigerMatchmakingPlatform__Count = 2,
	ETigerMatchmakingPlatform__ETigerMatchmakingPlatform_MAX = 3
};


// Enum Tiger.ETigerGrimoireUnlockType
enum class ETigerGrimoireUnlockType : uint8_t
{
	ETigerGrimoireUnlockType__SingleEntry = 0,
	ETigerGrimoireUnlockType__NextSubEntry = 1,
	ETigerGrimoireUnlockType__RandomSubEntry = 2,
	ETigerGrimoireUnlockType__ETigerGrimoireUnlockType_MAX = 3
};


// Enum Tiger.ETigerFriendLoadStatus
enum class ETigerFriendLoadStatus : uint8_t
{
	ETigerFriendLoadStatus__Unloaded = 0,
	ETigerFriendLoadStatus__Loading = 1,
	ETigerFriendLoadStatus__Loaded = 2,
	ETigerFriendLoadStatus__LoadFailed = 3,
	ETigerFriendLoadStatus__ETigerFriendLoadStatus_MAX = 4
};


// Enum Tiger.ETigerOnlineServiceStatus
enum class ETigerOnlineServiceStatus : uint8_t
{
	ETigerOnlineServiceStatus__Available = 0,
	ETigerOnlineServiceStatus__Unavailable = 1,
	ETigerOnlineServiceStatus__ETigerOnlineServiceStatus_MAX = 2
};


// Enum Tiger.ETigerJoinedPartyFailedReason
enum class ETigerJoinedPartyFailedReason : uint8_t
{
	ETigerJoinedPartyFailedReason__PartyFull = 0,
	ETigerJoinedPartyFailedReason__PartyInMatchSession = 1,
	ETigerJoinedPartyFailedReason__Unknown = 2,
	ETigerJoinedPartyFailedReason__ETigerJoinedPartyFailedReason_MAX = 3
};


// Enum Tiger.ETigerWorldCompositionGridLayout
enum class ETigerWorldCompositionGridLayout : uint8_t
{
	ETigerWorldCompositionGridLayout__QuadTree = 0,
	ETigerWorldCompositionGridLayout__HexGrid = 1,
	ETigerWorldCompositionGridLayout__ETigerWorldCompositionGridLayout_MAX = 2
};


// Enum Tiger.ETigerMasqueradeConsequenceDeactivationReason
enum class ETigerMasqueradeConsequenceDeactivationReason : uint8_t
{
	ETigerMasqueradeConsequenceDeactivationReason__Command = 0,
	ETigerMasqueradeConsequenceDeactivationReason__Expired = 1,
	ETigerMasqueradeConsequenceDeactivationReason__PlayerDied = 2,
	ETigerMasqueradeConsequenceDeactivationReason__EndPlay = 3,
	ETigerMasqueradeConsequenceDeactivationReason__ETigerMasqueradeConsequenceDeactivationReason_MAX = 4
};


// Enum Tiger.ETigerDamageCauser
enum class ETigerDamageCauser : uint8_t
{
	ETigerDamageCauser__Unknown    = 0,
	ETigerDamageCauser__HolyIncense = 1,
	ETigerDamageCauser__Water      = 2,
	ETigerDamageCauser__Helicopter = 3,
	ETigerDamageCauser__NPC        = 4,
	ETigerDamageCauser__Player     = 5,
	ETigerDamageCauser__Trigger    = 6,
	ETigerDamageCauser__ETigerDamageCauser_MAX = 7
};


// Enum Tiger.ETigerClosestActorType
enum class ETigerClosestActorType : uint8_t
{
	ETigerClosestActorType__ResurrectAltar = 0,
	ETigerClosestActorType__Count  = 1,
	ETigerClosestActorType__ETigerClosestActorType_MAX = 2
};


// Enum Tiger.ETigerBloodResonanceBlockType
enum class ETigerBloodResonanceBlockType : uint8_t
{
	ETigerBloodResonanceBlockType__BloodType = 0,
	ETigerBloodResonanceBlockType__ResonanceCap = 1,
	ETigerBloodResonanceBlockType__Count = 2,
	ETigerBloodResonanceBlockType__ETigerBloodResonanceBlockType_MAX = 3
};


// Enum Tiger.ETigerBloodVeinAlternateAction
enum class ETigerBloodVeinAlternateAction : uint8_t
{
	ETigerBloodVeinAlternateAction__None = 0,
	ETigerBloodVeinAlternateAction__LaunchSolo = 1,
	ETigerBloodVeinAlternateAction__RejoinGroupLaunch = 2,
	ETigerBloodVeinAlternateAction__PassCoterieNavigator = 3,
	ETigerBloodVeinAlternateAction__ETigerBloodVeinAlternateAction_MAX = 4
};


// Enum Tiger.ETigerSelectNewSpectatorDirection
enum class ETigerSelectNewSpectatorDirection : uint8_t
{
	ETigerSelectNewSpectatorDirection__Next = 0,
	ETigerSelectNewSpectatorDirection__Previous = 1,
	ETigerSelectNewSpectatorDirection__ETigerSelectNewSpectatorDirection_MAX = 2
};


// Enum Tiger.ETigerMissionSuccessRating
enum class ETigerMissionSuccessRating : uint8_t
{
	ETigerMissionSuccessRating__Abject_Failure = 0,
	ETigerMissionSuccessRating__Failure = 1,
	ETigerMissionSuccessRating__Slight_Failure = 2,
	ETigerMissionSuccessRating__Success = 3,
	ETigerMissionSuccessRating__Good = 4,
	ETigerMissionSuccessRating__Very_Good = 5,
	ETigerMissionSuccessRating__Perfect = 6,
	ETigerMissionSuccessRating__Minted = 7,
	ETigerMissionSuccessRating__Double_Minted = 8,
	ETigerMissionSuccessRating__ETigerMissionSuccessRating_MAX = 9
};


// Enum Tiger.ETigerCustomizePart
enum class ETigerCustomizePart : uint8_t
{
	ETigerCustomizePart__Outfit    = 0,
	ETigerCustomizePart__BodyType  = 1,
	ETigerCustomizePart__Head      = 2,
	ETigerCustomizePart__SkinColor = 3,
	ETigerCustomizePart__HairType  = 4,
	ETigerCustomizePart__HairColor = 5,
	ETigerCustomizePart__Eyes      = 6,
	ETigerCustomizePart__Tattoo    = 7,
	ETigerCustomizePart__Makeup    = 8,
	ETigerCustomizePart__BeardType = 9,
	ETigerCustomizePart__BeardColor = 10,
	ETigerCustomizePart__Count     = 11,
	ETigerCustomizePart__ETigerCustomizePart_MAX = 12
};


// Enum Tiger.ETigerNewNotificationMenuOptions
enum class ETigerNewNotificationMenuOptions : uint8_t
{
	ETigerNewNotificationMenuOptions__Rootmenu = 0,
	ETigerNewNotificationMenuOptions__LandingPage = 1,
	ETigerNewNotificationMenuOptions__Battlepass = 2,
	ETigerNewNotificationMenuOptions__Challenges = 3,
	ETigerNewNotificationMenuOptions__Challenges_Daily = 4,
	ETigerNewNotificationMenuOptions__Challenges_Weekly = 5,
	ETigerNewNotificationMenuOptions__Grimoire = 6,
	ETigerNewNotificationMenuOptions__Grimoire_Archetypes = 7,
	ETigerNewNotificationMenuOptions__Grimoire_Talents = 8,
	ETigerNewNotificationMenuOptions__Grimoire_Items = 9,
	ETigerNewNotificationMenuOptions__Grimoire_Locations = 10,
	ETigerNewNotificationMenuOptions__Grimoire_Lore = 11,
	ETigerNewNotificationMenuOptions__Grimoire_Characters = 12,
	ETigerNewNotificationMenuOptions__Grimoire_Collectibles = 13,
	ETigerNewNotificationMenuOptions__Grimoire_Tutorial = 14,
	ETigerNewNotificationMenuOptions__Bloodtrack = 15,
	ETigerNewNotificationMenuOptions__Inventory = 16,
	ETigerNewNotificationMenuOptions__Inventory_Character = 17,
	ETigerNewNotificationMenuOptions__Inventory_Body = 18,
	ETigerNewNotificationMenuOptions__Inventory_BodyType = 19,
	ETigerNewNotificationMenuOptions__Inventory_Head = 20,
	ETigerNewNotificationMenuOptions__Inventory_Hair = 21,
	ETigerNewNotificationMenuOptions__Inventory_Haircut = 22,
	ETigerNewNotificationMenuOptions__Inventory_HairColor = 23,
	ETigerNewNotificationMenuOptions__Inventory_Eyes = 24,
	ETigerNewNotificationMenuOptions__Inventory_Eyebrows = 25,
	ETigerNewNotificationMenuOptions__Inventory_EyebrowType = 26,
	ETigerNewNotificationMenuOptions__Inventory_EyebrowColor = 27,
	ETigerNewNotificationMenuOptions__Inventory_Makeup = 28,
	ETigerNewNotificationMenuOptions__Inventory_Tattoos = 29,
	ETigerNewNotificationMenuOptions__Inventory_FacialHair = 30,
	ETigerNewNotificationMenuOptions__Inventory_FacialHairType = 31,
	ETigerNewNotificationMenuOptions__Inventory_FacialHairColor = 32,
	ETigerNewNotificationMenuOptions__Inventory_Wardrobe = 33,
	ETigerNewNotificationMenuOptions__Inventory_Outfit = 34,
	ETigerNewNotificationMenuOptions__Inventory_Accessories = 35,
	ETigerNewNotificationMenuOptions__Inventory_Piercing = 36,
	ETigerNewNotificationMenuOptions__Inventory_Mask = 37,
	ETigerNewNotificationMenuOptions__Inventory_Glasses = 38,
	ETigerNewNotificationMenuOptions__Inventory_Hats = 39,
	ETigerNewNotificationMenuOptions__Inventory_Emotes = 40,
	ETigerNewNotificationMenuOptions__StoreMenu = 41,
	ETigerNewNotificationMenuOptions__Store_Flash = 42,
	ETigerNewNotificationMenuOptions__Store_Currency = 43,
	ETigerNewNotificationMenuOptions__ArchetypeSelect = 44,
	ETigerNewNotificationMenuOptions__Social = 45,
	ETigerNewNotificationMenuOptions__Social_Friends = 46,
	ETigerNewNotificationMenuOptions__Social_Elysium = 47,
	ETigerNewNotificationMenuOptions__Social_Invites = 48,
	ETigerNewNotificationMenuOptions__Social_GroupInvites = 49,
	ETigerNewNotificationMenuOptions__Social_FriendInvites = 50,
	ETigerNewNotificationMenuOptions__Thralls = 51,
	ETigerNewNotificationMenuOptions__Grimoire_Conversations = 52,
	ETigerNewNotificationMenuOptions__Inventory_Icon = 53,
	ETigerNewNotificationMenuOptions__Inventory_CardBackground = 54,
	ETigerNewNotificationMenuOptions__Inbox = 55,
	ETigerNewNotificationMenuOptions__Challenges_Mastery = 56,
	ETigerNewNotificationMenuOptions__Quests = 57,
	ETigerNewNotificationMenuOptions__ArchetypeSelect_Perks = 58,
	ETigerNewNotificationMenuOptions__Count = 59,
	ETigerNewNotificationMenuOptions__None = 60,
	ETigerNewNotificationMenuOptions__ETigerNewNotificationMenuOptions_MAX = 61
};


// Enum Tiger.ETigerGrimoireSortType
enum class ETigerGrimoireSortType : uint8_t
{
	ETigerGrimoireSortType__Default = 0,
	ETigerGrimoireSortType__Alphabetical = 1,
	ETigerGrimoireSortType__Unread = 2,
	ETigerGrimoireSortType__ETigerGrimoireSortType_MAX = 3
};


// Enum Tiger.ETigerResourceBarType
enum class ETigerResourceBarType : uint8_t
{
	ETigerResourceBarType__Custom  = 0,
	ETigerResourceBarType__Shield  = 1,
	ETigerResourceBarType__Health  = 2,
	ETigerResourceBarType__ETigerResourceBarType_MAX = 3
};


// Enum Tiger.ETigerChatMessageCategory
enum class ETigerChatMessageCategory : uint8_t
{
	ETigerChatMessageCategory__Unknown = 0,
	ETigerChatMessageCategory__General = 1,
	ETigerChatMessageCategory__Group = 2,
	ETigerChatMessageCategory__Server = 3,
	ETigerChatMessageCategory__Game = 4,
	ETigerChatMessageCategory__ChatBanned = 5,
	ETigerChatMessageCategory__ETigerChatMessageCategory_MAX = 6
};


// Enum Tiger.ETigerIsDedicatedServer
enum class ETigerIsDedicatedServer : uint8_t
{
	ETigerIsDedicatedServer__DedicatedServer = 0,
	ETigerIsDedicatedServer__Other = 1,
	ETigerIsDedicatedServer__ETigerIsDedicatedServer_MAX = 2
};


// Enum Tiger.ETigerSignificanceBudgetType
enum class ETigerSignificanceBudgetType : uint8_t
{
	ETigerSignificanceBudgetType__Elysium = 0,
	ETigerSignificanceBudgetType__Match = 1,
	ETigerSignificanceBudgetType__Count = 2,
	ETigerSignificanceBudgetType__ETigerSignificanceBudgetType_MAX = 3
};


// Enum Tiger.ETigerWeaponFireMode
enum class ETigerWeaponFireMode : uint8_t
{
	ETigerWeaponFireMode__Single   = 0,
	ETigerWeaponFireMode__Burst    = 1,
	ETigerWeaponFireMode__Automatic = 2,
	ETigerWeaponFireMode__Count    = 3,
	ETigerWeaponFireMode__ETigerWeaponFireMode_MAX = 4
};


// Enum Tiger.ETigerSpreadIncreaseMode
enum class ETigerSpreadIncreaseMode : uint8_t
{
	ETigerSpreadIncreaseMode__Add  = 0,
	ETigerSpreadIncreaseMode__Multiply = 1,
	ETigerSpreadIncreaseMode__ETigerSpreadIncreaseMode_MAX = 2
};


// Enum Tiger.ETigerFireAudioState
enum class ETigerFireAudioState : uint8_t
{
	ETigerFireAudioState__Idle     = 0,
	ETigerFireAudioState__Firing   = 1,
	ETigerFireAudioState__FiringLoopAudio = 2,
	ETigerFireAudioState__ETigerFireAudioState_MAX = 3
};


// Enum Tiger.ETigerAsyncMoveResult
enum class ETigerAsyncMoveResult : uint8_t
{
	ETigerAsyncMoveResult__SuccessfullyStartedAsyncRequest = 0,
	ETigerAsyncMoveResult__Failed  = 1,
	ETigerAsyncMoveResult__ETigerAsyncMoveResult_MAX = 2
};


// Enum Tiger.ETigerBotWeaponPowerState
enum class ETigerBotWeaponPowerState : uint8_t
{
	ETigerBotWeaponPowerState__PowerAvailable = 0,
	ETigerBotWeaponPowerState__PowerInUse = 1,
	ETigerBotWeaponPowerState__PowerOnCooldown = 2,
	ETigerBotWeaponPowerState__ETigerBotWeaponPowerState_MAX = 3
};


// Enum Tiger.ETigerEntityEvent
enum class ETigerEntityEvent : uint8_t
{
	ETigerEntityEvent__NewThreatEnterCombat = 0,
	ETigerEntityEvent__NewThreatInCombat = 1,
	ETigerEntityEvent__Count       = 2,
	ETigerEntityEvent__ETigerEntityEvent_MAX = 3
};


// Enum Tiger.ETigerNpcSquadOrder
enum class ETigerNpcSquadOrder : uint8_t
{
	ETigerNpcSquadOrder__FollowCaptain = 0,
	ETigerNpcSquadOrder__HoldPosition = 1,
	ETigerNpcSquadOrder__OpenFire  = 2,
	ETigerNpcSquadOrder__ETigerNpcSquadOrder_MAX = 3
};


// Enum Tiger.ETigerNpcMovementRestrictionBoundsArea
enum class ETigerNpcMovementRestrictionBoundsArea : uint8_t
{
	ETigerNpcMovementRestrictionBoundsArea__InnerRestriction = 0,
	ETigerNpcMovementRestrictionBoundsArea__OuterRestriction = 1,
	ETigerNpcMovementRestrictionBoundsArea__OutOfBounds = 2,
	ETigerNpcMovementRestrictionBoundsArea__ETigerNpcMovementRestrictionBoundsArea_MAX = 3
};


// Enum Tiger.ETigerJudgeRotationMode
enum class ETigerJudgeRotationMode : uint8_t
{
	ETigerJudgeRotationMode__RotateTowardsPrimaryTarget = 0,
	ETigerJudgeRotationMode__RotateTowardsLocation = 1,
	ETigerJudgeRotationMode__RotateTowardsMovement = 2,
	ETigerJudgeRotationMode__NoForcedRotation = 3,
	ETigerJudgeRotationMode__Count = 4,
	ETigerJudgeRotationMode__ETigerJudgeRotationMode_MAX = 5
};


// Enum Tiger.ETigerPatrollingHelicopterEventType
enum class ETigerPatrollingHelicopterEventType : uint8_t
{
	ETigerPatrollingHelicopterEventType__BloodHunt = 0,
	ETigerPatrollingHelicopterEventType__RooftopGunFight = 1,
	ETigerPatrollingHelicopterEventType__ETigerPatrollingHelicopterEventType_MAX = 2
};


// Enum Tiger.ETigerAiMovementReason
enum class ETigerAiMovementReason : uint8_t
{
	ETigerAiMovementReason__GenericMovement = 0,
	ETigerAiMovementReason__ThreatMovement = 1,
	ETigerAiMovementReason__CapMovement = 2,
	ETigerAiMovementReason__Count  = 3,
	ETigerAiMovementReason__ETigerAiMovementReason_MAX = 4
};


// Enum Tiger.ETigerNpcReactionEventSeverity
enum class ETigerNpcReactionEventSeverity : uint8_t
{
	ETigerNpcReactionEventSeverity__Mild = 0,
	ETigerNpcReactionEventSeverity__Average = 1,
	ETigerNpcReactionEventSeverity__Severe = 2,
	ETigerNpcReactionEventSeverity__ETigerNpcReactionEventSeverity_MAX = 3
};


// Enum Tiger.ETigerAiConditionCheckTiming
enum class ETigerAiConditionCheckTiming : uint8_t
{
	ETigerAiConditionCheckTiming__OnConditionCommandStart = 0,
	ETigerAiConditionCheckTiming__OnConditionCommandEnd = 1,
	ETigerAiConditionCheckTiming__ETigerAiConditionCheckTiming_MAX = 2
};


// Enum Tiger.ETigerAiFailedCAPConditionAction
enum class ETigerAiFailedCAPConditionAction : uint8_t
{
	ETigerAiFailedCAPConditionAction__ExitCAP = 0,
	ETigerAiFailedCAPConditionAction__RedoLastCommand = 1,
	ETigerAiFailedCAPConditionAction__RestartCommandList = 2,
	ETigerAiFailedCAPConditionAction__Wait = 3,
	ETigerAiFailedCAPConditionAction__ETigerAiFailedCAPConditionAction_MAX = 4
};


// Enum Tiger.ETigerAimAssistMode
enum class ETigerAimAssistMode : uint8_t
{
	ETigerAimAssistMode__Regular   = 0,
	ETigerAimAssistMode__RegularOn = 1,
	ETigerAimAssistMode__AimDownSights = 2,
	ETigerAimAssistMode__AimDownSightsOn = 3,
	ETigerAimAssistMode__Count     = 4,
	ETigerAimAssistMode__ETigerAimAssistMode_MAX = 5
};


// Enum Tiger.ETigerJumpDistribution
enum class ETigerJumpDistribution : uint8_t
{
	ETigerJumpDistribution__Random = 0,
	ETigerJumpDistribution__Early  = 1,
	ETigerJumpDistribution__Late   = 2,
	ETigerJumpDistribution__Middle = 3,
	ETigerJumpDistribution__ETigerJumpDistribution_MAX = 4
};


// Enum Tiger.ETigerAnimBlendState
enum class ETigerAnimBlendState : uint8_t
{
	ETigerAnimBlendState__BlendingIn = 0,
	ETigerAnimBlendState__BlendingOut = 1,
	ETigerAnimBlendState__FullyBlended = 2,
	ETigerAnimBlendState__ETigerAnimBlendState_MAX = 3
};


// Enum Tiger.ETigerIKDirection
enum class ETigerIKDirection : uint8_t
{
	ETigerIKDirection__Forward     = 0,
	ETigerIKDirection__Downward    = 1,
	ETigerIKDirection__ETigerIKDirection_MAX = 2
};


// Enum Tiger.ETigerPlayOnClients
enum class ETigerPlayOnClients : uint8_t
{
	ETigerPlayOnClients__PlayOnSelf = 0,
	ETigerPlayOnClients__PlayOnOthers = 1,
	ETigerPlayOnClients__PlayOnAll = 2,
	ETigerPlayOnClients__ETigerPlayOnClients_MAX = 3
};


// Enum Tiger.ETigerTriggerUpdateWpnAppearance
enum class ETigerTriggerUpdateWpnAppearance : uint8_t
{
	ETigerTriggerUpdateWpnAppearance__None = 0,
	ETigerTriggerUpdateWpnAppearance__Begin = 1,
	ETigerTriggerUpdateWpnAppearance__End = 2,
	ETigerTriggerUpdateWpnAppearance__ETigerTriggerUpdateWpnAppearance_MAX = 3
};


// Enum Tiger.ETigerArchetypeSelectUiState
enum class ETigerArchetypeSelectUiState : uint8_t
{
	ETigerArchetypeSelectUiState__PreSelection = 0,
	ETigerArchetypeSelectUiState__Player0 = 1,
	ETigerArchetypeSelectUiState__Player1 = 2,
	ETigerArchetypeSelectUiState__Player2 = 3,
	ETigerArchetypeSelectUiState__PostSelection = 4,
	ETigerArchetypeSelectUiState__ETigerArchetypeSelectUiState_MAX = 5
};


// Enum Tiger.ETigerBootState
enum class ETigerBootState : uint8_t
{
	ETigerBootState__Boot          = 0,
	ETigerBootState__FirstTimeArchetypeSelect = 1,
	ETigerBootState__ETigerBootState_MAX = 2
};


// Enum Tiger.ETigerBuffProgressType
enum class ETigerBuffProgressType : uint8_t
{
	ETigerBuffProgressType__Increase = 0,
	ETigerBuffProgressType__Decrease = 1,
	ETigerBuffProgressType__ETigerBuffProgressType_MAX = 2
};


// Enum Tiger.ETigerBuffStatusType
enum class ETigerBuffStatusType : uint8_t
{
	ETigerBuffStatusType__Neutral  = 0,
	ETigerBuffStatusType__Positive = 1,
	ETigerBuffStatusType__Negative = 2,
	ETigerBuffStatusType__ETigerBuffStatusType_MAX = 3
};


// Enum Tiger.UTigerBuildingSide
enum class EUTigerBuildingSide : uint8_t
{
	UTigerBuildingSide__Front      = 0,
	UTigerBuildingSide__Left       = 1,
	UTigerBuildingSide__Back       = 2,
	UTigerBuildingSide__Right      = 3,
	UTigerBuildingSide__UTigerBuildingSide_MAX = 4
};


// Enum Tiger.ETigerCameraPresetModeAdditive
enum class ETigerCameraPresetModeAdditive : uint8_t
{
	ETigerCameraPresetModeAdditive__Crouching = 0,
	ETigerCameraPresetModeAdditive__Running = 1,
	ETigerCameraPresetModeAdditive__Combat = 2,
	ETigerCameraPresetModeAdditive__Sliding = 3,
	ETigerCameraPresetModeAdditive__Count = 4,
	ETigerCameraPresetModeAdditive__ETigerCameraPresetModeAdditive_MAX = 5
};


// Enum Tiger.ETigerCapturePointStatus
enum class ETigerCapturePointStatus : uint8_t
{
	ETigerCapturePointStatus__YouCapturing = 0,
	ETigerCapturePointStatus__EnemyCapturing = 1,
	ETigerCapturePointStatus__ContestedWithCapturee = 2,
	ETigerCapturePointStatus__ContestedWithoutCapturee = 3,
	ETigerCapturePointStatus__None = 4,
	ETigerCapturePointStatus__ETigerCapturePointStatus_MAX = 5
};


// Enum Tiger.ETigerChallengeSubCategory
enum class ETigerChallengeSubCategory : uint8_t
{
	ETigerChallengeSubCategory__Mastery = 0,
	ETigerChallengeSubCategory__Onboarding = 1,
	ETigerChallengeSubCategory__Career = 2,
	ETigerChallengeSubCategory__Clans = 3,
	ETigerChallengeSubCategory__Count = 4,
	ETigerChallengeSubCategory__ETigerChallengeSubCategory_MAX = 5
};


// Enum Tiger.ETigerEnemyType
enum class ETigerEnemyType : uint8_t
{
	ETigerEnemyType__Players       = 0,
	ETigerEnemyType__Entity        = 1,
	ETigerEnemyType__ETigerEnemyType_MAX = 2
};


// Enum Tiger.ETigerPlayerLevelType
enum class ETigerPlayerLevelType : uint8_t
{
	ETigerPlayerLevelType__Season  = 0,
	ETigerPlayerLevelType__Player  = 1,
	ETigerPlayerLevelType__Archetype = 2,
	ETigerPlayerLevelType__ETigerPlayerLevelType_MAX = 3
};


// Enum Tiger.ETigerChallengeWidgetInformationType
enum class ETigerChallengeWidgetInformationType : uint8_t
{
	ETigerChallengeWidgetInformationType__CoreChallengeType = 0,
	ETigerChallengeWidgetInformationType__RewardCatalogueType = 1,
	ETigerChallengeWidgetInformationType__ETigerChallengeWidgetInformationType_MAX = 2
};


// Enum Tiger.ETigerAkCharacterGender
enum class ETigerAkCharacterGender : uint8_t
{
	ETigerAkCharacterGender__Male  = 0,
	ETigerAkCharacterGender__Female = 1,
	ETigerAkCharacterGender__Count = 2,
	ETigerAkCharacterGender__ETigerAkCharacterGender_MAX = 3
};


// Enum Tiger.ETigerClanCustomizationValidationErrorType
enum class ETigerClanCustomizationValidationErrorType : uint8_t
{
	ETigerClanCustomizationValidationErrorType__IdOutOfBounds = 0,
	ETigerClanCustomizationValidationErrorType__IdCollision = 1,
	ETigerClanCustomizationValidationErrorType__IdNotSet = 2,
	ETigerClanCustomizationValidationErrorType__ETigerClanCustomizationValidationErrorType_MAX = 3
};


// Enum Tiger.ETigerCustomizationType
enum class ETigerCustomizationType : uint8_t
{
	ETigerCustomizationType__None  = 0,
	ETigerCustomizationType__Outfits = 1,
	ETigerCustomizationType__Heads = 2,
	ETigerCustomizationType__Hairs = 3,
	ETigerCustomizationType__HairColors = 4,
	ETigerCustomizationType__EyeColors = 5,
	ETigerCustomizationType__Tattoos = 6,
	ETigerCustomizationType__FacePaints = 7,
	ETigerCustomizationType__PiercingSets = 8,
	ETigerCustomizationType__Headgears = 9,
	ETigerCustomizationType__Eyewears = 10,
	ETigerCustomizationType__Eyebrows = 11,
	ETigerCustomizationType__EyebrowColors = 12,
	ETigerCustomizationType__Beards = 13,
	ETigerCustomizationType__BeardColors = 14,
	ETigerCustomizationType__CharacterCardShapes = 15,
	ETigerCustomizationType__CharacterCardTextures = 16,
	ETigerCustomizationType__CharacterIcons = 17,
	ETigerCustomizationType__Emotes = 18,
	ETigerCustomizationType__All   = 19,
	ETigerCustomizationType__ETigerCustomizationType_MAX = 20
};


// Enum Tiger.ETigerForcedMoveResult
enum class ETigerForcedMoveResult : uint8_t
{
	ETigerForcedMoveResult__Finished = 0,
	ETigerForcedMoveResult__Overridden = 1,
	ETigerForcedMoveResult__Canceled = 2,
	ETigerForcedMoveResult__ETigerForcedMoveResult_MAX = 3
};


// Enum Tiger.ETigerMovementMode
enum class ETigerMovementMode : uint8_t
{
	ETigerMovementMode__None       = 0,
	ETigerMovementMode__Sliding    = 1,
	ETigerMovementMode__ETigerMovementMode_MAX = 2
};


// Enum Tiger.ETigerCinematicQuality
enum class ETigerCinematicQuality : uint8_t
{
	ETigerCinematicQuality__None   = 0,
	ETigerCinematicQuality__Low    = 1,
	ETigerCinematicQuality__Cinematic = 2,
	ETigerCinematicQuality__ETigerCinematicQuality_MAX = 3
};


// Enum Tiger.ETigerEquippedWeaponType
enum class ETigerEquippedWeaponType : uint8_t
{
	ETigerEquippedWeaponType__TigerEquippedWeaponType_NoWeapon = 0,
	ETigerEquippedWeaponType__TigerEquippedWeaponType_Ranged = 1,
	ETigerEquippedWeaponType__TigerEquippedWeaponType_Melee = 2,
	ETigerEquippedWeaponType__TigerEquippedWeaponType_MAX = 3
};


// Enum Tiger.ETigerCompassMarkerType
enum class ETigerCompassMarkerType : uint8_t
{
	ETigerCompassMarkerType__CompassMarker = 0,
	ETigerCompassMarkerType__Bloodhunted = 1,
	ETigerCompassMarkerType__GroupMember = 2,
	ETigerCompassMarkerType__Ping  = 3,
	ETigerCompassMarkerType__Count = 4,
	ETigerCompassMarkerType__ETigerCompassMarkerType_MAX = 5
};


// Enum Tiger.ETigerQuickUseConsumable
enum class ETigerQuickUseConsumable : uint8_t
{
	ETigerQuickUseConsumable__Syringe = 0,
	ETigerQuickUseConsumable__Bloodbag = 1,
	ETigerQuickUseConsumable__Armor = 2,
	ETigerQuickUseConsumable__Stimpack = 3,
	ETigerQuickUseConsumable__UnholyStimulant = 4,
	ETigerQuickUseConsumable__Flare = 5,
	ETigerQuickUseConsumable__Count = 6,
	ETigerQuickUseConsumable__ETigerQuickUseConsumable_MAX = 7
};


// Enum Tiger.ETigerContextualHelpShouldShowInGameModeBit
enum class ETigerContextualHelpShouldShowInGameModeBit : uint8_t
{
	ETigerContextualHelpShouldShowInGameModeBit__Tutorial = 0,
	ETigerContextualHelpShouldShowInGameModeBit__Match = 1,
	ETigerContextualHelpShouldShowInGameModeBit__Elysium = 2,
	ETigerContextualHelpShouldShowInGameModeBit__ETigerContextualHelpShouldShowInGameModeBit_MAX = 3
};


// Enum Tiger.ETigerContextualHelpShouldShowInGameMode
enum class ETigerContextualHelpShouldShowInGameMode : uint8_t
{
	ETigerContextualHelpShouldShowInGameMode__TutorialOnly = 0,
	ETigerContextualHelpShouldShowInGameMode__MatchOnly = 1,
	ETigerContextualHelpShouldShowInGameMode__All = 2,
	ETigerContextualHelpShouldShowInGameMode__Unused = 3,
	ETigerContextualHelpShouldShowInGameMode__ETigerContextualHelpShouldShowInGameMode_MAX = 4
};


// Enum Tiger.ETigerContextualHelpType
enum class ETigerContextualHelpType : uint8_t
{
	ETigerContextualHelpType__Reminder = 0,
	ETigerContextualHelpType__Interaction = 1,
	ETigerContextualHelpType__Count = 2,
	ETigerContextualHelpType__ETigerContextualHelpType_MAX = 3
};


// Enum Tiger.ETigerDesiredPawnType
enum class ETigerDesiredPawnType : uint8_t
{
	ETigerDesiredPawnType__DefaultPawn = 0,
	ETigerDesiredPawnType__BloodVeinPawn = 1,
	ETigerDesiredPawnType__ETigerDesiredPawnType_MAX = 2
};


// Enum Tiger.ETigerDisciplineCharmState
enum class ETigerDisciplineCharmState : uint8_t
{
	ETigerDisciplineCharmState__Ready = 0,
	ETigerDisciplineCharmState__Bonding = 1,
	ETigerDisciplineCharmState__ETigerDisciplineCharmState_MAX = 2
};


// Enum Tiger.ETigerDisciplineCanUseResult
enum class ETigerDisciplineCanUseResult : uint8_t
{
	ETigerDisciplineCanUseResult__UseAllowed = 0,
	ETigerDisciplineCanUseResult__FailedDisciplineOutOfBounds = 1,
	ETigerDisciplineCanUseResult__FailedBlockingDiscipline = 2,
	ETigerDisciplineCanUseResult__FailedDoesNotExist = 3,
	ETigerDisciplineCanUseResult__FailedLocked = 4,
	ETigerDisciplineCanUseResult__FailedIsPassive = 5,
	ETigerDisciplineCanUseResult__FailedDisciplineRequirements = 6,
	ETigerDisciplineCanUseResult__FailedOnCooldown = 7,
	ETigerDisciplineCanUseResult__FailedOnCharges = 8,
	ETigerDisciplineCanUseResult__FailedInteract = 9,
	ETigerDisciplineCanUseResult__FailedChargingAttack = 10,
	ETigerDisciplineCanUseResult__FailedMeleeSwing = 11,
	ETigerDisciplineCanUseResult__FailedBuffBlocking = 12,
	ETigerDisciplineCanUseResult__ETigerDisciplineCanUseResult_MAX = 13
};


// Enum Tiger.ETigerActionAllowed
enum class ETigerActionAllowed : uint8_t
{
	ETigerActionAllowed__Allowed   = 0,
	ETigerActionAllowed__Blocked   = 1,
	ETigerActionAllowed__Cancel    = 2,
	ETigerActionAllowed__None      = 3,
	ETigerActionAllowed__ETigerActionAllowed_MAX = 4
};


// Enum Tiger.ETigerFOTTStage
enum class ETigerFOTTStage : uint8_t
{
	ETigerFOTTStage__ChargeUp      = 0,
	ETigerFOTTStage__Charged       = 1,
	ETigerFOTTStage__Attacking     = 2,
	ETigerFOTTStage__Recover       = 3,
	ETigerFOTTStage__Count         = 4,
	ETigerFOTTStage__ETigerFOTTStage_MAX = 5
};


// Enum Tiger.ETigerDisciplineParticleStrategyColorModes
enum class ETigerDisciplineParticleStrategyColorModes : uint8_t
{
	ETigerDisciplineParticleStrategyColorModes__Default = 0,
	ETigerDisciplineParticleStrategyColorModes__OverrideFriendlyOnly = 1,
	ETigerDisciplineParticleStrategyColorModes__OverrideEnemyOnly = 2,
	ETigerDisciplineParticleStrategyColorModes__OverrideBothSingleColor = 3,
	ETigerDisciplineParticleStrategyColorModes__OverrideBothSplitColor = 4,
	ETigerDisciplineParticleStrategyColorModes__ETigerDisciplineParticleStrategyColorModes_MAX = 5
};


// Enum Tiger.ETigerPassionStage
enum class ETigerPassionStage : uint8_t
{
	ETigerPassionStage__ChooseEffect = 0,
	ETigerPassionStage__ChargeEffect = 1,
	ETigerPassionStage__Count      = 2,
	ETigerPassionStage__ETigerPassionStage_MAX = 3
};


// Enum Tiger.ETigerPassionEffect
enum class ETigerPassionEffect : uint8_t
{
	ETigerPassionEffect__None      = 0,
	ETigerPassionEffect__Panic     = 1,
	ETigerPassionEffect__Apathy    = 2,
	ETigerPassionEffect__Wrath     = 3,
	ETigerPassionEffect__Count     = 4,
	ETigerPassionEffect__ETigerPassionEffect_MAX = 5
};


// Enum Tiger.ETigerProjectionDashCooldownStart
enum class ETigerProjectionDashCooldownStart : uint8_t
{
	ETigerProjectionDashCooldownStart__AfterProjectionSpawned = 0,
	ETigerProjectionDashCooldownStart__AfterDash = 1,
	ETigerProjectionDashCooldownStart__ETigerProjectionDashCooldownStart_MAX = 2
};


// Enum Tiger.ETigerProjectionDashEndReason
enum class ETigerProjectionDashEndReason : uint8_t
{
	ETigerProjectionDashEndReason__TimedOut = 0,
	ETigerProjectionDashEndReason__MaxDistanceReached = 1,
	ETigerProjectionDashEndReason__ETigerProjectionDashEndReason_MAX = 2
};


// Enum Tiger.ETigerJudgeHelicopterSpotlightState
enum class ETigerJudgeHelicopterSpotlightState : uint8_t
{
	ETigerJudgeHelicopterSpotlightState__InCombat = 0,
	ETigerJudgeHelicopterSpotlightState__Idling = 1,
	ETigerJudgeHelicopterSpotlightState__ETigerJudgeHelicopterSpotlightState_MAX = 2
};


// Enum Tiger.ETigerPatrollingHelicopterSpotlightState
enum class ETigerPatrollingHelicopterSpotlightState : uint8_t
{
	ETigerPatrollingHelicopterSpotlightState__TargetInSight = 0,
	ETigerPatrollingHelicopterSpotlightState__Searching = 1,
	ETigerPatrollingHelicopterSpotlightState__Idling = 2,
	ETigerPatrollingHelicopterSpotlightState__ETigerPatrollingHelicopterSpotlightState_MAX = 3
};


// Enum Tiger.ETigerPatrollingHelicopterState
enum class ETigerPatrollingHelicopterState : uint8_t
{
	ETigerPatrollingHelicopterState__Patrolling = 0,
	ETigerPatrollingHelicopterState__TrackingPlayer = 1,
	ETigerPatrollingHelicopterState__LostPlayer = 2,
	ETigerPatrollingHelicopterState__ETigerPatrollingHelicopterState_MAX = 3
};


// Enum Tiger.ETigerEventConfig_RepeatingPeriod
enum class ETigerEventConfig_RepeatingPeriod : uint8_t
{
	ETigerEventConfig_RepeatingPeriod__OneOff = 0,
	ETigerEventConfig_RepeatingPeriod__Yearly = 1,
	ETigerEventConfig_RepeatingPeriod__Monthly = 2,
	ETigerEventConfig_RepeatingPeriod__Ended = 3,
	ETigerEventConfig_RepeatingPeriod__ETigerEventConfig_MAX = 4
};


// Enum Tiger.ETigerEventConfig_TimeFrame
enum class ETigerEventConfig_TimeFrame : uint8_t
{
	ETigerEventConfig_TimeFrame__Undefined = 0,
	ETigerEventConfig_TimeFrame__StartingSoon = 1,
	ETigerEventConfig_TimeFrame__Ongoing = 2,
	ETigerEventConfig_TimeFrame__RecentlyEnded = 3,
	ETigerEventConfig_TimeFrame__OutsideLifetime = 4,
	ETigerEventConfig_TimeFrame__ETigerEventConfig_MAX = 5
};


// Enum Tiger.ETigerEventConfig_EventType
enum class ETigerEventConfig_EventType : uint8_t
{
	ETigerEventConfig_EventType__Challenge = 0,
	ETigerEventConfig_EventType__ETigerEventConfig_MAX = 1
};


// Enum Tiger.ETigerFeedingState
enum class ETigerFeedingState : uint8_t
{
	ETigerFeedingState__Inactive   = 0,
	ETigerFeedingState__StartFeeding = 1,
	ETigerFeedingState__Approach   = 2,
	ETigerFeedingState__Feeding    = 3,
	ETigerFeedingState__Decouple   = 4,
	ETigerFeedingState__FedOnApproach = 5,
	ETigerFeedingState__FedOn      = 6,
	ETigerFeedingState__FedOnDecouple = 7,
	ETigerFeedingState__ETigerFeedingState_MAX = 8
};


// Enum Tiger.ETigerGraphicsSettingPreset
enum class ETigerGraphicsSettingPreset : uint8_t
{
	ETigerGraphicsSettingPreset__Low = 0,
	ETigerGraphicsSettingPreset__Mid = 1,
	ETigerGraphicsSettingPreset__High = 2,
	ETigerGraphicsSettingPreset__Ultra = 3,
	ETigerGraphicsSettingPreset__ETigerGraphicsSettingPreset_MAX = 4
};


// Enum Tiger.ETigerCurrentGameFlowState
enum class ETigerCurrentGameFlowState : uint8_t
{
	ETigerCurrentGameFlowState__CharacterSelect = 0,
	ETigerCurrentGameFlowState__LoadingElysium = 1,
	ETigerCurrentGameFlowState__Elysium = 2,
	ETigerCurrentGameFlowState__LoadingPrague = 3,
	ETigerCurrentGameFlowState__StreamingPrague = 4,
	ETigerCurrentGameFlowState__LoadingCharacter = 5,
	ETigerCurrentGameFlowState__Waiting_Or_PreSpawn = 6,
	ETigerCurrentGameFlowState__SpawningMechanic = 7,
	ETigerCurrentGameFlowState__Spawned = 8,
	ETigerCurrentGameFlowState__EndGame = 9,
	ETigerCurrentGameFlowState__LoadingPragueToElysiumLimbo = 10,
	ETigerCurrentGameFlowState__PragueToElysiumLimbo = 11,
	ETigerCurrentGameFlowState__ETigerCurrentGameFlowState_MAX = 12
};


// Enum Tiger.ETigerGameModeAvailability
enum class ETigerGameModeAvailability : uint8_t
{
	ETigerGameModeAvailability__Ok = 0,
	ETigerGameModeAvailability__GroupTooLarge = 1,
	ETigerGameModeAvailability__PlayerLevelTooLow = 2,
	ETigerGameModeAvailability__PlayerLevelTooHigh = 3,
	ETigerGameModeAvailability__FailedToFetchAvailability = 4,
	ETigerGameModeAvailability__ETigerGameModeAvailability_MAX = 5
};


// Enum Tiger.ETigerSessionType
enum class ETigerSessionType : uint8_t
{
	ETigerSessionType__Party       = 0,
	ETigerSessionType__Match       = 1,
	ETigerSessionType__Count       = 2,
	ETigerSessionType__ETigerSessionType_MAX = 3
};


// Enum Tiger.ETigerStreamerModeLevel
enum class ETigerStreamerModeLevel : uint8_t
{
	ETigerStreamerModeLevel__Off   = 0,
	ETigerStreamerModeLevel__Low   = 1,
	ETigerStreamerModeLevel__Medium = 2,
	ETigerStreamerModeLevel__High  = 3,
	ETigerStreamerModeLevel__Custom = 4,
	ETigerStreamerModeLevel__Count = 5,
	ETigerStreamerModeLevel__ETigerStreamerModeLevel_MAX = 6
};


// Enum Tiger.ETigerGrimoireArticleType
enum class ETigerGrimoireArticleType : uint8_t
{
	ETigerGrimoireArticleType__Featured = 0,
	ETigerGrimoireArticleType__Suggested = 1,
	ETigerGrimoireArticleType__New = 2,
	ETigerGrimoireArticleType__ETigerGrimoireArticleType_MAX = 3
};


// Enum Tiger.ETigerGrimoireSearchEntryType
enum class ETigerGrimoireSearchEntryType : uint8_t
{
	ETigerGrimoireSearchEntryType__Category = 0,
	ETigerGrimoireSearchEntryType__Entry = 1,
	ETigerGrimoireSearchEntryType__ETigerGrimoireSearchEntryType_MAX = 2
};


// Enum Tiger.ETigerGrimoireContinuationMethod
enum class ETigerGrimoireContinuationMethod : uint8_t
{
	ETigerGrimoireContinuationMethod__NewParagraph = 0,
	ETigerGrimoireContinuationMethod__ExtendParagraph = 1,
	ETigerGrimoireContinuationMethod__Conversation = 2,
	ETigerGrimoireContinuationMethod__ETigerGrimoireContinuationMethod_MAX = 3
};


// Enum Tiger.ETigerGrimoireEntryTextMode
enum class ETigerGrimoireEntryTextMode : uint8_t
{
	ETigerGrimoireEntryTextMode__Small = 0,
	ETigerGrimoireEntryTextMode__Large = 1,
	ETigerGrimoireEntryTextMode__ETigerGrimoireEntryTextMode_MAX = 2
};


// Enum Tiger.ETigerGrimoireEntryMediaDisplayMode
enum class ETigerGrimoireEntryMediaDisplayMode : uint8_t
{
	ETigerGrimoireEntryMediaDisplayMode__Image = 0,
	ETigerGrimoireEntryMediaDisplayMode__Background = 1,
	ETigerGrimoireEntryMediaDisplayMode__Video = 2,
	ETigerGrimoireEntryMediaDisplayMode__Info = 3,
	ETigerGrimoireEntryMediaDisplayMode__Card = 4,
	ETigerGrimoireEntryMediaDisplayMode__Model = 5,
	ETigerGrimoireEntryMediaDisplayMode__ETigerGrimoireEntryMediaDisplayMode_MAX = 6
};


// Enum Tiger.ETigerHeatmap
enum class ETigerHeatmap : uint8_t
{
	ETigerHeatmap__PlayerDeaths    = 0,
	ETigerHeatmap__Feeding         = 1,
	ETigerHeatmap__PlayerMovement  = 2,
	ETigerHeatmap__RangedAttack    = 3,
	ETigerHeatmap__MeleeAttack     = 4,
	ETigerHeatmap__DisciplineUsed  = 5,
	ETigerHeatmap__Camping         = 6,
	ETigerHeatmap__PickedUpItem    = 7,
	ETigerHeatmap__NPCMovement     = 8,
	ETigerHeatmap__NPCDamagedPlayer = 9,
	ETigerHeatmap__PVECombat       = 10,
	ETigerHeatmap__PVPCombat       = 11,
	ETigerHeatmap__Count           = 12,
	ETigerHeatmap__ETigerHeatmap_MAX = 13
};


// Enum Tiger.ETigerHookState
enum class ETigerHookState : uint8_t
{
	ETigerHookState__Spawned       = 0,
	ETigerHookState__Throwing      = 1,
	ETigerHookState__Rotating      = 2,
	ETigerHookState__Reeling       = 3,
	ETigerHookState__Missed        = 4,
	ETigerHookState__Done          = 5,
	ETigerHookState__ETigerHookState_MAX = 6
};


// Enum Tiger.ETigerDamageNumberAmount
enum class ETigerDamageNumberAmount : uint8_t
{
	ETigerDamageNumberAmount__NoNumbers = 0,
	ETigerDamageNumberAmount__Accumulate = 1,
	ETigerDamageNumberAmount__EveryHit = 2,
	ETigerDamageNumberAmount__ETigerDamageNumberAmount_MAX = 3
};


// Enum Tiger.ETigerInboxMessageStatus
enum class ETigerInboxMessageStatus : uint8_t
{
	ETigerInboxMessageStatus__Unread = 0,
	ETigerInboxMessageStatus__Read = 1,
	ETigerInboxMessageStatus__Count = 2,
	ETigerInboxMessageStatus__ETigerInboxMessageStatus_MAX = 3
};


// Enum Tiger.ETigerInboxMessageCategory
enum class ETigerInboxMessageCategory : uint8_t
{
	ETigerInboxMessageCategory__TwitchDrop = 0,
	ETigerInboxMessageCategory__PrimeLoot = 1,
	ETigerInboxMessageCategory__Count = 2,
	ETigerInboxMessageCategory__ETigerInboxMessageCategory_MAX = 3
};


// Enum Tiger.ETigerInboxMessageSectionType
enum class ETigerInboxMessageSectionType : uint8_t
{
	ETigerInboxMessageSectionType__Paragraph = 0,
	ETigerInboxMessageSectionType__Image = 1,
	ETigerInboxMessageSectionType__Rewards = 2,
	ETigerInboxMessageSectionType__Count = 3,
	ETigerInboxMessageSectionType__ETigerInboxMessageSectionType_MAX = 4
};


// Enum Tiger.EInteractiveObjectState
enum class EInteractiveObjectState : uint8_t
{
	EInteractiveObjectState__NotInteractive = 0,
	EInteractiveObjectState__Inactive = 1,
	EInteractiveObjectState__Activated_Volume = 2,
	EInteractiveObjectState__Activated_Interaction = 3,
	EInteractiveObjectState__Activated_Shooting = 4,
	EInteractiveObjectState__Done  = 5,
	EInteractiveObjectState__EInteractiveObjectState_MAX = 6
};


// Enum Tiger.ETigerWeaponCycleDirection
enum class ETigerWeaponCycleDirection : uint8_t
{
	ETigerWeaponCycleDirection__Previous = 0,
	ETigerWeaponCycleDirection__Next = 1,
	ETigerWeaponCycleDirection__ETigerWeaponCycleDirection_MAX = 2
};


// Enum Tiger.ETigerItemPickupInfo
enum class ETigerItemPickupInfo : uint8_t
{
	ETigerItemPickupInfo__CanBePickedUp = 0,
	ETigerItemPickupInfo__AlreadyPickedUp = 1,
	ETigerItemPickupInfo__CategoryFull = 2,
	ETigerItemPickupInfo__ItemIsNull = 3,
	ETigerItemPickupInfo__CanPickUpAmmo = 4,
	ETigerItemPickupInfo__AmmoFull = 5,
	ETigerItemPickupInfo__Swap     = 6,
	ETigerItemPickupInfo__ETigerItemPickupInfo_MAX = 7
};


// Enum Tiger.ERangedWeaponModType
enum class ERangedWeaponModType : uint8_t
{
	ERangedWeaponModType__Scope    = 0,
	ERangedWeaponModType__ExtendedMag = 1,
	ERangedWeaponModType__Stock    = 2,
	ERangedWeaponModType__Special  = 3,
	ERangedWeaponModType__Barrel   = 4,
	ERangedWeaponModType__ERangedWeaponModType_MAX = 5
};


// Enum Tiger.ETigerArtifactAbility
enum class ETigerArtifactAbility : uint8_t
{
	ETigerArtifactAbility__DoubleJump = 0,
	ETigerArtifactAbility__Count   = 1,
	ETigerArtifactAbility__ETigerArtifactAbility_MAX = 2
};


// Enum Tiger.ETigerTooltipStatChangeAmount
enum class ETigerTooltipStatChangeAmount : uint8_t
{
	ETigerTooltipStatChangeAmount__Minor = 0,
	ETigerTooltipStatChangeAmount__Moderate = 1,
	ETigerTooltipStatChangeAmount__Significant = 2,
	ETigerTooltipStatChangeAmount__Major = 3,
	ETigerTooltipStatChangeAmount__Hidden = 4,
	ETigerTooltipStatChangeAmount__ETigerTooltipStatChangeAmount_MAX = 5
};


// Enum Tiger.ETigerInventoryItemType
enum class ETigerInventoryItemType : uint8_t
{
	ETigerInventoryItemType__TigerInventoryItem_Firearm = 0,
	ETigerInventoryItemType__TigerInventoryItem_Melee = 1,
	ETigerInventoryItemType__TigerInventoryItem_Unarmed = 2,
	ETigerInventoryItemType__TigerInventoryItem_Outfit = 3,
	ETigerInventoryItemType__TigerInventoryItem_Amulet = 4,
	ETigerInventoryItemType__TigerInventoryItem_Artifact = 5,
	ETigerInventoryItemType__TigerInventoryItem_BodyArmor = 6,
	ETigerInventoryItemType__TigerInventoryItem_Relic = 7,
	ETigerInventoryItemType__TigerInventoryItem_Ammo = 8,
	ETigerInventoryItemType__TigerInventoryItem_Consumable = 9,
	ETigerInventoryItemType__TigerInventoryItem_Mod = 10,
	ETigerInventoryItemType__TigerInventoryItem_Collectible = 11,
	ETigerInventoryItemType__TigerInventoryItem_Size = 12,
	ETigerInventoryItemType__TigerInventoryItem_MAX = 13
};


// Enum Tiger.ETigerTimedAnimationType
enum class ETigerTimedAnimationType : uint8_t
{
	ETigerTimedAnimationType__Montage = 0,
	ETigerTimedAnimationType__Section = 1,
	ETigerTimedAnimationType__ETigerTimedAnimationType_MAX = 2
};


// Enum Tiger.ETigerAIPlayerMainState
enum class ETigerAIPlayerMainState : uint8_t
{
	ETigerAIPlayerMainState__Idle  = 0,
	ETigerAIPlayerMainState__InBloodVein = 1,
	ETigerAIPlayerMainState__Wandering = 2,
	ETigerAIPlayerMainState__Combat = 3,
	ETigerAIPlayerMainState__Fleeing = 4,
	ETigerAIPlayerMainState__GoingForItem = 5,
	ETigerAIPlayerMainState__GoingForFeeding = 6,
	ETigerAIPlayerMainState__Healing = 7,
	ETigerAIPlayerMainState__PreMatch = 8,
	ETigerAIPlayerMainState__ETigerAIPlayerMainState_MAX = 9
};


// Enum Tiger.ETigerAIPlayerTargetType
enum class ETigerAIPlayerTargetType : uint8_t
{
	ETigerAIPlayerTargetType__Move = 0,
	ETigerAIPlayerTargetType__Feed = 1,
	ETigerAIPlayerTargetType__Interactive = 2,
	ETigerAIPlayerTargetType__Loot = 3,
	ETigerAIPlayerTargetType__ETigerAIPlayerTargetType_MAX = 4
};


// Enum Tiger.ETigerLootCategory
enum class ETigerLootCategory : uint8_t
{
	ETigerLootCategory__Weapons    = 0,
	ETigerLootCategory__Ammo       = 1,
	ETigerLootCategory__RangedMods = 2,
	ETigerLootCategory__Consumables = 3,
	ETigerLootCategory__Backpacks  = 4,
	ETigerLootCategory__Collectible = 5,
	ETigerLootCategory__ETigerLootCategory_MAX = 6
};


// Enum Tiger.EMapMarkerType
enum class EMapMarkerType : uint8_t
{
	EMapMarkerType__Other          = 0,
	EMapMarkerType__AntiqueStore   = 1,
	EMapMarkerType__TailorStore    = 2,
	EMapMarkerType__PharmacyStore  = 3,
	EMapMarkerType__EntityCheckpoint = 4,
	EMapMarkerType__EMapMarkerType_MAX = 5
};


// Enum Tiger.ETigerMatchSettingsVariationParameter
enum class ETigerMatchSettingsVariationParameter : uint8_t
{
	ETigerMatchSettingsVariationParameter__GasSpeed = 0,
	ETigerMatchSettingsVariationParameter__CivilianResonance = 1,
	ETigerMatchSettingsVariationParameter__SwapLootTable = 2,
	ETigerMatchSettingsVariationParameter__DisableEntity = 3,
	ETigerMatchSettingsVariationParameter__StartingResonance = 4,
	ETigerMatchSettingsVariationParameter__BloodhuntedTime = 5,
	ETigerMatchSettingsVariationParameter__AllHighTierLootActive = 6,
	ETigerMatchSettingsVariationParameter__BrokenMasqueradeAtStart = 7,
	ETigerMatchSettingsVariationParameter__ETigerMatchSettingsVariationParameter_MAX = 8
};


// Enum Tiger.ETigerBlockState
enum class ETigerBlockState : uint8_t
{
	ETigerBlockState__NotParrying  = 0,
	ETigerBlockState__StartParrying = 1,
	ETigerBlockState__DeflectIncomingAttacks = 2,
	ETigerBlockState__NumStates    = 3,
	ETigerBlockState__ETigerBlockState_MAX = 4
};


// Enum Tiger.ETigerMeleeState
enum class ETigerMeleeState : uint8_t
{
	ETigerMeleeState__ETigerMeleeState_Inactive = 0,
	ETigerMeleeState__ETigerMeleeState_SwingDamage = 1,
	ETigerMeleeState__ETigerMeleeState_SwingFinish = 2,
	ETigerMeleeState__ETigerMeleeState_MAX = 3
};


// Enum Tiger.ETigerMeleeWeaponIdentifier
enum class ETigerMeleeWeaponIdentifier : uint8_t
{
	ETigerMeleeWeaponIdentifier__None = 0,
	ETigerMeleeWeaponIdentifier__Axe = 1,
	ETigerMeleeWeaponIdentifier__Katana = 2,
	ETigerMeleeWeaponIdentifier__ScourgeBlades = 3,
	ETigerMeleeWeaponIdentifier__Unarmed = 4,
	ETigerMeleeWeaponIdentifier__Bat = 5,
	ETigerMeleeWeaponIdentifier__Count = 6,
	ETigerMeleeWeaponIdentifier__ETigerMeleeWeaponIdentifier_MAX = 7
};


// Enum Tiger.ETigerDialogueQuestRequirementSpecifier
enum class ETigerDialogueQuestRequirementSpecifier : uint8_t
{
	ETigerDialogueQuestRequirementSpecifier__InProgress = 0,
	ETigerDialogueQuestRequirementSpecifier__Completed = 1,
	ETigerDialogueQuestRequirementSpecifier__ETigerDialogueQuestRequirementSpecifier_MAX = 2
};


// Enum Tiger.ETigerDialogueEqualitySpecifier
enum class ETigerDialogueEqualitySpecifier : uint8_t
{
	ETigerDialogueEqualitySpecifier__LessThan = 0,
	ETigerDialogueEqualitySpecifier__LessThanOrEqualTo = 1,
	ETigerDialogueEqualitySpecifier__EqualTo = 2,
	ETigerDialogueEqualitySpecifier__GreaterThanOrEqualTo = 3,
	ETigerDialogueEqualitySpecifier__GreaterThan = 4,
	ETigerDialogueEqualitySpecifier__ETigerDialogueEqualitySpecifier_MAX = 5
};


// Enum Tiger.ETigerDialogueOutfitRequirementSpecifier
enum class ETigerDialogueOutfitRequirementSpecifier : uint8_t
{
	ETigerDialogueOutfitRequirementSpecifier__ClanOutfit = 0,
	ETigerDialogueOutfitRequirementSpecifier__GenderedOutfit = 1,
	ETigerDialogueOutfitRequirementSpecifier__ClanGenderedOutfit = 2,
	ETigerDialogueOutfitRequirementSpecifier__SpecificAssetName = 3,
	ETigerDialogueOutfitRequirementSpecifier__ETigerDialogueOutfitRequirementSpecifier_MAX = 4
};


// Enum Tiger.ETigerDialogueClanRequirementSpecifier
enum class ETigerDialogueClanRequirementSpecifier : uint8_t
{
	ETigerDialogueClanRequirementSpecifier__BothAreSame = 0,
	ETigerDialogueClanRequirementSpecifier__BothAreDifferent = 1,
	ETigerDialogueClanRequirementSpecifier__PlayerIsSpecific = 2,
	ETigerDialogueClanRequirementSpecifier__ETigerDialogueClanRequirementSpecifier_MAX = 3
};


// Enum Tiger.ETigerDialogueCategory
enum class ETigerDialogueCategory : uint8_t
{
	ETigerDialogueCategory__Uncategorised = 0,
	ETigerDialogueCategory__Congratulations = 1,
	ETigerDialogueCategory__Grimoire = 2,
	ETigerDialogueCategory__Character = 3,
	ETigerDialogueCategory__Collectible = 4,
	ETigerDialogueCategory__Item   = 5,
	ETigerDialogueCategory__Location = 6,
	ETigerDialogueCategory__Lore   = 7,
	ETigerDialogueCategory__Narrative = 8,
	ETigerDialogueCategory__Quest  = 9,
	ETigerDialogueCategory__Reaction = 10,
	ETigerDialogueCategory__Miscellaneous1 = 11,
	ETigerDialogueCategory__Miscellaneous2 = 12,
	ETigerDialogueCategory__Miscellaneous3 = 13,
	ETigerDialogueCategory__Miscellaneous4 = 14,
	ETigerDialogueCategory__Miscellaneous5 = 15,
	ETigerDialogueCategory__Max    = 16
};


// Enum Tiger.ETigerDialogueRepeatability
enum class ETigerDialogueRepeatability : uint8_t
{
	ETigerDialogueRepeatability__Repeatable = 0,
	ETigerDialogueRepeatability__OncePerElysium = 1,
	ETigerDialogueRepeatability__OnceEver = 2,
	ETigerDialogueRepeatability__ETigerDialogueRepeatability_MAX = 3
};


// Enum Tiger.ETigerDialogueIdleAnimation
enum class ETigerDialogueIdleAnimation : uint8_t
{
	ETigerDialogueIdleAnimation__Default = 0,
	ETigerDialogueIdleAnimation__Happy = 1,
	ETigerDialogueIdleAnimation__Sad = 2,
	ETigerDialogueIdleAnimation__Angry = 3,
	ETigerDialogueIdleAnimation__Fearful = 4,
	ETigerDialogueIdleAnimation__Amazed = 5,
	ETigerDialogueIdleAnimation__ETigerDialogueIdleAnimation_MAX = 6
};


// Enum Tiger.ETigerDialoguePriority
enum class ETigerDialoguePriority : uint8_t
{
	ETigerDialoguePriority__Urgent = 0,
	ETigerDialoguePriority__Important = 1,
	ETigerDialoguePriority__Situational = 2,
	ETigerDialoguePriority__Flavour = 3,
	ETigerDialoguePriority__Max    = 4
};


// Enum Tiger.ETigerOutfitGender
enum class ETigerOutfitGender : uint8_t
{
	ETigerOutfitGender__Female     = 0,
	ETigerOutfitGender__Male       = 1,
	ETigerOutfitGender__Both       = 2,
	ETigerOutfitGender__Count      = 3,
	ETigerOutfitGender__ETigerOutfitGender_MAX = 4
};


// Enum Tiger.ETigerPartyPlatforms
enum class ETigerPartyPlatforms : uint8_t
{
	ETigerPartyPlatforms__Steam    = 0,
	ETigerPartyPlatforms__PS5      = 1,
	ETigerPartyPlatforms__NumPlatforms = 2,
	ETigerPartyPlatforms__ETigerPartyPlatforms_MAX = 3
};


// Enum Tiger.ETigerEnqueueFlags
enum class ETigerEnqueueFlags : uint8_t
{
	ETigerEnqueueFlags__ShowNotification = 0,
	ETigerEnqueueFlags__ReInitChallenges = 1,
	ETigerEnqueueFlags__ETigerEnqueueFlags_MAX = 2
};


// Enum Tiger.ETigerLoginResult
enum class ETigerLoginResult : uint8_t
{
	ETigerLoginResult__LoginSucceeded = 0,
	ETigerLoginResult__InternalError = 1,
	ETigerLoginResult__GetCharactersFailed = 2,
	ETigerLoginResult__NoValidAuthentication = 3,
	ETigerLoginResult__SteamNotEnabled = 4,
	ETigerLoginResult__PlayerBanned = 5,
	ETigerLoginResult__Count       = 6,
	ETigerLoginResult__ETigerLoginResult_MAX = 7
};


// Enum Tiger.ETigerPersistentConfigKey
enum class ETigerPersistentConfigKey : uint8_t
{
	ETigerPersistentConfigKey__LastRewardedStatusRank = 0,
	ETigerPersistentConfigKey__LastBattlePassSeasonId = 1,
	ETigerPersistentConfigKey__ETigerPersistentConfigKey_MAX = 2
};


// Enum Tiger.ETigerPlayerNPCVisibility
enum class ETigerPlayerNPCVisibility : uint8_t
{
	ETigerPlayerNPCVisibility__NotSeenByNPC = 0,
	ETigerPlayerNPCVisibility__SeenByCivilian = 1,
	ETigerPlayerNPCVisibility__SeenByPolice = 2,
	ETigerPlayerNPCVisibility__ETigerPlayerNPCVisibility_MAX = 3
};


// Enum Tiger.ETigerClimbingCameraInterpState
enum class ETigerClimbingCameraInterpState : uint8_t
{
	ETigerClimbingCameraInterpState__None = 0,
	ETigerClimbingCameraInterpState__In = 1,
	ETigerClimbingCameraInterpState__Out = 2,
	ETigerClimbingCameraInterpState__ETigerClimbingCameraInterpState_MAX = 3
};


// Enum Tiger.ETigerPhysicalInteraction
enum class ETigerPhysicalInteraction : uint8_t
{
	ETigerPhysicalInteraction__Neither = 0,
	ETigerPhysicalInteraction__Revive = 1,
	ETigerPhysicalInteraction__Diablerie = 2,
	ETigerPhysicalInteraction__ETigerPhysicalInteraction_MAX = 3
};


// Enum Tiger.ETigerBufferedActionType
enum class ETigerBufferedActionType : uint8_t
{
	ETigerBufferedActionType__Jump = 0,
	ETigerBufferedActionType__Dodge = 1,
	ETigerBufferedActionType__MeleeAttack = 2,
	ETigerBufferedActionType__RangedAttack = 3,
	ETigerBufferedActionType__DisciplineArchetype = 4,
	ETigerBufferedActionType__DisciplineArchetypeReleased = 5,
	ETigerBufferedActionType__DisciplineClan = 6,
	ETigerBufferedActionType__DisciplineClanReleased = 7,
	ETigerBufferedActionType__WeaponAbility = 8,
	ETigerBufferedActionType__WeaponAbilityReleased = 9,
	ETigerBufferedActionType__Sprint = 10,
	ETigerBufferedActionType__Block = 11,
	ETigerBufferedActionType__Crouch = 12,
	ETigerBufferedActionType__Reload = 13,
	ETigerBufferedActionType__SwitchWeapon = 14,
	ETigerBufferedActionType__QuickAttack = 15,
	ETigerBufferedActionType__ToggleHeightenedSenses = 16,
	ETigerBufferedActionType__Count = 17,
	ETigerBufferedActionType__ETigerBufferedActionType_MAX = 18
};


// Enum Tiger.ETigerWallJumpAnimationState
enum class ETigerWallJumpAnimationState : uint8_t
{
	ETigerWallJumpAnimationState__None = 0,
	ETigerWallJumpAnimationState__Sliding = 1,
	ETigerWallJumpAnimationState__Jumping = 2,
	ETigerWallJumpAnimationState__ETigerWallJumpAnimationState_MAX = 3
};


// Enum Tiger.ETigerVersionIsValidResult
enum class ETigerVersionIsValidResult : uint8_t
{
	ETigerVersionIsValidResult__Valid = 0,
	ETigerVersionIsValidResult__Invalid = 1,
	ETigerVersionIsValidResult__ConnectionError = 2,
	ETigerVersionIsValidResult__ParseError = 3,
	ETigerVersionIsValidResult__ETigerVersionIsValidResult_MAX = 4
};


// Enum Tiger.ETigerGetTicketResult
enum class ETigerGetTicketResult : uint8_t
{
	ETigerGetTicketResult__Success = 0,
	ETigerGetTicketResult__ConnectionError = 1,
	ETigerGetTicketResult__ParseError = 2,
	ETigerGetTicketResult__InvalidResponse = 3,
	ETigerGetTicketResult__BackendOperationFailed = 4,
	ETigerGetTicketResult__ETigerGetTicketResult_MAX = 5
};


// Enum Tiger.ETigerPlayerExperienceSource
enum class ETigerPlayerExperienceSource : uint8_t
{
	ETigerPlayerExperienceSource__Eliminations = 0,
	ETigerPlayerExperienceSource__Diableries = 1,
	ETigerPlayerExperienceSource__Assists = 2,
	ETigerPlayerExperienceSource__DamageDealt = 3,
	ETigerPlayerExperienceSource__Count = 4,
	ETigerPlayerExperienceSource__ETigerPlayerExperienceSource_MAX = 5
};


// Enum Tiger.ETigerInterrupt
enum class ETigerInterrupt : uint8_t
{
	ETigerInterrupt__Climbing      = 0,
	ETigerInterrupt__Placeholder   = 1,
	ETigerInterrupt__Size          = 2,
	ETigerInterrupt__ETigerInterrupt_MAX = 3
};


// Enum Tiger.ETigerArchetypePerkState
enum class ETigerArchetypePerkState : uint8_t
{
	ETigerArchetypePerkState__Available = 0,
	ETigerArchetypePerkState__Selected = 1,
	ETigerArchetypePerkState__Locked = 2,
	ETigerArchetypePerkState__Count = 3,
	ETigerArchetypePerkState__ETigerArchetypePerkState_MAX = 4
};


// Enum Tiger.ETigerPremiumCurrencyPackDiscount
enum class ETigerPremiumCurrencyPackDiscount : uint8_t
{
	ETigerPremiumCurrencyPackDiscount__None = 0,
	ETigerPremiumCurrencyPackDiscount__Regular = 1,
	ETigerPremiumCurrencyPackDiscount__PsPlus = 2,
	ETigerPremiumCurrencyPackDiscount__Upsell = 3,
	ETigerPremiumCurrencyPackDiscount__RegularAndUpsell = 4,
	ETigerPremiumCurrencyPackDiscount__ETigerPremiumCurrencyPackDiscount_MAX = 5
};


// Enum Tiger.EHitAudio
enum class EHitAudio : uint8_t
{
	EHitAudio__None                = 0,
	EHitAudio__Flesh               = 1,
	EHitAudio__Stone               = 2,
	EHitAudio__Concrete            = 3,
	EHitAudio__Fabric              = 4,
	EHitAudio__MetalThick          = 5,
	EHitAudio__Gravel              = 6,
	EHitAudio__Ground              = 7,
	EHitAudio__CeramicRoofTile     = 8,
	EHitAudio__Grass               = 9,
	EHitAudio__Puddle              = 10,
	EHitAudio__Wood                = 11,
	EHitAudio__MetalThin           = 12,
	EHitAudio__Glass               = 13,
	EHitAudio__MAX                 = 14
};


// Enum Tiger.ETigerWeaponReloadMode
enum class ETigerWeaponReloadMode : uint8_t
{
	ETigerWeaponReloadMode__NotReloading = 0,
	ETigerWeaponReloadMode__WantsToReload = 1,
	ETigerWeaponReloadMode__Reloading = 2,
	ETigerWeaponReloadMode__ETigerWeaponReloadMode_MAX = 3
};


// Enum Tiger.ETigerReflectBehaviour
enum class ETigerReflectBehaviour : uint8_t
{
	ETigerReflectBehaviour__Reflect = 0,
	ETigerReflectBehaviour__Block  = 1,
	ETigerReflectBehaviour__None   = 2,
	ETigerReflectBehaviour__ETigerReflectBehaviour_MAX = 3
};


// Enum Tiger.ETigerReflectAttackType
enum class ETigerReflectAttackType : uint8_t
{
	ETigerReflectAttackType__Bullet = 0,
	ETigerReflectAttackType__Melee = 1,
	ETigerReflectAttackType__ThrownAxe = 2,
	ETigerReflectAttackType__ThrownTrap = 3,
	ETigerReflectAttackType__ThrownChain = 4,
	ETigerReflectAttackType__Count = 5,
	ETigerReflectAttackType__ETigerReflectAttackType_MAX = 6
};


// Enum Tiger.ETigerReplayMoveMode
enum class ETigerReplayMoveMode : uint8_t
{
	ETigerReplayMoveMode__Flying   = 0,
	ETigerReplayMoveMode__Walking  = 1,
	ETigerReplayMoveMode__ETigerReplayMoveMode_MAX = 2
};


// Enum Tiger.ETigerReplayInputMode
enum class ETigerReplayInputMode : uint8_t
{
	ETigerReplayInputMode__Movement = 0,
	ETigerReplayInputMode__Rotation = 1,
	ETigerReplayInputMode__Playback = 2,
	ETigerReplayInputMode__Keyframing = 3,
	ETigerReplayInputMode__ETigerReplayInputMode_MAX = 4
};


// Enum Tiger.ETigerReplayCameraTransitionType
enum class ETigerReplayCameraTransitionType : uint8_t
{
	ETigerReplayCameraTransitionType__None = 0,
	ETigerReplayCameraTransitionType__Bilinear = 1,
	ETigerReplayCameraTransitionType__ETigerReplayCameraTransitionType_MAX = 2
};


// Enum Tiger.ETigerReplayCameraMoveType
enum class ETigerReplayCameraMoveType : uint8_t
{
	ETigerReplayCameraMoveType__Linear = 0,
	ETigerReplayCameraMoveType__SCurve = 1,
	ETigerReplayCameraMoveType__ETigerReplayCameraMoveType_MAX = 2
};


// Enum Tiger.ETigerReplayCameraRotateMode
enum class ETigerReplayCameraRotateMode : uint8_t
{
	ETigerReplayCameraRotateMode__None = 0,
	ETigerReplayCameraRotateMode__LockRotation = 1,
	ETigerReplayCameraRotateMode__LookAt = 2,
	ETigerReplayCameraRotateMode__ETigerReplayCameraRotateMode_MAX = 3
};


// Enum Tiger.ETigerReplayCameraMode
enum class ETigerReplayCameraMode : uint8_t
{
	ETigerReplayCameraMode__Free   = 0,
	ETigerReplayCameraMode__Chase  = 1,
	ETigerReplayCameraMode__Rail   = 2,
	ETigerReplayCameraMode__ETigerReplayCameraMode_MAX = 3
};


// Enum Tiger.ETigerClassRepNodeMapping
enum class ETigerClassRepNodeMapping : uint8_t
{
	ETigerClassRepNodeMapping__NotRouted = 0,
	ETigerClassRepNodeMapping__RelevantAllConnections = 1,
	ETigerClassRepNodeMapping__OwnerRelevantConnection = 2,
	ETigerClassRepNodeMapping__Spatialize_Static = 3,
	ETigerClassRepNodeMapping__Spatialize_Dynamic = 4,
	ETigerClassRepNodeMapping__Spatialize_Dynamic_PlayerSpawned = 5,
	ETigerClassRepNodeMapping__Spatialize_Static_PlayerSpawned = 6,
	ETigerClassRepNodeMapping__Spatialize_Dormancy = 7,
	ETigerClassRepNodeMapping__ETigerClassRepNodeMapping_MAX = 8
};


// Enum Tiger.ETigerRespawnStreamingStatus
enum class ETigerRespawnStreamingStatus : uint8_t
{
	ETigerRespawnStreamingStatus__WaitingForStreaming = 0,
	ETigerRespawnStreamingStatus__DoneOrTimedOut = 1,
	ETigerRespawnStreamingStatus__ETigerRespawnStreamingStatus_MAX = 2
};


// Enum Tiger.ETigerResurrectHolyIncenseInteractionType
enum class ETigerResurrectHolyIncenseInteractionType : uint8_t
{
	ETigerResurrectHolyIncenseInteractionType__None = 0,
	ETigerResurrectHolyIncenseInteractionType__OnOverlap = 1,
	ETigerResurrectHolyIncenseInteractionType__OnWaveReveal = 2,
	ETigerResurrectHolyIncenseInteractionType__ETigerResurrectHolyIncenseInteractionType_MAX = 3
};


// Enum Tiger.EScreenTransitionState
enum class EScreenTransitionState : uint8_t
{
	EScreenTransitionState__NotStarted = 0,
	EScreenTransitionState__TransitionIn = 1,
	EScreenTransitionState__TransitionOut = 2,
	EScreenTransitionState__Finished = 3,
	EScreenTransitionState__EScreenTransitionState_MAX = 4
};


// Enum Tiger.EShockwaveWallDestroyReason
enum class EShockwaveWallDestroyReason : uint8_t
{
	EShockwaveWallDestroyReason__CollidedWithTerrain = 0,
	EShockwaveWallDestroyReason__ReachedMaxDistance = 1,
	EShockwaveWallDestroyReason__OtherShockwaveWall = 2,
	EShockwaveWallDestroyReason__EShockwaveWallDestroyReason_MAX = 3
};


// Enum Tiger.ETigerSignificanceElysiumNpcMeshType
enum class ETigerSignificanceElysiumNpcMeshType : uint8_t
{
	ETigerSignificanceElysiumNpcMeshType__Body = 0,
	ETigerSignificanceElysiumNpcMeshType__Head = 1,
	ETigerSignificanceElysiumNpcMeshType__Hair = 2,
	ETigerSignificanceElysiumNpcMeshType__Hoodie = 3,
	ETigerSignificanceElysiumNpcMeshType__Props = 4,
	ETigerSignificanceElysiumNpcMeshType__ETigerSignificanceElysiumNpcMeshType_MAX = 5
};


// Enum Tiger.ETigerSignificancePlayerMeshType
enum class ETigerSignificancePlayerMeshType : uint8_t
{
	ETigerSignificancePlayerMeshType__Body = 0,
	ETigerSignificancePlayerMeshType__Head = 1,
	ETigerSignificancePlayerMeshType__Hair = 2,
	ETigerSignificancePlayerMeshType__Hoodie = 3,
	ETigerSignificancePlayerMeshType__Headgear = 4,
	ETigerSignificancePlayerMeshType__Eyewear = 5,
	ETigerSignificancePlayerMeshType__Weapon = 6,
	ETigerSignificancePlayerMeshType__SecondaryWeapon = 7,
	ETigerSignificancePlayerMeshType__HolsteredWeapon = 8,
	ETigerSignificancePlayerMeshType__SecondaryHolsteredWeapon = 9,
	ETigerSignificancePlayerMeshType__BodyAdditional = 10,
	ETigerSignificancePlayerMeshType__Generic = 11,
	ETigerSignificancePlayerMeshType__Piercing = 12,
	ETigerSignificancePlayerMeshType__Beard = 13,
	ETigerSignificancePlayerMeshType__ETigerSignificancePlayerMeshType_MAX = 14
};


// Enum Tiger.ESplatmapTextureChannel
enum class ESplatmapTextureChannel : uint8_t
{
	ESplatmapTextureChannel__R     = 0,
	ESplatmapTextureChannel__G     = 1,
	ESplatmapTextureChannel__B     = 2,
	ESplatmapTextureChannel__A     = 3,
	ESplatmapTextureChannel__ChannelCount = 4,
	ESplatmapTextureChannel__ESplatmapTextureChannel_MAX = 5
};


// Enum Tiger.ETigerStaticMeshType
enum class ETigerStaticMeshType : uint8_t
{
	ETigerStaticMeshType__Default  = 0,
	ETigerStaticMeshType__Stairs   = 1,
	ETigerStaticMeshType__Slope    = 2,
	ETigerStaticMeshType__ETigerStaticMeshType_MAX = 3
};


// Enum Tiger.ETigerPersistentStatsCategory
enum class ETigerPersistentStatsCategory : uint8_t
{
	ETigerPersistentStatsCategory__OnlineTime = 0,
	ETigerPersistentStatsCategory__PlayTime = 1,
	ETigerPersistentStatsCategory__PingMin = 2,
	ETigerPersistentStatsCategory__PingMax = 3,
	ETigerPersistentStatsCategory__LoadingTime = 4,
	ETigerPersistentStatsCategory__TimeUntilPlay = 5,
	ETigerPersistentStatsCategory__Count = 6,
	ETigerPersistentStatsCategory__ETigerPersistentStatsCategory_MAX = 7
};


// Enum Tiger.ETigerStatsGroupType
enum class ETigerStatsGroupType : uint8_t
{
	ETigerStatsGroupType__GeneralStats = 0,
	ETigerStatsGroupType__RangedWeaponStats = 1,
	ETigerStatsGroupType__MeleeWeaponStats = 2,
	ETigerStatsGroupType__Count    = 3,
	ETigerStatsGroupType__ETigerStatsGroupType_MAX = 4
};


// Enum Tiger.ETigerStatsCategory
enum class ETigerStatsCategory : uint8_t
{
	ETigerStatsCategory__TimeInRedGas = 0,
	ETigerStatsCategory__TimeInRedGasWithStimulant = 1,
	ETigerStatsCategory__TimeInElysium = 2,
	ETigerStatsCategory__TimeTalkingToNPC = 3,
	ETigerStatsCategory__TimeSpentInCurrentElysiumSubMenu = 4,
	ETigerStatsCategory__TotalMoveDistance = 5,
	ETigerStatsCategory__WalkingDistance = 6,
	ETigerStatsCategory__DisciplineTravelDistance = 7,
	ETigerStatsCategory__CrouchingTime = 8,
	ETigerStatsCategory__ClimbingTime = 9,
	ETigerStatsCategory__TimeInside = 10,
	ETigerStatsCategory__WallHangTime = 11,
	ETigerStatsCategory__WallGrindTime = 12,
	ETigerStatsCategory__SlideTime = 13,
	ETigerStatsCategory__AirTime   = 14,
	ETigerStatsCategory__NotMovingTime = 15,
	ETigerStatsCategory__TotalJumps = 16,
	ETigerStatsCategory__TotalWallJumps = 17,
	ETigerStatsCategory__TotalSlideJumps = 18,
	ETigerStatsCategory__TotalLedgeGrabs = 19,
	ETigerStatsCategory__TotalLowVaults = 20,
	ETigerStatsCategory__NumberOfAlliedRevives = 21,
	ETigerStatsCategory__TotalAmountOfHealing = 22,
	ETigerStatsCategory__TotalNumberOfHealingEvents = 23,
	ETigerStatsCategory__TotalFeedingAbortsByDamage = 24,
	ETigerStatsCategory__TotalFeedingAbortsByPlayer = 25,
	ETigerStatsCategory__TotalTimeBloodHunted = 26,
	ETigerStatsCategory__TotalBloodHuntsByFeeding = 27,
	ETigerStatsCategory__TotalBloodHuntsByKilling = 28,
	ETigerStatsCategory__TotalNumberAreaMarkerConsequences = 29,
	ETigerStatsCategory__TotalNumberMapMarkerConsequences = 30,
	ETigerStatsCategory__TotalDamageDone = 31,
	ETigerStatsCategory__SurvivalTime = 32,
	ETigerStatsCategory__KindredsKilled = 33,
	ETigerStatsCategory__Placement = 34,
	ETigerStatsCategory__Diableries = 35,
	ETigerStatsCategory__DownedPlayers = 36,
	ETigerStatsCategory__LevelReached = 37,
	ETigerStatsCategory__Assists   = 38,
	ETigerStatsCategory__TotalExpGained = 39,
	ETigerStatsCategory__Deaths    = 40,
	ETigerStatsCategory__TimesDowned = 41,
	ETigerStatsCategory__NumberOfRangedHits = 42,
	ETigerStatsCategory__NumberOfRangedShots = 43,
	ETigerStatsCategory__DamageDealtWithWeapon = 44,
	ETigerStatsCategory__EnemiesDownedWithWeapon = 45,
	ETigerStatsCategory__NumberOfTimesOutOfAmmoWithWeapon = 46,
	ETigerStatsCategory__NumberHeadshotsWithWeapon = 47,
	ETigerStatsCategory__DurationMeleeWeaponHeldFor = 48,
	ETigerStatsCategory__NumberOfTimesMeleeWeaponDrawn = 49,
	ETigerStatsCategory__NumberOfAttacksWithMeleeWeapon = 50,
	ETigerStatsCategory__NumberOfHitsWithMeleeWeapon = 51,
	ETigerStatsCategory__TotalDamageDoneWithMeleeWeapon = 52,
	ETigerStatsCategory__TotalNumberOfDownsWithMeleeWeapon = 53,
	ETigerStatsCategory__TotalNumberOfKillsWithMeleeWeapon = 54,
	ETigerStatsCategory__Count     = 55,
	ETigerStatsCategory__ETigerStatsCategory_MAX = 56
};


// Enum Tiger.ETigerInWorldStore
enum class ETigerInWorldStore : uint8_t
{
	ETigerInWorldStore__None       = 0,
	ETigerInWorldStore__Pharmacy   = 1,
	ETigerInWorldStore__Tailor     = 2,
	ETigerInWorldStore__Antique    = 3,
	ETigerInWorldStore__Count      = 4,
	ETigerInWorldStore__ETigerInWorldStore_MAX = 5
};


// Enum Tiger.ETigerTelemetryDamageCauser
enum class ETigerTelemetryDamageCauser : uint8_t
{
	ETigerTelemetryDamageCauser__Undefined = 0,
	ETigerTelemetryDamageCauser__Self = 1,
	ETigerTelemetryDamageCauser__OtherPlayer = 2,
	ETigerTelemetryDamageCauser__Entity = 3,
	ETigerTelemetryDamageCauser__Judge = 4,
	ETigerTelemetryDamageCauser__Civilian = 5,
	ETigerTelemetryDamageCauser__None = 6,
	ETigerTelemetryDamageCauser__RedGas = 7,
	ETigerTelemetryDamageCauser__Environmental = 8,
	ETigerTelemetryDamageCauser__ETigerTelemetryDamageCauser_MAX = 9
};


// Enum Tiger.ETigerTelemetryDamageType
enum class ETigerTelemetryDamageType : uint8_t
{
	ETigerTelemetryDamageType__Undefined = 0,
	ETigerTelemetryDamageType__Ranged = 1,
	ETigerTelemetryDamageType__Melee = 2,
	ETigerTelemetryDamageType__Discipline = 3,
	ETigerTelemetryDamageType__Environmental = 4,
	ETigerTelemetryDamageType__RedGas = 5,
	ETigerTelemetryDamageType__Diablerie = 6,
	ETigerTelemetryDamageType__ETigerTelemetryDamageType_MAX = 7
};


// Enum Tiger.ETigerTelemetryAccountRegistrationMethod
enum class ETigerTelemetryAccountRegistrationMethod : uint8_t
{
	ETigerTelemetryAccountRegistrationMethod__Email = 0,
	ETigerTelemetryAccountRegistrationMethod__ETigerTelemetryAccountRegistrationMethod_MAX = 1
};


// Enum Tiger.ETigerTelemetryAceDeathType
enum class ETigerTelemetryAceDeathType : uint8_t
{
	ETigerTelemetryAceDeathType__Unknown = 0,
	ETigerTelemetryAceDeathType__Damage = 1,
	ETigerTelemetryAceDeathType__Diablerize = 2,
	ETigerTelemetryAceDeathType__ETigerTelemetryAceDeathType_MAX = 3
};


// Enum Tiger.ETigerTelemetryMetaItemSourceType
enum class ETigerTelemetryMetaItemSourceType : uint8_t
{
	ETigerTelemetryMetaItemSourceType__FlashStore = 0,
	ETigerTelemetryMetaItemSourceType__Battlepass = 1,
	ETigerTelemetryMetaItemSourceType__Reward = 2,
	ETigerTelemetryMetaItemSourceType__Other = 3,
	ETigerTelemetryMetaItemSourceType__ETigerTelemetryMetaItemSourceType_MAX = 4
};


// Enum Tiger.ETigerTelemetryRespawnMethod
enum class ETigerTelemetryRespawnMethod : uint8_t
{
	ETigerTelemetryRespawnMethod__Altar = 0,
	ETigerTelemetryRespawnMethod__RespawnFeature = 1,
	ETigerTelemetryRespawnMethod__ETigerTelemetryRespawnMethod_MAX = 2
};


// Enum Tiger.ETigerTelemetryAceRebirthType
enum class ETigerTelemetryAceRebirthType : uint8_t
{
	ETigerTelemetryAceRebirthType__Unknown = 0,
	ETigerTelemetryAceRebirthType__Revive = 1,
	ETigerTelemetryAceRebirthType__Respawn = 2,
	ETigerTelemetryAceRebirthType__ETigerTelemetryAceRebirthType_MAX = 3
};


// Enum Tiger.ETigerTelemetryNetworkIpType
enum class ETigerTelemetryNetworkIpType : uint8_t
{
	ETigerTelemetryNetworkIpType__Unspec = 0,
	ETigerTelemetryNetworkIpType__Ipv4 = 1,
	ETigerTelemetryNetworkIpType__Ipv6 = 2,
	ETigerTelemetryNetworkIpType__ETigerTelemetryNetworkIpType_MAX = 3
};


// Enum Tiger.ETigerTelemetryNetworkType
enum class ETigerTelemetryNetworkType : uint8_t
{
	ETigerTelemetryNetworkType__Unknown = 0,
	ETigerTelemetryNetworkType__Ethernet = 1,
	ETigerTelemetryNetworkType__Wifi = 2,
	ETigerTelemetryNetworkType__ETigerTelemetryNetworkType_MAX = 3
};


// Enum Tiger.ETigerTelemetryChallengeType
enum class ETigerTelemetryChallengeType : uint8_t
{
	ETigerTelemetryChallengeType__Daily = 0,
	ETigerTelemetryChallengeType__Weekly = 1,
	ETigerTelemetryChallengeType__Other = 2,
	ETigerTelemetryChallengeType__Mastery = 3,
	ETigerTelemetryChallengeType__ETigerTelemetryChallengeType_MAX = 4
};


// Enum Tiger.ETigerTelemetryHardCurrencyRecieveMethod
enum class ETigerTelemetryHardCurrencyRecieveMethod : uint8_t
{
	ETigerTelemetryHardCurrencyRecieveMethod__TopUp = 0,
	ETigerTelemetryHardCurrencyRecieveMethod__BattlepassReward = 1,
	ETigerTelemetryHardCurrencyRecieveMethod__Gifted = 2,
	ETigerTelemetryHardCurrencyRecieveMethod__Other = 3,
	ETigerTelemetryHardCurrencyRecieveMethod__Challenges = 4,
	ETigerTelemetryHardCurrencyRecieveMethod__ETigerTelemetryHardCurrencyRecieveMethod_MAX = 5
};


// Enum Tiger.ETigerTelemetryBattlepassType
enum class ETigerTelemetryBattlepassType : uint8_t
{
	ETigerTelemetryBattlepassType__Regular = 0,
	ETigerTelemetryBattlepassType__Bundle = 1,
	ETigerTelemetryBattlepassType__RankSkipOnly = 2,
	ETigerTelemetryBattlepassType__ETigerTelemetryBattlepassType_MAX = 3
};


// Enum Tiger.ETigerTelemetryGameplayMode
enum class ETigerTelemetryGameplayMode : uint8_t
{
	ETigerTelemetryGameplayMode__BattleRoyale = 0,
	ETigerTelemetryGameplayMode__ETigerTelemetryGameplayMode_MAX = 1
};


// Enum Tiger.ETigerTelemetryRankedMode
enum class ETigerTelemetryRankedMode : uint8_t
{
	ETigerTelemetryRankedMode__Casual = 0,
	ETigerTelemetryRankedMode__Ranked = 1,
	ETigerTelemetryRankedMode__ETigerTelemetryRankedMode_MAX = 2
};


// Enum Tiger.ETigerTelemetryPlatformType
enum class ETigerTelemetryPlatformType : uint8_t
{
	ETigerTelemetryPlatformType__Steam = 0,
	ETigerTelemetryPlatformType__Unknown = 1,
	ETigerTelemetryPlatformType__Ps5 = 2,
	ETigerTelemetryPlatformType__ETigerTelemetryPlatformType_MAX = 3
};


// Enum Tiger.ETigerTelemetryDeviceType
enum class ETigerTelemetryDeviceType : uint8_t
{
	ETigerTelemetryDeviceType__Windows = 0,
	ETigerTelemetryDeviceType__ETigerTelemetryDeviceType_MAX = 1
};


// Enum Tiger.ETigerTelemetryCauseOfPingRemoval
enum class ETigerTelemetryCauseOfPingRemoval : uint8_t
{
	ETigerTelemetryCauseOfPingRemoval__Timeout = 0,
	ETigerTelemetryCauseOfPingRemoval__Cancel = 1,
	ETigerTelemetryCauseOfPingRemoval__CollectedLoot = 2,
	ETigerTelemetryCauseOfPingRemoval__GroupMemberRemoved = 3,
	ETigerTelemetryCauseOfPingRemoval__ETigerTelemetryCauseOfPingRemoval_MAX = 4
};


// Enum Tiger.ETigerTelemetryExpSource
enum class ETigerTelemetryExpSource : uint8_t
{
	ETigerTelemetryExpSource__Civillian = 0,
	ETigerTelemetryExpSource__PotentCivillian = 1,
	ETigerTelemetryExpSource__HighPotentCivillian = 2,
	ETigerTelemetryExpSource__Diablerie = 3,
	ETigerTelemetryExpSource__Rat  = 4,
	ETigerTelemetryExpSource__Team = 5,
	ETigerTelemetryExpSource__Entity = 6,
	ETigerTelemetryExpSource__Invalid = 7,
	ETigerTelemetryExpSource__ETigerTelemetryExpSource_MAX = 8
};


// Enum Tiger.ETigerThrallMenu
enum class ETigerThrallMenu : uint8_t
{
	ETigerThrallMenu__Thralls      = 0,
	ETigerThrallMenu__Upgrades     = 1,
	ETigerThrallMenu__Other        = 2,
	ETigerThrallMenu__ETigerThrallMenu_MAX = 3
};


// Enum Tiger.ETigerMissionObjectiveType
enum class ETigerMissionObjectiveType : uint8_t
{
	ETigerMissionObjectiveType__Action_Brawl = 0,
	ETigerMissionObjectiveType__Action_Firearms = 1,
	ETigerMissionObjectiveType__Action_Chase = 2,
	ETigerMissionObjectiveType__Stealth_FindEntrance = 3,
	ETigerMissionObjectiveType__Stealth_TakePhoto = 4,
	ETigerMissionObjectiveType__Stealth_Hack = 5,
	ETigerMissionObjectiveType__Intel_StealIntenl = 6,
	ETigerMissionObjectiveType__Intel_PlantBug = 7,
	ETigerMissionObjectiveType__Intel_ThreatenWitness = 8,
	ETigerMissionObjectiveType__ETigerMissionObjectiveType_MAX = 9
};


// Enum Tiger.ETigerMissionType
enum class ETigerMissionType : uint8_t
{
	ETigerMissionType__Action      = 0,
	ETigerMissionType__Stealth     = 1,
	ETigerMissionType__Intel       = 2,
	ETigerMissionType__ETigerMissionType_MAX = 3
};


// Enum Tiger.ETigerThrallSystemLoadedTable
enum class ETigerThrallSystemLoadedTable : uint8_t
{
	ETigerThrallSystemLoadedTable__Abilities = 0,
	ETigerThrallSystemLoadedTable__BaseThralls = 1,
	ETigerThrallSystemLoadedTable__StatsModifier = 2,
	ETigerThrallSystemLoadedTable__ThrallMission = 3,
	ETigerThrallSystemLoadedTable__ETigerThrallSystemLoadedTable_MAX = 4
};


// Enum Tiger.ETigerThrallStatId
enum class ETigerThrallStatId : uint8_t
{
	ETigerThrallStatId__Perception = 0,
	ETigerThrallStatId__Commitment = 1,
	ETigerThrallStatId__Dominance  = 2,
	ETigerThrallStatId__Sociability = 3,
	ETigerThrallStatId__Proficiency = 4,
	ETigerThrallStatId__Stealth    = 5,
	ETigerThrallStatId__Stamina    = 6,
	ETigerThrallStatId__Combat     = 7,
	ETigerThrallStatId__Count      = 8,
	ETigerThrallStatId__ETigerThrallStatId_MAX = 9
};


// Enum Tiger.ETigerThrallAbilityId
enum class ETigerThrallAbilityId : uint8_t
{
	ETigerThrallAbilityId__None    = 0,
	ETigerThrallAbilityId__Diplomat = 1,
	ETigerThrallAbilityId__Slippery = 2,
	ETigerThrallAbilityId__NaturalEnemy = 3,
	ETigerThrallAbilityId__IWorkAlone = 4,
	ETigerThrallAbilityId__ETigerThrallAbilityId_MAX = 5
};


// Enum Tiger.ETigerTraversalNetValue
enum class ETigerTraversalNetValue : uint8_t
{
	ETigerTraversalNetValue__Sprint = 0,
	ETigerTraversalNetValue__RootMotionDisabled = 1,
	ETigerTraversalNetValue__Climb = 2,
	ETigerTraversalNetValue__ForcedMove = 3,
	ETigerTraversalNetValue__Stagger = 4,
	ETigerTraversalNetValue__LedgeGrab = 5,
	ETigerTraversalNetValue__LowVault = 6,
	ETigerTraversalNetValue__Downed = 7,
	ETigerTraversalNetValue__WallGrind = 8,
	ETigerTraversalNetValue__Sliding = 9,
	ETigerTraversalNetValue__RESERVE = 10,
	ETigerTraversalNetValue__RESERVE01 = 11,
	ETigerTraversalNetValue__RESERVE02 = 12,
	ETigerTraversalNetValue__RESERVE03 = 13,
	ETigerTraversalNetValue__RESERVE04 = 14,
	ETigerTraversalNetValue__ETigerTraversalNetValue_MAX = 15
};


// Enum Tiger.ETigerTraversalTransitionResult
enum class ETigerTraversalTransitionResult : uint8_t
{
	ETigerTraversalTransitionResult__Success = 0,
	ETigerTraversalTransitionResult__SuccessWithConsumption = 1,
	ETigerTraversalTransitionResult__Fail = 2,
	ETigerTraversalTransitionResult__ETigerTraversalTransitionResult_MAX = 3
};


// Enum Tiger.ETigerWallJumpInputOption
enum class ETigerWallJumpInputOption : uint8_t
{
	ETigerWallJumpInputOption__None = 0,
	ETigerWallJumpInputOption__OppositeToNormal = 1,
	ETigerWallJumpInputOption__ParallelToNormal = 2,
	ETigerWallJumpInputOption__ETigerWallJumpInputOption_MAX = 3
};


// Enum Tiger.ETigerMedalTier
enum class ETigerMedalTier : uint8_t
{
	ETigerMedalTier__None          = 0,
	ETigerMedalTier__Bronze        = 1,
	ETigerMedalTier__Silver        = 2,
	ETigerMedalTier__Gold          = 3,
	ETigerMedalTier__Ruby          = 4,
	ETigerMedalTier__ETigerMedalTier_MAX = 5
};


// Enum Tiger.ETigerMetadataPathType
enum class ETigerMetadataPathType : uint8_t
{
	ETigerMetadataPathType__MetadataRoot = 0,
	ETigerMetadataPathType__MetadataJson = 1,
	ETigerMetadataPathType__WeaponIcons = 2,
	ETigerMetadataPathType__RankIcons = 3,
	ETigerMetadataPathType__ETigerMetadataPathType_MAX = 4
};


// Enum Tiger.ETigerUIBorderShape
enum class ETigerUIBorderShape : uint8_t
{
	ETigerUIBorderShape__ETigerBorderShape_Rectangle = 0,
	ETigerUIBorderShape__ETigerBorderShape_Circle = 1,
	ETigerUIBorderShape__ETigerBorderShape_MAX = 2
};


// Enum Tiger.ETigerForceOption
enum class ETigerForceOption : uint8_t
{
	ETigerForceOption__NotForced   = 0,
	ETigerForceOption__ForceYes    = 1,
	ETigerForceOption__ForceNo     = 2,
	ETigerForceOption__ETigerForceOption_MAX = 3
};


// Enum Tiger.ETigerMinMax
enum class ETigerMinMax : uint8_t
{
	ETigerMinMax__Min              = 0,
	ETigerMinMax__Max              = 1,
	ETigerMinMax__Count            = 2
};


// Enum Tiger.ETigerExtendedWeaponLevels
enum class ETigerExtendedWeaponLevels : uint8_t
{
	ETigerExtendedWeaponLevels__Default = 0,
	ETigerExtendedWeaponLevels__ExtendedSmall = 1,
	ETigerExtendedWeaponLevels__ExtendedMedium = 2,
	ETigerExtendedWeaponLevels__ExtendedLarge = 3,
	ETigerExtendedWeaponLevels__LevelCount = 4,
	ETigerExtendedWeaponLevels__ETigerExtendedWeaponLevels_MAX = 5
};


// Enum Tiger.ETigerSpreadModifier
enum class ETigerSpreadModifier : uint8_t
{
	ETigerSpreadModifier__Aiming   = 0,
	ETigerSpreadModifier__Crouching = 1,
	ETigerSpreadModifier__Moving   = 2,
	ETigerSpreadModifier__IsInAir  = 3,
	ETigerSpreadModifier__Sprinting = 4,
	ETigerSpreadModifier__Sliding  = 5,
	ETigerSpreadModifier__WallHang = 6,
	ETigerSpreadModifier__Count    = 7,
	ETigerSpreadModifier__ETigerSpreadModifier_MAX = 8
};


// Enum Tiger.ETigerWeaponAmmoType
enum class ETigerWeaponAmmoType : uint8_t
{
	ETigerWeaponAmmoType__Bullet   = 0,
	ETigerWeaponAmmoType__Buckshot = 1,
	ETigerWeaponAmmoType__Pistol   = 2,
	ETigerWeaponAmmoType__SMG      = 3,
	ETigerWeaponAmmoType__Bolt     = 4,
	ETigerWeaponAmmoType__Precision = 5,
	ETigerWeaponAmmoType__Unique   = 6,
	ETigerWeaponAmmoType__Count    = 7,
	ETigerWeaponAmmoType__ETigerWeaponAmmoType_MAX = 8
};


// Enum Tiger.ETigerWeaponType
enum class ETigerWeaponType : uint8_t
{
	ETigerWeaponType__AssaultRifle = 0,
	ETigerWeaponType__Revolver     = 1,
	ETigerWeaponType__Rifle        = 2,
	ETigerWeaponType__SMG          = 3,
	ETigerWeaponType__Pistol       = 4,
	ETigerWeaponType__Axe          = 5,
	ETigerWeaponType__Bat          = 6,
	ETigerWeaponType__Knife        = 7,
	ETigerWeaponType__Shotgun      = 8,
	ETigerWeaponType__Sword        = 9,
	ETigerWeaponType__Bow          = 10,
	ETigerWeaponType__Crossbow     = 11,
	ETigerWeaponType__Count        = 12,
	ETigerWeaponType__ETigerWeaponType_MAX = 13
};


// Enum Tiger.ETigerWorldCompositionProxyMode
enum class ETigerWorldCompositionProxyMode : uint8_t
{
	ETigerWorldCompositionProxyMode__Legacy = 0,
	ETigerWorldCompositionProxyMode__SingleStageMerge = 1,
	ETigerWorldCompositionProxyMode__ETigerWorldCompositionProxyMode_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
