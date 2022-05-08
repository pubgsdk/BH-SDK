#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_HorizontalArchetypeSelector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C
// 0x0071 (0x02F9 - 0x0288)
class UTBP_UI_HorizontalArchetypeSelector_C : public UTigerHorizontalArchetypeSelectorUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UHorizontalBox*                              RootHorizontalBox;                                        // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnArchetypeSelected;                                      // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<ETigerPowerKitType, TScriptInterface<class UI_ArchetypeSelectButton_C>> ArchetypeButtons;                                         // 0x02A8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               UsePragueVisuals;                                         // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C"));
		return ptr;
	}


	void ChangeArchetypeButtonSelection(ETigerPowerKitType InArchetypeType);
	class UUserWidget* CreateWidgetForArchetype(ETigerPowerKitType InArchetypeType);
	void CreateArchetypeWidgetsForClan(class UTigerPlayerClanData* InClanData);
	void CreateDivider();
	void OnSelectionChanged(class UTigerPowerKit* InArchetypeData);
	void SelectArchetype(ETigerPowerKitType InArchetypeType);
	void ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector(int EntryPoint);
	void OnArchetypeSelected__DelegateSignature(class UTigerPowerKit* InArchetypeData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
