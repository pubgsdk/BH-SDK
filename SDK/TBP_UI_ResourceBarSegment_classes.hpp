#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ResourceBarSegment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ResourceBarSegment.TBP_UI_ResourceBarSegment_C
// 0x0010 (0x02A8 - 0x0298)
class UTBP_UI_ResourceBarSegment_C : public UTigerResourceBarSegmentUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UImage*                                      SegmentImage;                                             // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ResourceBarSegment.TBP_UI_ResourceBarSegment_C"));
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_ResourceBarSegment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
