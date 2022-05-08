#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_SprintConfig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_SprintConfig.TBP_SprintConfig_C
// 0x0008 (0x0128 - 0x0120)
class UTBP_SprintConfig_C : public UTigerSprintConfig
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_SprintConfig.TBP_SprintConfig_C"));
		return ptr;
	}


	void OnSprintDelayCompleted(class ATigerPlayer* InPlayer);
	void ExecuteUbergraph_TBP_SprintConfig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
