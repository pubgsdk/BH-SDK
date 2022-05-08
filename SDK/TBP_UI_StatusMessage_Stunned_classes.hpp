#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_StatusMessage_Stunned_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_StatusMessage_Stunned.TBP_UI_StatusMessage_Stunned_C
// 0x0010 (0x0270 - 0x0260)
class UTBP_UI_StatusMessage_Stunned_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTigerStyledRichTextBlock*                   ActionText;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_StatusMessage_Stunned.TBP_UI_StatusMessage_Stunned_C"));
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_TBP_UI_StatusMessage_Stunned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
