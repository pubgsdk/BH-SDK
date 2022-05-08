#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_Misc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_Misc.TBFL_Misc_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_Misc_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_Misc.TBFL_Misc_C"));
		return ptr;
	}


	static void CanOpenMainMenu(class UObject* __WorldContext, bool* bCanOpenMatchMenu);
	static void MoveWidgetsFromSideAngle(float InWidgetDistance, float InAngleDegrees, class UWidget* InTranslationWidget, class UWidget* InRotationWidget, class UWidget* InInverseTranslationWidget, class UObject* __WorldContext);
	static void ActivateClientAlarmAndReportAction(class UAkAudioEvent* Event, const struct FVector& EventLocation, float ActionRange, class ATigerCharacter* Character, ETigerAIPlayerAction InAction, class UObject* __WorldContext);
	static void ActivateAlarmAndReportAction(const struct FVector& EventLocation, float ActionRange, class ATigerCharacter* Character, ETigerAIPlayerAction InAction, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
