#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VFX_BloodDecal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C
// 0x0038 (0x0260 - 0x0228)
class ATBP_VFX_BloodDecal_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        BloodDecalMesh;                                           // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FadeInTimeline_AlphaScaleTrack_588AF71A4B6DB400A9724382318A5E98;// 0x0240(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    FadeInTimeline__Direction_588AF71A4B6DB400A9724382318A5E98;// 0x0244(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeInTimeline;                                           // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              FadeOutTimeline_AlphaScaleTrack_FADD48494D9CA4FF7946218963114C70;// 0x0250(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    FadeOutTimeline__Direction_FADD48494D9CA4FF7946218963114C70;// 0x0254(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeOutTimeline;                                          // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C"));
		return ptr;
	}


	void FadeOutTimeline__FinishedFunc();
	void FadeOutTimeline__UpdateFunc();
	void FadeInTimeline__FinishedFunc();
	void FadeInTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginFadeOut();
	void ExecuteUbergraph_TBP_VFX_BloodDecal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
