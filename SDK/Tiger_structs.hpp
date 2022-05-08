#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Tiger_enums.hpp"
#include "AIModule_classes.hpp"
#include "TigerCore_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "UMG_classes.hpp"
#include "Shark_classes.hpp"
#include "Engine_classes.hpp"
#include "SignificanceManager_classes.hpp"
#include "InputCore_classes.hpp"
#include "SlateCore_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "TigerVoip_classes.hpp"
#include "SharkPaymentSDK_classes.hpp"
#include "ReplicationGraph_classes.hpp"
#include "ProceduralMeshComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tiger.TigerCharacterSingleStatModification
// 0x0008
struct FTigerCharacterSingleStatModification
{
	float                                              AdditiveChange;                                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MultiplicativeChange;                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterStatModification
// 0x00A0
struct FTigerCharacterStatModification
{
	float                                              ClanSkillCooldownMultiplier;                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ArchetypeSkillCooldownMultiplier;                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CooldownMultiplier;                                       // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CooldownSpeedMultiplier;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RechargeMultiplier;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RechargeSpeedMultiplier;                                  // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerCharacterSingleStatModification       MovementSpeed;                                            // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              ClimbSpeedMultiplier;                                     // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MasqueradePointMultiplier;                                // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MasqueradeConsequenceDurationMultiplier;                  // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BloodhuntDurationMultiplier;                              // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerCharacterSingleStatModification       MovementAcceleration;                                     // 0x0030(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerCharacterSingleStatModification       Health;                                                   // 0x0038(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              JumpForceMultiplier;                                      // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WallJumpForceMultiplier;                                  // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AttackSpeedMultiplier;                                    // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReloadSpeedMultiplier;                                    // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StaminaCostMultiplier;                                    // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AmmoFindMultiplier;                                       // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AmmoCapacityMultiplier;                                   // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FeedSpeedMultiplier;                                      // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MeleeDamageDealtMultiplier;                               // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageDealtMultiplier;                                    // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageDealtToCiviliansMultiplier;                         // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AbilityDamageDealtMultiplier;                             // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShotgunDamageDealtMultiplier;                             // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShootingDamageDealtMultiplier;                            // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageTakenMultiplier;                                    // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MeleeDamageTakenMultiplier;                               // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AbilityDamageTakenMultiplier;                             // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShootingDamageTakenMultiplier;                            // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MosquitoDamageTakenMultiplier;                            // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HealingReceivedMultiplier;                                // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LoudnessMultiplier;                                       // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReviveSpeedMultiplier;                                    // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExperienceGainMultiplier;                                 // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimSensitivityMultiplier;                                 // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerStatusEffect
// 0x000D
struct FTigerStatusEffect
{
	bool                                               bBlockInteraction;                                        // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bBlockOffensiveActions;                                   // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bBlockObjectInteractions;                                 // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bInvulnerable;                                            // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bInvisible;                                               // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bHidden;                                                  // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bLogicHidden;                                             // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDisableSprint;                                           // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDisableClimb;                                            // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDisableDisciplines;                                      // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDisableRotation;                                         // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bDisableHeightenedSenses;                                 // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bBlockAILogic;                                            // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerNiagaraAttachment
// 0x0048
struct FTigerNiagaraAttachment
{
	struct FSoftObjectPath                             NiagaraPath;                                              // 0x0000(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FName                                       AttachPointName;                                          // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EAttachLocation>                       AttachLocationRule;                                       // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bOnlySpawnOnLocalPlayer;                                  // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseAbsoluteRotation;                                     // 0x0042(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNpcVoCategory
// 0x0008
struct FTigerNpcVoCategory
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerSightConfigProperties
// 0x001C
struct FTigerSightConfigProperties
{
	float                                              SightRadius;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LoseSightRadius;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CloseSightRadius;                                         // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CloseLoseSightRadius;                                     // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClosePeripheralVisionAngleDegrees;                        // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HeightDifference;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCommandQueue
// 0x0010
struct FTigerCommandQueue
{
	TArray<class UTigerAICommandBase*>                 Commands;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct Tiger.TigerContextualAnimationWrapper
// 0x000C
struct FTigerContextualAnimationWrapper
{
	struct FName                                       AnimationName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Chance;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAIMoveToLocationData
// 0x0018
struct FTigerAIMoveToLocationData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AcceptanceRadius;                                         // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Yaw;                                                      // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSetRotation;                                             // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNpcReactionEvent
// 0x0018
struct FTigerNpcReactionEvent
{
	float                                              Intensity;                                                // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerAIMasqueradeState                            PreState;                                                 // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerAIMasqueradeState                            PostState;                                                // 0x0005(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     EventLocation;                                            // 0x0008(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsVisual;                                                // 0x0014(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAiMovementBudget
// 0x0018
struct FTigerAiMovementBudget
{
	int                                                NpcMoveBudget[0x3];                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinAllotedMoveTime;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxAllotedMoveTime;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRestrictMovementTimePerTicket;                           // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPlayerActionProcessData
// 0x0070
struct FTigerPlayerActionProcessData
{
	class ATigerPlayer*                                TigerPlayer;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATigerBaseNPC*                               NPC;                                                      // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0010(0x0060) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAIGroupCapCondition
// 0x000C
struct FTigerAIGroupCapCondition
{
	int                                                Slot;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CommandIndex;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerAiConditionCheckTiming                       ConditionCheckTiming;                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerAiFailedCAPConditionAction                   FailedConditionAction;                                    // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAIGroupCapCommandWrapper
// 0x0018
struct FTigerAIGroupCapCommandWrapper
{
	struct FTigerAIGroupCapCondition                   Condition;                                                // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTigerAICommandBase*                         Command;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAiGroupCapSlot
// 0x0050
struct FTigerAiGroupCapSlot
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Yaw;                                                      // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerNPCAsset*                              NpcAssetToSpawn;                                          // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<ETigerNPCType>                              RestrictedNpcTypesForSlot;                                // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerAIGroupCapCommandWrapper>      SlotCommands;                                             // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               bLoopCommands;                                            // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class ATigerNPC*                                   OccupyingNPC;                                             // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CommandIndex;                                             // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTimedAnimationTrigger
// 0x0010
struct FTigerTimedAnimationTrigger
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TriggerTime;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerTimedAnimationType                           AnimationType;                                            // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAimAssistState
// 0x0068
struct FTigerAimAssistState
{
	class ATigerCharacter*                             Target;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAimAssistDistanceMapping
// 0x0010
struct FTigerAimAssistDistanceMapping
{
	class UCurveFloat*                                 NormalizedDistanceToMultiplier;                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Multiplier;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAimAssistEffect
// 0x0030
struct FTigerAimAssistEffect
{
	bool                                               bEnable;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableRadius;                                           // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FTigerAimAssistDistanceMapping              Radius;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerAimAssistDistanceMapping              Strength;                                                 // 0x0018(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              MinRangeMultiplier;                                       // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxRangeMultiplier;                                       // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAimAssistModeConfig
// 0x0068
struct FTigerAimAssistModeConfig
{
	bool                                               bEnable;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FTigerAimAssistEffect                       SlowdownEffect;                                           // 0x0008(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerAimAssistEffect                       RotationEffect;                                           // 0x0038(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.WeaponDistanceDesc
// 0x0008
struct FWeaponDistanceDesc
{
	float                                              MinDistSquared;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxDistSquared;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAIPlayerAction
// 0x0058
struct FTigerAIPlayerAction
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	ETigerAIPlayerAction                               Action;                                                   // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class ATigerCharacter*                             AffectedTarget;                                           // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseCustomLocation;                                       // 0x001C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              HearingRangeSquared;                                      // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VisionRangeSquared;                                       // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MustReactRangeSquared;                                    // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FearMultiplier;                                           // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MasqueradeMultiplier;                                     // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bProcessOnlyByAffectedTarget;                             // 0x0034(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMustBeProcessedByAffectedTarget;                         // 0x0035(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDontProcessForAffectedTarget;                            // 0x0036(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIgnoreInvisibility;                                      // 0x0037(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldDistanceScaleFearValue;                            // 0x0038(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldDistanceScaleMasqueradePoints;                     // 0x0039(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x1E];                                      // 0x003A(0x001E) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAIMasqueradeEvent
// 0x0088
struct FTigerAIMasqueradeEvent
{
	float                                              Amount;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                              // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class ATigerCharacter*                             TargetActor;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATigerPlayer*                                Instigator;                                               // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerAIPlayerAction                        PlayerAction;                                             // 0x0030(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSightConfigData
// 0x0050
struct FTigerSightConfigData
{
	TMap<ETigerAIMasqueradeState, struct FTigerSightConfigProperties> SightProperties;                                          // 0x0000(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAISplinePathConnection
// 0x0030
struct FTigerAISplinePathConnection
{
	int                                                Index;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<ETigerNPCType>                              RestrictedTypes;                                          // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class ATigerAiSplinePathHub*                       ConnectedHub;                                             // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATigerAISplinePath*                          OwningSpline;                                             // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAlwaysSwitchSpline;                                      // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAISplinePathData
// 0x00A0
struct FTigerAISplinePathData
{
	TArray<struct FVector>                             PathWaypoints;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PathWaypointsRightVectors;                                // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerAISplinePathConnection                StartingPoint;                                            // 0x0020(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FTigerAISplinePathConnection                EndPoint;                                                 // 0x0050(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerAISplinePathConnection>        AdditionalPathConnections;                                // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                 // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                ExtraRows;                                                // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RowDistance;                                              // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRandomVisualAsset
// 0x0010
struct FTigerRandomVisualAsset
{
	class UTigerNPCVisualAsset*                        VisualAsset;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPlayerSequenceByClan
// 0x0020
struct FTigerPlayerSequenceByClan
{
	class UAnimSequence*                               AnimationObjects[0x4];                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerMontageByClan
// 0x0020
struct FTigerPlayerMontageByClan
{
	class UAnimMontage*                                AnimationObjects[0x4];                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerBlendSpaceByClan
// 0x0020
struct FTigerPlayerBlendSpaceByClan
{
	class UBlendSpace*                                 AnimationObjects[0x4];                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerBlendSpace1DByClan
// 0x0020
struct FTigerPlayerBlendSpace1DByClan
{
	class UBlendSpace1D*                               AnimationObjects[0x4];                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAnimNotifyIKData
// 0x0034
struct FTigerAnimNotifyIKData
{
	struct FVector                                     IKTarget;                                                 // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RelativeTargetJointTarget;                                // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurrentIKAlphaBlend;                                      // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldBeUsed;                                            // 0x001C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x17];                                      // 0x001D(0x0017) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTooltipAction
// 0x0048
struct FTigerTooltipAction
{
	struct FText                                       ActionText;                                               // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FName                                       InputAction;                                              // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsHoldAction;                                            // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bListenForOnPreviewKeyDown;                               // 0x0021(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShouldConsumeInput;                                      // 0x0022(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x0023(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnPressed;                                                // 0x0024(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnReleased;                                               // 0x0034(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerItemId
// 0x0008
struct FTigerItemId
{
	uint64_t                                           Value;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerArchetypeReward
// 0x0010
struct FTigerArchetypeReward
{
	int                                                Level;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FTigerItemId                                ItemId;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerArchetype
// 0x0010
struct FTigerArchetype
{
	TArray<struct FTigerArchetypeReward>               Rewards;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentCharacterID
// 0x0001
struct FTigerPersistentCharacterID
{
	unsigned char                                      SlotIndex;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentOutfitSetup
// 0x0038
struct FTigerPersistentOutfitSetup
{
	TSoftClassPtr<class UClass>                        OutfitConfig;                                             // 0x0000(0x0028) (CPF_BlueprintVisible, CPF_Transient, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           OutfitId;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                HoodieIndex;                                              // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCharacterAppearance
// 0x00C0
struct FTigerCharacterAppearance
{
	struct FTigerPersistentOutfitSetup                 PersistentAppearance;                                     // 0x0000(0x0038) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           HeadId;                                                   // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SkinColorIndex;                                           // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	uint64_t                                           HairId;                                                   // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           HairColorId;                                              // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           EyeColorId;                                               // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           TattooId;                                                 // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           FacePaintId;                                              // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           HeadgearId;                                               // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           EyewearId;                                                // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           PiercingSetId;                                            // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           EyebrowShapeId;                                           // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           EyebrowColorId;                                           // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           BeardId;                                                  // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           BeardColorId;                                             // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerGender                                       BodyType;                                                 // 0x00A8(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<uint64_t>                                   EmoteIds;                                                 // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentPlayerCharacterData
// 0x00D8
struct FTigerPersistentPlayerCharacterData
{
	ETigerPowerKitType                                 ArchetypeType;                                            // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FTigerCharacterAppearance                   CharacterAppearance;                                      // 0x0008(0x00C0) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TArray<uint64_t>                                   SelectedPerks;                                            // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentPlayerCharacter
// 0x00E8
struct FTigerPersistentPlayerCharacter
{
	struct FTigerPersistentCharacterID                 UniqueCharacterID;                                        // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FTigerPersistentPlayerCharacterData         Data;                                                     // 0x0008(0x00D8) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	int64_t                                            LastUsedAt;                                               // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemPrice
// 0x0010
struct FTigerItemPrice
{
	int                                                Amount;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FTigerItemId                                SoftCurrencyId;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemIdWithPrice
// 0x0018
struct FTigerItemIdWithPrice
{
	struct FTigerItemId                                ItemId;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemPrice                             Price;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuffReplicatedInstanceData
// 0x0020
struct FTigerBuffReplicatedInstanceData
{
	class UClass* /*UTigerBuff*/                       BuffType;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BuffID;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BuffStrength;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerCharacter>              BuffCaster;                                               // 0x0014(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerDamageContext
// 0x0018
struct FTigerDamageContext
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     DamagingUObject;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerHeightenedSensesAudioVisualization
// 0x0008
struct FTigerHeightenedSensesAudioVisualization
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuildingSystemBalconyVolumeDefaults
// 0x0048
struct FTigerBuildingSystemBalconyVolumeDefaults
{
	struct FVector                                     BottomVolumeOffset;                                       // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     BottomVolumeScale;                                        // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LeftVolumeOffset;                                         // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LeftVolumeScale;                                          // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RightVolumeOffset;                                        // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RightVolumeScale;                                         // 0x003C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFacePoseData
// 0x0038
struct FTigerFacePoseData
{
	TSoftObjectPtr<class USkeletalMesh>                HeadMesh;                                                 // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPoseAsset*                                  PoseAsset;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               PoseSourceAnimation;                                      // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerReplicatedCharacterStats
// 0x0018
struct FTigerReplicatedCharacterStats
{
	struct FTigerCharacterSingleStatModification       Health;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerCharacterSingleStatModification       MovementSpeed;                                            // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              ClimbSpeedMultiplier;                                     // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReviveSpeedMultiplier;                                    // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.DisciplineUse
// 0x0050
struct FDisciplineUse
{
	ETigerDisciplinesEnum                              DisciplineUsed;                                           // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                // 0x0010(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class ATigerCharacter*>                     Targets;                                                  // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DisciplineSpecificVector1;                                // 0x0030(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DisciplineSpecificVector2;                                // 0x003C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisciplineSpecificBool1;                                 // 0x0048(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisciplineSpecificBool2;                                 // 0x0049(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNonReplicatedCharacterStats
// 0x0088
struct FTigerNonReplicatedCharacterStats
{
	struct FTigerCharacterSingleStatModification       MovementAcceleration;                                     // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              JumpForceMultiplier;                                      // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WallJumpForceMultiplier;                                  // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MeleeDamageDealtMultiplier;                               // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AbilityDamageDealtMultiplier;                             // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageTakenMultiplier;                                    // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MeleeDamageTakenMultiplier;                               // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AbilityDamageTakenMultiplier;                             // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShootingDamageTakenMultiplier;                            // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HealingReceivedMultiplier;                                // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CooldownMultiplier;                                       // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CooldownSpeedMultiplier;                                  // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RechargeMultiplier;                                       // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RechargeSpeedMultiplier;                                  // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MasqueradePointMultiplier;                                // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MasqueradeConsequenceDurationMultiplier;                  // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BloodhuntDurationMultiplier;                              // 0x0044(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClanSkillCooldownMultiplier;                              // 0x0048(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ArchetypeSkillCooldownMultiplier;                         // 0x004C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AttackSpeedMultiplier;                                    // 0x0050(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReloadSpeedMultiplier;                                    // 0x0054(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShootingDamageDealtMultiplier;                            // 0x0058(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShotgunDamageDealtMultiplier;                             // 0x005C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StaminaCostMultiplier;                                    // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AmmoFindMultiplier;                                       // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AmmoCapacityMultiplier;                                   // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FeedSpeedMultiplier;                                      // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MosquitoDamageTakenMultiplier;                            // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LoudnessMultiplier;                                       // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExperienceGainMultiplier;                                 // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimSensitivityMultiplier;                                 // 0x007C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageDealtMultiplier;                                    // 0x0080(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageDealtToCiviliansMultiplier;                         // 0x0084(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeshCollection
// 0x0030
struct FTigerMeshCollection
{
	TSoftObjectPtr<class UTigerNPCVisualAsset>         VisualAsset;                                              // 0x0000(0x0028) (CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             HeadMeshIndex;                                            // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             HairMeshIndex;                                            // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             ColorSetIndex;                                            // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             HairColorSetIndex;                                        // 0x002B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             PropAssetIndex;                                           // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerThrallStats
// 0x0010
struct FTigerThrallStats
{
	TArray<int>                                        Stats;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerBloodResonanceBuffs
// 0x0010
struct FTigerBloodResonanceBuffs
{
	TArray<class UClass* /*UTigerBuff*/>               Buffs;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBloodVeinBranchMovementSettings
// 0x0024
struct FTigerBloodVeinBranchMovementSettings
{
	float                                              LaunchPower;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SimulationTimeScale;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              YawRotationSpeed;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PitchDownRotationSpeed;                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PitchUpRotationSpeed;                                     // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetPitchOffset;                                        // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxTargetPitch;                                           // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxSpeed;                                                 // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaximumMovementYawAdjustment;                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterCardData
// 0x0078
struct FTigerCharacterCardData
{
	TSoftClassPtr<class UClass>                        CharacterIcon;                                            // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        CharacterCardShape;                                       // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        CharacterCardBackground;                                  // 0x0050(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerStateGameData
// 0x00D0
struct FTigerPlayerStateGameData
{
	TWeakObjectPtr<class ATigerPlayerState>            WeakPlayerState;                                          // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerId;                                                 // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerCharacterCardData                     CardData;                                                 // 0x0020(0x0078) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	int                                                RankedPoints;                                             // 0x0098(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	int64_t                                            PlayerLevel;                                              // 0x00A0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ESharkPlatformType                                 PlatformType;                                             // 0x00A8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FString                                     FakePlayerName;                                           // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerPersistentPlayerID                    PersistentPlayerID;                                       // 0x00C0(0x0010) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDeferredBuffInstantiation
// 0x0028
struct FTigerDeferredBuffInstantiation
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class ATigerCharacter*                             BuffCaster;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Tiger.TigerBuildingSystemTransformableCorner
// 0x0040
struct FTigerBuildingSystemTransformableCorner
{
	class UPoseableMeshComponent*                      Component;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StaticComponent;                                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    MiddleBoneRotation;                                       // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     EndBoneLocation;                                          // 0x001C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     StartNormal;                                              // 0x0028(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     NextNormal;                                               // 0x0034(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuildingSystemWallPieceInstancingDataEntry
// 0x0018
struct FTigerBuildingSystemWallPieceInstancingDataEntry
{
	class UStaticMeshComponent*                        Component;                                                // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      Data;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuildingSystemWallPieceInstancingData
// 0x0010
struct FTigerBuildingSystemWallPieceInstancingData
{
	TArray<struct FTigerBuildingSystemWallPieceInstancingDataEntry> Entries;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerStreamableBuildingSide
// 0x0030
struct FTigerStreamableBuildingSide
{
	TArray<class UStaticMeshComponent*>                SideSegments;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                   // 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Center;                                                   // 0x001C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                 // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerStreamableBuildingSides
// 0x0010
struct FTigerStreamableBuildingSides
{
	TArray<struct FTigerStreamableBuildingSide>        BuildingWalls;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerQuestIdentifier
// 0x0030
struct FTigerQuestIdentifier
{
	struct FString                                     QuestLineId;                                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     QuestId;                                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       ObjectiveId;                                              // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengeTypeID
// 0x0004
struct FTigerChallengeTypeID
{
	uint32_t                                           UID;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerChallengeCollectionEntry
// 0x0018
struct FTigerChallengeCollectionEntry
{
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                          // 0x0000(0x0004) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTigerChallenge*                             ReferenceChallenge;                                       // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerChallengeCategory                            ChallengeCategory;                                        // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNestedSubCategoryContainer
// 0x0020
struct FTigerNestedSubCategoryContainer
{
	TArray<struct FTigerChallengeTypeID>               ChallengeStorageIDs;                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerItemId>                        RewardIdForSpecificChallenge;                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengeRequirementBase
// 0x0008
struct FTigerChallengeRequirementBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerChallengeRequirementWeaponType
// 0x0010 (0x0018 - 0x0008)
struct FTigerChallengeRequirementWeaponType : public FTigerChallengeRequirementBase
{
	bool                                               bAnyRangedWeapon;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bAnyMeleeWeapon;                                          // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UTigerItemAsset*                             RequiredWeaponAsAsset;                                    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerChallengeRequirementBloodhunted
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementBloodhunted : public FTigerChallengeRequirementBase
{
	bool                                               bOnlyWhenBloodhunted;                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerChallengeRequirementDistance
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementDistance : public FTigerChallengeRequirementBase
{
	bool                                               bMeasureDistance;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Distance;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerChallengeRequirementPowerKit
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementPowerKit : public FTigerChallengeRequirementBase
{
	bool                                               bCheckPowerKit;                                           // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ETigerPowerKitType                                 PowerKit;                                                 // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerChallengeRequirementClan
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementClan : public FTigerChallengeRequirementBase
{
	bool                                               bSpecificClan;                                            // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ETigerClan                                         RequiredClan;                                             // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerChallengeRequirementDisciplineSlot
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementDisciplineSlot : public FTigerChallengeRequirementBase
{
	bool                                               bUseSpecificSlot;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ETigerDisciplineSlot                               RequiredSlot;                                             // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	bool                                               bUseAnyDisciplineSlot;                                    // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct Tiger.TigerChallengeRequirementAirborne
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementAirborne : public FTigerChallengeRequirementBase
{
	bool                                               bCheckAirborne;                                           // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerChallengeRequirementGameMode
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementGameMode : public FTigerChallengeRequirementBase
{
	bool                                               bSpecificGameMode;                                        // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	EMatchBalanceMode                                  RequiredGameMode;                                         // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerChallengeCollectionArray
// 0x0010
struct FTigerChallengeCollectionArray
{
	TArray<class UTigerChallengeCollection*>           ChallengeCollections;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengeRequirementTraversalState
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementTraversalState : public FTigerChallengeRequirementBase
{
	bool                                               bCheckTraversal;                                          // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	ETigerTraversalState                               RequiredTraversalState;                                   // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerInventoryItemOwnerType
// 0x0003
struct FTigerInventoryItemOwnerType
{
	ETigerClan                                         Clan;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerPowerKitType                                 Archetype;                                                // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerGender                                       Gender;                                                   // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerLodSplitMesh
// 0x0078
struct FTigerLodSplitMesh
{
	TSoftObjectPtr<class USkeletalMesh>                Mesh;                                                     // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                Mesh_Lod0;                                                // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                Mesh_NoLod0;                                              // 0x0050(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterCustomizationScalarParameter
// 0x0010
struct FTigerCharacterCustomizationScalarParameter
{
	ETigerCharacterDynamicMeshType                     DynamicMeshType;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerCharacterMeshPart                            Part;                                                     // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterCustomizationColorParameter
// 0x001C
struct FTigerCharacterCustomizationColorParameter
{
	ETigerCharacterDynamicMeshType                     DynamicMeshType;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerCharacterMeshPart                            Part;                                                     // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterCustomizationTextureParameter
// 0x0018
struct FTigerCharacterCustomizationTextureParameter
{
	ETigerCharacterDynamicMeshType                     DynamicMeshType;                                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerCharacterMeshPart                            Part;                                                     // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterCustomizationParameters
// 0x0038
struct FTigerCharacterCustomizationParameters
{
	TArray<struct FTigerCharacterCustomizationScalarParameter> Scalars;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerCharacterCustomizationColorParameter> Colors;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerCharacterCustomizationTextureParameter> Textures;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       MaterialSlotName;                                         // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterOutfitHoodieVariation
// 0x00B8
struct FTigerCharacterOutfitHoodieVariation
{
	bool                                               bEnableHairAnimDynamics;                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class USkeletalMesh>                Mesh;                                                     // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<int, TSoftObjectPtr<class UMaterialInterface>> Materials;                                                // 0x0030(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	struct FTigerCharacterCustomizationParameters      AdditionalParameters;                                     // 0x0080(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterHolsteredWeaponTransforms
// 0x0060
struct FTigerCharacterHolsteredWeaponTransforms
{
	struct FTransform                                  MeleeWeaponHolsteredTransform;                            // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  MeleeWeaponSecondaryHolsteredTransform;                   // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInventoryCombinedItemValue
// 0x0010
struct FTigerInventoryCombinedItemValue
{
	struct FTigerInventoryItemOwnerType                Key;                                                      // 0x0000(0x0003) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	class UClass* /*UTigerInventoryItemBase*/          Value;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterHeadHeadgearOffset
// 0x0018
struct FTigerCharacterHeadHeadgearOffset
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterHeadPiercingSocket
// 0x0018
struct FTigerCharacterHeadPiercingSocket
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterCustomizationItem
// 0x0030
struct FTigerCharacterCustomizationItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TSoftClassPtr<class UClass>                        ItemClassPath;                                            // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterCustomizationOutfitData
// 0x0000 (0x0030 - 0x0030)
struct FTigerCharacterCustomizationOutfitData : public FTigerCharacterCustomizationItem
{

};

// ScriptStruct Tiger.TigerCharacterCustomizationHeadData
// 0x0000 (0x0030 - 0x0030)
struct FTigerCharacterCustomizationHeadData : public FTigerCharacterCustomizationItem
{

};

// ScriptStruct Tiger.TigerCombinedItemCustomizations
// 0x0010
struct FTigerCombinedItemCustomizations
{
	TArray<struct FTigerCharacterCustomizationItem>    CombinedItems;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeshData
// 0x0002
struct FTigerMeshData
{
	bool                                               bIsVisibile;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bVisibilityIsAllowed;                                     // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerStaticMeshData
// 0x0016 (0x0018 - 0x0002)
struct FTigerStaticMeshData : public FTigerMeshData
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPoseableMeshData
// 0x0016 (0x0018 - 0x0002)
struct FTigerPoseableMeshData : public FTigerMeshData
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCharacterMeshData
// 0x0016 (0x0018 - 0x0002)
struct FTigerCharacterMeshData : public FTigerMeshData
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkeletalMesh*                               RegisteredMesh;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterPoseableMeshBoneSetupData
// 0x002C
struct FTigerCharacterPoseableMeshBoneSetupData
{
	ETigerCharacterMeshPart                            BodyPart;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParentBone;                                               // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       MeshBone;                                                 // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RelativeLocation;                                         // 0x0014(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    RelativeRotation;                                         // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDeltaCorrectionData
// 0x0040
struct FTigerDeltaCorrectionData
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
	class UAnimMontage*                                CurrentAnimation;                                         // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPreviewerData
// 0x02B0
struct FTigerPreviewerData
{
	TSoftClassPtr<class UClass>                        Outfit;                                                   // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OutfitHoodieIndex;                                        // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TSoftClassPtr<class UClass>                        Head;                                                     // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SkinColorIndex;                                           // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TSoftClassPtr<class UClass>                        HairStyle;                                                // 0x0060(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        HairColor;                                                // 0x0088(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        Beard;                                                    // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        BeardColor;                                               // 0x00D8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        EyeColor;                                                 // 0x0100(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        Eyebrow;                                                  // 0x0128(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        EyebrowColor;                                             // 0x0150(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        Tattoo;                                                   // 0x0178(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        FacePaint;                                                // 0x01A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        Headgear;                                                 // 0x01C8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        Eyewear;                                                  // 0x01F0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        PiercingSet;                                              // 0x0218(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UClass>>                Emotes;                                                   // 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        CurrentOutfitConfig;                                      // 0x0250(0x0028) (CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        CombinedItem;                                             // 0x0278(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPhysicalInteractionDescription
// 0x0030
struct FTigerPhysicalInteractionDescription
{
	class UAnimMontage*                                PrimeStart;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrimeMid;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrimeEnd;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                SecondaryStart;                                           // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                SecondaryMid;                                             // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                SecondaryEnd;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPhysicalInteractionMontages
// 0x0060
struct FTigerPhysicalInteractionMontages
{
	struct FTigerPhysicalInteractionDescription        DescriptionByTargetGender[0x2];                           // 0x0000(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterPoseableMeshBoneData
// 0x0024
struct FTigerCharacterPoseableMeshBoneData
{
	ETigerCharacterMeshPart                            BodyPart;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParentBone;                                               // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RelativeLocation;                                         // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    RelativeRotation;                                         // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMuteInfo
// 0x0018
struct FTigerMuteInfo
{
	bool                                               bIsMuted;                                                 // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Reason;                                                   // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     EndsAt;                                                   // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChatMessage
// 0x0058
struct FTigerChatMessage
{
	struct FText                                       PlayerName;                                               // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                  // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FSharkUserId                                SharkUserId;                                              // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FTigerPersistentPlayerID                    PlayerId;                                                 // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	EShAccountChannel                                  PlayerChannel;                                            // 0x0050(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerChatMessageCategory                          MessageCategory;                                          // 0x0051(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      GroupPlayerId;                                            // 0x0052(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCharacterCinematicTemplate
// 0x0060
struct FTigerCharacterCinematicTemplate
{
	struct FString                                     PresetName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Clan;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PowerKitIndex;                                            // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Gender;                                                   // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OutfitCommand;                                            // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             UtilityItems;                                             // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.ClientSpawnData
// 0x0050
struct FClientSpawnData
{
	uint32_t                                           ClientUid;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass* /*UObject*/                          SpawnClass;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ClassSpecificData;                                        // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerContextualHelpContext
// 0x0018
struct FTigerContextualHelpContext
{
	class ATigerPlayerController*                      PlayerController;                                         // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerPowerKit*                              PowerKit;                                                 // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumMatchesPlayedTotal;                                    // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumMatchesWithArchetype;                                  // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCurrentContextualHelp
// 0x0018
struct FTigerCurrentContextualHelp
{
	class UTigerContextualHelp*                        ContextualHelp;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerDamageNumberData
// 0x0020
struct FTigerDamageNumberData
{
	struct FVector_NetQuantize                         HitLocationOffset;                                        // 0x0000(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            TotalDamageDealt;                                         // 0x000C(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            HealthDamageDealt;                                        // 0x000E(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NewHealth;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasExtraHealth;                                          // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasShield;                                               // 0x0015(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bWasCriticalHit;                                          // 0x0016(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bWasDowned;                                               // 0x0017(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bWasKilled;                                               // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              RangedDamageFallofPercent;                                // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.DamageTriggerOverlapData
// 0x0010
struct FDamageTriggerOverlapData
{
	class ATigerCharacter*                             Character;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimerAccumulator;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGrimoireUnlock
// 0x0010
struct FTigerGrimoireUnlock
{
	ETigerGrimoireUnlockType                           UnlockType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UTigerGrimoireEntry*                         Entry;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerNpcDialogue
// 0x00B8
struct FTigerNpcDialogue
{
	bool                                               bDisabled;                                                // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DialogueHeader;                                           // 0x0008(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	TArray<struct FText>                               DialogueText;                                             // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               bRandomiseText;                                           // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerDialoguePriority                             DialoguePriority;                                         // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerDialogueIdleAnimation                        IdleAnimation;                                            // 0x0032(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	TArray<class UTigerDialogueCondition*>             DialogueConditions;                                       // 0x0038(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	ETigerDialogueRepeatability                        Repeatability;                                            // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerDialogueCategory                             DialogueCategory;                                         // 0x0049(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIgnoreCategoryRestrictions;                              // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FTigerQuestIdentifier                       QuestToStartId;                                           // 0x0050(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerGrimoireUnlock>                GrimoireUnlocks;                                          // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
	bool                                               bSuperfluousAudio;                                        // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               DialogueAudio;                                            // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                AnimationToPlay;                                          // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           EventId;                                                  // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0xC];                                       // 0x00AC(0x000C) MISSED OFFSET
};

// ScriptStruct Tiger.TigerDisciplineLevelInfo
// 0x0040
struct FTigerDisciplineLevelInfo
{
	struct FText                                       StatName;                                                 // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      StatChanges;                                              // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FText                                       StatChangeSuffix;                                         // 0x0028(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerScoutedCharacter
// 0x0018
struct FTigerScoutedCharacter
{
	class ATigerCharacter*                             ScoutedCharacter;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerMapMarkerProxy*                        MarkerProxy;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerScouterCharacterData
// 0x0030
struct FTigerScouterCharacterData
{
	TArray<struct FTigerScoutedCharacter>              ScoutedCharacters;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerScoutedCharacter>              GroupScoutedCharacters;                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UUserWidget*/                      ScoutedPlayerMapMarkerClass;                              // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UUserWidget*/                      ScoutedNpcMapMarkerClass;                                 // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.EarthshockUseDataNetworked
// 0x0034
struct FEarthshockUseDataNetworked
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                           // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SurfaceNormal;                                            // 0x0018(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ConeDirection;                                            // 0x0024(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTargetIsWall;                                            // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerShockwaveWallData
// 0x0060
struct FTigerShockwaveWallData
{
	TArray<class UCurveFloat*>                         SpeedCurve;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<class UCurveVector*>                        EffectExtentCurve;                                        // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FVector>                             TerrainSweepBoxExtent;                                    // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      TravelDistance;                                           // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      Damage;                                                   // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass* /*UTigerBuff*/>               OnHitBuff;                                                // 0x0050(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.DistrictDataAnchor
// 0x0010
struct FDistrictDataAnchor
{
	struct FVector2D                                   WorldPosition;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   MapPosition;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMetaStoreEntryItem
// 0x0010
struct FTigerMetaStoreEntryItem
{
	struct FTigerItemId                                ItemId;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMetaStoreEntry
// 0x0050
struct FTigerMetaStoreEntry
{
	uint64_t                                           StoreEntryID;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           PremiumPrice;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ImagePath;                                                // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Discount;                                                 // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FDateTime                                   StartDate;                                                // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   EndDate;                                                  // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                FlashStoreSlot;                                           // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FTigerMetaStoreEntryItem>            Items;                                                    // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMetaStoreEntriesConfig
// 0x0028
struct FTigerMetaStoreEntriesConfig
{
	ETigerMetaStoreCategoryType                        ConfigCategory;                                           // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FTigerMetaStoreEntry>                StoreEntries;                                             // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int64_t                                            Checksum;                                                 // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsValid;                                                 // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMetaStoreEntriesKeeper
// 0x0040
struct FTigerMetaStoreEntriesKeeper
{
	TArray<struct FScriptDelegate>                     ConfigEventSubscribers;                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FTigerMetaStoreEntriesConfig                StoreEntryConfig;                                         // 0x0010(0x0028) (CPF_NativeAccessSpecifierPublic)
	ETigerMetaStoreEventType                           LastEventStatus;                                          // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.AutoInitializedWidget
// 0x0020
struct FAutoInitializedWidget
{
	class UClass* /*UUserWidget*/                      WidgetClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AssignToPropertyName;                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAddToViewportOnPlayerSpawn;                              // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAddToOnScreenWidgets;                                    // 0x0019(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRewardReason
// 0x0008
struct FTigerRewardReason
{
	ETigerRewardReason                                 ReasonType;                                               // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRewardsWithReasons
// 0x0020
struct FTigerRewardsWithReasons
{
	TArray<struct FTigerItemId>                        ItemRewards;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TArray<struct FTigerRewardReason>                  Reasons;                                                  // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerElysiumNpcProp
// 0x0070
struct FTigerElysiumNpcProp
{
	TSoftObjectPtr<class UObject>                      PropAsset;                                                // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  LocalTransform;                                           // 0x0030(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AttachmentPoint;                                          // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerElysiumNpcAnimationData
// 0x0010
struct FTigerElysiumNpcAnimationData
{
	class UAnimSequenceBase*                           AnimationToPlay;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AnimationOffset;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerElysiumNpcData
// 0x0190
struct FTigerElysiumNpcData
{
	TSoftObjectPtr<class USkeletalMesh>                BodyMesh;                                                 // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                HeadMesh;                                                 // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                HairMesh;                                                 // 0x0050(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>                HoodieMesh;                                               // 0x0078(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerElysiumNpcProp                        FirstPropAsset;                                           // 0x00A0(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FTigerElysiumNpcProp                        SecondPropAsset;                                          // 0x0110(0x0070) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FTigerElysiumNpcAnimationData               AnimationData;                                            // 0x0180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGroupId
// 0x0010
struct FTigerGroupId
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct Tiger.TigerPersistentPlayerCardData
// 0x0018
struct FTigerPersistentPlayerCardData
{
	struct FTigerItemId                                CharacterIconId;                                          // 0x0000(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                CharacterCardShapeMaskId;                                 // 0x0008(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                CharacterCardBackgroundTextureId;                         // 0x0010(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerPostMatchScreenHighlightStat
// 0x000C
struct FTigerPlayerPostMatchScreenHighlightStat
{
	int                                                MatchStatValue;                                           // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SeasonAverage;                                            // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerSeasonMatchStatType                          MatchStatType;                                            // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsNewSeasonBest;                                         // 0x0009(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPlayerMatchStats
// 0x0038
struct FTigerPlayerMatchStats
{
	ETigerKillerType                                   KillerType;                                               // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     KillerName;                                               // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerPlayerPostMatchScreenHighlightStat    Placement;                                                // 0x0018(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FTigerPlayerPostMatchScreenHighlightStat> Stats;                                                    // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonSessionExperience
// 0x0018
struct FTigerSeasonSessionExperience
{
	TArray<int>                                        SeasonExperienceAccumulatedSources;                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonExperienceAccumulated;                              // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPlayerMatchMetaStats
// 0x0048
struct FTigerPlayerMatchMetaStats
{
	struct FTigerSeasonSessionExperience               SeasonSessionExperienceAccumulated;                       // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonExpBeforeSession;                                   // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeExpBeforeSession;                                // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeExperienceAccumulated;                           // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SoftCurrencyBeforeSession;                                // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SoftCurrencyAccumulated;                                  // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTigerItemId                                SoftCurrencyItemId;                                       // 0x0030(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerExpBeforeSession;                                   // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerExperienceAccumulated;                              // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RpBeforeSession;                                          // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RpAccumulated;                                            // 0x0044(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRewardWithQuantity
// 0x0010
struct FTigerRewardWithQuantity
{
	struct FTigerItemId                                ItemId;                                                   // 0x0000(0x0008) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRewardsCollection
// 0x0028
struct FTigerRewardsCollection
{
	TArray<struct FTigerRewardWithQuantity>            InventoryRewards;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                PremiumCurrency;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonExp;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeExp;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerExp;                                                // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonPlacementExpBoostPercentage;                        // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGroupInvitation
// 0x0010
struct FTigerGroupInvitation
{
	struct FTigerGroupId                               GroupID;                                                  // 0x0000(0x0010) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPartyId
// 0x0010
struct FTigerPartyId
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerParty
// 0x0030
struct FTigerParty
{
	struct FTigerPartyId                               ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIds;                                                // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     LeaderPlayerId;                                           // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerClientItemDefinition
// 0x0018
struct FTigerClientItemDefinition
{
	struct FTigerItemId                                ItemId;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Cost;                                                     // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTigerItemId                                SoftCurrencyId;                                           // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerClientCategoryDefinition
// 0x0018
struct FTigerClientCategoryDefinition
{
	ETigerPersistentStoreCategory                      Category;                                                 // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FTigerClientItemDefinition>          AvailableItems;                                           // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayingEmote
// 0x0010
struct FTigerPlayingEmote
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StartTime;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               StopsMovement;                                            // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNPCSpawningPoint
// 0x0020
struct FTigerNPCSpawningPoint
{
	class UTigerNPCAsset*                              NPCAsset;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SpawnPoint;                                               // 0x0008(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerEventConfig_ChallengeInstanceDefinition
// 0x0010
struct FTigerEventConfig_ChallengeInstanceDefinition
{
	struct FTigerChallengeTypeID                       ChallengeStorageID;                                       // 0x0000(0x0004) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                          // 0x0004(0x0004) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                RewardId;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerEventConfig_Rewards
// 0x0010
struct FTigerEventConfig_Rewards
{
	TArray<struct FTigerItemId>                        ItemIds;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerEventConfig_Repeating
// 0x0018
struct FTigerEventConfig_Repeating
{
	ETigerEventConfig_RepeatingPeriod                  RepeatingPeriod;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDateTime                                   ActiveStart;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   ActiveEnd;                                                // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerEventConfig
// 0x0178
struct FTigerEventConfig
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EventsJson;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               EventTitle;                                               // 0x0020(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               EventDescription;                                         // 0x0070(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               EventBannerImageURL;                                      // 0x00C0(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	ETigerEventConfig_EventType                        EventType;                                                // 0x0110(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FTigerEventConfig_ChallengeInstanceDefinition> EventChallengeDefinitions;                                // 0x0118(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerEventConfig_Rewards>           EventRewards;                                             // 0x0128(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	ETigerEventConfig_TimeFrame                        Timeframe;                                                // 0x0138(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	struct FTigerEventConfig_Repeating                 EventRepeatingPeriod;                                     // 0x0140(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   EventLifeTimeStart;                                       // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   EventLifeTimeEnd;                                         // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PromotionPeriodInDays;                                    // 0x0168(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CooloffPeriodInDays;                                      // 0x016C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               EventActive;                                              // 0x0170(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	uint32_t                                           EventId;                                                  // 0x0174(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFeedingDescription
// 0x0030
struct FTigerFeedingDescription
{
	class UAnimMontage*                                AttackerApproach;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                AttackerFeeding;                                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                AttackerDecouple;                                         // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                VictimApproach;                                           // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                VictimFeeding;                                            // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                VictimDecouple;                                           // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFeedingMontages
// 0x0090
struct FTigerFeedingMontages
{
	struct FTigerFeedingDescription                    FemaleTargetDescription;                                  // 0x0000(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerFeedingDescription                    MaleTargetDescription;                                    // 0x0030(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerFeedingDescription                    EntityTargetDescription;                                  // 0x0060(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFeedingDataByGender
// 0x0120
struct FTigerFeedingDataByGender
{
	struct FTigerFeedingMontages                       FeedingDataByVampireGender[0x2];                          // 0x0000(0x0090) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBpFindSessionResultList
// 0x0028
struct FTigerBpFindSessionResultList
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	TArray<struct FString>                             AlternativeStrings;                                       // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBpFindSessionSelectedSession
// 0x0110
struct FTigerBpFindSessionSelectedSession
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0000(0x0110) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPlayerPresenceInfo
// 0x0028
struct FTigerPlayerPresenceInfo
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerLocation;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsOnline;                                                // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerExpLevelRequirements
// 0x0018
struct FTigerExpLevelRequirements
{
	TArray<int>                                        ExpRequirements;                                          // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               bClampAtMaxLevel;                                         // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ExpRequirementIncreasePostMaxLevel;                       // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfig_RewardTier
// 0x0010
struct FTigerSeasonConfig_RewardTier
{
	TArray<struct FTigerItemId>                        ItemIds;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfig_Archetypes
// 0x0010
struct FTigerSeasonConfig_Archetypes
{
	TArray<struct FTigerSeasonConfig_RewardTier>       Rewards;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfig_ArchetypeRewards
// 0x0080
struct FTigerSeasonConfig_ArchetypeRewards
{
	struct FTigerSeasonConfig_Archetypes               Archetypes[0x8];                                          // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengeConfigCollection
// 0x0018
struct FTigerChallengeConfigCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FTigerItemId>                        SequentialRewardIds;                                      // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengeInstanceDefinition
// 0x0020
struct FTigerChallengeInstanceDefinition
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FTigerChallengeTypeID                       ChallengeStorageID;                                       // 0x0008(0x0004) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FTigerItemId>                        RewardIds;                                                // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerWeeklyChallengeInstanceDefinition
// 0x0008 (0x0028 - 0x0020)
struct FTigerWeeklyChallengeInstanceDefinition : public FTigerChallengeInstanceDefinition
{
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                          // 0x0020(0x0004) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerSeasonConfig_WeeklyChallengeCollection
// 0x0020 (0x0038 - 0x0018)
struct FTigerSeasonConfig_WeeklyChallengeCollection : public FTigerChallengeConfigCollection
{
	TArray<struct FTigerWeeklyChallengeInstanceDefinition> ChallengeDefinitions;                                     // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   UnlockDate;                                               // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   LockDate;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfig_DailyFinalReward
// 0x0038
struct FTigerSeasonConfig_DailyFinalReward
{
	struct FTigerItemId                                DailyFinalRewardIds[0x7];                                 // 0x0000(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfig_DailyRewardCollection
// 0x0020
struct FTigerSeasonConfig_DailyRewardCollection
{
	TArray<struct FTigerItemId>                        TrackRewardIds;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_DailyFinalReward> DailyFinalRewardWeeks;                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerEventToSeasonExperienceSource
// 0x0008
struct FTigerPlayerEventToSeasonExperienceSource
{
	ETigerSeasonExperienceSource                       ExperienceSource;                                         // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ExperienceAmount;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonExperienceSourceModifiers
// 0x0008
struct FTigerSeasonExperienceSourceModifiers
{
	int                                                ExperienceCap;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExperienceMultiplier;                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonExperiences
// 0x00C8
struct FTigerSeasonExperiences
{
	TMap<ETigerPlayerEvent, struct FTigerPlayerEventToSeasonExperienceSource> PlayerEventBasedExperiences;                              // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        TopPlacementExperience;                                   // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FTigerSeasonExperienceSourceModifiers       ExperienceSourceModifiers[0xD];                           // 0x0060(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerMedalTiers
// 0x0010
struct FTigerPlayerMedalTiers
{
	int                                                bronze;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                silver;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                gold;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Ruby;                                                     // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerExperiences
// 0x0040
struct FTigerPlayerExperiences
{
	struct FTigerPlayerMedalTiers                      ExperienceSourceModifiers[0x4];                           // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfig
// 0x0350
struct FTigerSeasonConfig
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FDateTime                                   SeasonStartDate;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   SeasonEndDate;                                            // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   BattlepassStartDate;                                      // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   BattlepassEndDate;                                        // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                BattlePassItemId;                                         // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           BattlePassPrice;                                          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   BattlepassBannerTexture;                                  // 0x0038(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerItemIdWithPrice>               SpecialItemPrices;                                        // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_RewardTier>       FreeRewards;                                              // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_RewardTier>       BattlepassRewards;                                        // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_RewardTier>       PlayerLevelRewards;                                       // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FTigerSeasonConfig_ArchetypeRewards         ArchetypeLevelRewards;                                    // 0x00A0(0x0080) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_WeeklyChallengeCollection> WeeklyChallenges;                                         // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                DailyChallengeExpReward;                                  // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                PersistentDailyChallengeTokenReward;                      // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerSeasonConfig_DailyRewardCollection    DailyRewards;                                             // 0x0140(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FName                                       DefaultVendorSubLevelName;                                // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                SoftCurrencyMatchRewardItemId;                            // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SoftCurrencyMatchRewardMultiplier;                        // 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          SoftCurrencyPlacementBonus;                               // 0x0178(0x0088) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FTigerSeasonExperiences                     SeasonExperiences;                                        // 0x0200(0x00C8) (CPF_Edit, CPF_DisableEditOnInstance, CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
	struct FTigerPlayerExperiences                     PlayerExperiences;                                        // 0x02C8(0x0040) (CPF_Edit, CPF_DisableEditOnInstance, CPF_RepSkip, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerExpLevelRequirements                  SeasonExpRequirements;                                    // 0x0308(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FTigerExpLevelRequirements                  ArchetypeExpRequirements;                                 // 0x0320(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FTigerExpLevelRequirements                  PlayerExpRequirements;                                    // 0x0338(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerProgressedChallengeWrapper
// 0x0050
struct FTigerProgressedChallengeWrapper
{
	struct FText                                       ChallengeDescription;                                     // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	int                                                TargetValue;                                              // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PostSessionProgress;                                      // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PreSessionProgress;                                       // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerChallengeCategory                            ChallengeType;                                            // 0x0024(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasTiers;                                                // 0x0025(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	int                                                Tier;                                                     // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<int>                                        TieredTargetValues;                                       // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                          // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UTigerInventoryItemBase*                     ChallengeReward;                                          // 0x0048(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMatchStats
// 0x00B8
struct FTigerMatchStats
{
	struct FTigerPlayerMatchStats                      PlayerMatchStats;                                         // 0x0000(0x0038) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FTigerPlayerMatchMetaStats                  OwnPlayerStats;                                           // 0x0038(0x0048) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerProgressedChallengeWrapper>    ProgressedChallenges;                                     // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      InitialGroupCount;                                        // 0x0090(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerGroupingMode                                 GroupingMode;                                             // 0x0091(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchMode                                    MatchMode;                                                // 0x0092(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0093(0x0001) MISSED OFFSET
	struct FGuid                                       MatchID;                                                  // 0x0094(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FString                                     MatchReporterId;                                          // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGameModeDescriptor
// 0x0078
struct FTigerGameModeDescriptor
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                     // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TileUrl;                                                  // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerGroupingMode                                 GroupMode;                                                // 0x0040(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FDateTime                                   ActiveStart;                                              // 0x0048(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   ActiveEnd;                                                // 0x0050(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinPlayersInMatch;                                        // 0x0058(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPlayersInMatch;                                        // 0x005C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            PlayerLevelMin;                                           // 0x0060(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            PlayerLevelMax;                                           // 0x0068(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GroupSize;                                                // 0x0070(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchMode                                    MatchMode;                                                // 0x0074(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGameModeFeatureWidget
// 0x0030
struct FTigerGameModeFeatureWidget
{
	TSoftClassPtr<class UClass>                        SoftWidgetClass;                                          // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                   // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerItemData
// 0x0010
struct FTigerItemData
{
	class UTigerItemAsset*                             ItemAsset;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRespawnFeatureSettings
// 0x0090
struct FTigerRespawnFeatureSettings
{
	int                                                MaxLifeTokens;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                InitialLifeTokens;                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DisableRespawnAtWaveNumber;                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumSpawnPointsToEvaluate;                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EnemyAvoidanceDistance;                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UCurveFloat*                                 EnemyAvoidanceScoringCurve;                               // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RespawnTime;                                              // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              GhostModeDuration;                                        // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RespawnHealthRatio;                                       // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TSoftClassPtr<class UClass>                        GhostBuffClass;                                           // 0x0030(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDropWeapons;                                             // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableDownState;                                         // 0x0059(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	TArray<ETigerPlayerEvent>                          PlayerEventsThatIncreasesLives;                           // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerItemData>                      ItemDroppedOnDeath;                                       // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerItemData>                      ItemsAddedOnRespawn;                                      // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGameModeMinMax
// 0x0010
struct FTigerGameModeMinMax
{
	int64_t                                            Min;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            Max;                                                      // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDsSettings
// 0x01A8
struct FTigerDsSettings
{
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0000(0x01A8) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGameModeConfig
// 0x0248
struct FTigerGameModeConfig
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Hidden;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                     // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TileUrl;                                                  // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   ActiveStart;                                              // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   ActiveEnd;                                                // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasDateRange;                                            // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FTigerGameModeMinMax                        PlayerLevelRequirement;                                   // 0x0060(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerGameModeMinMax                        PlayerCount;                                              // 0x0070(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	ETigerGroupingMode                                 GroupMode;                                                // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                GroupSize;                                                // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchMode                                    MatchMode;                                                // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	ETigerSessionType                                  SESSIONTYPE;                                              // 0x008C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0089(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FTigerDsSettings                            DsSettings;                                               // 0x0090(0x01A8) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     TelemetryID;                                              // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGameModesConfigBranch
// 0x0030
struct FTigerGameModesConfigBranch
{
	int                                                SeasonId;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsDefault;                                                // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Revision;                                                 // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FTigerGameModeConfig>                GameModes;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerStreamerModeSettings
// 0x0010
struct FTigerStreamerModeSettings
{
	ETigerStreamerModeLevel                            StreamerModeLevel;                                        // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableAnonymousMode;                                     // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnablePlayerScramble;                                    // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableKillFeed;                                         // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableMiniMap;                                          // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableNotifications;                                    // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisablePlayerMessages;                                   // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHidePlayerCurrency;                                      // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHideMatchId;                                             // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                SavedVersion;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAudioSettings
// 0x0070
struct FTigerAudioSettings
{
	float                                              MasterVolume;                                             // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SFXVolume;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MusicVolume;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VideoVolume;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DialogueVolume;                                           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VoiceChatVolume;                                          // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MicVolume;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ControllerSpeakerVolume;                                  // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableVoiceChat;                                         // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPushToTalk;                                              // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllowBackgroundAudio;                                    // 0x0022(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableDolbyAtmos;                                        // 0x0023(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     VoipInputDevice;                                          // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     VoipOutputDevice;                                         // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AudioOutputDevice;                                        // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MixPresetName;                                            // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SavedVersion;                                             // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerLanguageSettings
// 0x0028
struct FTigerLanguageSettings
{
	struct FString                                     AudioLanguage;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TextLanguage;                                             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseSubtitles;                                            // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                SavedVersion;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGameplaySettings
// 0x0008
struct FTigerGameplaySettings
{
	bool                                               bSwapOutDefaultWeapon;                                    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bMuteGeneralChat;                                         // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRotateMinimap;                                           // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseCrossplay;                                            // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SavedVersion;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDisplaySettings
// 0x002C
struct FTigerDisplaySettings
{
	int                                                ResolutionX;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ResolutionY;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ResolutionScale;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                WindowMode;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Gamma;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FrameRateLimit;                                           // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FrameRateLimitOverride;                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableFrameRateSmoothing;                                // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableVSync;                                             // 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	int                                                FsrQualityLevel;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FsrSharpening;                                            // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SavedVersion;                                             // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGraphicsQualityPreset
// 0x0044
struct FTigerGraphicsQualityPreset
{
	int                                                ViewDistanceQuality;                                      // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaterialQuality;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TextureFilteringQuality;                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                VisualEffectQuality;                                      // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                FoliageQuality;                                           // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LightingQuality;                                          // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                VolumetricFogQuality;                                     // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AmbientOcclusionQuality;                                  // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ScreenSpaceReflectionQuality;                             // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ShadowQuality;                                            // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AntiAliasingQuality;                                      // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SubSurfaceScatteringQuality;                              // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MotionBlurQuality;                                        // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BloomQuality;                                             // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LensFlareQuality;                                         // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseChromaticAberration;                                  // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseFilmGrain;                                            // 0x0041(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseLightShafts;                                          // 0x0042(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0043(0x0001) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGraphicsSettings
// 0x0048
struct FTigerGraphicsSettings
{
	struct FTigerGraphicsQualityPreset                 QualityPreset;                                            // 0x0000(0x0044) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                SavedVersion;                                             // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGraphicsSettingsPS5
// 0x0010
struct FTigerGraphicsSettingsPS5
{
	ETigerGraphicsQualityPS5                           QualityPreset;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Gamma;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseMotionBlur;                                           // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseChromaticAberration;                                  // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseFilmGrain;                                            // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	int                                                SavedVersion;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSuggestedArticlesData
// 0x0018
struct FTigerSuggestedArticlesData
{
	int                                                Day;                                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FString>                             EntryIds;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGrimoireEntryTimeThreshold
// 0x0010
struct FTigerGrimoireEntryTimeThreshold
{
	class UTigerGrimoireEntry*                         Entry;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeToSpend;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGroupSettingsData
// 0x0010
struct FTigerGroupSettingsData
{
	class UTexture2D*                                  CompassMarkerTexture;                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UUserWidget*/                      MapMarkerWidgetType;                                      // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerOtherGroupMembersData
// 0x0020
struct FTigerOtherGroupMembersData
{
	TArray<TWeakObjectPtr<class ATigerPlayerState>>    OtherGroupMembers;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TArray<bool>                                       OtherGroupMembersSilencedMeStatus;                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCampingData
// 0x0010
struct FTigerCampingData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRevealedWave
// 0x0030
struct FTigerRevealedWave
{
	class ATigerHaven*                                 RevealedHaven;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Index;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<int>                                        DeformIndices;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      TargetArea;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerWaveData
// 0x0090
struct FTigerWaveData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
	struct FTigerRevealedWave                          RevealData;                                               // 0x0058(0x0030) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerHolyIncenseSettings
// 0x0008
struct FTigerHolyIncenseSettings
{
	EMatchBalanceMode                                  BalanceMode;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TimeScale;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInboxMessageSection
// 0x0018
struct FTigerInboxMessageSection
{
	ETigerInboxMessageSectionType                      Type;                                                     // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Content;                                                  // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInboxMessageBody
// 0x0010
struct FTigerInboxMessageBody
{
	TArray<struct FTigerInboxMessageSection>           Sections;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInboxMessage
// 0x0040
struct FTigerInboxMessage
{
	uint64_t                                           ID;                                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerInboxMessageCategory                         Category;                                                 // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Header;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerInboxMessageStatus                           Status;                                                   // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FDateTime                                   ReceivedAt;                                               // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerInboxMessageBody                      Body;                                                     // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInbox
// 0x0020
struct FTigerInbox
{
	int                                                Page;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalCount;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FTigerInboxMessage>                  Messages;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInventoryWeapon
// 0x0008
struct FTigerInventoryWeapon
{
	class UTigerItemAsset*                             ItemAsset;                                                // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInventorySlotContent
// 0x0018
struct FTigerInventorySlotContent
{
	ETigerInventoryItemType                            Type;                                                     // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UTigerItemAsset*                             ItemAsset;                                                // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                StackCount;                                               // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerModSlotInfo
// 0x0010
struct FTigerModSlotInfo
{
	class UTigerRangedModItemAsset*                    Mod;                                                      // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsUnlocked;                                               // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerClusteredItem
// 0x0064 (0x0070 - 0x000C)
struct FTigerClusteredItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Velocity;                                                 // 0x0040(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UTigerItemAsset*                             Item;                                                     // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ItemCount;                                                // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ItemUID;                                                  // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           PlayerIdWhoDroppedItem;                                   // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerTelemetryItemSourceID                        ItemSource;                                               // 0x0064(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0065(0x000B) MISSED OFFSET
};

// ScriptStruct Tiger.ItemClusterArray
// 0x0018 (0x0120 - 0x0108)
struct FItemClusterArray : public FFastArraySerializer
{
	TArray<struct FTigerClusteredItem>                 Items;                                                    // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class ATigerItemCluster*                           Parent;                                                   // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemDatabaseCategoryEntry
// 0x0030
struct FTigerItemDatabaseCategoryEntry
{
	uint64_t                                           ItemId;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        ItemPath;                                                 // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemDatabaseCategory
// 0x0010
struct FTigerItemDatabaseCategory
{
	TArray<struct FTigerItemDatabaseCategoryEntry>     Items;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemPreviewCamera
// 0x0018
struct FTigerItemPreviewCamera
{
	class ACineCameraActor*                            CameraActor;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerJudgeRotationSettings
// 0x0008
struct FTigerJudgeRotationSettings
{
	ETigerJudgeRotationMode                            RotationMode;                                             // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RotationSpeed;                                            // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTimedAnimationTriggerWrapper
// 0x0018
struct FTigerTimedAnimationTriggerWrapper
{
	TArray<struct FTigerTimedAnimationTrigger>         AnimationTriggers;                                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              ElapsedTime;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerJudgePlayerDamage
// 0x0020
struct FTigerJudgePlayerDamage
{
	class ATigerPlayer*                                Player;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      DamageCollection;                                         // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	float                                              DamageOverLastSecond;                                     // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TotalDamage;                                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerJudgeSwingCollisionInstant
// 0x0030
struct FTigerJudgeSwingCollisionInstant
{
	float                                              TimeInSwing;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SwordStartSweepLoc;                                       // 0x0004(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     SwordEndSweepLoc;                                         // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FQuat                                       SwordRot;                                                 // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerJudgeSwingCollisionInfo
// 0x0010
struct FTigerJudgeSwingCollisionInfo
{
	TArray<struct FTigerJudgeSwingCollisionInstant>    CollisionInstants;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallStatModifier
// 0x0038
struct FTigerThrallStatModifier
{
	int                                                InjuryLevel;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       ModifierName;                                             // 0x0008(0x0018) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
	uint32_t                                           TurnsRemaining;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FTigerThrallStats                           StatModifiers;                                            // 0x0028(0x0010) (CPF_Protected, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerPersistentThrallData
// 0x0030
struct FTigerPersistentThrallData
{
	struct FTigerThrallStats                           ThrallStats;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      ThrallAbilities;                                          // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	ETigerThrallId                                     ThrallId;                                                 // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int8_t                                             ThrallInjuryLevel;                                        // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int8_t                                             ThrallRating;                                             // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FTigerThrallStatModifier>            ThrallStatModifiers;                                      // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	int                                                ThrallExp;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerThrallUpgradeScreenInformation
// 0x0010
struct FTigerThrallUpgradeScreenInformation
{
	TArray<int>                                        ThrallStatsArray;                                         // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallDetailsScreenInformation
// 0x0060
struct FTigerThrallDetailsScreenInformation
{
	struct FText                                       ThrallInjuries;                                           // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FText                                       ThrallDescription;                                        // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FText                                       ThrallHintText;                                           // 0x0030(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  ThrallKeepsakePortrait;                                   // 0x0048(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        ThrallStatsArray;                                         // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallAbility
// 0x0028
struct FTigerThrallAbility
{
	struct FText                                       AbilityName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  AbilityIcon;                                              // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerThrallAbilityId                              AbilityId;                                                // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerThrallCharacterCardInformation
// 0x0040
struct FTigerThrallCharacterCardInformation
{
	struct FText                                       ThrallName;                                               // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  ThrallPortrait;                                           // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ThrallExp;                                                // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ThrallExpNormalised;                                      // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ThrallHealthNormalised;                                   // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FTigerThrallAbility>                 ThrallAbilities;                                          // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentMissionData
// 0x0020
struct FTigerPersistentMissionData
{
	int                                                MissionId;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<ETigerThrallId>                             ThrallsOnMission;                                         // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                Progress;                                                 // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRandomizedLootResult
// 0x0020
struct FTigerRandomizedLootResult
{
	class UTigerItemAsset*                             PrimaryItem;                                              // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PrimaryItemCount;                                         // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTigerItemAsset*                             SecondaryItem;                                            // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SecondaryItemCount;                                       // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerLootItemType
// 0x0010
struct FTigerLootItemType
{
	class UTigerItemAsset*                             LootAsset;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AmmoCount;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DropChanceWeight;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerLootLocationEntry
// 0x0010
struct FTigerLootLocationEntry
{
	class UTigerItemLootTable*                         LootTable;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinimumItemCount;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaximumItemCount;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemLootEntry
// 0x0020
struct FTigerItemLootEntry
{
	class UTigerItemAsset*                             ItemAsset;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinItemCount;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxItemCount;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UTigerItemLootTable*                         SpawnsWith;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSubItemLootTable
// 0x0028
struct FTigerSubItemLootTable
{
	class UTigerItemLootTable*                         SubLootTable;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerItemRarity                                   MinimumRarity;                                            // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerItemRarity                                   MaximumRarity;                                            // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              WeightMultiplier;                                         // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WeightMultiplierByRarity[0x5];                            // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverrideTotalWeight;                                      // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerLootTableKey
// 0x0003
struct FTigerLootTableKey
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGeneratedLootTable
// 0x0018
struct FTigerGeneratedLootTable
{
	TArray<struct FTigerItemLootEntry>                 Items;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.MapLandmarkPoint
// 0x0018
struct FMapLandmarkPoint
{
	struct FName                                       LandmarkName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   PositionInWorld;                                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   PositionOnMap;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.PointOfInterest
// 0x00A0
struct FPointOfInterest
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  Image;                                                    // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   MapPosition;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       TooltipTitle;                                             // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                TooltipTitleColor;                                        // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       TooltipDescription;                                       // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	ETigerItemRarity                                   LootRarity;                                               // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UClass* /*UTigerPingBase*/                   PingType;                                                 // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        HighTierLootGroup;                                        // 0x0078(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMapInfo
// 0x00B8
struct FTigerMapInfo
{
	struct FMapLandmarkPoint                           FirstLandmark;                                            // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FMapLandmarkPoint                           SecondLandmark;                                           // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  MapTexture;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     LevelName;                                                // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FPointOfInterest>                    PointsOfInterest;                                         // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   MinimapSize;                                              // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CachedScale;                                              // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TMap<class UClass* /*UUserWidget*/, EMapMarkerType> BotMarkerTypes;                                           // 0x0068(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMasteryChallengeInstanceDefinition
// 0x0008 (0x0028 - 0x0020)
struct FTigerMasteryChallengeInstanceDefinition : public FTigerChallengeInstanceDefinition
{
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                          // 0x0020(0x0004) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNestedMasteryInstanceDefinitionArray
// 0x0010
struct FTigerNestedMasteryInstanceDefinitionArray
{
	TArray<struct FTigerMasteryChallengeInstanceDefinition> ChallengeDefinitions;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMasterChallengeCollection
// 0x0058 (0x0070 - 0x0018)
struct FTigerMasterChallengeCollection : public FTigerChallengeConfigCollection
{
	uint32_t                                           SeasonId;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TMap<ETigerChallengeSubCategory, struct FTigerNestedMasteryInstanceDefinitionArray> ChallengeDefinitionsBySubcategory;                        // 0x0020(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMasteryChallengesConfig
// 0x0010
struct FTigerMasteryChallengesConfig
{
	TArray<struct FTigerMasterChallengeCollection>     Seasons;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerReadyToPlayState
// 0x000C
struct FTigerReadyToPlayState
{
	TWeakObjectPtr<class ATigerPlayerController>       PlayerController;                                         // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsReadyToPlay;                                           // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMedalThresholds
// 0x0040
struct FTigerMedalThresholds
{
	struct FTigerPlayerMedalTiers                      Eliminations;                                             // 0x0000(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPlayerMedalTiers                      Assists;                                                  // 0x0010(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPlayerMedalTiers                      Diableries;                                               // 0x0020(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPlayerMedalTiers                      DamageDealt;                                              // 0x0030(0x0010) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMatchSettings
// 0x0168
struct FTigerMatchSettings
{
	float                                              GasSpeedFactor;                                           // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            GasSpeedFactorSettingState;                               // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bDisableEntity;                                           // 0x0005(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            DisableEntitySettingState;                                // 0x0006(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	int                                                StartingResonance;                                        // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            StartingResonanceSettingState;                            // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllHighTierLootActive;                                   // 0x000D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            AllHighTierLootActiveSettingState;                        // 0x000E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bBrokenMasqueradeAtStart;                                 // 0x000F(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            BrokenMasqueradeAtStartSettingState;                      // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                HealthMax;                                                // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            HealthMaxSettingState;                                    // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                HealthStart;                                              // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            HealthStartSettingState;                                  // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                ShieldHpValue;                                            // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            ShieldHpSettingState;                                     // 0x0028(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                ShieldStackCount;                                         // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            ShieldStackCountSettingState;                             // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                ShieldStartCount;                                         // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            ShieldStartCountSettingState;                             // 0x0038(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RegenerationTimeSolo;                                     // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            RegenerationTimeSoloSettingState;                         // 0x0040(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              RegenerationTimeGroup;                                    // 0x0044(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            RegenerationTimeGroupSettingState;                        // 0x0048(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TMap<struct FString, float>                        LootItemWeightScale;                                      // 0x0050(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            LootItemWeightScaleSettingState;                          // 0x00A0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TMap<ETigerItemRarity, float>                      LootItemRarityScale;                                      // 0x00A8(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            LootItemRarityScaleSettingState;                          // 0x00F8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	struct FTigerMedalThresholds                       MatchStatMedalRequirements;                               // 0x00FC(0x0040) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            MatchStatMedalRequirementsSettingState;                   // 0x013C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              PlayerEventXpScale;                                       // 0x0140(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            PlayerEventXpScaleSettingState;                           // 0x0144(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	float                                              SurvivalTimeXpScale;                                      // 0x0148(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            SurvivalTimeXpScaleSettingState;                          // 0x014C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	float                                              DamageDealtXpScale;                                       // 0x0150(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            DamageDealtXpScaleSettingState;                           // 0x0154(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	float                                              PlacementXpScale;                                         // 0x0158(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            PlacementXpScaleSettingState;                             // 0x015C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RemoveResurrectAltars;                                    // 0x015D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            RemoveResurrectAltarsSettingState;                        // 0x015E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x1];                                       // 0x015F(0x0001) MISSED OFFSET
	int                                                RespawnMechanicLives;                                     // 0x0160(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchSettingState                            RespawnMechanicLivesSettingState;                         // 0x0164(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerEntityCheckpointsSettings
// 0x0010
struct FTigerEntityCheckpointsSettings
{
	int                                                MinEntityCheckpoints;                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxEntityCheckpoints;                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinAutomaticSupplyDropCallInDelay;                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxAutomaticSupplyDropCallInDelay;                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRatSpawnpointSettings
// 0x0008
struct FTigerRatSpawnpointSettings
{
	int                                                MinRatSpawnpoints;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxRatSpawnpoints;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSHPBSettings
// 0x001C
struct FTigerSHPBSettings
{
	int                                                StartMinSHPBNPCs;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                StartMaxSHPBNPCs;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                IntervalMinSHPBNPCs;                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                IntervalMaxSHPBNPCs;                                      // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MinSpawnInterval;                                         // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxSpawnInterval;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LastIntervalSpawnMatchTime;                               // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerHavenCapturePointSettings
// 0x0020
struct FTigerHavenCapturePointSettings
{
	float                                              TimeUntilEnableCapturePoint;                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeUntilRevealEveryoneAndSpeedupCapturePercentages;      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CaptureSpeedPercentageIncreasePerSecondWhenEveryoneIsRevealed;// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxCaptureSpeedPercentagePerSecondWhenEveryoneIsRevealed; // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CaptureTime;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CapturePercentageIncreasePerSecond;                       // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FastDecrementPercentageDropPerSecond;                     // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SlowDecrementPercentageDropPerSecond;                     // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBattleRoyalePlayerSpawnSettings
// 0x0008
struct FTigerBattleRoyalePlayerSpawnSettings
{
	float                                              MinimumDistanceCentimetersBetweenGroups;                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DesiredDistanceCentimetersBetweenGroups;                  // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPreSpawnSettings
// 0x0028
struct FTigerPreSpawnSettings
{
	int                                                GroupSyncSettleTime;                                      // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                InitialArchetypeSelectCountDown;                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PostArchetypeSelectTime;                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PreSpawnSelectionTime;                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SpawnSelectionTime;                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TimeUntilAutomaticSpawnAssignment;                        // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PostSpawnSelectionTime;                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeSelectTimePerPlayer;                             // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TeamViewTime;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                FreeLookPreparationTime;                                  // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerHighTierLootSettings
// 0x0030
struct FTigerHighTierLootSettings
{
	struct FSharkRandomDeviationInt                    NumberOfHighTierLootLocations;                            // 0x0000(0x0008) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTigerItemLootTable>          HighTierLootTable;                                        // 0x0008(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPreMatchStateInfo
// 0x0008
struct FTigerPreMatchStateInfo
{
	int                                                StateData;                                                // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerPreMatchState                                State;                                                    // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerDamageSource
// 0x0024
struct FTigerDamageSource
{
	struct FVector                                     DamageSourceDirection;                                    // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     DamageSourceLocation;                                     // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NewHealth;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageAmount;                                             // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsRedGasDamage;                                          // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasDirection;                                            // 0x0021(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRecapUser
// 0x000C
struct FTigerRecapUser
{
	ETigerDamageCauser                                 Type;                                                     // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlayerStateId;                                            // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      LastKnownHealth;                                          // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      LastKnownArmor;                                           // 0x0009(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRecapTime
// 0x0004
struct FTigerRecapTime
{
	float                                              Seconds;                                                  // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRecapHit
// 0x0008
struct FTigerRecapHit
{
	struct FTigerRecapTime                             Time;                                                     // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Damage;                                                   // 0x0004(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCritical;                                                // 0x0005(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerPlayerLifeStatus                             LifeStatus;                                               // 0x0006(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRecapWeapon
// 0x0020
struct FTigerRecapWeapon
{
	TArray<struct FTigerRecapHit>                      Hits;                                                     // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                TotalDamage;                                              // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UTigerWeapon*                                Weapon;                                                   // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRecapDamage
// 0x0030
struct FTigerRecapDamage
{
	struct FTigerRecapUser                             User;                                                     // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FTigerRecapWeapon>                   Weapons;                                                  // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                TotalDamage;                                              // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapTime                             FirstHitTime;                                             // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapTime                             LatestHitTime;                                            // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRecapHealing
// 0x0018
struct FTigerRecapHealing
{
	struct FTigerRecapUser                             User;                                                     // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Amount;                                                   // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FTigerRecapTime                             StartTime;                                                // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapTime                             EndTime;                                                  // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRecapDown
// 0x0010
struct FTigerRecapDown
{
	struct FTigerRecapUser                             User;                                                     // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapTime                             Time;                                                     // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRecapRevive
// 0x0010
struct FTigerRecapRevive
{
	struct FTigerRecapUser                             User;                                                     // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapTime                             Time;                                                     // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRecapRespawn
// 0x0010
struct FTigerRecapRespawn
{
	struct FTigerRecapUser                             User;                                                     // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapTime                             Time;                                                     // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRecapDeath
// 0x0020
struct FTigerRecapDeath
{
	struct FTigerRecapUser                             Instigator;                                               // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapUser                             Credited;                                                 // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bWasDiablerized;                                          // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FTigerRecapTime                             Time;                                                     // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRecapKill
// 0x0014
struct FTigerRecapKill
{
	struct FTigerRecapUser                             User;                                                     // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapTime                             Time;                                                     // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bDiablerize;                                              // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRecapElimination
// 0x0010
struct FTigerRecapElimination
{
	struct FTigerRecapUser                             User;                                                     // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRecapTime                             Time;                                                     // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRecapData
// 0x00E0
struct FTigerRecapData
{
	ETigerPlayerLifeStatus                             CurrentLifeStatus;                                        // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FTigerRecapDamage>                   IncomingDamage;                                           // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapDamage>                   OutgoingDamage;                                           // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapHealing>                  IncomingHealing;                                          // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapHealing>                  OutgoingHealing;                                          // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapDown>                     IncomingDowned;                                           // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapDown>                     OutgoingDowned;                                           // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapRevive>                   IncomingRevives;                                          // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapRevive>                   OutgoingRevives;                                          // 0x0078(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapRespawn>                  IncomingRespawns;                                         // 0x0088(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapRespawn>                  OutgoingRespawns;                                         // 0x0098(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapDeath>                    Deaths;                                                   // 0x00A8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapKill>                     Kills;                                                    // 0x00B8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerRecapElimination>              Eliminations;                                             // 0x00C8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfSpectators;                                       // 0x00D8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerWeaponCrosshairSlot
// 0x00B8
struct FTigerWeaponCrosshairSlot
{
	struct FVector2D                                   Direction;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Alignment;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush;                                                    // 0x0018(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RenderAngle;                                              // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerWeaponScalingCrosshairSlot
// 0x0090
struct FTigerWeaponScalingCrosshairSlot
{
	struct FSlateBrush                                 Brush;                                                    // 0x0000(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	float                                              RenderAngle;                                              // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AdditionalSize;                                           // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeleeWeaponAttackIdentifier
// 0x0002
struct FTigerMeleeWeaponAttackIdentifier
{
	ETigerWeaponMeleeAttackType                        AttackType;                                               // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      AttackIndex;                                              // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeleeAttackNetData
// 0x0020
struct FTigerMeleeAttackNetData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCharacterClientHit
// 0x0028
struct FTigerCharacterClientHit
{
	class ATigerCharacter*                             TigerChar;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         VictimLocation;                                           // 0x0008(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      BoneIndexHit;                                             // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSharkInt8Vector                            ImpactOffset;                                             // 0x0015(0x0003) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   SwingDirection;                                           // 0x0018(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      WeaponIndex;                                              // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCharacterServerHit
// 0x0038
struct FTigerCharacterServerHit
{
	class ATigerCharacter*                             TigerChar;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         VictimLocation;                                           // 0x0008(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      BoneIndexHit;                                             // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSharkInt8Vector                            ImpactOffset;                                             // 0x0015(0x0003) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   SwingDirection;                                           // 0x0018(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UAnimMontage*                                KnockbackMontage;                                         // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAbortAttack;                                             // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      CompressedActorYaw;                                       // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerSwingCollisionInstant
// 0x0040
struct FTigerSwingCollisionInstant
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              TimeInSwing;                                              // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                HitboxNotifyIndexForWeapon;                               // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                WeaponIndex;                                              // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerSwingCollisionInfo
// 0x0010
struct FTigerSwingCollisionInfo
{
	TArray<struct FTigerSwingCollisionInstant>         CollisionInstants;                                        // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeleeAimAssistCandidate
// 0x0028
struct FTigerMeleeAimAssistCandidate
{
	class ATigerCharacter*                             TigerCharacter;                                           // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PredictedLocation;                                        // 0x0008(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanSweepToPredictedLocation;                             // 0x0014(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsKindred;                                               // 0x0015(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              DistanceFromCrosshair;                                    // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DistanceFromPlayerSquared;                                // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AngleFromPlayer;                                          // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMeleeAimAssistData
// 0x0008
struct FTigerMeleeAimAssistData
{
	float                                              ConeAngle;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ConeLength;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeleeAttack
// 0x0088
struct FTigerMeleeAttack
{
	struct FName                                       AttackName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AttackGroup;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SwingAnimationMontageName;                                // 0x000C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SwingAnimationNoTargetMontageName;                        // 0x0014(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       RecoveryAnimationMontageName;                             // 0x001C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       RecoveryAnimationNoTargetMontageName;                     // 0x0024(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       HitAnimationMontageName;                                  // 0x002C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       DirectionalHitAnimationMontageNames[0x4];                 // 0x0034(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HitEffectAngle;                                           // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UMatineeCameraShake*/              HitCameraShake;                                           // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 InputMultiplierCurve;                                     // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AttackCooldown;                                           // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllowMultipleHits;                                       // 0x006C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              TargetingAttackMinimumDistance;                           // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AerialAttackAbortedBlendOutTime;                          // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DamageScalingCurve;                                       // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AttackIndex;                                              // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerWeaponMeleeAttackType                        AttackType;                                               // 0x0084(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMetaStoreBuyPayloadElement
// 0x0010
struct FTigerMetaStoreBuyPayloadElement
{
	uint64_t                                           EntryToBuy;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                QuantityToBuy;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerBuyStoreEntryResponsePayload
// 0x0028
struct FTigerBuyStoreEntryResponsePayload
{
	TArray<struct FTigerItemId>                        BoughtItems;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   BoughtItemQuantities;                                     // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	ETigerBuyStoreEntryResponseCode                    ResponseCode;                                             // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                 // 0x0021(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRegionPingerSettings
// 0x0014
struct FTigerRegionPingerSettings
{
	int                                                PingNumSamples;                                           // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumPingsToDisregard;                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PingTimeoutSeconds;                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AllowedConsecutiveFailures;                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WaitSecondsOnUnreachable;                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerNearCameraFadeMaterialMasterData
// 0x0018
struct FTigerNearCameraFadeMaterialMasterData
{
	class UMaterialInterface*                          MasterMaterial;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       UseCameraDitherFadeName;                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       FadeLengthName;                                           // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerNearCameraFadeDebugData
// 0x0028
struct FTigerNearCameraFadeDebugData
{
	bool                                               bDebugNearCameraFade;                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UMaterialInterface*                          NearCameraFadeDebugMaterial;                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DebugVisualizationMaterialEnabled;                        // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DebugVisualizationMaterialNoMaster;                       // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DebugVisualizationMaterialNoSimpleCollision;              // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerSavedLocation
// 0x0010
struct FTigerPlayerSavedLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTrackedPlayerData
// 0x0018
struct FTigerTrackedPlayerData
{
	class APlayerState*                                PlayerState;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ATigerBestialTrailVisualizer*                Visualizer;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TrackingBuffID;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPingContext
// 0x0010
struct FTigerPingContext
{
	class UDataAsset*                                  Asset;                                                    // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Argument;                                                 // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      TelemetryTypeId;                                          // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPingNotificationNetData
// 0x0018
struct FTigerPingNotificationNetData
{
	class UClass* /*UTigerPingBase*/                   PingClass;                                                // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerPingContext                           Context;                                                  // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInviteId
// 0x0010
struct FTigerInviteId
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerItemNotification
// 0x0028
struct FTigerItemNotification
{
	class UTigerItemAsset*                             Item;                                                     // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       OverrideName;                                             // 0x0010(0x0018) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.DisplayedItemWidget
// 0x0010
struct FDisplayedItemWidget
{
	class UUserWidget*                                 Widget;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNpcReactionData
// 0x000C
struct FTigerNpcReactionData
{
	float                                              ReactionExpireTime;                                       // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReactionCompensationAngle;                                // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanMoveDuringReaction;                                   // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPropAttachment
// 0x0018
struct FTigerPropAttachment
{
	struct FName                                       AttachIdentifier;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UTigerPropCompInterface>    Prop;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPropAttachmentInfo
// 0x0060
struct FTigerPropAttachmentInfo
{
	struct FName                                       AttachIdentifier;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStreamableRenderAsset*                      Prop;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                               // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UMeshComponent*/                   PropCompClass;                                            // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerOnlineErrorCode
// 0x000C
struct FTigerOnlineErrorCode
{
	ETigerOnlineErrorCategory                          Category;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ID;                                                       // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ErrorPriority;                                            // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerOnlineStatusMessageEntry
// 0x0028
struct FTigerOnlineStatusMessageEntry
{
	struct FTigerOnlineErrorCode                       ErrorCode;                                                // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Message;                                                  // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerVendorStoreCategoryItem
// 0x0098
struct FTigerVendorStoreCategoryItem
{
	struct FTigerMetaStoreEntry                        StoreEntry;                                               // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        ItemClassPath;                                            // 0x0050(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerInventoryItemBase*                     BaseItem;                                                 // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Cost;                                                     // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                InventoryCount;                                           // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                SoftCurrencyId;                                           // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                StorePriority;                                            // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.HideousTimingData
// 0x0008
struct FHideousTimingData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPerformanceIndicatorValues
// 0x0010
struct FTigerPerformanceIndicatorValues
{
	float                                              WarmupTimer;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CooldownTimer;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SevereValue;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WarningValue;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBanInfo
// 0x0018
struct FTigerBanInfo
{
	unsigned char                                      Reason;                                                   // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     EndsAt;                                                   // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerLoginFailedInfo
// 0x0020
struct FTigerLoginFailedInfo
{
	ETigerLoginResult                                  FailReason;                                               // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FTigerBanInfo                               BanInfo;                                                  // 0x0008(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengeCategoryMap
// 0x0050
struct FTigerChallengeCategoryMap
{
	TMap<struct FTigerChallengeTypeID, class UTigerChallenge*> Challenges;                                               // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerLoginQueueToken
// 0x0010
struct FTigerLoginQueueToken
{
	struct FString                                     Content;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentInventoryItem
// 0x0030
struct FTigerPersistentInventoryItem
{
	TSoftClassPtr<class UClass>                        ItemClassPath;                                            // 0x0000(0x0028) (CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPersistentArchetypeTransactionalData
// 0x0010
struct FTigerPersistentArchetypeTransactionalData
{
	int64_t                                            ArchetypeLevel;                                           // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            ArchetypeLevelExp;                                        // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentPlayerTransactionalData
// 0x0080
struct FTigerPersistentPlayerTransactionalData
{
	int64_t                                            SeasonId;                                                 // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            SeasonLevel;                                              // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            SeasonLevelExp;                                           // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonPlacementExpBonusPercentage;                        // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FTigerPersistentInventoryItem>       InventoryItems;                                           // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentOutfitSetup>         Outfits;                                                  // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentArchetypeTransactionalData> ArchetypeData;                                            // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	float                                              Rating;                                                   // 0x0050(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankPoints;                                               // 0x0054(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            PremiumCurrencyBalance;                                   // 0x0058(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	int64_t                                            PlayerLevel;                                              // 0x0068(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            PlayerLevelExp;                                           // 0x0070(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMetaStoreBuyPayload
// 0x0018
struct FTigerMetaStoreBuyPayload
{
	TArray<struct FTigerMetaStoreBuyPayloadElement>    EntriesToBuy;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           TotalCost;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerQuestObjectivePersistentProgressEntry
// 0x0018
struct FTigerQuestObjectivePersistentProgressEntry
{
	struct FString                                     Guid;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Progress;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bStarted;                                                 // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerQuestPersistentProgressEntry
// 0x0018
struct FTigerQuestPersistentProgressEntry
{
	bool                                               bHasDistributedReward;                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FTigerQuestObjectivePersistentProgressEntry> ObjectivesProgress;                                       // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerQuestLinePersistentProgress
// 0x0050
struct FTigerQuestLinePersistentProgress
{
	TMap<struct FString, struct FTigerQuestPersistentProgressEntry> Progress;                                                 // 0x0000(0x0050) (CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerQuestPersistentProgress
// 0x0050
struct FTigerQuestPersistentProgress
{
	TMap<struct FString, struct FTigerQuestLinePersistentProgress> Progress;                                                 // 0x0000(0x0050) (CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengePersistentProgressEntry
// 0x0010
struct FTigerChallengePersistentProgressEntry
{
	int                                                Progress;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Tier;                                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasDistributedReward;                                    // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsPersistentChallenge;                                   // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                LastTierRewardDistributed;                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengePersistentProgress
// 0x0068
struct FTigerChallengePersistentProgress
{
	TMap<struct FTigerChallengeTypeID, struct FTigerChallengePersistentProgressEntry> Progress;                                                 // 0x0000(0x0050) (CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
	int                                                Date;                                                     // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastRewardTrackIndex;                                     // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        LastRewardTrackIndices;                                   // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChallengePersistentProgressMap
// 0x0050
struct FTigerChallengePersistentProgressMap
{
	TMap<ETigerChallengeCategory, struct FTigerChallengePersistentProgress> ChallengeProgress;                                        // 0x0000(0x0050) (CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonMatchStat
// 0x0008
struct FTigerSeasonMatchStat
{
	int                                                SeasonTotal;                                              // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonBest;                                               // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentSeasonMatchStats
// 0x0020
struct FTigerPersistentSeasonMatchStats
{
	TArray<struct FTigerSeasonMatchStat>               Stats;                                                    // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                MatchesPlayed;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	int64_t                                            SeasonId;                                                 // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerLocationPersistentProgressEntry
// 0x0018
struct FTigerLocationPersistentProgressEntry
{
	struct FString                                     LocationName;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeSpentInLocation;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerLocationPersistentProgress
// 0x0050
struct FTigerLocationPersistentProgress
{
	TMap<struct FString, struct FTigerLocationPersistentProgressEntry> Progress;                                                 // 0x0000(0x0050) (CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGrimoireEntryStatusStruct
// 0x0008
struct FTigerGrimoireEntryStatusStruct
{
	uint32_t                                           EntryId;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      State;                                                    // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPersistentCollectibleData
// 0x0008
struct FTigerPersistentCollectibleData
{
	uint32_t                                           CollectibleId;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      CollectibleCount;                                         // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerReadDialogueCategoryWrapper
// 0x0020
struct FTigerReadDialogueCategoryWrapper
{
	struct FString                                     NpcIdentifier;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ReadCategories;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentPlayerData
// 0x01A8
struct FTigerPersistentPlayerData
{
	struct FTigerQuestPersistentProgress               QuestProgress;                                            // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FTigerChallengePersistentProgressMap        ChallengeMap;                                             // 0x0050(0x0050) (CPF_NativeAccessSpecifierPublic)
	struct FTigerPersistentSeasonMatchStats            SeasonMatchStats;                                         // 0x00A0(0x0020) (CPF_NativeAccessSpecifierPublic)
	struct FTigerLocationPersistentProgress            LocationProgress;                                         // 0x00C0(0x0050) (CPF_NativeAccessSpecifierPublic)
	int                                                MatchesPlayed;                                            // 0x0110(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<int>                                        MatchesPlayedPerArchetype;                                // 0x0118(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerGrimoireEntryStatusStruct>     GrimoireEntries;                                          // 0x0128(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        ReadDialogues;                                            // 0x0138(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentThrallData>          PersistentThrallData;                                     // 0x0148(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentMissionData>         PersistentThrallMissions;                                 // 0x0158(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentCollectibleData>     PersistentCollectibleData;                                // 0x0168(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                SharedThrallExp;                                          // 0x0178(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FTigerSuggestedArticlesData                 GrimoireSuggestedArticlesData;                            // 0x0180(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerReadDialogueCategoryWrapper>   ReadDialogueCategoriesContainer;                          // 0x0198(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct Tiger.TigerEventConfigClientState
// 0x0050
struct FTigerEventConfigClientState
{
	TMap<uint32_t, ETigerEventSystemActivationState>   SerializedActivationStates;                               // 0x0000(0x0050) (CPF_RepSkip, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPingIconData
// 0x0010
struct FTigerPingIconData
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerUIColor                                      TintColor;                                                // 0x000C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPingNotificationUIData
// 0x0028
struct FTigerPingNotificationUIData
{
	struct FText                                       NotificationText;                                         // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FTigerPingIconData                          IconData;                                                 // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPingWorldNetData
// 0x0010 (0x0028 - 0x0018)
struct FTigerPingWorldNetData : public FTigerPingNotificationNetData
{
	struct FVector                                     WorldLocation;                                            // 0x0018(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPingWrapper
// 0x0020
struct FTigerPingWrapper
{
	class UTigerPingClientData*                        ClientData;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerPingWorldInstanceUI*                   InnerWidget;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerPingMarkerProxy*                       MapMarkerProxy;                                           // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerUniquePingId
// 0x0004
struct FTigerUniquePingId
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPingResponse
// 0x0002
struct FTigerPingResponse
{
	unsigned char                                      PlayerGroupIndex;                                         // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsInterested;                                            // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPingCoordinatorEntry
// 0x0048
struct FTigerPingCoordinatorEntry
{
	struct FTigerUniquePingId                          UniqueID;                                                 // 0x0000(0x0004) (CPF_Transient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass* /*UTigerPingBase*/                   PingClass;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       ContextActor;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UDataAsset*                                  ContextObject;                                            // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      TelemetryTypeId;                                          // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0021(0x0027) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCompressedRotation
// 0x0002
struct FTigerCompressedRotation
{
	unsigned char                                      Yaw;                                                      // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Pitch;                                                    // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerNpcThatCanSeePlayerWrapper
// 0x0018
struct FTigerNpcThatCanSeePlayerWrapper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNpcThatCanSeePlayerWrapper_Client
// 0x000C
struct FTigerNpcThatCanSeePlayerWrapper_Client
{
	TWeakObjectPtr<class ATigerBaseNPC>                NPC;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LastTimeReactingToPlayerAction;                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerClanPassiveAndDefault
// 0x0010
struct FTigerClanPassiveAndDefault
{
	class UActorComponent*                             PassiveLogic;                                             // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerPassiveConfig*                         PassiveConfig;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPassiveWithLogicArray
// 0x0010
struct FTigerPassiveWithLogicArray
{
	TArray<struct FTigerClanPassiveAndDefault>         Passives;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInventoryStats
// 0x001C
struct FTigerInventoryStats
{
	float                                              MeleeDamage;                                              // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShootingDamage;                                           // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AbilityDamageBonus;                                       // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MeleeDefense;                                             // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShootingDefense;                                          // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AbilityDefense;                                           // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AbilityHaste;                                             // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerHandIkData
// 0x0028
struct FTigerHandIkData
{
	struct FName                                       HandBoneName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     HandLocation;                                             // 0x0008(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ToWallDistance;                                           // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bTraceSuccessful;                                         // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0019(0x000F) MISSED OFFSET
};

// ScriptStruct Tiger.TigerHandIkWallTraceData
// 0x0058
struct FTigerHandIkWallTraceData
{
	struct FTigerHandIkData                            RightHandIkData;                                          // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerHandIkData                            LeftHandIkData;                                           // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETraceTypeQuery>                       InTraceChannel;                                           // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              TraceLength;                                              // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAnimMetaData
// 0x0018
struct FTigerAnimMetaData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMetaData*                               MetaData;                                                 // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                              // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerAnimBlendState                               BlendState;                                               // 0x0014(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPerformanceStateLatchData
// 0x000C
struct FTigerPerformanceStateLatchData
{
	EFTigerPerformanceState                            State;                                                    // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPerformanceStates
// 0x0060
struct FTigerPerformanceStates
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FTigerPerformanceStateLatchData             ServerPerformance;                                        // 0x0004(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPerformanceStateLatchData             FramesPerSecond;                                          // 0x0010(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPerformanceStateLatchData             PacketLoss;                                               // 0x001C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPerformanceStateLatchData             Latency;                                                  // 0x0028(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPerformanceStateLatchData             LatencyVariation;                                         // 0x0034(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPerformanceStateLatchData             RefreshRate;                                              // 0x0040(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerPerformanceStateLatchData             PsoCompilation;                                           // 0x004C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerFireProjectileData
// 0x0014
struct FTigerFireProjectileData
{
	struct FVector_NetQuantize100                      ProjectileSpawnLocation;                                  // 0x0000(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShootDirPitch;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShootDirYaw;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFireProjectileDataInterpolated
// 0x0004 (0x0018 - 0x0014)
struct FTigerFireProjectileDataInterpolated : public FTigerFireProjectileData
{
	float                                              LocationAlpha;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRangedHitInfo
// 0x0020
struct FTigerRangedHitInfo
{
	struct FVector_NetQuantize100                      End;                                                      // 0x0000(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EBodyPart                                          BodyPart;                                                 // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class ATigerCharacter*                             HitCharacter;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ProjectileId;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerClientSpawnLocationInfo
// 0x0018
struct FTigerClientSpawnLocationInfo
{
	class ATigerPlayerState*                           PlayerState;                                              // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   DesiredSpawnLocation;                                     // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Orientation;                                              // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNetworkedDebugShape
// 0x0040
struct FTigerNetworkedDebugShape
{
	struct FCoreUObject_FColor                         Color;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ShapeSpecificData;                                        // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0020(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                 // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Shape;                                                    // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      DepthPriority;                                            // 0x0039(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPersistentLines;                                         // 0x003A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPlayerGridCell
// 0x0030
struct FTigerPlayerGridCell
{
	TArray<int>                                        CellIndexOffsets;                                         // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   WorldPosition;                                            // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayersInCellArea;                                        // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ClosestPlayerCellDistance;                                // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class ATigerPlayer>>         PlayersInCell;                                            // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerConsequenceUpdateData
// 0x0014
struct FTigerConsequenceUpdateData
{
	int                                                ConsequenceId;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExpectedTimeLeft;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         VectorData;                                               // 0x0008(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerConsequenceData
// 0x0020
struct FTigerConsequenceData
{
	class UClass* /*UTigerMasqueradeConsequence*/      ConsequenceClass;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerConsequenceUpdateData                 UpdateData;                                               // 0x0008(0x0014) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	ETigerAIPlayerAction                               PlayerAction;                                             // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.BloodHuntMarker
// 0x0010
struct FBloodHuntMarker
{
	class UTigerCompassMarkerWidget*                   CompassMarker;                                            // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerMapMarkerProxy*                        MapMarkerProxy;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerMeshMaterialData
// 0x0010
struct FTigerPlayerMeshMaterialData
{
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerMaterialOverrideCopyData
// 0x0010
struct FTigerPlayerMaterialOverrideCopyData
{
	ETigerCharacterMeshPart                            BodyPart;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MaterialIndex;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                            // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPaperDollHighlightComponents
// 0x0050
struct FTigerPaperDollHighlightComponents
{
	TMap<class USpotLightComponent*, float>            SpotLightIntensities;                                     // 0x0000(0x0050) (CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPremiumCurrencyPackData
// 0x0050
struct FTigerPremiumCurrencyPackData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	int                                                Amount;                                                   // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Currency;                                                 // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ImagePath;                                                // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Bonus;                                                    // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Price;                                                    // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RegularPrice;                                             // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UpsellPrice;                                              // 0x0044(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerPremiumCurrencyPackDiscount                  DiscountType;                                             // 0x0048(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPromotionalPopupConfigEntry
// 0x0040
struct FTigerPromotionalPopupConfigEntry
{
	struct FString                                     ImageUrl;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Paragraph;                                                // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerQueuedTextPrompt
// 0x0060
struct FTigerQueuedTextPrompt
{
	class UTigerSimpleTextPrompt*                      Prompt;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct Tiger.TigerQueuedTextPromptPriorityEntry
// 0x0018
struct FTigerQueuedTextPromptPriorityEntry
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerSimpleTextPrompt*/           PromptClass;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       VisibleName;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDummyPropAttachment
// 0x0070
struct FTigerDummyPropAttachment
{
	struct FTigerPropAttachmentInfo                    AttachmentInfo;                                           // 0x0000(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bShow;                                                    // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0061(0x000F) MISSED OFFSET
};

// ScriptStruct Tiger.TigerQuestItemLocationDetails
// 0x0040
struct FTigerQuestItemLocationDetails
{
	struct FTigerQuestIdentifier                       QuestIdentifier;                                          // 0x0000(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRangedRandomState
// 0x0008
struct FTigerRangedRandomState
{
	uint64_t                                           RandomState;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSpreadModifier
// 0x000C
struct FTigerSpreadModifier
{
	ETigerSpreadIncreaseMode                           Mode;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Amount;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFireSettings
// 0x00D8
struct FTigerFireSettings
{
	float                                              BulletDamage;                                             // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerWeaponFireMode                               FireMode;                                                 // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                BurstCount;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShotsFiredPerSecondInBurst;                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BulletsFiredSimultaneously;                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ShotsFiredPerSecond;                                      // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*ATigerAreaEffect*/                 AreaEffect;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              FireStickyTime;                                           // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VerticalRecoilAmount;                                     // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HorizontalRecoilAmount;                                   // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StartingSpread;                                           // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerSpreadModifier                        SpreadModifiers[0x7];                                     // 0x0030(0x000C) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              TimeUntilSpreadDecreases;                                 // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              BaseMovementSpeedMultiplier;                              // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimingMovementSpeedMultiplier;                            // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HipFireMovementSpeedMultiplier;                           // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SpreadIncreaseCurve;                                      // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 SpreadDecreaseCurve;                                      // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 FireRateIncreaseCurve;                                    // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 FireRateDecreaseCurve;                                    // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MasqueradeNoiseEventRadius;                               // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ReverseSpreadChange;                                      // 0x00BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPierceCivilians;                                         // 0x00BD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUsesScope;                                               // 0x00BE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00BF(0x0001) MISSED OFFSET
	int                                                ResistanceStart;                                          // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ResistanceEnd;                                            // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ResistanceStrength;                                       // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TriggerVibrationFeedbackStrength;                         // 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ADSResistanceStart;                                       // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ADSResistanceStrength;                                    // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRankConfig_RankLevel
// 0x0028
struct FTigerRankConfig_RankLevel
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankPointsThreshold;                                      // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MatchFee;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerItemId>                        RewardItemIds;                                            // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRankConfig_Placement
// 0x000C
struct FTigerRankConfig_Placement
{
	int                                                Gain;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinPlacement;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPlacement;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRankConfig_RankPointGain
// 0x0018
struct FTigerRankConfig_RankPointGain
{
	int                                                Eliminations;                                             // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FTigerRankConfig_Placement>          Placements;                                               // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRankConfig
// 0x0028
struct FTigerRankConfig
{
	TArray<struct FTigerRankConfig_RankLevel>          RankLevels;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FTigerRankConfig_RankPointGain              RankPointGain;                                            // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableCorner
// 0x0040
struct FTigerRoofSystemFreeTransformableCorner
{
	class UPoseableMeshComponent*                      CornerComponent;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StaticComponent;                                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UProceduralMeshComponent*                    CollisionComponent;                                       // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     TopBoneLocation;                                          // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LeftBoneLocation;                                         // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RightBoneLocation;                                        // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerItemPreviewData
// 0x0018
struct FTigerItemPreviewData
{
	class UClass* /*ATigerBattlepassRewardPreview*/    PreviewActorClass;                                        // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass* /*UTigerInventoryItemBase*/>  ItemClasses;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSubLevelBackground
// 0x0030
struct FTigerSubLevelBackground
{
	struct FSoftObjectPath                             SubLevel;                                                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       UiName;                                                   // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPostProcessSettingsSetup
// 0x0010
struct FTigerPostProcessSettingsSetup
{
	TArray<class UMaterialInterface*>                  PostProcessMaterials;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSignificancePlayerBucket
// 0x0014
struct FTigerSignificancePlayerBucket
{
	int                                                BucketSize;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TickRate;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MoveCompTickRate;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           VisibleMeshesBitMask;                                     // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableClothSim;                                          // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableFootIk;                                            // 0x0011(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct Tiger.TigerSignificanceElysiumNpcBucket
// 0x0010
struct FTigerSignificanceElysiumNpcBucket
{
	int                                                BucketSize;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TickRate;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           VisibleMeshesBitMask;                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bForceLastLod;                                            // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableClothSim;                                          // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Tiger.TigerSignificanceBudget
// 0x0040
struct FTigerSignificanceBudget
{
	TArray<struct FTigerSignificancePlayerBucket>      PlayerBuckets;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerSignificanceElysiumNpcBucket>  ElysiumNpcBuckets;                                        // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      PlayerUroScreenSizeThresholds;                            // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<float>                                      NpcUroScreenSizeThresholds;                               // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerStateFriendPair
// 0x0010
struct FTigerPlayerStateFriendPair
{
	class ATigerPlayerState*                           PlayerState;                                              // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerFriend*                                Friend;                                                   // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDesiredSpawnLocation
// 0x0020
struct FTigerDesiredSpawnLocation
{
	class ATigerPlayerController*                      PlayerController;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      AssignedSpawnPoint;                                       // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.StaticPhysicsPiercingData
// 0x0050
struct FStaticPhysicsPiercingData
{
	class UStaticMeshComponent*                        PiercingStaticMesh;                                       // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     PreviousLocation;                                         // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FTransform                                  CachedRelativeTransform;                                  // 0x0020(0x0030) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryIDBundle
// 0x0010
struct FTigerTelemetryIDBundle
{
	class UObject*                                     FoundObject;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           PersistentID;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryIDCollisionBundle
// 0x0010
struct FTigerTelemetryIDCollisionBundle
{
	class UObject*                                     CollidingObject1;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UObject*                                     CollidingObject2;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryIDExportFilter
// 0x0008
struct FTigerTelemetryIDExportFilter
{
	class UClass* /*UObject*/                          FilterClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryDefinition
// 0x0078
struct FTigerTelemetryDefinition
{
	struct FString                                     EnumName;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     VariableType;                                             // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ActualDataSize;                                           // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TMap<struct FString, int>                          KeyValuePairs;                                            // 0x0028(0x0050) (CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTestChallengeInstanceDefinition
// 0x0008 (0x0028 - 0x0020)
struct FTigerTestChallengeInstanceDefinition : public FTigerChallengeInstanceDefinition
{
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                          // 0x0020(0x0004) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTestChallengeCollection
// 0x0010 (0x0028 - 0x0018)
struct FTigerTestChallengeCollection : public FTigerChallengeConfigCollection
{
	TArray<struct FTigerTestChallengeInstanceDefinition> ChallengeDefinitions;                                     // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTestChallengesConfig
// 0x0028
struct FTigerTestChallengesConfig
{
	struct FTigerTestChallengeCollection               TestChallenges;                                           // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallMissionMapMarker
// 0x0018
struct FTigerThrallMissionMapMarker
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallMissionObjective
// 0x0038
struct FTigerThrallMissionObjective
{
	ETigerMissionType                                  MissionType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ETigerMissionObjectiveType                         ObjectiveType;                                            // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       ObjectiveName;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ObjectiveDescription;                                     // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<ETigerThrallStatId>                         SuccessStatIds;                                           // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	int                                                PercentReductionIfDiscovered;                             // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.ThrallMissionRequirements
// 0x0018
struct FThrallMissionRequirements
{
	int                                                MinRequiredThalls;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxRequiredThralls;                                       // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerThrallStats                           TotalRequiredStats;                                       // 0x0008(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallMissionRewardItem
// 0x0030
struct FTigerThrallMissionRewardItem
{
	TSoftClassPtr<class UClass>                        ItemClassPath;                                            // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerThrallMissionReward
// 0x0018
struct FTigerThrallMissionReward
{
	int                                                XpReward;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FTigerThrallMissionRewardItem>       Rewards;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerWallJumpBlendBundle
// 0x0010
struct FTigerWallJumpBlendBundle
{
	float                                              InputBlendScale;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NormalBlendScale;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VelocityDirectionBlendScale;                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VelocityForceScale;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TutorialTrainerDiablerizeData
// 0x0020
struct FTutorialTrainerDiablerizeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              DiablerizeTimeLeft;                                       // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeToGetInPositionforDiablerize;                         // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsGettingDiablerized;                                    // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ATigerCharacter>              DiablerizingCharacter;                                    // 0x0014(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TutorialTrainerReviveData
// 0x0018
struct FTutorialTrainerReviveData
{
	bool                                               bIsGettingRevived;                                        // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ReviveTimeInSeconds;                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CurrentReviveTime;                                        // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RotationSpeed;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerPlayer>                 CurrentRevivingPlayer;                                    // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.StatChangeDescription
// 0x0028
struct FStatChangeDescription
{
	struct FText                                       StatName;                                                 // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FString                                     StatChange;                                               // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInputBindings
// 0x0048
struct FTigerInputBindings
{
	TArray<struct FInputActionKeyMapping>              KeyboardMouseMappings;                                    // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                KeyboardMouseAxisMappings;                                // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              GamepadMappings;                                          // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                GamepadAxisMappings;                                      // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                SavedVersion;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerSensitivitySetting
// 0x0020
struct FTigerSensitivitySetting
{
	float                                              MasterSensitivityX;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MasterSensitivityY;                                       // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HorizontalSensitivity;                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VerticalSensitivity;                                      // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimingSensitivityX;                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimingSensitivityY;                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ScopedSensitivityX;                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ScopedSensitivityY;                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerControllerSettings
// 0x0028
struct FTigerControllerSettings
{
	int                                                WeaponCyclePreset;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerSensitivitySetting                    SensitivitySettings;                                      // 0x0004(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bInvertedYAxis;                                           // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bInvertedXAxis;                                           // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldJumpToClimb;                                         // 0x0026(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldForInventory;                                        // 0x0027(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGamepadSpecificSettings
// 0x0008
struct FTigerGamepadSpecificSettings
{
	float                                              RumbleIntensity;                                          // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableAimAssistSlowDown;                                 // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableAimAssistRotation;                                 // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableAdaptiveTriggers;                                  // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableAdaptiveTriggerVibration;                          // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInputSettings
// 0x0060
struct FTigerInputSettings
{
	struct FTigerControllerSettings                    KeyboardMouseSettings;                                    // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerControllerSettings                    GamepadSettings;                                          // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerGamepadSpecificSettings               GamepadSpecificSettings;                                  // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseAutoSprint;                                           // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldForHeightenedSenses;                                 // 0x0059(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldToAimDownSights;                                     // 0x005A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005B(0x0001) MISSED OFFSET
	int                                                SavedVersion;                                             // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInputPresetData
// 0x0018
struct FTigerInputPresetData
{
	struct FString                                     ConfigFileName;                                           // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bUseAutoSprint;                                           // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldForHeightenedSenses;                                 // 0x0011(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHoldForInventory;                                        // 0x0012(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCustomizableKeybindData
// 0x0020
struct FTigerCustomizableKeybindData
{
	struct FText                                       DISPLAYNAME;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               DebugOnly;                                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AllowDebugOnConsoleShipping;                              // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCustomizableAxisKeybindData
// 0x0038
struct FTigerCustomizableAxisKeybindData
{
	struct FText                                       DISPLAYNAME;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FText                                       OptionalReverseDisplayName;                               // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               DebugOnly;                                                // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AllowDebugOnConsoleShipping;                              // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.PerfTimerHandle
// 0x0008
struct FPerfTimerHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerNPCMasqueradeStateMessage
// 0x0010
struct FTigerNPCMasqueradeStateMessage
{
	class ATigerNPC*                                   NPC;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerAIMasqueradeState                            MasqueradeState;                                          // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerDisableHSenseTarget
// 0x0028
struct FTigerDisableHSenseTarget
{
	TSoftClassPtr<class UClass>                        Actor;                                                    // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentItemDefinition
// 0x0030
struct FTigerPersistentItemDefinition
{
	struct FTigerItemId                                ItemId;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             ItemClassPath;                                            // 0x0008(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Cost;                                                     // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                StorePriority;                                            // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemId                                SoftCurrencyId;                                           // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerVoCategoryData
// 0x000C
struct FTigerVoCategoryData
{
	unsigned char                                      Prio;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TriggerChance;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerVoEvent
// 0x0018
struct FTigerVoEvent
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      EventActor;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bPlayFacialAnimFromCategory;                              // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRecentlyStreamedCellEntries
// 0x0010
struct FTigerRecentlyStreamedCellEntries
{
	class UTigerWorldCompositionCellComponent*         Cell;                                                     // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerStreamingPlayer
// 0x0038
struct FTigerStreamingPlayer
{
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGrimoireSearchEntry
// 0x0038
struct FTigerGrimoireSearchEntry
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	class UTigerGrimoireCategory*                      Category;                                                 // 0x0018(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EntryIdAsString;                                          // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.StreamingBenchmarkConfig
// 0x0001
struct FStreamingBenchmarkConfig
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponseEnvelope
// 0x0018
struct FTigerResponseEnvelope
{
	bool                                               OK;                                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Retryable;                                                // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     Error;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_AdminMessagesConfigs
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_AdminMessagesConfigs : public FTigerResponseEnvelope
{
	struct FString                                     MessagesJson;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAdminMessagesConfig
// 0x0010
struct FTigerAdminMessagesConfig
{
	struct FString                                     MessagesJson;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerAiMovementTicketGroup
// 0x0058
struct FTigerAiMovementTicketGroup
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPatrollingHelicopterEventTicket
// 0x0020
struct FTigerPatrollingHelicopterEventTicket
{
	TWeakObjectPtr<class ATigerPlayer>                 BloodHuntTarget;                                          // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMasqueradeState
// 0x002C
struct FTigerMasqueradeState
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	TWeakObjectPtr<class ATigerBaseNPC>                NPC;                                                      // 0x0004(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerPlayer>                 TigerPlayer;                                              // 0x000C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0014(0x0018) MISSED OFFSET
};

// ScriptStruct Tiger.TigerInvestigationTicket
// 0x0028
struct FTigerInvestigationTicket
{
	TArray<TWeakObjectPtr<class ATigerNPC>>            WaitList;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerNPC>                    CurrentInvestigator;                                      // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerSightedPlayerData
// 0x001C
struct FTigerSightedPlayerData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAimAssistEvaluationData
// 0x00A0
struct FTigerAimAssistEvaluationData
{
	struct FTigerAimAssistState                        PreviousState;                                            // 0x0000(0x0068) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class ATigerPlayer*                                Player;                                                   // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerAimAssistSettings*                     Settings;                                                 // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCapSpawnData
// 0x0040
struct FTigerCapSpawnData
{
	class UTigerNPCAsset*                              SpawnAsset;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0010(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDamageImmunitySelector
// 0x0008
struct FTigerDamageImmunitySelector
{
	class UClass* /*UDamageType*/                      DamageType;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSidePieceMaterialOverrideCache
// 0x0028
struct FTigerSidePieceMaterialOverrideCache
{
	class UStaticMesh*                                 OldMesh;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               SlotNames;                                                // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuildingSystemMaterialCacheMaterialBinding
// 0x0010
struct FTigerBuildingSystemMaterialCacheMaterialBinding
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuildingSystemMaterialCache
// 0x0018
struct FTigerBuildingSystemMaterialCache
{
	TArray<struct FTigerBuildingSystemMaterialCacheMaterialBinding> MaterialBindings;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bStaticMeshComponent;                                     // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerBuildingSystemSideFloorEnables
// 0x0004
struct FTigerBuildingSystemSideFloorEnables
{
	bool                                               bFront;                                                   // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bLeft;                                                    // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bBack;                                                    // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRight;                                                   // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuildingSystemFloorComponents
// 0x0010
struct FTigerBuildingSystemFloorComponents
{
	TArray<class UStaticMeshComponent*>                SidePieceComponents;                                      // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuildingSystemCornerOverrides
// 0x0040
struct FTigerBuildingSystemCornerOverrides
{
	class UStaticMesh*                                 GroundFloorCorners;                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor1;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor2;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor3;                                            // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor4;                                            // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor5;                                            // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor6;                                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor7;                                            // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBuildingSystemGroundFloorOverrides
// 0x0018
struct FTigerBuildingSystemGroundFloorOverrides
{
	class UClass* /*UTigerBuildingWallPreset*/         Preset;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Index;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bOverrideScaling;                                         // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              MeshWidth;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerBuildingSystemSideOverrides
// 0x0040
struct FTigerBuildingSystemSideOverrides
{
	class UClass* /*UTigerBuildingWallPreset*/         GroundFloorPreset;                                        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerBuildingWallPreset*/         FloorPreset1;                                             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerBuildingWallPreset*/         FloorPreset2;                                             // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerBuildingWallPreset*/         FloorPreset3;                                             // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerBuildingWallPreset*/         FloorPreset4;                                             // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerBuildingWallPreset*/         FloorPreset5;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerBuildingWallPreset*/         FloorPreset6;                                             // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerBuildingWallPreset*/         FloorPreset7;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerClanCustomizationValidationError
// 0x0018
struct FTigerClanCustomizationValidationError
{
	ETigerClanCustomizationValidationErrorType         ErrorType;                                                // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UTigerInventoryItemBase*                     ErrorItem;                                                // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UTigerInventoryItemBase*                     CollisionItem;                                            // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerClanCustomizationValidationOutput
// 0x0010
struct FTigerClanCustomizationValidationOutput
{
	TArray<struct FTigerClanCustomizationValidationError> ValidationErrors;                                         // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterPiercingSetCustomizationItem
// 0x0010
struct FTigerCharacterPiercingSetCustomizationItem
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       FaceSlot;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCharacterHeadEyewearOffset
// 0x0018
struct FTigerCharacterHeadEyewearOffset
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.ClientDebugInfo
// 0x000C
struct FClientDebugInfo
{
	uint32_t                                           ClientUid;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   Location;                                                 // 0x0004(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.ActivateObjectState
// 0x0008
struct FActivateObjectState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerLoggedInElsewherePush
// 0x0001
struct FTigerLoggedInElsewherePush
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCollectibleTableRow
// 0x0008 (0x0010 - 0x0008)
struct FTigerCollectibleTableRow : public FTableRowBase
{
	class UTigerCollectibleData*                       Collectible;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.AccessToken
// 0x0028
struct FAccessToken
{
	struct FString                                     Token;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EndPoint;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ExpirationTimeInSeconds;                                  // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RequiresServerSecret;                                     // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_GetEntitlementsToken
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetEntitlementsToken : public FTigerResponseEnvelope
{
	struct FString                                     Token;                                                    // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_GetEntitlementsToken
// 0x0038
struct FTigerRequest_GetEntitlementsToken
{
	unsigned char                                      PlatformBackendType;                                      // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     AuthenticationCode;                                       // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CountryCode;                                              // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             Entitlements;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetAccessToken
// 0x0028 (0x0040 - 0x0018)
struct FTigerResponse_GetAccessToken : public FTigerResponseEnvelope
{
	struct FString                                     Token;                                                    // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EndPoint;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ExpirationTimeInSeconds;                                  // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RequiresServerSecret;                                     // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_GetAccessToken
// 0x0001
struct FTigerRequest_GetAccessToken
{
	unsigned char                                      PlatformBackendType;                                      // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerOwnedConsumable
// 0x0010
struct FTigerOwnedConsumable
{
	class UTigerConsumableAsset*                       ConsumableAsset;                                          // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerDsGameSessionDetails
// 0x0030
struct FTigerDsGameSessionDetails
{
	struct FString                                     GameSessionData;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AllowsJoin;                                               // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      GroupingMode;                                             // 0x0015(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FString                                     GAMEMODEID;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      MATCHMAKINGPLATFORM;                                      // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerEmoteTableRow
// 0x0030 (0x0038 - 0x0008)
struct FTigerEmoteTableRow : public FTableRowBase
{
	struct FText                                       EmoteName;                                                // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UTexture2D*                                  EmoteIcon;                                                // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                EmoteMontage;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bStopsMovement;                                           // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAlwaysUnlocked;                                          // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_EventConfigs
// 0x0058 (0x0070 - 0x0018)
struct FTigerResponse_EventConfigs : public FTigerResponseEnvelope
{
	bool                                               UseLocal;                                                 // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                LastChecksum;                                             // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FTigerEventConfig>     EventConfigs;                                             // 0x0020(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerEventConfigs
// 0x0058
struct FTigerEventConfigs
{
	bool                                               UseLocal;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LastChecksum;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct Tiger.EventTimerHandles
// 0x0010
struct FEventTimerHandles
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerFakeGameSessionToken
// 0x0050
struct FTigerFakeGameSessionToken
{
	struct FString                                     Ip;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           Port;                                                     // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     GAMEMODEID;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GroupSize;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchMode                                    MatchMode;                                                // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	ETigerSessionType                                  SESSIONTYPE;                                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     DsSettings;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               MatchSettingsVariationElected;                            // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_GetUserInfo
// 0x0030 (0x0048 - 0x0018)
struct FTigerResponse_GetUserInfo : public FTigerResponseEnvelope
{
	struct FString                                     OpenId;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SharkmobUserId;                                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFriendsAccountIdSet
// 0x0038
struct FTigerFriendsAccountIdSet
{
	struct FString                                     PlatformUserId;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SharkmobUserId;                                           // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EShAccountChannel                                  PlayerChannel;                                            // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_ConvertedIds
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_ConvertedIds : public FTigerResponseEnvelope
{
	TArray<struct FTigerFriendsAccountIdSet>           PlayerIds;                                                // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_ChatNotification
// 0x0020
struct FTigerRequest_ChatNotification
{
	struct FString                                     RecipientPlayerId;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Command;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_GetSharkmobAccountIds
// 0x0018
struct FTigerRequest_GetSharkmobAccountIds
{
	uint32_t                                           ChannelID;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FString>                             PlatformUserIds;                                          // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFriendServiceFriend
// 0x0038
struct FTigerFriendServiceFriend
{
	struct FString                                     DISPLAYNAME;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SharkmobUserId;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OpenId;                                                   // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EShAccountChannel                                  Channel;                                                  // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_SearchPlayer
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_SearchPlayer : public FTigerResponseEnvelope
{
	TArray<struct FTigerFriendServiceFriend>           Players;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_SearchPlayerAction
// 0x0010
struct FTigerRequest_SearchPlayerAction
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_FriendAction
// 0x0010
struct FTigerRequest_FriendAction
{
	struct FString                                     SharkmobUserId;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_FriendInvites
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_FriendInvites : public FTigerResponseEnvelope
{
	TArray<struct FTigerFriendServiceFriend>           Invites;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_FriendsList
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_FriendsList : public FTigerResponseEnvelope
{
	TArray<struct FTigerFriendServiceFriend>           Friends;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerFullCharacterAppearance
// 0x00D8
struct FTigerFullCharacterAppearance
{
	struct FTigerCharacterAppearance                   PartialCharacterAppearance;                               // 0x0000(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FTigerPersistentPlayerCardData              PlayerCardData;                                           // 0x00C0(0x0018) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerCachedAchievementRetry
// 0x000C
struct FTigerCachedAchievementRetry
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGameModeUserData
// 0x0010
struct FTigerGameModeUserData
{
	struct FString                                     SelectedGameModeId;                                       // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GameModesConfig
// 0x0018 (0x0030 - 0x0018)
struct FTigerResponse_GameModesConfig : public FTigerResponseEnvelope
{
	bool                                               AlreadyOnLatestRevision;                                  // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Config;                                                   // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGrimoireCardBorderQualityRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerGrimoireCardBorderQualityRow : public FTableRowBase
{
	float                                              DamageAmount;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExtraDamage;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ExtraDamageOnEdges;                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGrimoireCardColorRow
// 0x0008 (0x0010 - 0x0008)
struct FTigerGrimoireCardColorRow : public FTableRowBase
{
	struct FCoreUObject_FColor                         Color;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerGrimoireSubEntry
// 0x0018
struct FTigerGrimoireSubEntry
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FName                                       EntryName;                                                // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTigerGrimoireEntry*                         Entry;                                                    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGrimoireEntryRow
// 0x0020 (0x0028 - 0x0008)
struct FTigerGrimoireEntryRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	class UTigerGrimoireEntry*                         Entry;                                                    // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerGrimoireSubEntry>              SubEntries;                                               // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.GroupingInfo
// 0x0004
struct FGroupingInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerHeatmapData
// 0x0014
struct FTigerHeatmapData
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Tiger.TigerDebugDrawCallbackEntry
// 0x0060
struct FTigerDebugDrawCallbackEntry
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_InboxMessageSection
// 0x0020
struct FTigerResponse_InboxMessageSection
{
	struct FString                                     Type;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_InboxMessageBody
// 0x0010
struct FTigerResponse_InboxMessageBody
{
	TArray<struct FTigerResponse_InboxMessageSection>  Sections;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_InboxMessage
// 0x0050
struct FTigerResponse_InboxMessage
{
	uint64_t                                           ID;                                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Category;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Header;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Read;                                                     // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               New;                                                      // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FString                                     ReceivedAt;                                               // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerResponse_InboxMessageBody             Body;                                                     // 0x0040(0x0010) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetInbox
// 0x0018 (0x0030 - 0x0018)
struct FTigerResponse_GetInbox : public FTigerResponseEnvelope
{
	int                                                Count;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalCount;                                               // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerResponse_InboxMessage>         Messages;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_UpdateInbox
// 0x0028
struct FTigerRequest_UpdateInbox
{
	TArray<uint64_t>                                   IdsToDelete;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<uint64_t>                                   IdsToUpdate;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               MarkAsRead;                                               // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_GetInbox
// 0x0020
struct FTigerRequest_GetInbox
{
	uint64_t                                           Page;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PageSize;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Locale;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTooltipStatChange
// 0x0020
struct FTigerTooltipStatChange
{
	struct FText                                       StatName;                                                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	ETigerTooltipStatChangeAmount                      Amount;                                                   // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsNegativeChange;                                        // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerSeasonalItemLink
// 0x0030 (0x0038 - 0x0008)
struct FTigerSeasonalItemLink : public FTableRowBase
{
	uint64_t                                           ItemId;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        ItemPath;                                                 // 0x0010(0x0028) (CPF_Edit, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemIDRemapElement
// 0x0020
struct FTigerItemIDRemapElement
{
	struct FString                                     PersistentID;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TelemetryID;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerIDRemapExportArray
// 0x0010
struct FTigerIDRemapExportArray
{
	TArray<struct FTigerItemIDRemapElement>            IdPairs;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerJudgeTargetConsideration
// 0x0028
struct FTigerJudgeTargetConsideration
{
	class ATigerPlayer*                                Player;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass* /*UTigerJudgeBaseAttackState*/> ApplicableAttacks;                                        // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	float                                              DamageDoneSinceReset;                                     // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DistanceToPlayer;                                         // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TargetValue;                                              // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerLegalDocumentVersions
// 0x0060
struct FTigerLegalDocumentVersions
{
	struct FString                                     Eula;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PrivacyPolicy;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ExportGate;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     KoreaSpecial1;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     KoreaSpecial3;                                            // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     KoreaSpecial4;                                            // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerLegalDocumentsData
// 0x0060
struct FTigerLegalDocumentsData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Tiger.TigerCountryCode
// 0x0048 (0x0050 - 0x0008)
struct FTigerCountryCode : public FTableRowBase
{
	struct FText                                       EngShortName;                                             // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Alpha2;                                                   // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Alpha3;                                                   // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Numeric;                                                  // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AgeMin;                                                   // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AgeRating;                                                // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ExportGate;                                               // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBotDifficultySettings
// 0x0038
struct FTigerBotDifficultySettings
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Tiger.TigerBotNameData
// 0x0018 (0x0020 - 0x0008)
struct FTigerBotNameData : public FTableRowBase
{
	struct FText                                       BotNames;                                                 // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_LoginToken
// 0x0018 (0x0030 - 0x0018)
struct FTigerResponse_LoginToken : public FTigerResponseEnvelope
{
	uint16_t                                           EstimatedTimeInSeconds;                                   // 0x0018(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	struct FString                                     Token;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_LoginToken
// 0x0010
struct FTigerRequest_LoginToken
{
	struct FString                                     Token;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBloodHuntPositionWrapper
// 0x0018
struct FTigerBloodHuntPositionWrapper
{
	class ATigerPlayerState*                           PlayerState;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         WorldPosition;                                            // 0x0008(0x000C) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMatchSettingsVariationParameterSet
// 0x0018
struct FTigerMatchSettingsVariationParameterSet
{
	TArray<ETigerMatchSettingsVariationParameter>      Parameters;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	double                                             Probability;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMatchSettingsVariationConfig
// 0x0038
struct FTigerMatchSettingsVariationConfig
{
	double                                             GasSpeedFactor;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CivilianResonance;                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SwapLootTable;                                            // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableEntity;                                            // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	int                                                StartingResonance;                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	double                                             BloodhuntedTimeSeconds;                                   // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AllHighTierLootActive;                                    // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               BrokenMasqueradeAtStart;                                  // 0x0021(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	TArray<struct FTigerMatchSettingsVariationParameterSet> ParameterSets;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeleeWeaponAttackData
// 0x0040 (0x0048 - 0x0008)
struct FTigerMeleeWeaponAttackData : public FTableRowBase
{
	float                                              SwingDepth;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SwingOffsetX;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SwingOffsetY;                                             // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SwingOffsetZ;                                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SwingDamageAmount;                                        // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   FlinchStrengthMin;                                        // 0x001C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   FlinchStrengthMax;                                        // 0x0024(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimAssistConeAngle;                                       // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AimAssistConeLength;                                      // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StopAimAssistTime;                                        // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EnableMeleeRecoveryMoveTime;                              // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CanStartNextAttackTime;                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WorldStaticCollisionRadius;                               // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              WorldStaticCollisionHalfHeight;                           // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeleeFlinchData
// 0x0018
struct FTigerMeleeFlinchData
{
	class UCurveFloat*                                 HorizontalFlinch;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCurveFloat*                                 VerticalFlinch;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HorizontalStrength;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              VerticalStrength;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerModularListItemInfo
// 0x0028
struct FTigerModularListItemInfo
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsLocked;                                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bShowProgressCounter;                                     // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                CurrentProgressValue;                                     // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxProgressValue;                                         // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerMultiplayMetaData
// 0x0008
struct FTigerMultiplayMetaData
{
	bool                                               FakeMatchmakingEnabled;                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                BuildChangeList;                                          // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMultiplayServerInfo
// 0x0010
struct FTigerMultiplayServerInfo
{
	struct FString                                     SessionId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_MultiplayDeallocate
// 0x0020
struct FTigerRequest_MultiplayDeallocate
{
	struct FString                                     FleetId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameSessionId;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_MultiplayHeartbeat
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_MultiplayHeartbeat : public FTigerResponseEnvelope
{
	bool                                               IsDraining;                                               // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ShouldForceStop;                                          // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_MultiplayHeartbeat
// 0x0028
struct FTigerRequest_MultiplayHeartbeat
{
	struct FString                                     GameSessionId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MetaData;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPingServerConfig
// 0x0018
struct FTigerPingServerConfig
{
	struct FString                                     PingServerIpV4;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           PingServerPort;                                           // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRegionConfig
// 0x0030
struct FTigerRegionConfig
{
	struct FString                                     RegionName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     RegionId;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerPingServerConfig>              PingServers;                                              // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRegionsConfigResponse
// 0x0010 (0x0028 - 0x0018)
struct FTigerRegionsConfigResponse : public FTigerResponseEnvelope
{
	TArray<struct FTigerRegionConfig>                  AvailableRegions;                                         // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSpawnGroupBudget
// 0x0008
struct FTigerSpawnGroupBudget
{
	int                                                MaxSpawned;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinSpawned;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSpawnGroupBudgetTableRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerSpawnGroupBudgetTableRow : public FTableRowBase
{
	struct FTigerSpawnGroupBudget                      Budgets[0x2];                                             // 0x0008(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSessionConnectionParams
// 0x0020
struct FTigerSessionConnectionParams
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_AcknowledgeStateUpdate
// 0x0004
struct FTigerRequest_AcknowledgeStateUpdate
{
	uint32_t                                           StateUpdateId;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_CreateGameSession
// 0x0020
struct FTigerRequest_CreateGameSession
{
	struct FString                                     GameSessionToken;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SESSIONTYPE;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_AcceptInvite
// 0x0060 (0x0078 - 0x0018)
struct FTigerResponse_AcceptInvite : public FTigerResponseEnvelope
{
	struct FString                                     HostPlayerId;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PartyId;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             PartyPlayerIds;                                           // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                LeaderIndex;                                              // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     HostAddr;                                                 // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                HostPort;                                                 // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     GameSessionToken;                                         // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_DeclineInvite
// 0x0010
struct FTigerRequest_DeclineInvite
{
	struct FString                                     PartyInviteToken;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_AcceptInvite
// 0x0010
struct FTigerRequest_AcceptInvite
{
	struct FString                                     PartyInviteToken;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_InvitePlayer
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_InvitePlayer : public FTigerResponseEnvelope
{
	struct FString                                     InviteId;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_InvitePlayer
// 0x0048
struct FTigerRequest_InvitePlayer
{
	struct FString                                     GuestPlayerId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      GuestPlayerChannel;                                       // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     GameSessionToken;                                         // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     LanSessionUrl;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserData;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetPartyMaintenanceMode
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_GetPartyMaintenanceMode : public FTigerResponseEnvelope
{
	bool                                               MaintenanceMode;                                          // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_GetParty
// 0x0060 (0x0078 - 0x0018)
struct FTigerResponse_GetParty : public FTigerResponseEnvelope
{
	bool                                               PartyFound;                                               // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     PartyId;                                                  // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIds;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                LeaderIndex;                                              // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxMembers;                                               // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     HostAddr;                                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                HostPort;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     GameSessionToken;                                         // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               MaintenanceMode;                                          // 0x0070(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPartyInviteToken
// 0x0010
struct FTigerPartyInviteToken
{
	struct FString                                     Content;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlatformPartyId
// 0x0020
struct FTigerPlatformPartyId
{
	struct FString                                     PlatformPartyId[0x2];                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Tiger.TigerPersistentCategoryDefinition
// 0x0018 (0x0020 - 0x0008)
struct FTigerPersistentCategoryDefinition : public FTableRowBase
{
	ETigerPersistentStoreCategory                      Category;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FTigerPersistentItemDefinition>      AvailableItems;                                           // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPersistentCategoryGroupDefinition
// 0x0010
struct FTigerPersistentCategoryGroupDefinition
{
	TArray<struct FTigerPersistentCategoryDefinition>  CategoryDefinitions;                                      // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerProgressedObjectiveWrapper
// 0x000C
struct FTigerProgressedObjectiveWrapper
{
	int                                                TargetValue;                                              // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PostSessionProgress;                                      // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PreSessionProgress;                                       // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerProgressedQuestWrapper
// 0x0028
struct FTigerProgressedQuestWrapper
{
	struct FText                                       QuestDescription;                                         // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerProgressedObjectiveWrapper>    ProgressedObjectives;                                     // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemPriceJSON
// 0x0018
struct FTigerItemPriceJSON
{
	int                                                Amount;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     SoftCurrencyId;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemIdWithPriceJSON
// 0x0028
struct FTigerItemIdWithPriceJSON
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerItemPriceJSON                         Price;                                                    // 0x0010(0x0018) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMovementAchievementData
// 0x0014
struct FTigerMovementAchievementData
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAttackingNPCCollection
// 0x0018
struct FTigerAttackingNPCCollection
{
	TArray<TWeakObjectPtr<class ATigerNPC>>            AttackingNPCs;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPlayerAnimationSets
// 0x0020
struct FTigerPlayerAnimationSets
{
	class UTigerAnimationSetAsset*                     AnimationSetByClan[0x4];                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerLevelData
// 0x0008
struct FTigerPlayerLevelData
{
	uint32_t                                           Level;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Exp;                                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonalData
// 0x0010
struct FTigerSeasonalData
{
	uint32_t                                           OldExp;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           NewExp;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           OldLevel;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           NewLevel;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerIdWithPlacement
// 0x0018
struct FTigerPlayerIdWithPlacement
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Placement;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_GetPremiumCurrencyBalance
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_GetPremiumCurrencyBalance : public FTigerResponseEnvelope
{
	uint64_t                                           Balance;                                                  // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_IncrementPremiumCurrency
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_IncrementPremiumCurrency : public FTigerResponseEnvelope
{
	uint64_t                                           OldAmount;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           NewAmount;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_IncrementPremiumCurrency
// 0x0008
struct FTigerRequest_IncrementPremiumCurrency
{
	uint64_t                                           Amount;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetStoreEntriesChecksum
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_GetStoreEntriesChecksum : public FTigerResponseEnvelope
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_StoreEntryItem
// 0x0018
struct FTigerResponse_StoreEntryItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_StoreEntry
// 0x0058
struct FTigerResponse_StoreEntry
{
	struct FString                                     StoreEntryID;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           PremiumPrice;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     ImagePath;                                                // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Discount;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FDateTime                                   StartAt;                                                  // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   EndsAt;                                                   // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Slot;                                                     // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FTigerResponse_StoreEntryItem>       Items;                                                    // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetStoreEntries
// 0x0018 (0x0030 - 0x0018)
struct FTigerResponse_GetStoreEntries : public FTigerResponseEnvelope
{
	TArray<struct FTigerResponse_StoreEntry>           StoreEntries;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int64_t                                            Checksum;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetServerMetricsConfig
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetServerMetricsConfig : public FTigerResponseEnvelope
{
	struct FString                                     MetricsConfig;                                            // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_DailyFinalReward
// 0x0010
struct FTigerSeasonConfigResponse_DailyFinalReward
{
	TArray<struct FString>                             DailyFinalRewardIds;                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_DailyRewardCollection
// 0x0020
struct FTigerSeasonConfigResponse_DailyRewardCollection
{
	TArray<struct FString>                             TrackRewardIds;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfigResponse_DailyFinalReward> DailyFinalRewardWeeks;                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_WeeklyChallengeDefinition
// 0x0018
struct FTigerSeasonConfigResponse_WeeklyChallengeDefinition
{
	struct FTigerChallengeTypeID                       ChallengeStorageID;                                       // 0x0000(0x0004) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                          // 0x0004(0x0004) (CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             RewardIds;                                                // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_ChallengeCollection
// 0x0030
struct FTigerSeasonConfigResponse_ChallengeCollection
{
	TArray<struct FTigerSeasonConfigResponse_WeeklyChallengeDefinition> ChallengeDefinitions;                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             SequentialRewardIds;                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   UnlockDate;                                               // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   LockDate;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_RewardTier
// 0x0010
struct FTigerSeasonConfigResponse_RewardTier
{
	TArray<struct FString>                             ItemIds;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_Archetypes
// 0x0010
struct FTigerSeasonConfigResponse_Archetypes
{
	TArray<struct FTigerSeasonConfigResponse_RewardTier> Rewards;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_ArchetypeRewards
// 0x0080
struct FTigerSeasonConfigResponse_ArchetypeRewards
{
	struct FTigerSeasonConfigResponse_Archetypes       Archetypes[0x8];                                          // 0x0000(0x0010) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_RegisterGameSessionResults
// 0x0010
struct FTigerRequest_RegisterGameSessionResults
{
	TArray<struct FTigerPlayerIdWithPlacement>         Result;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetMatchmakingToken
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetMatchmakingToken : public FTigerResponseEnvelope
{
	struct FString                                     MatchmakingDataToken;                                     // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_GetMatchmakingToken
// 0x0010
struct FTigerRequest_GetMatchmakingToken
{
	TArray<struct FString>                             PlayerIds;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetSeasonConfig
// 0x0038 (0x0050 - 0x0018)
struct FTigerResponse_GetSeasonConfig : public FTigerResponseEnvelope
{
	struct FString                                     Config;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PublicIpv4;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PublicIpv6;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   CurrentDateTime;                                          // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GenericExp
// 0x0008
struct FTigerResponse_GenericExp
{
	uint32_t                                           Level;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Exp;                                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_TransactionalPlayerData
// 0x0118
struct FTigerResponse_TransactionalPlayerData
{
	int                                                Version;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           SeasonId;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           SeasonLevel;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           SeasonLevelExp;                                           // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           SeasonPlacementExpBonusPercentage;                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TMap<struct FString, struct FTigerResponse_GenericExp> GenericExps;                                              // 0x0018(0x0050) (CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, int>                          InventoryItems;                                           // 0x0068(0x0050) (CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               CustomizationConfigs;                                     // 0x00B8(0x0050) (CPF_NativeAccessSpecifierPublic)
	float                                              Rating;                                                   // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankPoints;                                               // 0x010C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           PremiumCurrencyBalance;                                   // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_BuyItem
// 0x0118 (0x0130 - 0x0018)
struct FTigerResponse_BuyItem : public FTigerResponseEnvelope
{
	struct FTigerResponse_TransactionalPlayerData      Transactional;                                            // 0x0018(0x0118) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_SetCustomizationConfigs
// 0x0020
struct FTigerRequest_SetCustomizationConfigs
{
	TArray<struct FString>                             Keys;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             Values;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBoughtItemElement
// 0x0018
struct FTigerBoughtItemElement
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_BuyStoreEntries
// 0x0130 (0x0148 - 0x0018)
struct FTigerResponse_BuyStoreEntries : public FTigerResponseEnvelope
{
	struct FTigerResponse_TransactionalPlayerData      Transactional;                                            // 0x0018(0x0118) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerBoughtItemElement>             BoughtItems;                                              // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      BuyResult;                                                // 0x0140(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerStoreEntryAndQuantity
// 0x0018
struct FTigerStoreEntryAndQuantity
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_BuyStoreEntries
// 0x0028
struct FTigerRequest_BuyStoreEntries
{
	TArray<struct FTigerStoreEntryAndQuantity>         StoreEntriesToBuy;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           TotalCost;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Channel;                                                  // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     PlatformEntitlementsToken;                                // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerItemIdWithQuantity
// 0x0018
struct FTigerItemIdWithQuantity
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_BuyItems
// 0x0060
struct FTigerRequest_BuyItems
{
	TArray<struct FTigerItemIdWithQuantity>            ItemsToBuy;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             CustomizationKeys;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             CustomizationValues;                                      // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                TotalCost;                                                // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CurrencyAmountToAdd;                                      // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           SeasonPlacementExpBoostPercentageToAdd;                   // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Channel;                                                  // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<struct FTigerItemIdWithQuantity>            ItemsToConsume;                                           // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlatformEntitlementsToken;                                // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_CategoryGroupDefinition
// 0x0010
struct FTigerResponse_CategoryGroupDefinition
{
	struct FString                                     CategoryDefinitions;                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetStoreItemConfigs
// 0x0050 (0x0068 - 0x0018)
struct FTigerResponse_GetStoreItemConfigs : public FTigerResponseEnvelope
{
	TMap<struct FString, struct FTigerResponse_CategoryGroupDefinition> CategoryGroups;                                           // 0x0018(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_StoreEntryConfig
// 0x0001
struct FTigerRequest_StoreEntryConfig
{
	unsigned char                                      Show;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_UpdatePlayerRankPoints
// 0x0004
struct FTigerRequest_UpdatePlayerRankPoints
{
	uint32_t                                           RankPoints;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_UpdatePlayerData
// 0x0020
struct FTigerRequest_UpdatePlayerData
{
	struct FString                                     Data;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CardData;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetCreatePlayer
// 0x0168 (0x0180 - 0x0018)
struct FTigerResponse_GetCreatePlayer : public FTigerResponseEnvelope
{
	struct FTigerResponse_TransactionalPlayerData      Transactional;                                            // 0x0018(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                     // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CardData;                                                 // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Banned;                                                   // 0x0150(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      BanReason;                                                // 0x0151(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0152(0x0006) MISSED OFFSET
	struct FString                                     BanEndsAt;                                                // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Muted;                                                    // 0x0168(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      MutedReason;                                              // 0x0169(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x016A(0x0006) MISSED OFFSET
	struct FString                                     MutedEndsAt;                                              // 0x0170(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_GetCreatePlayer
// 0x0010
struct FTigerRequest_GetCreatePlayer
{
	struct FString                                     PlatformEntitlementsToken;                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerOutfitCustomizationConfigValue
// 0x0004
struct FTigerOutfitCustomizationConfigValue
{
	int                                                HoodieIndex;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_UpdateSeasonProgress
// 0x0060 (0x0078 - 0x0018)
struct FTigerResponse_UpdateSeasonProgress : public FTigerResponseEnvelope
{
	uint32_t                                           OldSeasonExp;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           NewSeasonExp;                                             // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           OldSeasonLevel;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           NewSeasonLevel;                                           // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FTigerResponse_GenericExp> NewGenericExps;                                           // 0x0028(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_UpdateSeasonProgressGenericExp
// 0x0008
struct FTigerRequest_UpdateSeasonProgressGenericExp
{
	uint32_t                                           Level;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Exp;                                                      // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_UpdateSeasonProgress
// 0x0078
struct FTigerRequest_UpdateSeasonProgress
{
	uint32_t                                           ExpGained;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ExpRemovedDueToConversion;                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           LevelCount;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     ArchetypeId;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           PlayedSeconds;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IncrementMatchesPlayed;                                   // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	TMap<struct FString, struct FTigerRequest_UpdateSeasonProgressGenericExp> GenericExps;                                              // 0x0028(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_IncrementSeasonExp
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_IncrementSeasonExp : public FTigerResponseEnvelope
{
	uint32_t                                           OldExp;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           NewExp;                                                   // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_IncrementSeasonExp
// 0x0004
struct FTigerRequest_IncrementSeasonExp
{
	uint32_t                                           Exp;                                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_UpdateLastUse
// 0x0001
struct FTigerRequest_UpdateLastUse
{
	unsigned char                                      CharacterId;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_Character
// 0x0020
struct FTigerResponse_Character
{
	unsigned char                                      CharacterId;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Data;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            LastUsedAt;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetCharactersForPlayer
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetCharactersForPlayer : public FTigerResponseEnvelope
{
	TArray<struct FTigerResponse_Character>            Characters;                                               // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetCharacter
// 0x0020 (0x0038 - 0x0018)
struct FTigerResponse_GetCharacter : public FTigerResponseEnvelope
{
	struct FTigerResponse_Character                    Character;                                                // 0x0018(0x0020) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_UpdateCharacter
// 0x00D8
struct FTigerRequest_UpdateCharacter
{
	struct FTigerPersistentPlayerCharacterData         CharacterData;                                            // 0x0000(0x00D8) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_AddCharacter
// 0x0001
struct FTigerRequest_AddCharacter
{
	unsigned char                                      Archetype;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetPlayerInfoFromTicket
// 0x0038 (0x0050 - 0x0018)
struct FTigerResponse_GetPlayerInfoFromTicket : public FTigerResponseEnvelope
{
	struct FString                                     PlayerId;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SharkmobUserId;                                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      Channel;                                                  // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_GetPlayerInfoFromTicket
// 0x0010
struct FTigerRequest_GetPlayerInfoFromTicket
{
	struct FString                                     Ticket;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetVersionIsValid
// 0x0028 (0x0040 - 0x0018)
struct FTigerResponse_GetVersionIsValid : public FTigerResponseEnvelope
{
	bool                                               VersionIsValid;                                           // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     PublicIpv4;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PublicIpv6;                                               // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetLonelyFishTicket
// 0x0038 (0x0050 - 0x0018)
struct FTigerResponse_GetLonelyFishTicket : public FTigerResponseEnvelope
{
	struct FString                                     Ticket;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SharkmobUserName;                                         // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DesiredRefreshIntervalMinutes;                            // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_GetLonelyFishTicket
// 0x0058
struct FTigerRequest_GetLonelyFishTicket
{
	struct FString                                     AuthenticationOpenId;                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AuthenticationToken;                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      AuthenticationChannelId;                                  // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     LoginToken;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DevPlayerName;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_DsPresence
// 0x0020
struct FTigerRequest_DsPresence
{
	struct FString                                     DsInstanceId;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIds;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_SetInterestedPlayers
// 0x0010
struct FTigerRequest_SetInterestedPlayers
{
	TArray<struct FString>                             InterestedPlayers;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_SetLocation
// 0x0010
struct FTigerRequest_SetLocation
{
	struct FString                                     Location;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_Presence
// 0x0020
struct FTigerRequest_Presence
{
	struct FString                                     Location;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             InterestedPlayers;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_Presence
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_Presence : public FTigerResponseEnvelope
{
	bool                                               ResendData;                                               // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.PresenceInfo
// 0x0028
struct FPresenceInfo
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsOnline;                                                 // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_GetPlayers
// 0x0018 (0x0030 - 0x0018)
struct FTigerResponse_GetPlayers : public FTigerResponseEnvelope
{
	TArray<struct FPresenceInfo>                       InterestedPlayers;                                        // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               ResendData;                                               // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPromotionalPopupConfig
// 0x00F8
struct FTigerPromotionalPopupConfig
{
	TMap<struct FString, struct FString>               PromoPopup_BgImage;                                       // 0x0000(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               PromoPopup_Title;                                         // 0x0050(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               PromoPopup_Paragraph;                                     // 0x00A0(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	int                                                PopupTriggerInterval;                                     // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PopupVersion;                                             // 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPromotionalUiData
// 0x0010
struct FTigerPromotionalUiData
{
	struct FDateTime                                   LastShowDateTime;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastShowVersion;                                          // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerPushMessage
// 0x0010
struct FTigerPushMessage
{
	struct FString                                     MsgType;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDsPushRegisterReq
// 0x0030 (0x0040 - 0x0010)
struct FTigerDsPushRegisterReq : public FTigerPushMessage
{
	struct FString                                     ClientProtocolVersion;                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ServerSecret;                                             // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DsInstanceId;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerGameClientPushRegisterReq
// 0x0020 (0x0030 - 0x0010)
struct FTigerGameClientPushRegisterReq : public FTigerPushMessage
{
	struct FString                                     ClientProtocolVersion;                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                   // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.MutePush
// 0x0028
struct FMutePush
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsMuted;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      MutedReason;                                              // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     MutedEndsAt;                                              // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.PresencePush
// 0x0028
struct FPresencePush
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsOnline;                                                 // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.OnlinePresencePush
// 0x0018
struct FOnlinePresencePush
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsOnline;                                                 // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.LocationPresencePush
// 0x0020
struct FLocationPresencePush
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPartyPokePush
// 0x0010
struct FTigerPartyPokePush
{
	struct FString                                     PartyId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPartyTravelPush
// 0x0048
struct FTigerPartyTravelPush
{
	struct FString                                     SESSIONTYPE;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PartyId;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameSessionToken;                                         // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Host;                                                     // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Port;                                                     // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           StateUpdateId;                                            // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRemovedFromPartyPush
// 0x0010
struct FTigerRemovedFromPartyPush
{
	struct FString                                     PartyId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerChatNotificationPush
// 0x0020
struct FTigerChatNotificationPush
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Command;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMemberLeftPush
// 0x0030
struct FTigerMemberLeftPush
{
	struct FString                                     PartyId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DepartingPlayerId;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     NewLeaderPlayerId;                                        // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMemberJoinedPush
// 0x0020
struct FTigerMemberJoinedPush
{
	struct FString                                     PartyId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     JoiningPlayerId;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerInviteResponsePush
// 0x0050
struct FTigerInviteResponsePush
{
	struct FString                                     InviteId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Accepted;                                                 // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     PartyId;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GuestPlayerId;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIds;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int                                                LeaderIndex;                                              // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerInvitePush
// 0x0058
struct FTigerInvitePush
{
	struct FString                                     InviteId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     HostPlayerId;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     HostPlayerName;                                           // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EShAccountChannel                                  HostPlayerChannel;                                        // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     PartyInviteToken;                                         // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UserData;                                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerQuestCollectionEntry
// 0x0010
struct FTigerQuestCollectionEntry
{
	int                                                UniqueQuestID;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTigerQuest*                                 ReferenceQuest;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerProjectileAreaEffect
// 0x0010
struct FTigerProjectileAreaEffect
{
	class ATigerAreaEffect*                            AreaEffect;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerShotProjectileData
// 0x0030
struct FTigerShotProjectileData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class UTigerRangedWeapon*                          RangedWeapon;                                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.Rank
// 0x0018
struct FRank
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankPoints;                                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerReplayCameraMove
// 0x0010
struct FTigerReplayCameraMove
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerReplayCameraPosition
// 0x0060
struct FTigerReplayCameraPosition
{
	ETigerReplayCameraMode                             Mode;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerReplayCameraRotateMode                       RotationMode;                                             // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     LookAtBoneName;                                           // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CameraPosition;                                           // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FQuat                                       CameraRotation;                                           // 0x0030(0x0010) (CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CameraRelativeLocation;                                   // 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CameraTime;                                               // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerReplayCameraMoveType                         MoveType;                                                 // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              MoveTypeParameter;                                        // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerReplayCameraTransitionType                   TransitionType;                                           // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerReplayInfo
// 0x0030
struct FTigerReplayInfo
{
	struct FString                                     ReplayName;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     FriendlyName;                                             // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   Timestamp;                                                // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LengthInMS;                                               // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsValid;                                                 // 0x002C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResurrectToken
// 0x0010
struct FTigerResurrectToken
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRichIconRow
// 0x0088 (0x0090 - 0x0008)
struct FTigerRichIconRow : public FTableRowBase
{
	struct FSlateBrush                                 Brush;                                                    // 0x0008(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRoofSystemPrimitiveData
// 0x0020
struct FTigerRoofSystemPrimitiveData
{
	struct FVector4                                    Color;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Desaturation;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformablePrimitiveData
// 0x0020
struct FTigerRoofSystemFreeTransformablePrimitiveData
{
	struct FVector4                                    Color;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Desaturation;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableMaterialCacheMaterialBinding
// 0x0010
struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableMaterialCache
// 0x0018
struct FTigerRoofSystemFreeTransformableMaterialCache
{
	TArray<struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding> MaterialBindings;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bStaticMeshComponent;                                     // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerBattlepassRewardPreviewRow
// 0x0058 (0x0060 - 0x0008)
struct FTigerBattlepassRewardPreviewRow : public FTableRowBase
{
	TSoftClassPtr<class UClass>                        ItemClass;                                                // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                        PreviewActorClass;                                        // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       CameraTag;                                                // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerDsLoginElsewherePush
// 0x0020
struct FTigerDsLoginElsewherePush
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OtherDsInstanceId;                                        // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerKickPlayerPush
// 0x0018
struct FTigerKickPlayerPush
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      BanReason;                                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.VerifyGameSessionTokenResult
// 0x0060
struct FVerifyGameSessionTokenResult
{
	bool                                               bVerifiedOk;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     GameSessionId;                                            // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGroupingInfo                               GroupingInfo;                                             // 0x0018(0x0004) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                GameSessionPlayerCount;                                   // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           GameSessionBotCount;                                      // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               MatchSettingsVariationElected;                            // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchMode                                    MatchMode;                                                // 0x0025(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FString                                     DsSettings;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GAMEMODEID;                                               // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameModeName;                                             // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct Tiger.TigerResponse_GetGameSessionDsData
// 0x0058 (0x0070 - 0x0018)
struct FTigerResponse_GetGameSessionDsData : public FTigerResponseEnvelope
{
	int                                                GameSessionPlayerCount;                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     GameSessionId;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GroupSize;                                                // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETigerMatchMode                                    MatchMode;                                                // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	uint32_t                                           GameSessionBotCount;                                      // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               MatchSettingsVariationElected;                            // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      PlatformBackendType;                                      // 0x003D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FString                                     DsSettings;                                               // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GAMEMODEID;                                               // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameModeName;                                             // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_MatchSettingsVariationParameterSet
// 0x0018
struct FTigerResponse_MatchSettingsVariationParameterSet
{
	TArray<struct FString>                             Parameters;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	double                                             Probability;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_MatchSettingsVariationConfig
// 0x0030
struct FTigerResponse_MatchSettingsVariationConfig
{
	double                                             GasSpeedFactor;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CivilianResonance;                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               SwapLootTable;                                            // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DisableEntity;                                            // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	int                                                StartingResonance;                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BloodhuntedTimeSeconds;                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               AllHighTierLootActive;                                    // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               BrokenMasqueradeAtStart;                                  // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<struct FTigerResponse_MatchSettingsVariationParameterSet> ParameterSets;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_GetGameSessionDsData
// 0x0038
struct FTigerRequest_GetGameSessionDsData
{
	struct FString                                     GameSessionToken;                                         // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DsPort;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     PlayerUniqueId;                                           // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OverrideIp;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_RunningGameServerHeartbeat
// 0x0060
struct FTigerRequest_RunningGameServerHeartbeat
{
	struct FString                                     OverrideIp;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Port;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DsVersionId;                                              // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                              // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FTigerDsGameSessionDetails                  SessionDetails;                                           // 0x0030(0x0030) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_IdleGameServerHeartbeat
// 0x0038 (0x0050 - 0x0018)
struct FTigerResponse_IdleGameServerHeartbeat : public FTigerResponseEnvelope
{
	bool                                               HasSwitchedToRunning;                                     // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FTigerDsGameSessionDetails                  SessionDetails;                                           // 0x0020(0x0030) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_IdleGameServerHeartbeat
// 0x0030
struct FTigerRequest_IdleGameServerHeartbeat
{
	struct FString                                     OverrideIp;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Port;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DsVersionId;                                              // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                              // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_RegisterNewIdle
// 0x0028
struct FTigerRequest_RegisterNewIdle
{
	struct FString                                     OverrideIp;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Port;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DsVersionId;                                              // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerSplatmapSplatHistoryItem
// 0x0020
struct FTigerSplatmapSplatHistoryItem
{
	class UTexture*                                    Textures[0x4];                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.PlayerStatistic
// 0x0018
struct FPlayerStatistic
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerAnimationStatistic
// 0x0018
struct FTigerAnimationStatistic
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RelativeTimePlayed;                                       // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryPlayerGeneralInfo
// 0x0040
struct FTigerTelemetryPlayerGeneralInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryTutorialLocation
// 0x0020
struct FTigerTelemetryTutorialLocation
{
	struct FString                                     ObjectiveId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryTutorialLocationsContainer
// 0x0010
struct FTigerTelemetryTutorialLocationsContainer
{
	TArray<struct FTigerTelemetryTutorialLocation>     Locations;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryTutorialTimeStamp
// 0x0018
struct FTigerTelemetryTutorialTimeStamp
{
	struct FString                                     ObjectiveId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCompleted;                                               // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryTutorialTimeStampContainer
// 0x0010
struct FTigerTelemetryTutorialTimeStampContainer
{
	TArray<struct FTigerTelemetryTutorialTimeStamp>    TimeStamps;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryItemSpawnAmounts
// 0x0050
struct FTigerTelemetryItemSpawnAmounts
{
	TMap<uint64_t, int>                                ItemAmounts;                                              // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_PremiumCurrencyPack
// 0x0048 (0x0060 - 0x0018)
struct FTigerResponse_PremiumCurrencyPack : public FTigerResponseEnvelope
{
	struct FString                                     ID;                                                       // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Amount;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     ImagePath;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            Bonus;                                                    // 0x0040(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	double                                             Price;                                                    // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CurrencyType;                                             // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetPremiumCurrencyPacks
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetPremiumCurrencyPacks : public FTigerResponseEnvelope
{
	TArray<struct FTigerResponse_PremiumCurrencyPack>  CurrencyPacks;                                            // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_PremiumCurrencyPackById
// 0x0010
struct FTigerRequest_PremiumCurrencyPackById
{
	TArray<struct FString>                             Ids;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_PremiumCurrencyPack
// 0x0010
struct FTigerRequest_PremiumCurrencyPack
{
	struct FString                                     CurrencyType;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_GetSupportedCurrencyCode
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetSupportedCurrencyCode : public FTigerResponseEnvelope
{
	struct FString                                     Type;                                                     // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_GetSupportedCurrencyCode
// 0x0010
struct FTigerRequest_GetSupportedCurrencyCode
{
	struct FString                                     userId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryResponse
// 0x0018
struct FTigerTelemetryResponse
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               OK;                                                       // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryKeyValuePair
// 0x0020
struct FTigerTelemetryKeyValuePair
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryData
// 0x0080
struct FTigerTelemetryData
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Universe;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlatformType;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ApplicationVersion;                                       // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EventTimestamp;                                           // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerTelemetryKeyValuePair>         Data;                                                     // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryDefinitionMaster
// 0x0050
struct FTigerTelemetryDefinitionMaster
{
	TMap<struct FString, struct FTigerTelemetryDefinition> Definitions;                                              // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryMenuToTimeMapping
// 0x0050
struct FTigerTelemetryMenuToTimeMapping
{
	TMap<struct FString, int>                          MenuToTimeMapping;                                        // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryArchetypeAmounts
// 0x0050
struct FTigerTelemetryArchetypeAmounts
{
	TMap<int, int>                                     ArchetypeAmounts;                                         // 0x0000(0x0050) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryPerformanceDataAggregator
// 0x0100
struct FTigerTelemetryPerformanceDataAggregator
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0000(0x0100) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventSupport_PlayerReport
// 0x00C0 (0x00C8 - 0x0008)
struct FTigerTelemetryEventSupport_PlayerReport : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     ReportingUin;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ReportedUin;                                              // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ReportingPlatID;                                          // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ReportedPlatID;                                           // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MapID;                                                    // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GAMEMODEID;                                               // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ReportReason;                                             // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AdditionalInformation;                                    // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ReportingPlayerName;                                      // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ReportedPlayerName;                                       // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventPerf_PositionalData
// 0x00D8 (0x00E0 - 0x0008)
struct FTigerTelemetryEventPerf_PositionalData : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastPerfID;                                               // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PerfBatchID;                                              // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                 // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerHealth;                                             // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TraversalMode;                                            // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Equipped;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Inventory;                                                // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MaxSysMem;                                                // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MaxVRamMem;                                               // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumPsoCompiles;                                           // 0x00C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgFrameTime;                                             // 0x00CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgGameTime;                                              // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgGpuTime;                                               // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgRenderTime;                                            // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgRhiTime;                                               // 0x00DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventPerf_SessionSummary
// 0x0100 (0x0108 - 0x0008)
struct FTigerTelemetryEventPerf_SessionSummary : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastPerfID;                                               // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PerfBatchID;                                              // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SettingsDirtied;                                          // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PsoTotal;                                                 // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PsoPrePassComplete;                                       // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgFrameTime;                                             // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgGameTime;                                              // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgGpuTime;                                               // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgRenderTime;                                            // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgRhiTime;                                               // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinFrameTime;                                             // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinGameTime;                                              // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinGpuTime;                                               // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinRenderTime;                                            // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinRhiTime;                                               // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxFrameTime;                                             // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxGameTime;                                              // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxGpuTime;                                               // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxRhiTime;                                               // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxRenderTime;                                            // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AvgSysMem;                                                // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AvgVRamMem;                                               // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MaxSysMem;                                                // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MaxVRamMem;                                               // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerSettings;                                           // 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventPerf_PsoCompile
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventPerf_PsoCompile : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     MatName;                                                  // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     PerfBatchID;                                              // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventPerf_LoadingFinished
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventPerf_LoadingFinished : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PrevMapID;                                                // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CurrentMapID;                                             // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LastPerfID;                                               // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TimeToLoad;                                               // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TimeToStartPlay;                                          // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerSettings;                                           // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventElysium_NpcInteract
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventElysium_NpcInteract : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     NpcName;                                                  // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                InteractionDuration;                                      // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameAppid;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventElysium_Exit
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventElysium_Exit : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ExitPointName;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalElysiumTime;                                         // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalMoveDistance;                                        // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                WallGrindTime;                                            // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SlideTime;                                                // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AirTime;                                                  // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NotMovingTime;                                            // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalJumps;                                               // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalLedgeGrabs;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalLowVaults;                                           // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalSlideJumps;                                          // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AggregatedMenuTimes;                                      // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventElysium_Enter
// 0x0048 (0x0050 - 0x0008)
struct FTigerTelemetryEventElysium_Enter : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EntryPointName;                                           // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_AquiredInventoryItems
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventStore_AquiredInventoryItems : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UnlockedItems;                                            // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                UnlockSource;                                             // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventAccount_Customization
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventAccount_Customization : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CharacterCard;                                            // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventCharacter_Customization
// 0x00F0 (0x00F8 - 0x0008)
struct FTigerTelemetryEventCharacter_Customization : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeId;                                              // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CharacterId;                                              // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OutfitId;                                                 // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Accessories;                                              // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                     // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Hair;                                                     // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Eye;                                                      // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MakeupID;                                                 // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TattooId;                                                 // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     FacialHair;                                               // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EmotesID;                                                 // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalTimeSpend;                                           // 0x00F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventProgression_BattlepassLevelUp
// 0x0078 (0x0080 - 0x0008)
struct FTigerTelemetryEventProgression_BattlepassLevelUp : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattlepassExperienceSource;                               // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattlepassLevelBefore;                                    // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattlepassLevelAfter;                                     // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattlepassExperienceBefore;                               // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattlepassExperienceAfter;                                // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ChangedBattlepassExperience;                              // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_DeleteFriend
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventSocial_DeleteFriend : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     IDDeleted;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendRequestResponse
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventSocial_FriendRequestResponse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     IDRequestSentFrom;                                        // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RequestResponse;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendRequest
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventSocial_FriendRequest : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     IDRequestRecipient;                                       // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendList
// 0x0078 (0x0080 - 0x0008)
struct FTigerTelemetryEventSocial_FriendList : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SharkmobFriendNumber;                                     // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     SharkmobFriendIDList;                                     // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlatformFriendNumber;                                     // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventTutorial_Exit
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventTutorial_Exit : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TutorialStartTime;                                        // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TutorialEndTime;                                          // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TutorialFinished;                                         // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     ObjectiveDuration;                                        // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ObjectiveLocation;                                        // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_Progress
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventChallenge_Progress : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DailyChallengeProgress;                                   // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     WeeklyChallengeProgress;                                  // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MasteryChallengeProgress;                                 // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_Completed
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventChallenge_Completed : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ChallengeID;                                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ChallengeType;                                            // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_List
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventChallenge_List : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DailyChallengeID;                                         // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     WeeklyChallengeID;                                        // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MasteryChallengeID;                                       // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_CurrencySpend
// 0x0088 (0x0090 - 0x0008)
struct FTigerTelemetryEventStore_CurrencySpend : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                  // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     StoreEntryID;                                             // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Count;                                                    // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CurrencyType;                                             // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Price;                                                    // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DiscountedPrice;                                          // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalDiscountedPrice;                                     // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventStore_FlashStorePurchase
// 0x00A8 (0x00B0 - 0x0008)
struct FTigerTelemetryEventStore_FlashStorePurchase : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                  // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     StoreEntryID;                                             // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     StoreEntryName;                                           // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CurrencyType;                                             // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Price;                                                    // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DiscountPrice;                                            // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DiscountTotalPrice;                                       // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DiscountTimeLeft;                                         // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     LocalizedStoreEntryName;                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_PremiumCurrencyIncrease
// 0x00D8 (0x00E0 - 0x0008)
struct FTigerTelemetryEventStore_PremiumCurrencyIncrease : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientIP;                                                 // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                  // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CurrencySource;                                           // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     PremiumCurrencyBefore;                                    // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PremiumCurrencyAfter;                                     // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                IncreasedPremiumCurrency;                                 // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FString                                     CurrencyPackID;                                           // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OriginalCurrencyPackPrice;                                // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DiscountedCurrencyPackPrice;                              // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerPayCurrency;                                        // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PurchasingPlatform;                                       // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_FlashStoreRefresh
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventStore_FlashStoreRefresh : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientIP;                                                 // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                  // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     StoreEntryList;                                           // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_BattlepassPurchase
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventStore_BattlepassPurchase : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattlepassType;                                           // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OriginalBattlepassPrice;                                  // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DiscountedBattlepassPrice;                                // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattlepassLevelAtPurchase;                                // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                BattlepassLevelAfterPurchase;                             // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AccountLevelAtPurchase;                                   // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                  // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Season;                                                   // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonDay;                                                // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_ItemExit
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventStore_ItemExit : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_ItemPreview
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventStore_ItemPreview : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_Exit
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventStore_Exit : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_Preview
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventStore_Preview : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRespawn
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerRespawn : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameAppid;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerRespawnLocation;                                    // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RespawnsRemaining;                                        // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RespawnMethod;                                            // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ScourgeDashUse
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventMatchSession_ScourgeDashUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameAppid;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalDistanceScourgeDashed;                               // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     ScourgeDashStartLocation;                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ScourgeDashEndLocation;                                   // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DidDamageTarget;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_KatanaReflectUse
// 0x0040 (0x0048 - 0x0008)
struct FTigerTelemetryEventMatchSession_KatanaReflectUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalTimeInKatanaReflectState;                            // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalDamageNullified;                                     // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_MeleeWeaponUse
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventMatchSession_MeleeWeaponUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DurationMeleeWeaponHeldFor;                               // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfTimesMeleeWeaponDrawn;                            // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfAttacksWithMeleeWeapon;                           // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfHitsWithMeleeWeapon;                              // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalDamageDoneWithMeleeWeapon;                           // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalNumberOfDownsWithMeleeWeapon;                        // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalNumberOfKillsWithMeleeWeapon;                        // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_RangedWeaponUse
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventMatchSession_RangedWeaponUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfRangedHits;                                       // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfRangedShots;                                      // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageDealtWithWeapon;                                    // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                EnemiesDownedWithWeapon;                                  // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfTimesOutOfAmmoWithWeapon;                         // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberHeadshotsWithWeapon;                                // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerPings
// 0x0058 (0x0060 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerPings : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PingType;                                                 // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     PingTarget;                                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AgreementsReceived;                                       // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CauseOfPingRemoval;                                       // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRedGasStats
// 0x0040 (0x0048 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerRedGasStats : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalTimeInRedGas;                                        // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalTimeInRedGasWithStimulant;                           // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndPlayerMasquerad
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventMatchSession_EndPlayerMasquerad : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalTimeBloodHunted;                                     // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalBloodHuntsByFeeding;                                 // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalBloodHuntsByKilling;                                 // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalNumberAreaMarkerConsequences;                        // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalNumberMapMarkerConsequences;                         // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerTraversal
// 0x0078 (0x0080 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerTraversal : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalMoveDistance;                                        // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                WalkingDistance;                                          // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DisciplineTravelDistance;                                 // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CrouchingTime;                                            // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ClimbingTime;                                             // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TimeInside;                                               // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                WallHangTime;                                             // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                WallGrindTime;                                            // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SlideTime;                                                // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AirTime;                                                  // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NotMovingTime;                                            // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalJumps;                                               // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalWallJumps;                                           // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalSlideJumps;                                          // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalLedgeGrabs;                                          // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalLowVaults;                                           // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerMetaChange
// 0x0058 (0x0060 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerMetaChange : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonExperienceGained;                                   // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonLevelBeforeChange;                                  // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonLevelAfterChange;                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeId;                                              // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeExperienceGained;                                // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeLevelBeforeChange;                               // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeLevelAfterChange;                                // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndPlayerResults
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventMatchSession_EndPlayerResults : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerQuitBeforeEnd;                                      // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                KillCount;                                                // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AssistCount;                                              // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalSurvivalTime;                                        // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberOfAlliedRevives;                                    // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalAmountOfHealing;                                     // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalNumberOfHealingEvents;                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalFeedingAbortsByDamage;                               // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalFeedingAbortsByPlayer;                               // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                InflictedKnockdownCount;                                  // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DeathCount;                                               // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TimesKnockedDown;                                         // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRankChanges
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerRankChanges : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerResult;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TeamRank;                                                 // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ChangedKillRatingValue;                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                KillRatingValueAfterChanged;                              // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ChangedWinRatingValue;                                    // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                WinRatingValueAfterChanged;                               // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PreviousRankedBracket;                                    // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     NewRankedBracket;                                         // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TotalPoint;                                               // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RatingLevel;                                              // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankedPointsBefore;                                       // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankedPointsAfter;                                        // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndGameEvent
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventMatchSession_EndGameEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     WinningPlayerID;                                          // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SeasonId;                                                 // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     ClanID;                                                   // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ArchetypeId;                                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_DamageEvents
// 0x00A8 (0x00B0 - 0x0008)
struct FTigerTelemetryEventMatchSession_DamageEvents : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UinSource;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     UinTarget;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageTypeID;                                             // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     DamageCauseID;                                            // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageDone;                                               // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SourceType;                                               // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TargetType;                                               // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                KilledTarget;                                             // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                KnockedDownTarget;                                        // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     TargetDamageLocation;                                     // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SourceDamageLocation;                                     // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TargetWasBloodHunted;                                     // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageEventWasHeadshot;                                   // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                VictimRemainingHealth;                                    // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                VictimRemainingArmor;                                     // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemConsumption
// 0x0048 (0x0050 - 0x0008)
struct FTigerTelemetryEventMatchSession_ItemConsumption : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_DisciplineUse
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventMatchSession_DisciplineUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DisciplineID;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     DisciplinesUseLocation;                                   // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemDrop
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventMatchSession_ItemDrop : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ItemDropQuantity;                                         // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     DropLocation;                                             // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemPickups
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventMatchSession_ItemPickups : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ItemPickUpQuantity;                                       // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     PickUpLocation;                                           // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ItemSourceID;                                             // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerStart
// 0x00B8 (0x00C0 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerStart : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     LeaderID;                                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ClanID;                                                   // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeId;                                              // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SquadNum;                                                 // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     SquadMembers;                                             // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SpawnLocation;                                            // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MatchMakingID;                                            // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankedPoints;                                             // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SelectedPlayerPerks;                                      // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AvailablePlayerPerks;                                     // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_MatchData
// 0x00B0 (0x00B8 - 0x0008)
struct FTigerTelemetryEventMatchSession_MatchData : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     ClientVersion;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TeamSize;                                                 // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumPlayers;                                               // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumBots;                                                  // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemTypeAmounts;                                          // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerArchetypesAmounts;                                  // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SafeZoneLocations;                                        // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumberofTeams;                                            // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FString                                     GAMEMODEID;                                               // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventServerDelay
// 0x0088 (0x0090 - 0x0008)
struct FTigerTelemetryEventServerDelay : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     ClientVersion;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     GameAppid;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NetworkType;                                              // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                UploadSeq;                                                // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvgDelay;                                                 // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxDelay;                                                 // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MinDelay;                                                 // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OutPacketLossPercent;                                     // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                InPacketLossPercent;                                      // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventServerLog
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventServerLog : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Country;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameSvrId;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OnlineCountPC;                                            // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OnlineCountPS;                                            // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OnlineCountXbox;                                          // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                UserCount;                                                // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FString                                     GameAppid;                                                // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_Cancelled
// 0x0030 (0x0038 - 0x0008)
struct FTigerTelemetryEventMatchMaking_Cancelled : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MatchMakingID;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CancelReason;                                             // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_Succeeded
// 0x0028 (0x0030 - 0x0008)
struct FTigerTelemetryEventMatchMaking_Succeeded : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MatchMakingID;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_BattleInfo
// 0x00A8 (0x00B0 - 0x0008)
struct FTigerTelemetryEventMatchMaking_BattleInfo : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     LeaderID;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ClanID;                                                   // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeId;                                              // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TeamSize;                                                 // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                NumPremadeMembers;                                        // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MatchMakingID;                                            // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerELO;                                                // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FString                                     GameAppid;                                                // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerRankedPoints;                                       // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankedPointsPaid;                                         // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CrossplayEnabled;                                         // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     GAMEMODEID;                                               // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerLogout
// 0x00B0 (0x00B8 - 0x0008)
struct FTigerTelemetryEventPlayerLogout : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     ClientIP;                                                 // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                OnlineTime;                                               // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayTime;                                                 // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LoginWay;                                                 // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SMFriendsNum;                                             // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatformFriendsNum;                                       // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientLanguage;                                           // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                  // 0x0098(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OperatingSys;                                             // 0x00A8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerLogin
// 0x0108 (0x0110 - 0x0008)
struct FTigerTelemetryEventPlayerLogin : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameAppid;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     ClientIP;                                                 // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LoginWay;                                                 // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SMFriendsNum;                                             // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatformFriendsNum;                                       // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                            // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            ScreenWidth;                                              // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int16_t                                            ScreenHeight;                                             // 0x0072(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     CpuHardware;                                              // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientIPV6;                                               // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DeviceType;                                               // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     OperatingSys;                                             // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DeviceModel;                                              // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                SysRAM;                                                   // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                VRAM;                                                     // 0x00C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     VideoCard;                                                // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Microphone;                                               // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AvlHardDiskSpace;                                         // 0x00E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AllHardDiskSpace;                                         // 0x00EC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientLanguage;                                           // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                  // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerRegister
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventPlayerRegister : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameAppid;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientIP;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RegWay;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     ClientVersion;                                            // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                  // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventGameServerState
// 0x0040 (0x0048 - 0x0008)
struct FTigerTelemetryEventGameServerState : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            AreaId;                                                   // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ServerIP;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDamageProcessEvent
// 0x0148 (0x0150 - 0x0008)
struct FTigerTelemetryEventAcePlayerDamageProcessEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     team_id;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Index;                                                    // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FString                                     attacker_player_position;                                 // 0x00B8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            attacker_weapon_id;                                       // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           attacker_weapon_type;                                     // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FString                                     attacker_player_direction;                                // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           attacker_blood_left;                                      // 0x00E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FString                                     victim_Uin;                                               // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           victim_account_type_;                                     // 0x0100(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
	struct FString                                     victim_player_position;                                   // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     visible_body_part;                                        // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           victim_blood_left;                                        // 0x0128(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	int64_t                                            hit_part;                                                 // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            DamageCauseID;                                            // 0x0138(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageTypeID;                                             // 0x0140(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageDone;                                               // 0x0144(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      death_type;                                               // 0x0148(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerChangeWeaponEvent
// 0x00B8 (0x00C0 - 0x0008)
struct FTigerTelemetryEventAcePlayerChangeWeaponEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     team_id;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            ori_weapon;                                               // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            dst_weapon;                                               // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerRebornEvent
// 0x00B0 (0x00B8 - 0x0008)
struct FTigerTelemetryEventAcePlayerRebornEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     team_id;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rebirth_type;                                             // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerReportCrimeEvent
// 0x00A8 (0x00B0 - 0x0008)
struct FTigerTelemetryEventAcePlayerReportCrimeEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	struct FString                                     reported_Uin;                                             // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           reported_account_type_;                                   // 0x0088(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	struct FString                                     report_type;                                              // 0x0090(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     report_reason;                                            // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventAceBulletShotEvent
// 0x0110 (0x0118 - 0x0008)
struct FTigerTelemetryEventAceBulletShotEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     team_id;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            shot_id;                                                  // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            weapon_id;                                                // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           weapon_type;                                              // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FString                                     player_position;                                          // 0x00C8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     attacker_player_direction;                                // 0x00D8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      bullets_cost;                                             // 0x00E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x1];                                       // 0x00E9(0x0001) MISSED OFFSET
	uint16_t                                           bullets_left;                                             // 0x00EA(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FString                                     victim_player_position;                                   // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     shot_dst_position;                                        // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      hit_part;                                                 // 0x0110(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDieEvent
// 0x0118 (0x0120 - 0x0008)
struct FTigerTelemetryEventAcePlayerDieEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     team_id;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     victim_player_position;                                   // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            victim_weapon_id;                                         // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           victim_weapon_type;                                       // 0x00C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           victim_blood_left;                                        // 0x00CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     attacker_Uin;                                             // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           attacker_account_type_;                                   // 0x00E0(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	struct FString                                     attacker_player_position;                                 // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            attacker_weapon_id;                                       // 0x00F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           attacker_weapon_type;                                     // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           attacker_blood_left;                                      // 0x0104(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      hit_part;                                                 // 0x0108(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	int64_t                                            die_reason;                                               // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            death_type;                                               // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerGameSummaryEvent2
// 0x00C0 (0x00C8 - 0x0008)
struct FTigerTelemetryEventAcePlayerGameSummaryEvent2 : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     team_id;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Duration;                                                 // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           Rank;                                                     // 0x00B4(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           NumberOfRangedShots;                                      // 0x00B6(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           NumberOfRangedHits;                                       // 0x00B8(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	int                                                KillCount;                                                // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           death_num;                                                // 0x00C0(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                AssistCount;                                              // 0x00C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerGameSummaryEvent
// 0x00D0 (0x00D8 - 0x0008)
struct FTigerTelemetryEventAcePlayerGameSummaryEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     team_id;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             Result;                                                   // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	int                                                Duration;                                                 // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           Rank;                                                     // 0x00B8(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	int                                                KillCount;                                                // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           death_num;                                                // 0x00C0(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                AssistCount;                                              // 0x00C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           Score;                                                    // 0x00C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Bonus;                                                    // 0x00CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                experience;                                               // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDisconnectEvent
// 0x0098 (0x00A0 - 0x0008)
struct FTigerTelemetryEventAcePlayerDisconnectEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      disconnect_flag;                                          // 0x0098(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerConnectEvent
// 0x00C8 (0x00D0 - 0x0008)
struct FTigerTelemetryEventAcePlayerConnectEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     BattleID;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MapID;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankMode;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlatID;                                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     GameSvrId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AreaId;                                                   // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ZoneId;                                                   // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Uin;                                                      // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                            // 0x0070(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	int                                                NumPlayers;                                               // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     rolename;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     team_id;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             Gender;                                                   // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	int64_t                                            experience;                                               // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            money;                                                    // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      connect_flag;                                             // 0x00C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerRevived
// 0x0030 (0x0038 - 0x0008)
struct FTigerTelemetryEventPlayerRevived : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Location;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                was_helped;                                               // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerDied
// 0x0038 (0x0040 - 0x0008)
struct FTigerTelemetryEventPlayerDied : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     player_location;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     damage_causer;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     damage_reason;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerTelemetryIDExportArray
// 0x0001
struct FTigerTelemetryIDExportArray
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tiger.TigerTelemetryIDExportData
// 0x0001
struct FTigerTelemetryIDExportData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRequest_AddTelemetry
// 0x0010
struct FTigerRequest_AddTelemetry
{
	struct FString                                     Data;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallMissionTableRow
// 0x0008 (0x0010 - 0x0008)
struct FTigerThrallMissionTableRow : public FTableRowBase
{
	class UTigerThrallMission*                         Mission;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallAbilityTableRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerThrallAbilityTableRow : public FTableRowBase
{
	ETigerThrallAbilityId                              AbilityId;                                                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UTexture2D*                                  AbilityIcon;                                              // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerThrallStatModifiersTableRow
// 0x0030 (0x0038 - 0x0008)
struct FTigerThrallStatModifiersTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	int                                                StartingTurnsAffecting;                                   // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                InjuryLevel;                                              // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerThrallStats                           StatModifier;                                             // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerBaseThrallTableRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerBaseThrallTableRow : public FTableRowBase
{
	ETigerThrallId                                     ThrallId;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UTigerBaseThrallData*                        BaseThrall;                                               // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRankMetadata
// 0x0028
struct FTigerRankMetadata
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RankPointsThreshold;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     IconFileName;                                             // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerWeaponMetadata
// 0x0030
struct FTigerWeaponMetadata
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     IconFileName;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             WeaponIds;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMetadata
// 0x0048
struct FTigerMetadata
{
	TArray<struct FTigerRankMetadata>                  Ranks;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FTigerRankConfig_RankPointGain              RankPointGain;                                            // 0x0010(0x0018) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerWeaponMetadata>                WeaponMetadata;                                           // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FString>                             ArchetypeNames;                                           // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerResponse_TrackerMatchStats
// 0x0000 (0x0018 - 0x0018)
struct FTigerResponse_TrackerMatchStats : public FTigerResponseEnvelope
{

};

// ScriptStruct Tiger.TigerRangedWeaponTrackerStats
// 0x0014
struct FTigerRangedWeaponTrackerStats
{
	int                                                Downs;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Shots;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Hits;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Headshots;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageDone;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerMeleeWeaponTrackerStats
// 0x0010
struct FTigerMeleeWeaponTrackerStats
{
	int                                                Attacks;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Downs;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Hits;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageDone;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerPlayerMedalsEarned
// 0x0010
struct FTigerPlayerMedalsEarned
{
	ETigerMedalTier                                    EliminationsMedal;                                        // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ETigerMedalTier                                    AssistsMedal;                                             // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ETigerMedalTier                                    DiableriesMedal;                                          // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0008(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ETigerMedalTier                                    DamageDealtMedal;                                         // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x000C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Tiger.TigerPlayerTrackerStats
// 0x0140
struct FTigerPlayerTrackerStats
{
	struct FString                                     PlayerId;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       GroupID;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                               // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Placement;                                                // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Kills;                                                    // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Assists;                                                  // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                TimeAlive;                                                // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AlliesRevived;                                            // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Diableries;                                               // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DamageDone;                                               // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DistanceTraveled;                                         // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Deaths;                                                   // 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeIndex;                                           // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ArchetypeLevel;                                           // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FTigerRangedWeaponTrackerStats> RangedWeaponStats;                                        // 0x0070(0x0050) (CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FTigerMeleeWeaponTrackerStats> MeleeWeaponStats;                                         // 0x00C0(0x0050) (CPF_NativeAccessSpecifierPublic)
	int                                                PlayerLevel;                                              // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerRankPoints;                                         // 0x0114(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PlayerSeasonLevel;                                        // 0x0118(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FString                                     PlayerIconId;                                             // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FTigerPlayerMedalsEarned                    PlayerMedalsEarned;                                       // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerRequest_TrackerMatchStats
// 0x0078
struct FTigerRequest_TrackerMatchStats
{
	struct FString                                     Mode;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int64_t                                            SeasonId;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FGuid                                       MatchID;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Date;                                                     // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameplayMode;                                             // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     RankMode;                                                 // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                      // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FTigerPlayerTrackerStats>            PlayerStats;                                              // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerNewNotificationNodeEntry
// 0x0018
struct FTigerNewNotificationNodeEntry
{
	unsigned char                                      EnumMenuOption;                                           // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FString>                             Ids;                                                      // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerNewNotificationSaveLoadStruct
// 0x0018
struct FTigerNewNotificationSaveLoadStruct
{
	TArray<struct FTigerNewNotificationNodeEntry>      SaveLoadEntries;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	int64_t                                            LatestLoginDaysFromEpoch;                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Tiger.TigerWaveDataRow
// 0x0018 (0x0020 - 0x0008)
struct FTigerWaveDataRow : public FTableRowBase
{
	float                                              WaitTime;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClosingTime;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamageTickInterval;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DamagePerTick;                                            // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CoveragePercentage;                                       // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.TigerHolyIncenseBorderLine
// 0x001C
struct FTigerHolyIncenseBorderLine
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Tiger.TigerRangedWeaponData
// 0x00B8 (0x00C0 - 0x0008)
struct FTigerRangedWeaponData : public FTableRowBase
{
	int                                                MaxAmmoInClips[0x4];                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                AmmoOnPickup;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bCanHeadshot;                                             // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              BodyPartDamageModifiers[0x6];                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NPCBulletDamage;                                          // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              OverrideReloadTime;                                       // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReloadCooldown;                                           // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ReloadSpeedMultiplier;                                    // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ActivationTime;                                           // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableFireModeSwitchByDefault;                           // 0x004C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	TArray<struct FTigerFireSettings>                  FireSettings;                                             // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            BarrelMods;                                               // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            AmmoMods;                                                 // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            ScopeMods;                                                // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            StockMods;                                                // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            SpecialMods;                                              // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class UClass* /*UTigerBuff*/                       InAirMomentumDrainBuff;                                   // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              InAirMomentumDrainBuffSpeedMultiplier;                    // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct Tiger.GatheredTigerCompositionCell
// 0x0028
struct FGatheredTigerCompositionCell
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
