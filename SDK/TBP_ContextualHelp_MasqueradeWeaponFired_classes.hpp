#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_MasqueradeWeaponFired_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C
// 0x0008 (0x00F8 - 0x00F0)
class UTBP_ContextualHelp_MasqueradeWeaponFired_C : public UTBP_ContextualHelpBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C"));
		return ptr;
	}


	void OnPlayerSpawned(class ATigerPlayer* InTigerPlayer);
	void CustomEvent_1(class UClass* /*UTigerMasqueradeConsequence*/ InMasqueradeConsequence);
	void ExecuteUbergraph_TBP_ContextualHelp_MasqueradeWeaponFired(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
