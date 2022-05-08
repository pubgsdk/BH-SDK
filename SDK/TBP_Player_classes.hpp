#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Player.TBP_Player_C
// 0x04D1 (0x1401 - 0x0F30)
class ATBP_Player_C : public ATigerPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F30(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UAkComponent*                                TakeDamageAkComp;                                         // 0x0F38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_PlayerVFXComponent_C*                   TBP_PlayerVFXComponent;                                   // 0x0F40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       RainOnCameraPostProcess;                                  // 0x0F48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             ListenerComponent;                                        // 0x0F50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpringArmComponent*                         ListenerSpringArm;                                        // 0x0F58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       DeathPostProcess;                                         // 0x0F60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    PS_VFX_GasDebuff;                                         // 0x0F68(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        OutlineBillboard;                                         // 0x0F70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_PlayerTraversalStateMachine_C*          PlayerTraversalStateMachine;                              // 0x0F78(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_BuffPostProcessHandler_C*               BuffPostProcessHandler;                                   // 0x0F80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       ScopePostProcess;                                         // 0x0F88(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       TraversalZoomBlurPostProcess;                             // 0x0F90(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    TraversalSmokeTrailFeet;                                  // 0x0F98(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    TraversalSmokeTrail;                                      // 0x0FA0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            AudioTrigger;                                             // 0x0FA8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SecondaryWeapon;                                          // 0x0FB0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        SecondaryMuzzleLight;                                     // 0x0FB8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             SecondaryProjectileSpawnLocator;                          // 0x0FC0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             SecondaryMuzzleLocator;                                   // 0x0FC8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       RedGasPostProcess;                                        // 0x0FD0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        HairLight;                                                // 0x0FD8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerHSensesTargetComponent*                TigerHSensesTarget;                                       // 0x0FE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       FeedingPostProcess;                                       // 0x0FE8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_FeedingComponent_C*                     TBP_FeedingComponent;                                     // 0x0FF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         FeedingLight;                                             // 0x0FF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_CharacterCustomizationComp_C*           CharacterCustomization;                                   // 0x1000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         Fill_Light;                                               // 0x1008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         Rim_Light;                                                // 0x1010(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         Key_Light;                                                // 0x1018(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UVectorFieldComponent*                       VectorField;                                              // 0x1020(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        MuzzleLight;                                              // 0x1028(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       DownedPostProcess;                                        // 0x1030(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             ProjectileSpawnRoot;                                      // 0x1038(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetComponent*                            HealthBarWidget;                                          // 0x1040(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             ProjectileSpawnLocator;                                   // 0x1048(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               InteractionVolume;                                        // 0x1050(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       LowHealthPostProcess;                                     // 0x1058(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPostProcessComponent*                       HeightenedSensesPostProcess;                              // 0x1060(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               FullscreenEffectsVolume;                                  // 0x1068(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                         // 0x1070(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UArrowComponent*                             MuzzleLocator;                                            // 0x1078(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               TriggerVolume;                                            // 0x1080(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Weapon;                                                   // 0x1088(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GasDebuffBurnTimeline_NewTrack_0_84279FD2437A84CAF9924F81F64E1CED;// 0x1090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    GasDebuffBurnTimeline__Direction_84279FD2437A84CAF9924F81F64E1CED;// 0x1094(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1095(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GasDebuffBurnTimeline;                                    // 0x1098(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              GasDebuffTimeline_NewTrack_0_1887B31C4D0B0FDB42B539B4308CF7BD;// 0x10A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    GasDebuffTimeline__Direction_1887B31C4D0B0FDB42B539B4308CF7BD;// 0x10A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x10A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GasDebuffTimeline;                                        // 0x10A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              OutlineTimeline_Visibility_EAAB304D4327221D27448EAC650058F1;// 0x10B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    OutlineTimeline__Direction_EAAB304D4327221D27448EAC650058F1;// 0x10B4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x10B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OutlineTimeline;                                          // 0x10B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MuzzleFlashLight2Timeline_Intensity_CEEB9A454434A38325252583A6A3B6F4;// 0x10C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    MuzzleFlashLight2Timeline__Direction_CEEB9A454434A38325252583A6A3B6F4;// 0x10C4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x3];                                       // 0x10C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MuzzleFlashLight2Timeline;                                // 0x10C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     ScopeTimeline_FocusPosition_9CD21C2B43ADAB5B313DF2BE583E31DA;// 0x10D0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ScopeTimeline_IsScoped_9CD21C2B43ADAB5B313DF2BE583E31DA;  // 0x10DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    ScopeTimeline__Direction_9CD21C2B43ADAB5B313DF2BE583E31DA;// 0x10E0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x7];                                       // 0x10E1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          ScopeTimeline;                                            // 0x10E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MuzzleFlashLightTimeline_Intensity_051DB23B4BC6020389CC78B6EF022930;// 0x10F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    MuzzleFlashLightTimeline__Direction_051DB23B4BC6020389CC78B6EF022930;// 0x10F4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x3];                                       // 0x10F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MuzzleFlashLightTimeline;                                 // 0x10F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Check_Dodge__Direction_2340BDC0451DB765FEDE2CB7146A5511;  // 0x1100(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x7];                                       // 0x1101(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Check_Dodge;                                              // 0x1108(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_Diablerize_Short_NewTrack_0_6970392F467F11B38587869BF53D9986;// 0x1110(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_Diablerize_Short_Transition_6970392F467F11B38587869BF53D9986;// 0x1114(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_Diablerize_Short__Direction_6970392F467F11B38587869BF53D9986;// 0x1118(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x7];                                       // 0x1119(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Diablerize_Short;                                // 0x1120(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_13__Direction_8F0808F345D8234F85595F9450BAE209;  // 0x1128(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1129(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_14;                                              // 0x1130(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_8_Opacity_7E2D82864AB41D91CE8753A3A2E4951C;      // 0x1138(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_8__Direction_7E2D82864AB41D91CE8753A3A2E4951C;   // 0x113C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData09[0x3];                                       // 0x113D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_9;                                               // 0x1140(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_7_Zoom_30D72BD24E1509A1AF3FB099FA1C9EB6;         // 0x1148(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_7__Direction_30D72BD24E1509A1AF3FB099FA1C9EB6;   // 0x114C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData10[0x3];                                       // 0x114D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_8;                                               // 0x1150(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_2_RainMultiplier_CECBE516414697453F25FAB3B5FB331C;// 0x1158(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_CECBE516414697453F25FAB3B5FB331C;   // 0x115C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData11[0x3];                                       // 0x115D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x1160(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_1_Sprint_Strength_2AEA3DD140966E986A8A2A830078C114;// 0x1168(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_2AEA3DD140966E986A8A2A830078C114;   // 0x116C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData12[0x3];                                       // 0x116D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x1170(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_FOV_Animation_CF5E7F2B4EE15F828E27CEACA36BC0AB;// 0x1178(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_Sprint_Strength_CF5E7F2B4EE15F828E27CEACA36BC0AB;// 0x117C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_CF5E7F2B4EE15F828E27CEACA36BC0AB;   // 0x1180(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData13[0x7];                                       // 0x1181(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1188(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_4_Zoom_1CA12BEA4ECFEA2FB018C7BE4DE80E72;         // 0x1190(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_1CA12BEA4ECFEA2FB018C7BE4DE80E72;   // 0x1194(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1195(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x1198(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_3_Opacity_B82857664678EB85DC4CA0A80BD4542E;      // 0x11A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_B82857664678EB85DC4CA0A80BD4542E;   // 0x11A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData15[0x3];                                       // 0x11A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x11A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Inside;                                                   // 0x11B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                FeedingAudioAkEventID;                                    // 0x11B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              DownedBlendWeight;                                        // 0x11B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              InAssaultedZoneBlendWeight;                               // 0x11BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              NearAssaultedZoneBlendWeight;                             // 0x11C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData16[0x4];                                       // 0x11C4(0x0004) MISSED OFFSET
	class UAudioComponent*                             HeightenedSensesSoundLoop;                                // 0x11C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              OriginalRainRate;                                         // 0x11D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData17[0x4];                                       // 0x11D4(0x0004) MISSED OFFSET
	struct FTimerHandle                                HSensesDelayHandle;                                       // 0x11D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshDuplicates;                                   // 0x11E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	int                                                CurrentTrailLoop;                                         // 0x11F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimFloat1;                                               // 0x11F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimFloat2;                                               // 0x11F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData18[0x4];                                       // 0x11FC(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      HeartMesh_Smoke;                                          // 0x1200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATBP_AshPile_C*                              AshFxActor;                                               // 0x1208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               DiablerizeFinished;                                       // 0x1210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsBeingDiablerized;                                       // 0x1211(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	ETigerPlayerLifeStatus                             LifeStatus;                                               // 0x1212(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData19[0x1];                                       // 0x1213(0x0001) MISSED OFFSET
	struct FVector                                     PreviousCameraLocation;                                   // 0x1214(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Previous;                                                 // 0x1220(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData20[0x4];                                       // 0x122C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ScoutedParticles;                                         // 0x1230(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BloodVisibility;                                          // 0x1238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData21[0x4];                                       // 0x123C(0x0004) MISSED OFFSET
	class ATigerNPC*                                   CurrentNPCBeingFedOn;                                     // 0x1240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bWasAimGliding;                                           // 0x1248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1249(0x0003) MISSED OFFSET
	int                                                FeedingBloodIndex;                                        // 0x124C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<float>                                      FeedingBloodVisibility;                                   // 0x1250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              CurrentFeedingVisibility;                                 // 0x1260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData23[0x4];                                       // 0x1264(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    SpeedFullscreenEffectEventDispatch;                       // 0x1268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UAkAudioEvent*                               ProjectileCloseFlyby;                                     // 0x1278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Was_Previously_Inside_Holy_Incense;                       // 0x1280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData24[0x7];                                       // 0x1281(0x0007) MISSED OFFSET
	struct FTimerHandle                                TraversalMostRecentTimer;                                 // 0x1288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                HolyIncenseAkEventID;                                     // 0x1290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                WallGrindAkEventID;                                       // 0x1294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DiablerizeVictimAkEventID;                                // 0x1298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DiablerizeAkEventID;                                      // 0x129C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ReviveAkEventID;                                          // 0x12A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                SlideAkEventID;                                           // 0x12A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     PositionLastFrame;                                        // 0x12A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ShieldShaderCount;                                        // 0x12B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FName>  SurfaceToAudioName;                                       // 0x12B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              FeedingProgress;                                          // 0x1308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData25[0x4];                                       // 0x130C(0x0004) MISSED OFFSET
	class UNiagaraSystem*                              CashedDownedParticle;                                     // 0x1310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSoftObjectPath                             NiagaraDownedPath;                                        // 0x1318(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           DownedNiagara;                                            // 0x1330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           DownedNiagara2;                                           // 0x1338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                FeedingLoopAkEventID;                                     // 0x1340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                RedGasAkEventID;                                          // 0x1344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ExposePlayerInHeightenedSenses;                           // 0x1348(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsInsideHolySmoke;                                        // 0x1349(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData26[0x2];                                       // 0x134A(0x0002) MISSED OFFSET
	float                                              DistanceToHolyIncenseVolume;                              // 0x134C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShouldUpdateListenerPosition;                             // 0x1350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData27[0x3];                                       // 0x1351(0x0003) MISSED OFFSET
	struct FVector2D                                   InterpolatedDirectionToRedGasEdge;                        // 0x1354(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bEnableHealthBars;                                        // 0x135C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData28[0x3];                                       // 0x135D(0x0003) MISSED OFFSET
	struct FVector                                     TakeDamageLocation;                                       // 0x1360(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FeedingFadeOutTime;                                       // 0x136C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     ListenerOffset;                                           // 0x1370(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Intersection;                                             // 0x137C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RedGasPostProcessMaxFadeDistance;                         // 0x1388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bWasScopedIn;                                             // 0x138C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData29[0x3];                                       // 0x138D(0x0003) MISSED OFFSET
	class UParticleSystem*                             FleshOfMarbleOverrideHitEffect;                           // 0x1390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<TEnumAsByte<ENUM_RangedWeaponCategories>, struct FName> WeaponTypeToAudioName;                                    // 0x1398(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               MotionBlurEnabled;                                        // 0x13E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData30[0x7];                                       // 0x13E9(0x0007) MISSED OFFSET
	TArray<class UPostProcessComponent*>               PostProcessesEnabledByDefault;                            // 0x13F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               bPostProcessesEnabled;                                    // 0x1400(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Player.TBP_Player_C"));
		return ptr;
	}


	void GetWeapon(class USkeletalMeshComponent** OutWeapon, class USkeletalMeshComponent** OutSecondWeapon);
	void EnablePostProcesses();
	void Collect_Post_Processes_Enabled_by_Default();
	void QualityOptionChanged(const struct FTigerGraphicsSettings& GraphicsSettings, const struct FTigerGraphicsSettingsPS5& GraphicsSettingsPS5);
	void HandleFeedingStopForAudio();
	void Handle_Feeding_Start_for_Audio();
	void SetShieldShaderParameters();
	void HandleRedGasProximityAudio();
	void SetupBodyPartPrimitiveData();
	void PostFlybyAudio(TEnumAsByte<ENUM_RangedWeaponCategories> Key, const struct FVector& Location, class UAkAudioEvent* AkEvent);
	void SendArchetypeToMaterial();
	void SetCullCustomDepth(bool InValue);
	void SetUpMasqueradeAudio();
	void OnRedGasPostProcessMaterialLoaded(TArray<class UObject*> InLoadedObjects);
	void SetupQualityOptions();
	void InitHealthBars();
	void UpdateSPCPlayerMaterialCollection();
	void Update_Red_Gas_MPC();
	void StartRedGasAudio();
	void StopRedGasAudio();
	bool CheckShouldUpdateListenerPosition(class APlayerController* Player_Controller);
	void EnableCharacterlighting();
	void SetLodOnLocalPlayer();
	void SetAudioListenerOverride();
	void SetDamageTakenAudioSwitch(float Value);
	void StartSlidingAudio();
	void DetermineOwnerOfProjectile(class UObject* Object, class ATigerProjectile** AsTiger_Projectile);
	void SetRTPC_AltitudePlayer();
	void SetReverbStateOnExit(class UObject* Object);
	void SetReverbStateOnEnter(class UObject* Object);
	void DisableScreenCullSize();
	void PostLandingAudio();
	void PlayBeingDiablerizedAudio();
	void PlayDiablerizeAudio();
	void PlayReviveAudio();
	void DisableAllPostProcess();
	void StopCloseToRedGasAudio();
	void StartCloseToRedGasAudio();
	void OnTraversalPostProcessEnded();
	void UpdateTraversalPostProcess(float Duration, float Strength, const struct FVector2D& FocusPosition);
	float GetDiablerizeEffectStartTime();
	void DeactivateHeavyChargeFX();
	void UpdateAimGlideCosmetic();
	void DisableSkeletonSmokeEffects();
	void SetupCharacterDuplicates(class USkeletalMeshComponent* SkeletalMeshOriginal);
	void SwiftStrikeFX();
	void OnGroupMemberLifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus);
	void UpdateInRedGasEffect(float Delta_Time);
	void UpdateDownedFX(float DeltaTime);
	void IsLocalClient(bool* Client);
	void UpdateFeedingFX(float Delta);
	void Set_Rain_Amount();
	void StunVisualEffect(class AActor* self2);
	void UserConstructionScript();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void Timeline_8__FinishedFunc();
	void Timeline_8__UpdateFunc();
	void ScopeTimeline__FinishedFunc();
	void ScopeTimeline__UpdateFunc();
	void Timeline_13__FinishedFunc();
	void Timeline_13__UpdateFunc();
	void Timeline_13__InvulnerabilityTrigger__EventFunc();
	void Timeline_13__ToggleCharacterVisibility__EventFunc();
	void Timeline_Diablerize_Short__FinishedFunc();
	void Timeline_Diablerize_Short__UpdateFunc();
	void Check_Dodge__FinishedFunc();
	void Check_Dodge__UpdateFunc();
	void MuzzleFlashLightTimeline__FinishedFunc();
	void MuzzleFlashLightTimeline__UpdateFunc();
	void MuzzleFlashLight2Timeline__FinishedFunc();
	void MuzzleFlashLight2Timeline__UpdateFunc();
	void OutlineTimeline__FinishedFunc();
	void OutlineTimeline__UpdateFunc();
	void GasDebuffTimeline__FinishedFunc();
	void GasDebuffTimeline__UpdateFunc();
	void GasDebuffBurnTimeline__FinishedFunc();
	void GasDebuffBurnTimeline__UpdateFunc();
	void InpActEvt_Left_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnLocalDisciplineUse(const struct FDisciplineUse& DisciplineUse, float ExpectedDuration);
	void DisciplineJumpFinished();
	void OnLocalDisciplineUseFailed(const struct FDisciplineUse& DisciplineUse);
	void LocalPlayer_BeginPlay();
	void OnLocalSprintStarted();
	void OnLocalSprintEnded();
	void OnLocalEnteredIndoor();
	void OnLocalExitedIndoor();
	void OnStartedFeedingApproach(float TravelTime);
	void OnFeedingDoneEvent(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn);
	void OnTigerMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, ETigerMovementMode PrevCustomMode, TEnumAsByte<EMovementMode> NewMovementMode, ETigerMovementMode NewCustomMode);
	void OnExtraHealthDepleted();
	void OnStartedAimingCameraTransition();
	void OnStoppedAimingCameraTransition();
	void OnMasqueradeStateChanged_Event_1(bool InIsMasqueradeBreached, ETigerAIPlayerAction InPlayerAction);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void OnShieldDepleted(class ATigerPlayer* InInstigator);
	void OnModEquipped();
	void Client_On_Mod_Equipped();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void LocalPlayerTick(float InDeltaSeconds);
	void BndEvt__TBP_Player_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration);
	void ReceiveBeginPlay();
	void OnDisciplineUseSucceeded(const struct FDisciplineUse& DisciplineUse);
	void OnLanded(const struct FHitResult& Hit);
	void ReceivePossessed(class AController* NewController);
	void OnShowDamageAmount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent);
	void OnWeaponFired(bool bSecondaryWeaponFired);
	void OnRep_PlayerClan();
	void LifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus);
	void OnGotPlayerState();
	void OnRep_PowerKit();
	void OnDodged(bool IsControllingPlayer, bool bLaunchedInAir, const struct FVector& LaunchDirection, unsigned char DodgeStage);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnGotScouted();
	void OnNoLongerScouted();
	void OnAboutToBeHitByDisplacement();
	void OnDamageTaken(float DamageTaken, class AActor* DamageInstigator);
	void OnDoubleJump(const struct FVector& Direction);
	void OnPlayMeleeHitEffects(class UTigerMeleeWeapon* WeaponHitBy, const struct FVector& ImpactLocation, const struct FVector& HitDirection);
	void OnStartedPhysicalInteraction(class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass, bool bIsTargetPlayer);
	void OnInterruptedPhysicalInteraction(class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass, bool bIsTargetPlayer);
	void OnFinishedPhysicalInteraction(class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass, bool bIsTargetPlayer);
	void OnWeaponVisualChangedEvent();
	void OnWallJump(const struct FVector& InVelocity);
	void OnClimbStarted(const struct FVector& InVelocity);
	void OnClimbEnded(const struct FVector& InVelocity);
	void OnWallGrindStarted(const struct FVector& InVelocity);
	void OnWallGrindEnded(const struct FVector& InVelocity);
	void OnHardLanding(const struct FVector& InVelocity);
	void OnSlideJump(const struct FVector& InVelocity);
	void OnSlidingStarted(const struct FVector& InVelocity);
	void OnSlidingEnded(const struct FVector& InVelocity);
	void OnBecameSpectator();
	void OnBecameGroupMember();
	void OnStoppedBeingGroupMember();
	void BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature(ETigerOutlineMode HighestPrioOutline);
	void UpdateHolyIncenseEffect(float InDeltaTime);
	void IncrementShieldShaderCounter();
	void DecrementShieldShaderCounter();
	void IncrementFeedingBloodIndex();
	void OnGoneBelowHalfHealth();
	void StopDeathTransition();
	void OnGotHitForAudio(const struct FName& InSurfaceForAudio);
	void OnStartedFeedingForAudio(float TravelTime);
	void OnFeedingDoneForAudio(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn);
	void UpdateHolyIncenseAudio();
	void OnRestart();
	void ExecuteUbergraph_TBP_Player(int EntryPoint);
	void SpeedFullscreenEffectEventDispatch__DelegateSignature(float TravelTime, bool bIsFeedingApproach);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
