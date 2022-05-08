#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ContextualHelp_Elysium_Matchmake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C
// 0x0010 (0x0100 - 0x00F0)
class UTBP_ContextualHelp_Elysium_Matchmake_C : public UTBP_ContextualHelpBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ATigerElysiumHUD*                            ElysiumHud;                                               // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ContextualHelp_Elysium_Matchmake.TBP_ContextualHelp_Elysium_Matchmake_C"));
		return ptr;
	}


	void SetupTriggerConditions(const struct FTigerContextualHelpContext& InContext);
	void OnLastPopupClosed();
	void Check_for_matchmaking();
	void ExecuteUbergraph_TBP_ContextualHelp_Elysium_Matchmake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
