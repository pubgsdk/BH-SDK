#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_SystemMenuSettingsListItem_Streamer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C
// 0x0028 (0x0340 - 0x0318)
class UTBP_UI_SystemMenuSettingsListItem_Streamer_C : public UTBP_UI_SystemMenuSettingsListItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FText                                       OptionDesc;                                               // 0x0320(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class UTBP_UI_SystemMenuStreamer_C*                Menu;                                                     // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuSettingsListItem_Streamer.TBP_UI_SystemMenuSettingsListItem_Streamer_C"));
		return ptr;
	}


	void OnHover();
	void OnUnhover();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItem_Streamer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
