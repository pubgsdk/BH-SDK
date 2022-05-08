#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ArchetypeSelect_Level_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeSelect_Level.TBP_UI_ArchetypeSelect_Level_C
// 0x0008 (0x0288 - 0x0280)
class UTBP_UI_ArchetypeSelect_Level_C : public UTigerWidget
{
public:
	class UTigerStyledRichTextBlock*                   ArchetypeLevelText;                                       // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ArchetypeSelect_Level.TBP_UI_ArchetypeSelect_Level_C"));
		return ptr;
	}


	void HideWidget();
	void SetLevel(ETigerPowerKitType Archetype);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
