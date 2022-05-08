#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MasqueradeBreachKill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_MasqueradeBreachKill.TBP_UI_MasqueradeBreachKill_C
// 0x0010 (0x0340 - 0x0330)
class UTBP_UI_MasqueradeBreachKill_C : public UTBP_UI_OnScreenPrompt_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_MasqueradeBreachNew_C*               TBP_UI_MasqueradeBreachNew;                               // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_MasqueradeBreachKill.TBP_UI_MasqueradeBreachKill_C"));
		return ptr;
	}


	void Construct();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_TBP_UI_MasqueradeBreachKill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
