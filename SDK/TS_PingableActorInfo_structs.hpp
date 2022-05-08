#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "ENUM_TelemetryPingType_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct TS_PingableActorInfo.TS_PingableActorInfo
// 0x0018
struct FTS_PingableActorInfo
{
	TEnumAsByte<ENUM_TelemetryPingType>                Type_6_6B464D494A7564A4F08D50940E122A4C;                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     WorldLocation_10_251C20C44A63FACD1E5EE28C9A4AE2D2;        // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AActor*                                      Actor_9_80708A3A45A68E5C237EE8A4F45D7CA4;                 // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
