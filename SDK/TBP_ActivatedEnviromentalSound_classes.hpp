#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ActivatedEnviromentalSound_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ActivatedEnviromentalSound.TBP_ActivatedEnviromentalSound_C
// 0x0008 (0x0288 - 0x0280)
class ATBP_ActivatedEnviromentalSound_C : public ATigerActivatedObject
{
public:
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ActivatedEnviromentalSound.TBP_ActivatedEnviromentalSound_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
