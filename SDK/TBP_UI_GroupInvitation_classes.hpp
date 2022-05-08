#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_GroupInvitation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C
// 0x0029 (0x02A9 - 0x0280)
class UTBP_UI_GroupInvitation_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_ConfirmMenu_C*                       TBP_UI_ConfirmMenu;                                       // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FTigerGroupInvitation                       Invite;                                                   // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)
	class ATigerPlayerState*                           Inviter;                                                  // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	bool                                               HasHandledInvite;                                         // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_GroupInvitation.TBP_UI_GroupInvitation_C"));
		return ptr;
	}


	void Construct();
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature();
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_4_Decline__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_TBP_UI_GroupInvitation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
