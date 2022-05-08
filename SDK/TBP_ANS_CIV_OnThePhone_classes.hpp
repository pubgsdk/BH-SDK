#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ANS_CIV_OnThePhone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ANS_CIV_OnThePhone.TBP_ANS_CIV_OnThePhone_C
// 0x0000 (0x0030 - 0x0030)
class UTBP_ANS_CIV_OnThePhone_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ANS_CIV_OnThePhone.TBP_ANS_CIV_OnThePhone_C"));
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
