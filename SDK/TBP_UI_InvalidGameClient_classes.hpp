#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InvalidGameClient_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C
// 0x0038 (0x02D0 - 0x0298)
class UTBP_UI_InvalidGameClient_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UButton*                                     DeveloperButton;                                          // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       TBP_UI_ConfirmMenu;                                       // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnExited;                                                 // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnIgnored_Dispatch;                                       // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C"));
		return ptr;
	}


	void Construct();
	void OnAcceptedTheirFate();
	void OnIsAPersonWhomBelievesThatRulesAreFlawedAsASocialConstruct();
	void ExecuteUbergraph_TBP_UI_InvalidGameClient(int EntryPoint);
	void OnIgnored_Dispatch__DelegateSignature();
	void OnExited__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
