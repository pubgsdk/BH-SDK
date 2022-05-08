#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GlobalAudioSource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_GlobalAudioSource.TBP_GlobalAudioSource_C
// 0x0018 (0x0240 - 0x0228)
class ATBP_GlobalAudioSource_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               SoundEffect;                                              // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_GlobalAudioSource.TBP_GlobalAudioSource_C"));
		return ptr;
	}


	void PlaySoundEffect();
	void ExecuteUbergraph_TBP_GlobalAudioSource(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
