#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_CategoryBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C
// 0x0082 (0x0302 - 0x0280)
class UTBP_UI_Grimoire_CategoryBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                CategoryBox;                                              // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  CategoryScrollBox;                                        // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerDeferredRenderBox*                     DeferredFilterBox;                                        // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                           // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider_43;                                        // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryBox_Filter_C*       TBP_UI_Grimoire_CategoryBox_Filter;                       // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TitleTextBlock;                                           // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerGrimoireTree*                          Tree;                                                     // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsUnlocked;                                               // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               hasBeenRead;                                              // 0x02C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02CA(0x0002) MISSED OFFSET
	struct FCoreUObject_FColor                         UnreadColor;                                              // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                               // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                RootCatTotalEntryCount;                                   // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                RootCatUnlockedEntryCount;                                // 0x02DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CategoryScrollTime;                                       // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class UWidget*                                     ScrollViewWidget;                                         // 0x02E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Scrollable;                                               // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	ETigerGrimoireSortType                             CurrentSortingOrder;                                      // 0x02F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x6];                                       // 0x02F2(0x0006) MISSED OFFSET
	class UTigerGrimoireCategory*                      CurrentParentCategory;                                    // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bGamepadDpadMoved;                                        // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bGamepadJumpToEntry;                                      // 0x0301(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C"));
		return ptr;
	}


	void AnyExpanding(bool* OutExpanding);
	void MoveMouseToHighlightedWidget();
	void GamepadSelectHoveredEntryButton();
	void GetHighlightWidgetIndex(int* OutIndex);
	void ChangeSortingOrder(ETigerGrimoireSortType InSortingOrder);
	void FindExpandingWidget(TArray<class UWidget*>* InWidgets, int* OutExpandingIndex);
	void MouseFollowExpandingWidget(bool* MouseMoved);
	void MoveMouseInWidgetDirection(int InDirection, int InHoverIndex);
	void CalcHoverIndex(TArray<class UWidget*>* InWidgets, int* OutHoverindex);
	void GetHoverableWidgetsRecurse(TArray<class UWidget*>* InWidgetList, TArray<class UWidget*>* OutVisibleWidgets);
	void GetLocationWidgets(TArray<class UWidget*>* InWidgetList, TArray<class UWidget*>* OutVisibleWidgets);
	void SelectButtonOfEntry(const struct FString& InEntryId, class UTBP_UI_Grimoire_CategoryButton_C** SelectedCategoryButton);
	void SelectButtonOfCategory(class UTigerGrimoireCategory* InCategory);
	void HighlightCategory(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton);
	void HighlightEntry(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton);
	void Show_Categories(class UTigerGrimoireCategory* ParentCategory);
	void Get_Entry_Flags(class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireEntry* InEntry, bool* IsEntryUnlocked, bool* IsEntryRead);
	void Get_Category_Info(class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireCategory* InCategory, bool InIncludeSubCategories, const struct FString& IgnoreEntryId, bool* IsUnlocked, bool* IsRead, int* Out_UnlockedCount, int* Out_NumberOfEntries);
	void Make_Entry_Widget(class UTigerPersistentPlayerState* PersistentState, class UTigerGrimoireEntry* Entry, class UPanelWidget* InPanelWidget, class UTBP_UI_Grimoire_CategoryButton_C* ParentButtonWidget, class UTigerGrimoireCategory* ParentCat, class UTBP_UI_Grimoire_CategoryButton_C** OutCreatedWidget);
	void Make_Sub_Category_Widget(class UPanelWidget* ParentPanelWidget, class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireCategory* InSubCategory, class UTBP_UI_Grimoire_CategoryButton_C** OutCreatedWidget);
	void OnInitialized();
	void MenuDownPressed();
	void SelectMenuOnClickCategoryButton(class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton);
	void MenuUpPressed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnOpen(class UTBP_UI_Grimoire_C* GrimoireUI);
	void OnClose();
	void SelectMenuOnClickEntryButton(class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton);
	void ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
