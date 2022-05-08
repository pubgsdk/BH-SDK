#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Map_ActiveQuests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C
// 0x0048 (0x02C8 - 0x0280)
class UTBP_UI_Map_ActiveQuests_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                QuestsContainer;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                MaxQuests;                                                // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMargin                                     QuestLIstPadding;                                         // 0x0294(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<struct FTigerQuestIdentifier>               ActiveQuestIds;                                           // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FString>                             CompletedQuestIds;                                        // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Map_ActiveQuests.TBP_UI_Map_ActiveQuests_C"));
		return ptr;
	}


	void UpdateCompletedQuest(const struct FString& InQuestId);
	void RefershQuestList();
	void ShouldUpdateQuestList(bool* UpdateState);
	void ClearQuestList();
	void AddQuestToList(const struct FText& QuestTItle, const struct FText& QuestObjective, const struct FString& InQuestId);
	void UpdateQuestList();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_TBP_UI_Map_ActiveQuests(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
