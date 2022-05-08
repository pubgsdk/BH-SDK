#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerHealthBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C
// 0x0048 (0x02C8 - 0x0280)
class UTBP_UI_PlayerHealthBar_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_694;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ActiveBuffsPanel_C*                  TBP_UI_ActiveBuffsPanel;                                  // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_SharedPlayerStatus_C*                TBP_UI_SharedStatusPanel;                                 // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                    // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               bIsVisible;                                               // 0x02A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	class UClass* /*UTigerPingBase*/                   PingClass;                                                // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerElysiumPlayerState*                    ElysiumPlayerState;                                       // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ATigerPlayerState*                           OwningPlayerState;                                        // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C"));
		return ptr;
	}


	void OnReadyStateChanged(bool InReady);
	void DisableHover();
	void EnableHover();
	void SetPlayerState(class ATigerPlayerState* PlayerState, ETigerForceOption InForceMemberCard);
	void OverridePlayerState(class ATigerPlayerState* OverridePlayerState, ETigerForceOption InForceMemberCard);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnPlayerStateReceived(class ATigerPlayerState* InPlayerState);
	void ExecuteUbergraph_TBP_UI_PlayerHealthBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
