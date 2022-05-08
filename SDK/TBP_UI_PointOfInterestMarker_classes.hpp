#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PointOfInterestMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C
// 0x0028 (0x0310 - 0x02E8)
class UTBP_UI_PointOfInterestMarker_C : public UTigerPointOfInterestMapMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  HighTierLoot_Text;                                        // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      PoiIcon;                                                  // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PoiText;                                                  // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBorder*                                     PoiTextBorder;                                            // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C"));
		return ptr;
	}


	void ConvertToHighTierLootMarker(TSoftClassPtr<class UClass> InHighTierLootGroup);
	void SetToHighTierLootLocation(TSoftClassPtr<class UClass> InHighTierLootGroup);
	void ExecuteUbergraph_TBP_UI_PointOfInterestMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
