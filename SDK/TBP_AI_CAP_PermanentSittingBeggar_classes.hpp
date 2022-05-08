#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_CAP_PermanentSittingBeggar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_AI_CAP_PermanentSittingBeggar.TBP_AI_CAP_PermanentSittingBeggar_C
// 0x0028 (0x02F0 - 0x02C8)
class ATBP_AI_CAP_PermanentSittingBeggar_C : public ATBP_AI_PermaCapBpBase_C
{
public:
	class UStaticMeshComponent*                        SM_Cardboard_Sign_01;                                     // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_DirtyBlanket_01;                                       // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_PlasticBags_01;                                        // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Sleepingbag_01;                                        // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_PaperCup_01;                                           // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_AI_CAP_PermanentSittingBeggar.TBP_AI_CAP_PermanentSittingBeggar_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
