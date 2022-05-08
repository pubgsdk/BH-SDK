#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AN_AttachProp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AN_AttachProp.TBP_AN_AttachProp_C
// 0x0008 (0x0040 - 0x0038)
class UTBP_AN_AttachProp_C : public UAnimNotify
{
public:
	struct FName                                       AttachIdentifier;                                         // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AN_AttachProp.TBP_AN_AttachProp_C"));
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
