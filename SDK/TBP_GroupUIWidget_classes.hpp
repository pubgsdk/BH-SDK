#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GroupUIWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_GroupUIWidget.TBP_GroupUIWidget_C
// 0x0030 (0x02B0 - 0x0280)
class UTBP_GroupUIWidget_C : public UTigerGroupUIWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UVerticalBox*                                GroupMembersBox;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                ScreenPanel;                                              // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTigerInWorldWidget*>                 GroupMemberWidgets;                                       // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_GroupUIWidget.TBP_GroupUIWidget_C"));
		return ptr;
	}


	void ClearOutOfSightWidgets();
	class UTBP_GroupMemberStatusWidget_C* CreateMemberWidget(class APlayerController* OwningPlayer, bool bIsReadyForMatchmaking);
	void AddGroupMemberStatusWidget(class APlayerController* InOwningPlayer, class ATigerPlayerState* InGroupMemberState, bool bInIsReadyForMatchmaking, ETigerForceOption InForceMemberCard, class APawn* InPawnOverride);
	void AddOutOfSightWidget(class APlayerController* InOwningPlayer, class ATigerPlayerState* InGroupMember);
	void ClearGroupMembers();
	void AddGroupMemberToCanvas(class ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking);
	void OnGroupMemberReadyStatusChanged(class ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_GroupUIWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
