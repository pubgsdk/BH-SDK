#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HolyIncense_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_HolyIncense.TBP_HolyIncense_C
// 0x0090 (0x0340 - 0x02B0)
class ATBP_HolyIncense_C : public ATigerHolyIncense
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneCaptureComponent2D*                    HeightmapCaptureComponent;                                // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        VolumetricHolySmoke;                                      // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              TotalProgression;                                         // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShouldIncreaseTotalProgression;                           // 0x02CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02CD(0x0003) MISSED OFFSET
	float                                              Padding;                                                  // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UTexture2D*                                  HeightTexture;                                            // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HeightFade;                                               // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              HeightFadeFar;                                            // 0x02E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinHeightOffset;                                          // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UMaterialInterface>           LowSpecWallMaterial;                                      // 0x02F0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>           WallMaterial;                                             // 0x0318(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_HolyIncense.TBP_HolyIncense_C"));
		return ptr;
	}


	void QualityOptionChanged(const struct FTigerGraphicsSettings& GraphicsSettings, const struct FTigerGraphicsSettingsPS5& GraphicsSettingsPS5);
	void SetupQualityOptions();
	void OnMaterialLoaded(TArray<class UObject*>* InLoadedObjects);
	void MakeVolumeFitSpline();
	void SetMinMaxHeightMPC();
	void UpdateMPC();
	void Initialize();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMatchStateChanged(ETigerMatchState OldState, ETigerMatchState NewState);
	void ReceiveTick(float DeltaSeconds);
	void OnWaveStartMovement_Event_1();
	void RenderHeightmap();
	void OnPreMatchStateChanged(const struct FTigerPreMatchStateInfo& PreMatchState);
	void ForceBlueprintInitialise();
	void ExecuteUbergraph_TBP_HolyIncense(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
