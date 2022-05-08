#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Item.TBP_Item_C
// 0x00D8 (0x0370 - 0x0298)
class ATBP_Item_C : public ATigerItemWorldRepresentation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAkComponent*                                AkArtifactLoopSound;                                      // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                      // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        OnHoverPointLight;                                        // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        OutlineBillboard;                                         // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USphereComponent*                            HeightenedSensesCollider;                                 // 0x02C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              OnHoverPointLightTimeline_Intensity_CE938CC34D887E84928D7A84409248E5;// 0x02D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    OnHoverPointLightTimeline__Direction_CE938CC34D887E84928D7A84409248E5;// 0x02D4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnHoverPointLightTimeline;                                // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              HeightenedSensesTimeline_Item_Alpha_AA52B2BB400C3A1A86FE58A9858B8731;// 0x02E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    HeightenedSensesTimeline__Direction_AA52B2BB400C3A1A86FE58A9858B8731;// 0x02E4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HeightenedSensesTimeline;                                 // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UTigerMapMarkerProxy*                        MapMarker;                                                // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                ClearMapMarkerTimer;                                      // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                TryCreateMapMarkerTimer;                                  // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxDrawDistance;                                          // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxDrawDistanceHS;                                        // 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UParticleSystem>              DefaultArtifactParticleSystem;                            // 0x0310(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UParticleSystem>              HeightenedSensesArtifactParticleSystem;                   // 0x0338(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    ArtifactHeightenedSensesParticleSystem;                   // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              ArtifactTargetHeight;                                     // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ArtifactHeightenedSenses_;                                // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Item.TBP_Item_C"));
		return ptr;
	}


	void SpawnHeightenedSensesFX();
	void UpdateCustomStencilValue(bool InDoRuntimeUpdate);
	void SetCustomPrimitiveData();
	void SetOutlineColor(const struct FLinearColor& Color, bool DoRuntimeUpdate);
	void SetOutlineMaterialMaxDrawDistance(float MaxDrawDistance);
	void SetOutlineBillboardScale(class UStaticMeshComponent* SourceMesh);
	void RemoveMapMarker();
	void CreateMapMarker();
	void RefreshVisualRepresentation(bool InDoRuntimeUpdate);
	void UserConstructionScript();
	void HeightenedSensesTimeline__FinishedFunc();
	void HeightenedSensesTimeline__UpdateFunc();
	void OnHoverPointLightTimeline__FinishedFunc();
	void OnHoverPointLightTimeline__UpdateFunc();
	void OnLoaded_003C666543064C6D05735C9CD06833A2(class UObject* Loaded);
	void OnLoaded_9732CF4F4A024DFD34CF8395AEEC0B29(class UObject* Loaded);
	void SetItemAsset(class UTigerItemAsset* NewItemType, int NewItemCount);
	void SetItemOutlineVisible(bool ShowOutline);
	void ReceiveBeginPlay();
	void OnEnterHeightenedSenseArea();
	void OnEnterHeightenedSenseAreaInitial();
	void OnLeaveHeightenedSenseArea();
	void TryCreateMapMarker();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ToggleUIVisibility();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnFinalTransformReceived(const struct FTransform& InFinalTransform);
	void MoveArtifactUp();
	void ExecuteUbergraph_TBP_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
