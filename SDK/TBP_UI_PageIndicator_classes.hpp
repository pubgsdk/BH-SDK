#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PageIndicator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PageIndicator.TBP_UI_PageIndicator_C
// 0x002C (0x028C - 0x0260)
class UTBP_UI_PageIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              Container;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                NumPages;                                                 // 0x0270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnPageSelected;                                           // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                CurrentPageIndex;                                         // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PageIndicator.TBP_UI_PageIndicator_C"));
		return ptr;
	}


	void GetCurrentPageIndex(int* CurrentIndex);
	void SetNumPages(int NumPages);
	void PreConstruct(bool IsDesignTime);
	void SelectPage(int NewPageIndex);
	void Construct();
	void PageSelected(int PageIndex);
	void ExecuteUbergraph_TBP_UI_PageIndicator(int EntryPoint);
	void OnPageSelected__DelegateSignature(int PageIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
