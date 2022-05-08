#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Discipline_Clan_UnlockInputReminderPad_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ContextualHelp_Discipline_Clan_UnlockInputReminderPad.TBP_ContextualHelp_Discipline_Clan_UnlockInputReminderPad_C
// 0x0008 (0x00F8 - 0x00F0)
class UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminderPad_C : public UTBP_ContextualHelpBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ContextualHelp_Discipline_Clan_UnlockInputReminderPad.TBP_ContextualHelp_Discipline_Clan_UnlockInputReminderPad_C"));
		return ptr;
	}


	void OnPlayerSpawned(class ATigerPlayer* InTigerPlayer);
	void OnDisciplineUnlocked(ETigerDisciplineSlot InDisciplineSlot);
	void ExecuteUbergraph_TBP_ContextualHelp_Discipline_Clan_UnlockInputReminderPad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
