#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "E_RankedMode_Ranks_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct TS_RankedMode_Ranks_Desc.TS_RankedMode_Ranks_Desc
// 0x0058
struct FTS_RankedMode_Ranks_Desc
{
	TEnumAsByte<E_RankedMode_Ranks>                    Rank_2_683E23FB4A75BF3CF2985681E6B57492;                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       DisplayName_17_9AEBBA0D4EBBA033F19ED4A897F817C1;          // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Locked_13_470CEDC94A2C46FFB4C197B3425B0761;               // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FLinearColor                                CardTint_20_28BAD5934AD332FCC800F795F140E1E6;             // 0x0024(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UTexture2D*                                  IconSmall_23_B04FE2F5420A7EF68348CBB498511BD2;            // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  IconLarge_25_DDFA825E44C749838F273EA3FC12DC3D;            // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  Background_27_FA57EC584F09C9C28762F99520D10977;           // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTexture2D*                                  Frame_30_9934215E4BA47EED22B035A49829C807;                // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
