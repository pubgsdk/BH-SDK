#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Image_Addative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Image_Addative.TBP_UI_Image_Addative_C
// 0x0018 (0x0298 - 0x0280)
class UTBP_UI_Image_Addative_C : public UTigerImageUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      WrappedImage;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  MaterialTexture;                                          // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Image_Addative.TBP_UI_Image_Addative_C"));
		return ptr;
	}


	class UImage* GetImage();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_Image_Addative(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
