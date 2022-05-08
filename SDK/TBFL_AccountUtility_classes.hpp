#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_AccountUtility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_AccountUtility.TBFL_AccountUtility_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_AccountUtility_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_AccountUtility.TBFL_AccountUtility_C"));
		return ptr;
	}


	static void Check_UsernameNotInPassword(const struct FText& InUsername, const struct FText& InPassword, class UObject* __WorldContext, bool* OutErrror);
	static void Check_Date_Of_Birth(const struct FDateTime& InDateOfBirth, int InSelectedCountryIndex, bool InCountrySelected, class UObject* __WorldContext, bool* bValid, struct FText* Message);
	static void Check_Verification_Code_Format(const struct FText& In_Email, class UObject* __WorldContext, bool* Error, struct FText* Message);
	static void Check_Username_Format(const struct FText& In_Email, class UObject* __WorldContext, bool* Error, struct FText* Message);
	static void Check_Email_Format(const struct FText& In_Email, class UObject* __WorldContext, bool* Error, struct FText* Message);
	static void Check_Password_Format(const struct FText& In_Password, class UObject* __WorldContext, bool* Error, struct FText* Message);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
