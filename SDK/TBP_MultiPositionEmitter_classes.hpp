#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MultiPositionEmitter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MultiPositionEmitter.TBP_MultiPositionEmitter_C
// 0x0020 (0x0248 - 0x0228)
class ATBP_MultiPositionEmitter_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_MultiPositionEmitterLocation_C*         TBP_MultiPositionEmitterLocationDefault;                  // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkComponent*                                EventToPostAkComponent;                                   // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                    // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MultiPositionEmitter.TBP_MultiPositionEmitter_C"));
		return ptr;
	}


	void GetSpeakerTransforms(TArray<struct FTransform>* Out_Speaker_Locations);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_MultiPositionEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
