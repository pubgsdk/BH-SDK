#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Juggernaut_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Perk_Juggernaut.TBP_Perk_Juggernaut_C
// 0x000C (0x00CC - 0x00C0)
class UTBP_Perk_Juggernaut_C : public UTigerPassiveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              PulseHealMultiplier;                                      // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Perk_Juggernaut.TBP_Perk_Juggernaut_C"));
		return ptr;
	}


	void OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority);
	void CustomEvent_1(class ATigerPlayer* InPlayer, ETigerTraversalAction InAction);
	void ExecuteUbergraph_TBP_Perk_Juggernaut(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
