#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InWorldGroupMember_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C
// 0x0019 (0x0339 - 0x0320)
class UTBP_UI_InWorldGroupMember_C : public UTBP_UI_InWorldIconBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerPlayerState*                           GroupPlayerState;                                         // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               bIsOnScreen;                                              // 0x0338(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C"));
		return ptr;
	}


	void Construct();
	void OnPlayerIndexChanged(unsigned char PlayerIndex);
	void OnLifeStatusChanged(ETigerPlayerLifeStatus InLifeStatus);
	void HandleRemovedGroupMember();
	void ExecuteUbergraph_TBP_UI_InWorldGroupMember(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
