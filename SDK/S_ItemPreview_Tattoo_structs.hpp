#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Tiger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_ItemPreview_Tattoo.S_ItemPreview_Tattoo
// 0x0030
struct FS_ItemPreview_Tattoo
{
	ETigerClan                                         Clan_2_03AAA5874E7B3C1F2B68D4914535B2ED;                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ETigerGender                                       Gender_5_25B10731481CF87FCBC68A817773C170;                // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TSoftClassPtr<class UClass>                        OutfitClass_8_8A8BC4094C665449E533D395F2221C04;           // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
