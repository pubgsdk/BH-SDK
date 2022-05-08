#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OnlineSubsystemTiger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemTiger.TigerOnlineSubsystemSettings
// 0x0098 (0x00D0 - 0x0038)
class UTigerOnlineSubsystemSettings : public UDeveloperSettings
{
public:
	struct FString                                     OnlineServicesBaseUrlDev;                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlUatMain;                             // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlUatRelease;                          // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlUatPs5;                              // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlUatStaging;                          // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlProd;                                // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlLocal;                               // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SessionServiceUri;                                        // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MaxRequestRetries;                                        // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                MatchmakingTimeoutSeconds;                                // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DsVersion;                                                // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OnlineSubsystemTiger.TigerOnlineSubsystemSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
