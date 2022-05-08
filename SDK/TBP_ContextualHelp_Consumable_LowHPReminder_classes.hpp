#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Consumable_LowHPReminder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C
// 0x000C (0x00FC - 0x00F0)
class UTBP_ContextualHelp_Consumable_LowHPReminder_C : public UTBP_ContextualHelpBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              LowHealthTriggerLimit;                                    // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C"));
		return ptr;
	}


	void OnPlayerSpawned(class ATigerPlayer* InTigerPlayer);
	void OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth);
	void ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
