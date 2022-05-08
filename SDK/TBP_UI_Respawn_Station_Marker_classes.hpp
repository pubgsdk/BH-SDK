#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Respawn_Station_Marker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Respawn_Station_Marker.TBP_UI_Respawn_Station_Marker_C
// 0x0010 (0x02E8 - 0x02D8)
class UTBP_UI_Respawn_Station_Marker_C : public UTBP_UI_MapMarker_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      JudgeMarkerImage;                                         // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Respawn_Station_Marker.TBP_UI_Respawn_Station_Marker_C"));
		return ptr;
	}


	class UWidget* GetToolTipWidget_1();
	struct FLinearColor GetColorAndOpacity_1();
	void OnIsOnMinimapIsSet(bool bInIsOnMinimap);
	void ExecuteUbergraph_TBP_UI_Respawn_Station_Marker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
