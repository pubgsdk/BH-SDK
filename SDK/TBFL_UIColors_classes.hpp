#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_UIColors_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_UIColors.TBFL_UIColors_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_UIColors_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_UIColors.TBFL_UIColors_C"));
		return ptr;
	}


	static void GetColorByItemType(class UTigerItemAsset* InItemAsset, class UObject* __WorldContext, struct FLinearColor* OutColor);
	static void GetOutlineColor(ETigerOutlineMode InOutlineMode, unsigned char InPlayerIndex, class UObject* __WorldContext, struct FLinearColor* Color);
	static void GetBackgroundColorByPlayerStatus(TEnumAsByte<ETBE_StatusIcon> InPlayerStatus, class UObject* __WorldContext, struct FSlateColor* OutAccentColor);
	static void GetAccentColorByPlayerStatus(TEnumAsByte<ETBE_StatusIcon> InPlayerStatus, class UObject* __WorldContext, struct FLinearColor* OutAccentColor);
	static void GetPlayerColorByIndex(unsigned char InPlayerIndex, ETigerColourSpace InColorSpace, class UObject* __WorldContext, struct FLinearColor* Color);
	static void GetUIColorSlate(ETigerUIColor UIColor, ETigerColourSpace ColorSpace, class UObject* __WorldContext, struct FSlateColor* SlateColor);
	static void GetUIColorAsText(ETigerUIColor UIColor, ETigerColourSpace ColourSpace, class UObject* __WorldContext, struct FText* ColorText);
	static void GetUIColor(ETigerUIColor UIColor, ETigerColourSpace ColourSpace, class UObject* __WorldContext, struct FLinearColor* LinearColor);
	static void GetData(class UObject* __WorldContext, class UTigerUIColorSet** ColorSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
