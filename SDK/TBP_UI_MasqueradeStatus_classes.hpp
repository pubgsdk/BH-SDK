#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MasqueradeStatus_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_MasqueradeStatus.TBP_UI_MasqueradeStatus_C
// 0x0040 (0x03E0 - 0x03A0)
class UTBP_UI_MasqueradeStatus_C : public UTigerMasqueradeStatusWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Hidden;                                                   // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            Visible;                                                  // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      StatusEyeHidden;                                          // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      StatusEyeVisible;                                         // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_Awareness_C*                         TBP_UI_Awareness;                                         // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_DirectionalIndicator_C*>      NpcMasqueradeBreachDirectionalIndicators;                 // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_MasqueradeStatus.TBP_UI_MasqueradeStatus_C"));
		return ptr;
	}


	void FindAvailableIndicatorAndActivate(class ATigerBaseNPC* InNpc);
	void CreateNpcThatWitnessedMasqueradeBreachIndicators();
	void ChangeStatusAnimation();
	void ChangeEyeTexture();
	void OnMasqueradeRestored();
	void OnMasqueradeBreached();
	void OnNpcGainedSightOfPlayer(class ATigerBaseNPC* InNpc);
	void OnNpcLostSightOfPlayer(class ATigerBaseNPC* InNpc);
	void Construct();
	void AddNpcDirectionalIndicator(class ATigerBaseNPC* InNpc);
	void ExecuteUbergraph_TBP_UI_MasqueradeStatus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
