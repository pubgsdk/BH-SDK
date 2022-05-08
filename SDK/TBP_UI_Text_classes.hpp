#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Text_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Text.TBP_UI_Text_C
// 0x002C (0x02AC - 0x0280)
class UTBP_UI_Text_C : public UTigerTextWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTextBlock*                                  TextWidget;                                               // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Text;                                                     // 0x0290(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ExposeOnSpawn)
	int                                                Size;                                                     // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Text.TBP_UI_Text_C"));
		return ptr;
	}


	void SetText(const struct FText& InText);
	class UTextBlock* GetText();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_Text(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
