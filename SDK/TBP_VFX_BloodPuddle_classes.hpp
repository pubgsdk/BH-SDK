#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_VFX_BloodPuddle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C
// 0x0030 (0x0258 - 0x0228)
class ATBP_VFX_BloodPuddle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_2_6AA50CA342AD366CED304ABD16EA7169;   // 0x0240(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_1_6AA50CA342AD366CED304ABD16EA7169;   // 0x0244(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_0_6AA50CA342AD366CED304ABD16EA7169;   // 0x0248(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6AA50CA342AD366CED304ABD16EA7169;   // 0x024C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C"));
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_VFX_BloodPuddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
