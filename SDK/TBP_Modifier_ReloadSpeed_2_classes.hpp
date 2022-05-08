#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Modifier_ReloadSpeed_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Modifier_ReloadSpeed_2.TBP_Modifier_ReloadSpeed_1_C
// 0x000C (0x0034 - 0x0028)
class UTBP_Modifier_ReloadSpeed_1_C : public UTigerRangedWeaponModModifier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	float                                              ReloadSpeedMultiplier;                                    // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Modifier_ReloadSpeed_2.TBP_Modifier_ReloadSpeed_1_C"));
		return ptr;
	}


	void OnModEquipped(class UTigerEquippedModModifierValues* Modifiers);
	void OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers);
	void ExecuteUbergraph_TBP_Modifier_ReloadSpeed_2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
