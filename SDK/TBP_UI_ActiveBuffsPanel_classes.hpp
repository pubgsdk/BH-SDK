#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ActiveBuffsPanel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C
// 0x0040 (0x02C0 - 0x0280)
class UTBP_UI_ActiveBuffsPanel_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTBP_UI_ActiveBuffItem_C*                    TBP_UI_ActiveBuffItem;                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ActiveBuffItem_C*                    TBP_UI_ActiveBuffItem_79;                                 // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UUniformGridPanel*                           UniformGridPanel_1;                                       // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FTS_ActiveBuffItemData>              BuffsToDisplay;                                           // 0x02A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                MaxDisplayCount;                                          // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	class ATigerPlayer*                                RecievedTigerPlayer;                                      // 0x02B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C"));
		return ptr;
	}


	void SetTigerPlayer(class APawn* NewPawn, bool* SetNewTigerPlayer);
	void GetItemFromColumnIndex(int ColumnIndex, class UTBP_UI_ActiveBuffItem_C** Item);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration);
	void OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration);
	void OnBuffRefreshed(class UTigerBuff* Buff, int ID, float Duration);
	void OnPawnChanged_Event_1(class APawn* NewPawn);
	void OnPlayerStateReceived(class ATigerPlayerState* InPlayerState);
	void OnClientBuffIdUpdated(int OldId, int NewId);
	void ExecuteUbergraph_TBP_UI_ActiveBuffsPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
