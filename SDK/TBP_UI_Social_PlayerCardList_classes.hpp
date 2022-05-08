#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_PlayerCardList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C
// 0x0018 (0x0298 - 0x0280)
class UTBP_UI_Social_PlayerCardList_C : public UTigerWidget
{
public:
	class UUniformGridPanel*                           PlayerGrid;                                               // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USpacer*                                     SpacerToReserveColumn;                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Scrollbox_C*                         TBP_UI_Scrollbox;                                         // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C"));
		return ptr;
	}


	void FixLayout();
	void ClearList();
	void AddPlayerWidget(class UUserWidget* InPlayerWidget, int InIndex);
	void RowColumnFromIndex(int InIndex, int* Row, int* Column);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
