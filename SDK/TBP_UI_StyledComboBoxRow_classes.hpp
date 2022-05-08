#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StyledComboBoxRow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C
// 0x0028 (0x0288 - 0x0260)
class UTBP_UI_StyledComboBoxRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UButton*                                     Button_1;                                                 // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TextBlock;                                                // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsSelected;                                               // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	class UTBP_UI_StyledComboBox_C*                    ParentBox;                                                // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C"));
		return ptr;
	}


	void SetSelected(bool InIsSelected);
	void Init(const struct FText& InText, const struct FDataTableRowHandle& InTextStyle, class UTBP_UI_StyledComboBox_C* InParentBox);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_StyledComboBoxRow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
