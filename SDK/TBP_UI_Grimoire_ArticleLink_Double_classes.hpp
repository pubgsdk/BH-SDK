#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_ArticleLink_Double_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleLink_Double.TBP_UI_Grimoire_ArticleLink_Double_C
// 0x0010 (0x0290 - 0x0280)
class UTBP_UI_Grimoire_ArticleLink_Double_C : public UTigerWidget
{
public:
	class UTBP_UI_Grimoire_ArticleLink_C*              ArticleLink1;                                             // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Grimoire_ArticleLink_C*              ArticleLink2;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleLink_Double.TBP_UI_Grimoire_ArticleLink_Double_C"));
		return ptr;
	}


	void HideArticleLink2();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
