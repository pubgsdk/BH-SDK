#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ListItemReport_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ListItemReport.TBP_UI_ListItemReport_C
// 0x0040 (0x02D1 - 0x0291)
class UTBP_UI_ListItemReport_C : public UTBP_UI_ListItem_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            HighlightAnim;                                            // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Display_Text;                                             // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_ListItemVisual_C*                    TBP_UI_ListItemVisual;                                    // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Text;                                                     // 0x02B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	ETigerReportReason                                 ReportReason;                                             // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ListItemReport.TBP_UI_ListItemReport_C"));
		return ptr;
	}


	void OnDeselect();
	void OnSelect();
	void Construct();
	void ButtonClicked();
	void SetText(const struct FText& Text);
	void ButtonHovered();
	void ButtonUnHovered();
	void ExecuteUbergraph_TBP_UI_ListItemReport(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
