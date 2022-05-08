#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_VendorTransition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_VendorTransition.TBP_UI_VendorTransition_C
// 0x0020 (0x02E0 - 0x02C0)
class UTBP_UI_VendorTransition_C : public UTigerScreenTransition
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      TransitionInImage;                                        // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      TransitionOutImage;                                       // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    TransitionOutMaterialInstance;                            // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_VendorTransition.TBP_UI_VendorTransition_C"));
		return ptr;
	}


	struct FLinearColor GetTransitionInColor();
	ESlateVisibility GetTransitionInVisibility();
	ESlateVisibility GetTransitionOutVisibility();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void ExecuteUbergraph_TBP_UI_VendorTransition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
