#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TigerCore.TigerPersistentPlayerID
// 0x0010
struct FTigerPersistentPlayerID
{
	struct FString                                     UniqueID;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct TigerCore.TigerAnimInstanceProxy
// 0x0030 (0x0790 - 0x0760)
struct FTigerAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0760(0x0010) MISSED OFFSET
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x0770(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0780(0x0010) MISSED OFFSET
};

// ScriptStruct TigerCore.TigerSettleEvent
// 0x0001
struct FTigerSettleEvent
{
	unsigned char                                      SettleEventEnum;                                          // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
