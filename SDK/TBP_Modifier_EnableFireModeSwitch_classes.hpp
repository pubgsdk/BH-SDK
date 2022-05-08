#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Modifier_EnableFireModeSwitch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C
// 0x0008 (0x0030 - 0x0028)
class UTBP_Modifier_EnableFireModeSwitch_C : public UTigerRangedWeaponModModifier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C"));
		return ptr;
	}


	void OnModEquipped(class UTigerEquippedModModifierValues* Modifiers);
	void OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers);
	void ExecuteUbergraph_TBP_Modifier_EnableFireModeSwitch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
