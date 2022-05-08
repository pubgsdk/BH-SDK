#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Tiger_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct TS_ActiveBuffItemData.TS_ActiveBuffItemData
// 0x0028
struct FTS_ActiveBuffItemData
{
	class UTexture2D*                                  StatusImage_16_8ADB1AC54EEE37D0645A32A71CABFFB1;          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                StatusColor_7_856ECF6A48D86DAD6B43DD92F96F7A14;           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentDuration_2_84E79CB5423DCA9E428B1C84C028ADF9;       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TotalDuration_4_3C24242B4F5A241017B5A7B7A1954F53;         // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	ETigerBuffProgressType                             ProgressType_18_57156BC440A9E62F809F729EB5259BE7;         // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                ID_13_562E133D42593891887D0BBA1252A630;                   // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
