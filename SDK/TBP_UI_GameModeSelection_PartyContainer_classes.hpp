#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GameModeSelection_PartyContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C
// 0x0038 (0x02B8 - 0x0280)
class UTBP_UI_GameModeSelection_PartyContainer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    InvitePromptOverlay;                                      // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    PartyOverlay;                                             // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ElysiumHUD_Party_C*                  TBP_UI_ElysiumHUD_Party;                                  // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   TBP_UI_InputMenuPrompt;                                   // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_94;                              // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_GameModeSelection_PartyContainer.TBP_UI_GameModeSelection_PartyContainer_C"));
		return ptr;
	}


	void Construct();
	void UpdateContainer(const struct FTigerParty& InParty);
	void UpdateContainer2(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId);
	void UpdateContainer3(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId);
	void BndEvt__TBP_UI_GameModeSelection_PartyContainer_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_GameModeSelection_PartyContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
