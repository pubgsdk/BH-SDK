#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "SharkPaymentSDK_enums.hpp"
#include "DeveloperSettings_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SharkPaymentSDK.ShReponse_Finalize
// 0x0010
struct FShReponse_Finalize
{
	struct FString                                     Status;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SharkPaymentSDK.ShRequest_Finalize
// 0x0020
struct FShRequest_Finalize
{
	struct FString                                     Ticket;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TransactionId;                                            // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SharkPaymentSDK.ShResponse_CreateTicket
// 0x0010
struct FShResponse_CreateTicket
{
	struct FString                                     Ticket;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SharkPaymentSDK.ShRequest_CreateTicket
// 0x0038
struct FShRequest_CreateTicket
{
	struct FString                                     AppId;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     userId;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     AuthCode;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      PlatformBackend;                                          // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
