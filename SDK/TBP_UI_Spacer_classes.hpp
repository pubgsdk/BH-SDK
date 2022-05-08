#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Spacer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Spacer.TBP_UI_Spacer_C
// 0x0008 (0x0268 - 0x0260)
class UTBP_UI_Spacer_C : public UUserWidget
{
public:
	class USpacer*                                     Spacer1;                                                  // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Spacer.TBP_UI_Spacer_C"));
		return ptr;
	}


	void SetHeight(float Height);
	void SetWidth(float Width);
	void Set_Size(float Width, float Height);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
