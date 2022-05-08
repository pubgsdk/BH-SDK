#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_UI_Text_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_UI_Text.TBFL_UI_Text_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_UI_Text_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_UI_Text.TBFL_UI_Text_C"));
		return ptr;
	}


	static void Get_Archetype_Name_From_Archetype_Enum(ETigerPowerKitType InArchetypeType, class UObject* __WorldContext, struct FText* ArchetypeName);
	static void SetTextCapitalized(class URichTextBlock* InTextBlock, const struct FText& InText, class UObject* __WorldContext);
	static void Get_Timespan_As_UI_Text_For_Store_Entries(const struct FTimespan& InTimeStamp, class UObject* __WorldContext, struct FText* Text);
	static void Get_Payment_Response_Text(TEnumAsByte<EShPaymentResult> InPaymentResult, class UObject* __WorldContext, struct FText* Text);
	static void GetBuyResponseText(ETigerBuyStoreEntryResponseCode InResponse, class UObject* __WorldContext, struct FText* Text);
	static void GetSeasonExperienceSourceUIText(ETigerSeasonExperienceSource InExperieceSource, int InMatchPlacement, class UObject* __WorldContext, struct FText* OutText);
	static void Int_To_Digital_Time_Text(int InValue, class UObject* __WorldContext, struct FText* AsDigitalTime);
	static void Get_Timespan_As_UI_Text(const struct FTimespan& InTimespan, class UObject* __WorldContext, struct FText* Formatted_Timespan);
	static void Get_Discipline_Slot_From_Challenge_Requirement(const struct FTigerChallengeRequirementDisciplineSlot& InChallengeRequirement, class UObject* __WorldContext, struct FText* Highlighted_Text);
	static void Get_Balance_Mode_From_Challenge_Requirement(const struct FTigerChallengeRequirementGameMode& Mode_Requirement, class UObject* __WorldContext, struct FText* Game_Mode);
	static void Get_Clan_Name_from_Challenge_Requirement(const struct FTigerChallengeRequirementClan& Clan_Requirement, class UObject* __WorldContext, struct FText* Text);
	static void Get_Weapon_Name_From_Challenge_Requirement(const struct FTigerChallengeRequirementWeaponType& ChallengeRequirement, class UObject* __WorldContext, struct FText* Weapon_Name);
	static void GetBalanceModeAsUIText(EMatchBalanceMode InBalanceMode, class UObject* __WorldContext, struct FText* Text);
	static void GetGroupModeAsUIText(ETigerGroupingMode GameGroupMode, class UObject* __WorldContext, struct FText* GroupModeAsText);
	static void GetClanNameAsUIText(ETigerClan InClanEnum, class UObject* __WorldContext, struct FText* ClanName);
	static void Get_Challenge_Target_Value(class UTigerChallenge* TigerChallenge, class UObject* __WorldContext, struct FText* FormattedText);
	static void GetBloodPotencyInUIText(ETigerBloodPotency BloodPotency, class UObject* __WorldContext, struct FText* BloodPotencyAsText);
	static void GetNpcTypeInUIText(ETigerNPCType NPCType, class UObject* __WorldContext, struct FText* NPCTypeAsText);
	static void Wrap_Text_in_Markup(const struct FName& StyleName, const struct FText& TextToFormat, class UObject* __WorldContext, struct FText* FormattedText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
