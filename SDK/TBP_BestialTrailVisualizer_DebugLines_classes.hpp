#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BestialTrailVisualizer_DebugLines_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C
// 0x0090 (0x02D0 - 0x0240)
class ATBP_BestialTrailVisualizer_DebugLines_C : public ATigerBestialTrailVisualizer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	struct FTigerPlayerSavedLocation                   PreviousPoint;                                            // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FTigerPlayerSavedLocation                   SecondLocation;                                           // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	class UTigerNosferatuPassiveBestialConfig*         Config;                                                   // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_BestialTrailPart_SplineMesh_C*          Latest_Part;                                              // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Number_of_Received_Points;                                // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class UNiagaraComponent*                           NewVar_1;                                                 // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     _3rdPos;                                                  // 0x0290(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class UNiagaraComponent*                           PreviousNiagaraBeam;                                      // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PreviousSpawnTime;                                        // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PreviousPointNumber;                                      // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSoftObjectPath                             NiagaraPath;                                              // 0x02B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UTBP_AnAcquiredTaste_C*                      Passive_Component;                                        // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C"));
		return ptr;
	}


	void Decide_LifeTime(float ExtraLifeTimePerStack, float* FinalLifeTime);
	void AddPoint(const struct FTigerPlayerSavedLocation& New_Location);
	void BeginEndTracking();
	void ReceiveBeginPlay();
	void ReceiveInitialTrackingPoints(TArray<struct FTigerPlayerSavedLocation> Locations, class ATigerPlayer* TrackedPlayer);
	void ReceiveNewTrackingPoint(const struct FTigerPlayerSavedLocation& NewLocation);
	void ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
