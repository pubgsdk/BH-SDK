// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_UI_Text_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Archetype Name From Archetype Enum
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ArchetypeName                  (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Archetype_Name_From_Archetype_Enum(ETigerPowerKitType InArchetypeType, class UObject* __WorldContext, struct FText* ArchetypeName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Archetype Name From Archetype Enum"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
		class UObject*                 __WorldContext;
		struct FText                   ArchetypeName;
	} params = {};

	params.InArchetypeType = InArchetypeType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ArchetypeName != nullptr)
		*ArchetypeName = params.ArchetypeName;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.SetTextCapitalized
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URichTextBlock*          InTextBlock                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_UI_Text_C::SetTextCapitalized(class URichTextBlock* InTextBlock, const struct FText& InText, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.SetTextCapitalized"));

	struct
	{
		class URichTextBlock*          InTextBlock;
		struct FText                   InText;
		class UObject*                 __WorldContext;
	} params = {};

	params.InTextBlock = InTextBlock;
	params.InText = InText;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text For Store Entries
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               InTimeStamp                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Timespan_As_UI_Text_For_Store_Entries(const struct FTimespan& InTimeStamp, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text For Store Entries"));

	struct
	{
		struct FTimespan               InTimeStamp;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.InTimeStamp = InTimeStamp;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Payment Response Text
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EShPaymentResult>  InPaymentResult                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Payment_Response_Text(TEnumAsByte<EShPaymentResult> InPaymentResult, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Payment Response Text"));

	struct
	{
		TEnumAsByte<EShPaymentResult>  InPaymentResult;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.InPaymentResult = InPaymentResult;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.GetBuyResponseText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerBuyStoreEntryResponseCode InResponse                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::GetBuyResponseText(ETigerBuyStoreEntryResponseCode InResponse, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.GetBuyResponseText"));

	struct
	{
		ETigerBuyStoreEntryResponseCode InResponse;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.InResponse = InResponse;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.GetSeasonExperienceSourceUIText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerSeasonExperienceSource   InExperieceSource              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InMatchPlacement               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OutText                        (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::GetSeasonExperienceSourceUIText(ETigerSeasonExperienceSource InExperieceSource, int InMatchPlacement, class UObject* __WorldContext, struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.GetSeasonExperienceSourceUIText"));

	struct
	{
		ETigerSeasonExperienceSource   InExperieceSource;
		int                            InMatchPlacement;
		class UObject*                 __WorldContext;
		struct FText                   OutText;
	} params = {};

	params.InExperieceSource = InExperieceSource;
	params.InMatchPlacement = InMatchPlacement;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Int To Digital Time Text
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   AsDigitalTime                  (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Int_To_Digital_Time_Text(int InValue, class UObject* __WorldContext, struct FText* AsDigitalTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Int To Digital Time Text"));

	struct
	{
		int                            InValue;
		class UObject*                 __WorldContext;
		struct FText                   AsDigitalTime;
	} params = {};

	params.InValue = InValue;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (AsDigitalTime != nullptr)
		*AsDigitalTime = params.AsDigitalTime;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimespan               InTimespan                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Formatted_Timespan             (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Timespan_As_UI_Text(const struct FTimespan& InTimespan, class UObject* __WorldContext, struct FText* Formatted_Timespan)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text"));

	struct
	{
		struct FTimespan               InTimespan;
		class UObject*                 __WorldContext;
		struct FText                   Formatted_Timespan;
	} params = {};

	params.InTimespan = InTimespan;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Formatted_Timespan != nullptr)
		*Formatted_Timespan = params.Formatted_Timespan;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Discipline Slot From Challenge Requirement
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerChallengeRequirementDisciplineSlot InChallengeRequirement         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Highlighted_Text               (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Discipline_Slot_From_Challenge_Requirement(const struct FTigerChallengeRequirementDisciplineSlot& InChallengeRequirement, class UObject* __WorldContext, struct FText* Highlighted_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Discipline Slot From Challenge Requirement"));

	struct
	{
		struct FTigerChallengeRequirementDisciplineSlot InChallengeRequirement;
		class UObject*                 __WorldContext;
		struct FText                   Highlighted_Text;
	} params = {};

	params.InChallengeRequirement = InChallengeRequirement;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Highlighted_Text != nullptr)
		*Highlighted_Text = params.Highlighted_Text;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Balance Mode From Challenge Requirement
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerChallengeRequirementGameMode Mode_Requirement               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Game_Mode                      (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Balance_Mode_From_Challenge_Requirement(const struct FTigerChallengeRequirementGameMode& Mode_Requirement, class UObject* __WorldContext, struct FText* Game_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Balance Mode From Challenge Requirement"));

	struct
	{
		struct FTigerChallengeRequirementGameMode Mode_Requirement;
		class UObject*                 __WorldContext;
		struct FText                   Game_Mode;
	} params = {};

	params.Mode_Requirement = Mode_Requirement;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Game_Mode != nullptr)
		*Game_Mode = params.Game_Mode;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Clan Name from Challenge Requirement
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerChallengeRequirementClan Clan_Requirement               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Clan_Name_from_Challenge_Requirement(const struct FTigerChallengeRequirementClan& Clan_Requirement, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Clan Name from Challenge Requirement"));

	struct
	{
		struct FTigerChallengeRequirementClan Clan_Requirement;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.Clan_Requirement = Clan_Requirement;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Weapon Name From Challenge Requirement
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerChallengeRequirementWeaponType ChallengeRequirement           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Weapon_Name                    (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Weapon_Name_From_Challenge_Requirement(const struct FTigerChallengeRequirementWeaponType& ChallengeRequirement, class UObject* __WorldContext, struct FText* Weapon_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Weapon Name From Challenge Requirement"));

	struct
	{
		struct FTigerChallengeRequirementWeaponType ChallengeRequirement;
		class UObject*                 __WorldContext;
		struct FText                   Weapon_Name;
	} params = {};

	params.ChallengeRequirement = ChallengeRequirement;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Weapon_Name != nullptr)
		*Weapon_Name = params.Weapon_Name;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.GetBalanceModeAsUIText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EMatchBalanceMode              InBalanceMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::GetBalanceModeAsUIText(EMatchBalanceMode InBalanceMode, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.GetBalanceModeAsUIText"));

	struct
	{
		EMatchBalanceMode              InBalanceMode;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params = {};

	params.InBalanceMode = InBalanceMode;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Text != nullptr)
		*Text = params.Text;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.GetGroupModeAsUIText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerGroupingMode             GameGroupMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   GroupModeAsText                (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::GetGroupModeAsUIText(ETigerGroupingMode GameGroupMode, class UObject* __WorldContext, struct FText* GroupModeAsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.GetGroupModeAsUIText"));

	struct
	{
		ETigerGroupingMode             GameGroupMode;
		class UObject*                 __WorldContext;
		struct FText                   GroupModeAsText;
	} params = {};

	params.GameGroupMode = GameGroupMode;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GroupModeAsText != nullptr)
		*GroupModeAsText = params.GroupModeAsText;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.GetClanNameAsUIText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerClan                     InClanEnum                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ClanName                       (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::GetClanNameAsUIText(ETigerClan InClanEnum, class UObject* __WorldContext, struct FText* ClanName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.GetClanNameAsUIText"));

	struct
	{
		ETigerClan                     InClanEnum;
		class UObject*                 __WorldContext;
		struct FText                   ClanName;
	} params = {};

	params.InClanEnum = InClanEnum;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ClanName != nullptr)
		*ClanName = params.ClanName;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Challenge Target Value
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerChallenge*         TigerChallenge                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   FormattedText                  (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Get_Challenge_Target_Value(class UTigerChallenge* TigerChallenge, class UObject* __WorldContext, struct FText* FormattedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Challenge Target Value"));

	struct
	{
		class UTigerChallenge*         TigerChallenge;
		class UObject*                 __WorldContext;
		struct FText                   FormattedText;
	} params = {};

	params.TigerChallenge = TigerChallenge;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.GetBloodPotencyInUIText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerBloodPotency             BloodPotency                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   BloodPotencyAsText             (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::GetBloodPotencyInUIText(ETigerBloodPotency BloodPotency, class UObject* __WorldContext, struct FText* BloodPotencyAsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.GetBloodPotencyInUIText"));

	struct
	{
		ETigerBloodPotency             BloodPotency;
		class UObject*                 __WorldContext;
		struct FText                   BloodPotencyAsText;
	} params = {};

	params.BloodPotency = BloodPotency;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (BloodPotencyAsText != nullptr)
		*BloodPotencyAsText = params.BloodPotencyAsText;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.GetNpcTypeInUIText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerNPCType                  NPCType                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   NPCTypeAsText                  (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::GetNpcTypeInUIText(ETigerNPCType NPCType, class UObject* __WorldContext, struct FText* NPCTypeAsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.GetNpcTypeInUIText"));

	struct
	{
		ETigerNPCType                  NPCType;
		class UObject*                 __WorldContext;
		struct FText                   NPCTypeAsText;
	} params = {};

	params.NPCType = NPCType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NPCTypeAsText != nullptr)
		*NPCTypeAsText = params.NPCTypeAsText;
}


// Function TBFL_UI_Text.TBFL_UI_Text_C.Wrap Text in Markup
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   StyleName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   TextToFormat                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   FormattedText                  (CPF_Parm, CPF_OutParm)

void UTBFL_UI_Text_C::Wrap_Text_in_Markup(const struct FName& StyleName, const struct FText& TextToFormat, class UObject* __WorldContext, struct FText* FormattedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UI_Text.TBFL_UI_Text_C.Wrap Text in Markup"));

	struct
	{
		struct FName                   StyleName;
		struct FText                   TextToFormat;
		class UObject*                 __WorldContext;
		struct FText                   FormattedText;
	} params = {};

	params.StyleName = StyleName;
	params.TextToFormat = TextToFormat;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
