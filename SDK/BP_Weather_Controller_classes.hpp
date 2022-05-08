#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Weather_Controller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weather_Controller.BP_Weather_Controller_C
// 0x0218 (0x0440 - 0x0228)
class ABP_Weather_Controller_C : public ATigerWeatherController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        sky;                                                      // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UExponentialHeightFogComponent*              HeavyRain;                                                // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UExponentialHeightFogComponent*              DefaultFog;                                               // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UExponentialHeightFogComponent*              LightFog;                                                 // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UExponentialHeightFogComponent*              HeavyFog;                                                 // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneCaptureComponent2D*                    TopDownRenderCamera;                                      // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UChildActorComponent*                        Wind_Directional_Source;                                  // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Wind_Strength;                                            // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Rain_Rate;                                                // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_Interp, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Puddles_Amount;                                           // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Player_Index;                                             // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>            Particles_Update_List;                                    // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	bool                                               Update_Player;                                            // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	int                                                RandomWeatherInteger;                                     // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bHasSyncedWeather;                                        // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class UNiagaraComponent*                           RainSystem;                                               // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseNiagaraRain;                                           // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             NiagaraRainPath;                                          // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UNiagaraSystem*                              CachedRainEffect;                                         // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              No_Rain;                                                  // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Heavy_Rain_Chance;                                        // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Light_Rain_Chance;                                        // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Lightning_Chance;                                         // 0x02DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Foggy_Chance;                                             // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Puddles_Rings_Intensity;                                  // 0x02E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AI_Sight_Modifier;                                        // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Puddles_Wind_Tiling;                                      // 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseCustomSettings;                                        // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	float                                              Wind_Speed;                                               // 0x02F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Snowfall_Rate;                                            // 0x02F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Wetness_Amount;                                           // 0x02FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UNiagaraComponent*                           SnowSystem;                                               // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSoftObjectPath                             NiagaraSnowPath;                                          // 0x0308(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UNiagaraSystem*                              CachedSnowEffect;                                         // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class APostProcessVolume>           GlobalPPV_Reference;                                      // 0x0328(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	struct FLinearColor                                Saturation;                                               // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                Contrast;                                                 // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                Gamma;                                                    // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                Gain;                                                     // 0x0380(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                Offset;                                                   // 0x0390(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Temp;                                                     // 0x03A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Tint;                                                     // 0x03A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentTime;                                              // 0x03A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRandomStream                               LightningSeed;                                            // 0x03AC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                LightningTimerHandle;                                     // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableLightning;                                          // 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	float                                              LightningIntensity;                                       // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class ASkyLight>                    SkyLightReference;                                        // 0x03C8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UTextureCube>                 OverrideSkyTexture;                                       // 0x03F0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               OverrideReplicationRange;                                 // 0x0418(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              ReplicationRange;                                         // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OverrideSky;                                              // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              DefaultSkyLightIntensity;                                 // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                DefaultSkyLightColor;                                     // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NrStrikes;                                                // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              LifeTime;                                                 // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Weather_Controller.BP_Weather_Controller_C"));
		return ptr;
	}


	void GetCameraLocation(struct FVector* OutVector);
	void UpdateOverrideSky(TArray<class UObject*> InLoadedObjects);
	void SetWeatherAudioRTPCs();
	void LightningWave(float InTime, float InLightningLifetime, float InNrLightningStrikes, float* OutWave);
	void Update_Prague_Sky(TArray<class UObject*> InLoadedObjects);
	void UpdateGlobalPPV();
	void UpdateNiagaraSystem(class UNiagaraComponent* InSystem);
	void UpdateAllActors();
	void SetWeatherScenarioParameters(class UDA_WeatherScenario_C* WeatherScenario);
	void SetWeatherScenario(class UTigerWeatherScenarioData* WeatherScenario);
	void SetServerWeather(int WeatherOverride);
	void UpdateNiagaraWeatherParameters(float Delta);
	void UpdateNiagaraCameraAndNiagaraParticles(float Delta);
	void SetNPCSightModifier(float Modifier);
	void SetWeatherParameters(class UDA_WeatherScenario_C* WeatherScenario);
	void UserConstructionScript();
	void OnLoaded_DC0B365449CA096251058EB8A8F31B9F(class UObject* Loaded);
	void OnLoaded_4BFA290045938F3D795460979602E7CF(class UObject* Loaded);
	void OnLoaded_20562D87404E74DCF4D9B889FFC5C3D6(class UObject* Loaded);
	void OnLoaded_7559EC034D4951730F8F999663014852(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void HandleOnWeatherSenarioChangedEvent(class UTigerWeatherScenarioData* WeatherScenarioData);
	void TigerSetFogDensity(float FogDensity);
	void Lightning();
	void ExecuteUbergraph_BP_Weather_Controller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
