#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Image_Random_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Image_Random.TBP_UI_Image_Random_C
// 0x0090 (0x0318 - 0x0288)
class UTBP_UI_Image_Random_C : public UTBP_UI_Image_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FSlateBrush                                 Brush;                                                    // 0x0290(0x0088) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Image_Random.TBP_UI_Image_Random_C"));
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_Image_Random(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
