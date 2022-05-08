#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "EOSSDK_enums.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EOSSDK.EOSAntiCheatActionContext
// 0x0018
struct FEOSAntiCheatActionContext
{
	struct FString                                     ActionDetailString;                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EEOSAntiCheatAction                                Action;                                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EEOSAntiCheatActionReason                          ActionReason;                                             // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
