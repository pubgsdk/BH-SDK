#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TvScreen_Lockdown_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TvScreen_Lockdown_01.BP_TvScreen_Lockdown_01_C
// 0x0010 (0x0238 - 0x0228)
class ABP_TvScreen_Lockdown_01_C : public AActor
{
public:
	class UStaticMeshComponent*                        SM_TvScreen_Lockdown_01;                                  // 0x0228(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TvScreen_Lockdown_01.BP_TvScreen_Lockdown_01_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
