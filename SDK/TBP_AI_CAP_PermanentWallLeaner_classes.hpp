#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_PermanentWallLeaner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_CAP_PermanentWallLeaner.TBP_AI_CAP_PermanentWallLeaner_C
// 0x0008 (0x02D0 - 0x02C8)
class ATBP_AI_CAP_PermanentWallLeaner_C : public ATBP_AI_PermaCapBpBase_C
{
public:
	class UStaticMeshComponent*                        Wall;                                                     // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_CAP_PermanentWallLeaner.TBP_AI_CAP_PermanentWallLeaner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
