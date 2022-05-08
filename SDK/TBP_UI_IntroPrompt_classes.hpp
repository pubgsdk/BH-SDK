#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_IntroPrompt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_IntroPrompt.TBP_UI_IntroPrompt_C
// 0x0008 (0x0338 - 0x0330)
class UTBP_UI_IntroPrompt_C : public UTBP_UI_OnScreenPrompt_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_IntroPrompt.TBP_UI_IntroPrompt_C"));
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void Construct();
	void ExecuteUbergraph_TBP_UI_IntroPrompt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
