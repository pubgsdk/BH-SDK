#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Awareness_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Awareness.TBP_UI_Awareness_C
// 0x0058 (0x02B8 - 0x0260)
class UTBP_UI_Awareness_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TMap<class ATigerBaseNPC*, class UTBP_UI_AwarenessIndicator_C*> NPCToWidget;                                              // 0x0268(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_Awareness.TBP_UI_Awareness_C"));
		return ptr;
	}


	void OnNPCGainedAwareness(class ATigerBaseNPC* InNpc);
	void OnNPCLostAwareness(class ATigerBaseNPC* InNpc);
	void ExecuteUbergraph_TBP_UI_Awareness(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
