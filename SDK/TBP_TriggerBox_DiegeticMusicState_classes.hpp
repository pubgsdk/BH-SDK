#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TriggerBox_DiegeticMusicState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TriggerBox_DiegeticMusicState.TBP_TriggerBox_DiegeticMusicState_C
// 0x0008 (0x0238 - 0x0230)
class ATBP_TriggerBox_DiegeticMusicState_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_TriggerBox_DiegeticMusicState.TBP_TriggerBox_DiegeticMusicState_C"));
		return ptr;
	}


	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_TBP_TriggerBox_DiegeticMusicState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
