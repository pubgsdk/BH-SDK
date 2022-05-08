#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EOSSDK_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EOSSDK.EOSSdkSettings
// 0x0020 (0x0058 - 0x0038)
class UEOSSdkSettings : public UDeveloperSettings
{
public:
	struct FString                                     ProductName;                                              // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ProductVersion;                                           // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EOSSDK.EOSSdkSettings"));
		return ptr;
	}

};


// Class EOSSDK.EOSPlatformClientSettings
// 0x0020 (0x0058 - 0x0038)
class UEOSPlatformClientSettings : public UDeveloperSettings
{
public:
	struct FString                                     ClientId;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ClientSecret;                                             // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EOSSDK.EOSPlatformClientSettings"));
		return ptr;
	}

};


// Class EOSSDK.EOSPlatformSettings
// 0x0040 (0x0078 - 0x0038)
class UEOSPlatformSettings : public UDeveloperSettings
{
public:
	struct FString                                     DeploymentId;                                             // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     EncryptionKey;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ProductId;                                                // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SandboxId;                                                // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EOSSDK.EOSPlatformSettings"));
		return ptr;
	}

};


// Class EOSSDK.EOSUserComponent
// 0x0088 (0x0138 - 0x00B0)
class UEOSUserComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00B0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EOSSDK.EOSUserComponent"));
		return ptr;
	}


	void Server_ReceiveConnectInfo(const struct FString& InToken, const struct FString& InID);
	void Server_ReceiveAntiCheatData(TArray<unsigned char> InByteArray);
	void Client_RequestConnectInfo();
	void Client_ReceiveAntiCheatData(TArray<unsigned char> InByteArray);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
