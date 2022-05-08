#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "OnlineSubsystemTiger_enums.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemTiger.TigerHeartbeatPush
// 0x0001
struct FTigerHeartbeatPush
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemTiger.TigerMatchmakingPush
// 0x0048
struct FTigerMatchmakingPush
{
	ETigerMatchResult                                  Result;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Host;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Port;                                                     // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     GameSessionId;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GameSessionToken;                                         // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           MatchRequestId;                                           // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemTiger.Request_CancelMatchmakingV2
// 0x0038
struct FRequest_CancelMatchmakingV2
{
	struct FString                                     SESSIONTYPE;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DsVersion;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GAMEMODEID;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           MatchRequestId;                                           // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemTiger.Request_CancelMatchmaking
// 0x0028
struct FRequest_CancelMatchmaking
{
	struct FString                                     SESSIONTYPE;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DsVersion;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           MatchRequestId;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemTiger.Response_StartMatchmaking
// 0x0018
struct FResponse_StartMatchmaking
{
	bool                                               OK;                                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Error;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemTiger.Request_StartMatchmaking
// 0x0058
struct FRequest_StartMatchmaking
{
	struct FString                                     SESSIONTYPE;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DsVersion;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MATCHMAKINGTOKEN;                                         // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     REGIONPINGS;                                              // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MATCHMAKINGPLATFORM;                                      // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	uint32_t                                           MatchRequestId;                                           // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GAMEMODEID;                                               // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemTiger.ResponseEnvelope
// 0x0018
struct FResponseEnvelope
{
	bool                                               OK;                                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Error;                                                    // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
