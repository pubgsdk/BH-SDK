#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Perk_Bandolier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Perk_Bandolier.TBP_Perk_Bandolier_C
// 0x0008 (0x00C8 - 0x00C0)
class UTBP_Perk_Bandolier_C : public UTigerPassiveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Perk_Bandolier.TBP_Perk_Bandolier_C"));
		return ptr;
	}


	void MatchStateChanged(ETigerMatchState OldState, ETigerMatchState NewState);
	void OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority);
	void ExecuteUbergraph_TBP_Perk_Bandolier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
