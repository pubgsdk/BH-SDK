#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_RooftopWindow_DataPreset.S_RooftopWindow_DataPreset
// 0x0014
struct FS_RooftopWindow_DataPreset
{
	struct FLinearColor                                RoofColor_8_D02D63504DFA2CB9CAD208AF38875860;             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              RoofDesaturation_5_EA6BA11D49DAF9FD3E6263A8824520D7;      // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
