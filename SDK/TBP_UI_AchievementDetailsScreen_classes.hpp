#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_AchievementDetailsScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_AchievementDetailsScreen.TBP_UI_AchievementDetailsScreen_C
// 0x0010 (0x0290 - 0x0280)
class UTBP_UI_AchievementDetailsScreen_C : public UTigerWidget
{
public:
	class UTBP_UI_AchievementInformation_C*            InformationCard;                                          // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_CommonItemCardBase_C*                ItemDisplay;                                              // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_AchievementDetailsScreen.TBP_UI_AchievementDetailsScreen_C"));
		return ptr;
	}


	void InitialiseWithChallengeData(class UTigerChallenge* InChallenge);
	void Initialise(const struct FText& InAchievementName, const struct FText& InDescription, const struct FText& InVariableName, int InProgress, int InTarget, class UTigerInventoryItemBase* InReward);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
