#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Shark_enums.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Shark.SharkAccountActionResult
// 0x0030
struct FSharkAccountActionResult
{
	bool                                               Success;                                                  // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     InternalErrorMessage;                                     // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     InternalThirdPartyErrorMessage;                           // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ThirdPartyErrorCode;                                      // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkLoginResult
// 0x0068 (0x0098 - 0x0030)
struct FSharkLoginResult : public FSharkAccountActionResult
{
	struct FString                                     UserName;                                                 // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OpenId;                                                   // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                    // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PfKey;                                                    // 0x0060(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Pf;                                                       // 0x0070(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SharkmobToken;                                            // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EShAccountChannel                                  AuthenticationChannelId;                                  // 0x0090(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsNewAccount;                                             // 0x0091(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
};

// ScriptStruct Shark.SharkAccountRegistrationData
// 0x0050
struct FSharkAccountRegistrationData
{
	struct FString                                     Email;                                                    // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                 // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RegionId;                                                 // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     UserName;                                                 // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     VerificationCode;                                         // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RecieveEmail;                                             // 0x0048(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Shark.SharkRoundRobinClassSettings
// 0x0030
struct FSharkRoundRobinClassSettings
{
	TSoftClassPtr<class UClass>                        Class;                                                    // 0x0000(0x0028) (CPF_Edit, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETickingGroup>                         TickingGroup;                                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	uint32_t                                           FramesBetweenUpdates;                                     // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemetrySettings
// 0x0050
struct FSharkTelemetrySettings
{
	struct FString                                     DomainURL;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SecretKey;                                                // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ApplicationName;                                          // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ApplicationID;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                DefaultRequestRetryCount;                                 // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ChunkDispatchMaxBodySizeBytes;                            // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                ChunkDispatchAmountThreshold;                             // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ChunkDispatchTimeSecondsThreshold;                        // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemtryEventData
// 0x0028
struct FSharkTelemtryEventData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UStruct*                                     StaticPropertyStruct;                                     // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Shark.SharkUserId
// 0x0010
struct FSharkUserId
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Shark.SharkRandomDeviation
// 0x0008
struct FSharkRandomDeviation
{
	float                                              Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkInt8Vector
// 0x0003
struct FSharkInt8Vector
{
	int8_t                                             X;                                                        // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             Y;                                                        // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int8_t                                             Z;                                                        // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTokenBucket
// 0x000C
struct FSharkTokenBucket
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              Capacity;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	float                                              TokenFillRatePerSecond;                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
};

// ScriptStruct Shark.SharkRandomDeviationInt
// 0x0008
struct FSharkRandomDeviationInt
{
	int                                                Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemetryEventBase
// 0x0008
struct FSharkTelemetryEventBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Shark.SharkTelemetryDateTime
// 0x0001
struct FSharkTelemetryDateTime
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Shark.ShMapInfo
// 0x0010
struct FShMapInfo
{
	struct FString                                     sacc_token;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.ShChannelInfo
// 0x0010
struct FShChannelInfo
{
	struct FShMapInfo                                  map_info;                                                 // 0x0000(0x0010) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkGameInstanceId
// 0x0010
struct FSharkGameInstanceId
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Shark.SharkServerMetricsConfig
// 0x0028
struct FSharkServerMetricsConfig
{
	float                                              UploadIntervalSeconds;                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     UploadURI;                                                // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Database;                                                 // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequestHeader
// 0x0080
struct FSharkTelemetryHTTPSRequestHeader
{
	struct FString                                     app_id;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     app_name;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     seq_id;                                                   // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     retry_times;                                              // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     key_x;                                                    // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     key_y;                                                    // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     key_z;                                                    // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemetryHTTPSResponseDataChunk
// 0x0018
struct FSharkTelemetryHTTPSResponseDataChunk
{
	int                                                code;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Msg;                                                      // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemetryHTTPSResponse
// 0x0098
struct FSharkTelemetryHTTPSResponse
{
	struct FSharkTelemetryHTTPSRequestHeader           Title;                                                    // 0x0000(0x0080) (CPF_NativeAccessSpecifierPublic)
	struct FSharkTelemetryHTTPSResponseDataChunk       Data;                                                     // 0x0080(0x0018) (CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequestDataChunk
// 0x0020
struct FSharkTelemetryHTTPSRequestDataChunk
{
	struct FString                                     log_name;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     log_fields;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemetryDataBundle
// 0x0010
struct FSharkTelemetryDataBundle
{
	TArray<struct FSharkTelemetryHTTPSRequestDataChunk> Data;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequest
// 0x0090
struct FSharkTelemetryHTTPSRequest
{
	struct FSharkTelemetryHTTPSRequestHeader           Title;                                                    // 0x0000(0x0080) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FSharkTelemetryHTTPSRequestDataChunk> Data;                                                     // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
