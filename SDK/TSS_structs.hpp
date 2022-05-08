#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "TSS_enums.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TSS.TSSClientDataReport
// 0x0010
struct FTSSClientDataReport
{
	TArray<unsigned char>                              Data;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct TSS.TSSAccountInfo
// 0x0030
struct FTSSAccountInfo
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	ETSSAccountType                                    AccountType;                                              // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0010(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ETSSClientPlatformType                             PlatformType;                                             // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0014(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint32_t                                           WorldId;                                                  // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           ChannelID;                                                // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint64_t                                           RoleId;                                                   // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           GameID;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
