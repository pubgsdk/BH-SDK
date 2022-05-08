#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Explosion_Test_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Explosion_Test.Explosion_Test_C
// 0x0010 (0x0520 - 0x0510)
class AExplosion_Test_C : public ATigerAreaEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Explosion_Test.Explosion_Test_C"));
		return ptr;
	}


	void OnTriggerClient();
	void ExecuteUbergraph_Explosion_Test(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
