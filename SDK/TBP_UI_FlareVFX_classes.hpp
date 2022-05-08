#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_FlareVFX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_FlareVFX.TBP_UI_FlareVFX_C
// 0x0018 (0x0278 - 0x0260)
class UTBP_UI_FlareVFX_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Anim_Flare;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      OpticalFlare;                                             // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_FlareVFX.TBP_UI_FlareVFX_C"));
		return ptr;
	}


	void Play_Flare_animation();
	void ExecuteUbergraph_TBP_UI_FlareVFX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
