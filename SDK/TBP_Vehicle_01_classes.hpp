#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Vehicle_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Vehicle_01.TBP_Vehicle_01_C
// 0x0168 (0x03F8 - 0x0290)
class ATBP_Vehicle_01_C : public ATigerVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAkComponent*                                AkComponent;                                              // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        LootableChildActor;                                       // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_FlashingLightIntensity_9FCBD7824F876CA2840142BA51059051;// 0x02A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_9FCBD7824F876CA2840142BA51059051;   // 0x02AC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ENUM_VehicleSelection>                 Select_Vehicle;                                           // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowShadow;                                               // 0x02B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               EnableLights;                                             // 0x02BA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02BB(0x0001) MISSED OFFSET
	float                                              FrontLightsIntensity;                                     // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BackLightsIntensity;                                      // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumberOfAlarmsBlinks;                                     // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               BreakPlacedVehicle;                                       // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	int                                                NumberOfBlinked;                                          // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FrontLightsMultiplied;                                    // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BackLightsMultiplied;                                     // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LightsIntensityDuringAlarm;                               // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableAlarm;                                              // 0x02DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CarAlarmIsOn;                                             // 0x02DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02DE(0x0002) MISSED OFFSET
	TArray<struct FVector>                             AllColorTintsInterior;                                    // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FVector                                     ColorTintInterior;                                        // 0x02F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasBeenLandedOn;                                          // 0x02FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	int                                                ExteriorColors;                                           // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                InteriorColors;                                           // 0x0304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BounceMultiplier;                                         // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FS_VehicleSetups                            CarSetup;                                                 // 0x0310(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               UseRandomDirt;                                            // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              Dirtyness;                                                // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseRandomRust;                                            // 0x0330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              Rustyness;                                                // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             GlassShatterEffect;                                       // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               LandingOnCarAudio;                                        // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShouldBreak;                                              // 0x0348(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	TArray<struct FS_ColorTintPresets>                 ColorTintPresets;                                         // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FS_ColorTintPresets                         ChosenColorTintPreset;                                    // 0x0360(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ObjectIsActive;                                           // 0x0378(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	struct FRandomStream                               DirtynessStream;                                          // 0x037C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FRandomStream                               RustynessStream;                                          // 0x0384(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	unsigned char                                      UnknownData10[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class USpotLightComponent*                         Spot_FrontLeft;                                           // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         Spot_FrontRight;                                          // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         Spot_BackLeft;                                            // 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USpotLightComponent*                         Spot_BackRight;                                           // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Shadow;                                                // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>                AllMeshes;                                                // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               UseRandomWindowTint;                                      // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData11[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              WindowTint;                                               // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Passive_Flashing;                                         // 0x03D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData12[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	int                                                Branding;                                                 // 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstance*                           BrandingMaterialOverride;                                 // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CastDynamicShadow_;                                       // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData13[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UTBP_Vehicle_01_DataInterface_C*             TBPVehicle01CDO;                                          // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FrontWheelRotation;                                       // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AUDIO_RandomCarAlarms;                                    // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Vehicle_01.TBP_Vehicle_01_C"));
		return ptr;
	}


	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void GetPingCategory(struct FName* OutCategory);
	void IsPolice(bool* IsPolice);
	void AUDIO_RandomizeCarAlarms();
	void SpawnGlassShatterEffect(const struct FVector& Location);
	void DisableAlarm();
	void Set_Custom_Primitive_Vector(bool Runtime, ESharkCustomPrimitiveVector3DataName NewParam, const struct FVector& Value, TArray<class UStaticMeshComponent*>* Static_Meshes);
	void Set_Custom_Primitive_Float(bool Runtime, ESharkCustomPrimitiveFloatDataName NewParam, float Value, TArray<class UStaticMeshComponent*>* Static_Meshes);
	bool IsEntity();
	void SetFrontLightColor(class UTigerSpotLightComponent* TigerSpotLight, class UTigerSpotLightComponent** OutTigerSpotLight);
	void SetCollision();
	void SetBranding();
	void SetUntintedColors(TArray<class UStaticMeshComponent*>* Meshes);
	void SetColorTintPresets();
	void SetMeshComponents();
	void SetParametersPerVehicle();
	void PlaceObjects();
	void CustomizableElements(TArray<class UStaticMeshComponent*>* Meshes);
	void Color(TArray<class UStaticMeshComponent*>* Meshes);
	void TurnLightsOnOrOff(bool IsRuntime);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity);
	void TriggerAlarm();
	void ReceiveBeginPlay();
	void OnObjectActivated();
	void OnObjectDeactivated();
	void OnRebuild();
	void ActivateAlarm();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnCharacterHit(class ATigerCharacter* InOverlappingCharacter, const struct FVector& InNormalImpulse, const struct FHitResult& InHitResult);
	void ExecuteUbergraph_TBP_Vehicle_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
