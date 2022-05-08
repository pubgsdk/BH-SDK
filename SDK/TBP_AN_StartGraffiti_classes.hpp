#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AN_StartGraffiti_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AN_StartGraffiti.TBP_AN_StartGraffiti_C
// 0x0000 (0x0038 - 0x0038)
class UTBP_AN_StartGraffiti_C : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AN_StartGraffiti.TBP_AN_StartGraffiti_C"));
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
