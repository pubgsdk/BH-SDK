#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HavenCapturePoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_HavenCapturePoint.TBP_HavenCapturePoint_C
// 0x0080 (0x0350 - 0x02D0)
class ATBP_HavenCapturePoint_C : public ATigerHavenCapturePoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        CapturePointMesh;                                         // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                YouCapturingColor;                                        // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                EnemyCapturingColor;                                      // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                ContestedColor;                                           // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                NeutralColor;                                             // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                TargetColor;                                              // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                CurrentColor;                                             // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_HavenCapturePoint.TBP_HavenCapturePoint_C"));
		return ptr;
	}


	void SetColor(const struct FLinearColor& Color);
	void StatusChanged(ETigerCapturePointStatus Status);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_HavenCapturePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
