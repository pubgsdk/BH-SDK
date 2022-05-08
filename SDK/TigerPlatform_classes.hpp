#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerPlatform_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TigerPlatform.TigerPlatformBpfl
// 0x0000 (0x0028 - 0x0028)
class UTigerPlatformBpfl : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TigerPlatform.TigerPlatformBpfl"));
		return ptr;
	}


	void TigerRestrictedActionResult__DelegateSignature(bool bInCanPerformAction);
	static void ShowRestrictedActionSystemPopup(ETigerPlatformRestrictedAction InAction);
	static bool ShouldSkipNoticeScreens();
	static void LaunchUrlBypassParentalChecks(const struct FString& InUrl);
	static void CanPerformRestrictedAction(ETigerPlatformRestrictedAction InAction, const struct FScriptDelegate& InDelegate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
