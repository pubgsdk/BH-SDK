#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BattlepassRewardsContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C
// 0x0060 (0x02E0 - 0x0280)
class UTBP_UI_BattlepassRewardsContainer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    BackgroundWidget;                                         // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UUniformGridPanel*                           RewardsContainer;                                         // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnItemHovered;                                            // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FLinearColor                                BackgroundBrushColor;                                     // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnItemSelected;                                           // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UTexture2D*                                  Premium_BG_Texture;                                       // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Is_Free;                                                  // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	class UTBP_UI_Battlepass_C*                        BattlepassRef;                                            // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C"));
		return ptr;
	}


	class UTBP_UI_BattlepassReward_C* CreateOrGetChildWidget(const struct FTigerItemId& InItemId, bool bInIsUnlocked, int InRank, int InIndex, bool InIsFree);
	void Clear_Widgets_if_Needed(TArray<struct FTigerItemId> InItemArray);
	void SetUnlockedState(bool bIsUnlocked);
	void PopulateRewards(bool bIsUnlocked, bool IsFree, int InRank, TArray<struct FTigerItemId>* ItemIds);
	void ItemHovered(const struct FTigerItemId& ItemId);
	void PreConstruct(bool IsDesignTime);
	void ItemSelected(const struct FTigerItemId& InItemId);
	void ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer(int EntryPoint);
	void OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId);
	void OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId, bool Item_Is_Free);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
