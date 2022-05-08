#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ResurrectAltar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ResurrectAltar.TBP_ResurrectAltar_C
// 0x0071 (0x0351 - 0x02E0)
class ATBP_ResurrectAltar_C : public ATigerResurrectAltar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    PS_VFX_ResurrectGlow;                                     // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh3;                                              // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerNearbySoundCueComponent*               TigerNearbySoundCue;                                      // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                   // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                               // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        RespawnMesh_2;                                            // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        RespawnMesh_3;                                            // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StationDisapearCurve_FadeOut_C991A98849CACC9EE9418F9CBF0F2E40;// 0x0330(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              StationDisapearCurve_CollapseMesh_C991A98849CACC9EE9418F9CBF0F2E40;// 0x0334(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              StationDisapearCurve_ScaleYMesh_C991A98849CACC9EE9418F9CBF0F2E40;// 0x0338(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    StationDisapearCurve__Direction_C991A98849CACC9EE9418F9CBF0F2E40;// 0x033C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StationDisapearCurve;                                     // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                StartReviveStationAkEventID;                              // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                ReviveStationLoopAkEventID;                               // 0x034C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RemoveFromTutorial;                                       // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ResurrectAltar.TBP_ResurrectAltar_C"));
		return ptr;
	}


	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void GetPingCategory(struct FName* OutCategory);
	void SpawnResurrectGlowEnd();
	void FXOnResurrectInteractionFinished();
	void FXOnResurrect(const struct FVector& A);
	struct FVector GetRespawnLocationOffset(class USceneComponent* InSceneComponent, int InCurrenctResurrectIndex, int InResurrectCount);
	struct FRotator GetRespawnRotationOffset(class USceneComponent* InSceneComponent, int InCurrenctResurrectIndex, int InResurrectCount);
	void UserConstructionScript();
	void StationDisapearCurve__FinishedFunc();
	void StationDisapearCurve__UpdateFunc();
	void OnInteract(EInteractiveObjectState ActivatedTrigger);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnEnterHeightenedSenseArea();
	void OnLeaveHeightenedSenseArea();
	void OnEnterHeightenedSenseAreaInitial();
	void ToggleUIVisibility();
	void OnResurrect(class USceneComponent* InUsedSceneComponent, const struct FVector& InResurrectLocation, const struct FRotator& InResurrectRotation);
	void OnAltarDeactivatedAfterUse();
	void OnAltarDeactivated();
	void OnResurrectInteractionFinished();
	void ExecuteUbergraph_TBP_ResurrectAltar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
