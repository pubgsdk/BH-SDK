#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GroupMemberStatusWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C
// 0x0030 (0x02B0 - 0x0280)
class UTBP_GroupMemberStatusWidget_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_SharedPlayerStatus_C*                TBP_UI_SharedStatusPanel;                                 // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  BloodLevelSymbol;                                         // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsReadyForMatchmaking;                                   // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class ATigerPlayerState*                           GroupMemberState;                                         // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerPlayer*                                GroupMember;                                              // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C"));
		return ptr;
	}


	void SetPlayerColor(unsigned char InPlayerIndex);
	void OnPawnChanged(class APawn* New_Pawn);
	void UpdateElysiumVisibility();
	void SetMember(class ATigerPlayerState* InGroupMemberState, ETigerForceOption InForceMemberCard, class APawn* InPawnOverride);
	void UpdateMatchmakingReadyStatus(bool InIsReadyForMatchmaking);
	void ExecuteUbergraph_TBP_GroupMemberStatusWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
