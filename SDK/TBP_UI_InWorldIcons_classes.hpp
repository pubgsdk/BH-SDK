#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InWorldIcons_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InWorldIcons.TBP_UI_InWorldIcons_C
// 0x0010 (0x0290 - 0x0280)
class UTBP_UI_InWorldIcons_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                RootCanvas;                                               // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InWorldIcons.TBP_UI_InWorldIcons_C"));
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_TBP_UI_InWorldIcons(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
