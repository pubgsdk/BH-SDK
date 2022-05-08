#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ListItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ListItem.TBP_UI_ListItem_C
// 0x0011 (0x0291 - 0x0280)
class UTBP_UI_ListItem_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_List_C*                              Parrent;                                                  // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsSelected;                                              // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ListItem.TBP_UI_ListItem_C"));
		return ptr;
	}


	void OnDeselect();
	void OnSelect();
	void SelectListItem();
	void OnSelectWidget();
	void OnDeselectWidget();
	void Initialize(class UTBP_UI_List_C* InParrent);
	void ExecuteUbergraph_TBP_UI_ListItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
