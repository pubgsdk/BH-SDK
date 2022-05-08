#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MatchVariationContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C
// 0x0020 (0x02A0 - 0x0280)
class UTBP_UI_MatchVariationContainer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              Container;                                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTBP_UI_MatchVariationInfo_C*>        Cards;                                                    // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_MatchVariationContainer.TBP_UI_MatchVariationContainer_C"));
		return ptr;
	}


	void Check_and_Create_Card(const struct FName& RowName, bool Active);
	void Construct();
	void OnGameModeVariationsUpdate();
	void PopulateList(const struct FTigerMatchSettings& MatchSettings);
	void StopGlowForAllCards();
	void SetupVariationsData();
	void ExecuteUbergraph_TBP_UI_MatchVariationContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
