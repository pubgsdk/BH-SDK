#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "OnlineSubsystemSharkmob_enums.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemSharkmob.AccountRegistrationDataSharkmob
// 0x0050
struct FAccountRegistrationDataSharkmob
{
	struct FString                                     Email;                                                    // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                 // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                RegionId;                                                 // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     UserName;                                                 // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     VerificationCode;                                         // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               RecieveNewsletterEmail;                                   // 0x0048(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemSharkmob.LoginResultSharkmob
// 0x0060 (0x00B0 - 0x0050)
struct FLoginResultSharkmob : public FAccountRegistrationDataSharkmob
{
	struct FString                                     OpenId;                                                   // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                    // 0x0060(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     PfKey;                                                    // 0x0070(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Pf;                                                       // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SharkmobToken;                                            // 0x0090(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OSSValue;                                                 // 0x00A0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemSharkmob.INTLMapInfoSharkmob
// 0x0010
struct FINTLMapInfoSharkmob
{
	struct FString                                     sacc_token;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemSharkmob.INTLChannelInfoSharkmob
// 0x0040
struct FINTLChannelInfoSharkmob
{
	struct FString                                     steamid;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     userId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     issuerId;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FINTLMapInfoSharkmob                        map_info;                                                 // 0x0030(0x0010) (CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
