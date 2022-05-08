#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_ArticleBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C
// 0x005C (0x02DC - 0x0280)
class UTBP_UI_Grimoire_ArticleBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              ArticlesList;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  ArticlesScrollBox;                                        // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_Landing_C*                  GrimoireLandingUI;                                        // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                               // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FString>                             TestFeaturedEntryIDs;                                     // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FString>                             TestSuggestedEntryIDs;                                    // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<struct FString>                             TestNewEntryIDs;                                          // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              ArticleScrollTime;                                        // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C"));
		return ptr;
	}


	void ResetScroll();
	void AddArticleRandom(class UTigerGrimoireEntry* GrimoireEntry);
	void GetNewArticleEntryIDs(TArray<struct FString>* EntryIds);
	void AddArticleDouble(class UTigerGrimoireEntry* GrimoireEntry1, class UTigerGrimoireEntry* GrimoireEntry2, ETigerGrimoireArticleType ArticleType);
	void AddArticle(class UTigerGrimoireEntry* GrimoireEntry, ETigerGrimoireArticleType ArticleType);
	void CreateArticleLinks(class UTBP_UI_Grimoire_C* GrimoireUI, class UTBP_UI_Grimoire_Landing_C* GrimoireLandingUI, int* TotalArticles);
	void GetTestEntries(TArray<struct FString>* EntryIds, TArray<class UTigerGrimoireEntry*>* Entries);
	void ClearArticleLinks();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ArticleSelected(const struct FString& EntryId, ETigerGrimoireArticleType ArticleType);
	void ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
