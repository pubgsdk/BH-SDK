#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InboxMessageImageSection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InboxMessageImageSection.TBP_UI_InboxMessageImageSection_C
// 0x0020 (0x02A0 - 0x0280)
class UTBP_UI_InboxMessageImageSection_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Content;                                                  // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FString                                     ContentString;                                            // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InboxMessageImageSection.TBP_UI_InboxMessageImageSection_C"));
		return ptr;
	}


	void OnFail_87622FC3483C41015CCF5DBE4D51518D(class UTexture2DDynamic* Texture);
	void OnSuccess_87622FC3483C41015CCF5DBE4D51518D(class UTexture2DDynamic* Texture);
	void Construct();
	void ExecuteUbergraph_TBP_UI_InboxMessageImageSection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
