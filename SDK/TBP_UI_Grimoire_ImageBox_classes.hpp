#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_ImageBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C
// 0x0028 (0x02A8 - 0x0280)
class UTBP_UI_Grimoire_ImageBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Image;                                                    // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsDisplayed;                                              // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UTigerGrimoireEntry*                         GrimoireEntry;                                            // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                               // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C"));
		return ptr;
	}


	void OnMediaLoaded();
	void IsShown(bool* ShowStatus);
	void Hide();
	void Show(class UTigerGrimoireEntry* SelectedItem);
	void Construct();
	void ExecuteUbergraph_TBP_UI_Grimoire_ImageBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
