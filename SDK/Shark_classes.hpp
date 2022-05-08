#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Shark_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Shark.SharkLocalDeveloperSettings
// 0x0000 (0x0038 - 0x0038)
class USharkLocalDeveloperSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkLocalDeveloperSettings"));
		return ptr;
	}

};


// Class Shark.SharkA2SProtocolHandler
// 0x0098 (0x00C8 - 0x0030)
class USharkA2SProtocolHandler : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkA2SProtocolHandler"));
		return ptr;
	}

};


// Class Shark.SharkLoginHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class USharkLoginHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkLoginHelperLibrary"));
		return ptr;
	}


	static struct FString GetErrorMessage(const struct FSharkLoginResult& InLoginResult);
};


// Class Shark.SharkAccounts
// 0x0068 (0x0090 - 0x0028)
class USharkAccounts : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	class UShAccountSettings*                          Settings;                                                 // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkAccounts"));
		return ptr;
	}


	void SharkUsernameRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, const struct FString& InUsername);
	void SharkLoginCallback__DelegateSignature(const struct FSharkLoginResult& InResult);
	void SharkEmailRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bInRegistered, const struct FString& InEmail);
	void SharkAccountActionCallback__DelegateSignature(const struct FSharkAccountActionResult& InResult);
	void SendRegistrationVerificationCode(const struct FString& InEmail, const struct FScriptDelegate& InCallback);
	void RegisterAndLogin(const struct FSharkAccountRegistrationData& InRegistrationData, const struct FScriptDelegate& InCallback);
	void QueryUsernameRegisterStatus(const struct FString& InUsername, const struct FScriptDelegate& InCallback);
	void QueryEmailRegisterStatus(const struct FString& InEmail, const struct FScriptDelegate& InCallback);
	void PlatformLogin(const struct FScriptDelegate& InCallback, bool bIsSharkmobAccountLoginEnabled);
	void Login(const struct FString& InEmail, const struct FString& InPassword, const struct FScriptDelegate& InCallback);
};


// Class Shark.ShAccountSettings
// 0x0028 (0x0060 - 0x0038)
class UShAccountSettings : public UDeveloperSettings
{
public:
	bool                                               LogEnabled;                                               // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     SandboxUrl;                                               // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ProductionUrl;                                            // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.ShAccountSettings"));
		return ptr;
	}

};


// Class Shark.SharkBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USharkBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkBlueprintFunctionLibrary"));
		return ptr;
	}


	static void UnregisterApplicationHasReactivatedForSelf(class UObject* InSelf);
	static void SetCustomPrimitiveDataVector4(class UPrimitiveComponent* PrimitiveComponent, ESharkCustomPrimitiveVector4DataName CustomDataName, const struct FVector4& Value, bool bDoRuntimeUpdate);
	static void SetCustomPrimitiveDataVector3(class UPrimitiveComponent* PrimitiveComponent, ESharkCustomPrimitiveVector3DataName CustomDataName, const struct FVector& Value, bool bDoRuntimeUpdate);
	static void SetCustomPrimitiveDataVector2(class UPrimitiveComponent* PrimitiveComponent, ESharkCustomPrimitiveVector2DataName CustomDataName, const struct FVector2D& Value, bool bDoRuntimeUpdate);
	static void SetCustomPrimitiveDataFloat(class UPrimitiveComponent* PrimitiveComponent, ESharkCustomPrimitiveFloatDataName CustomDataName, float Value, bool bDoRuntimeUpdate);
	static void SetCastDynamicShadows(class UPrimitiveComponent* InPrimitiveComponent, bool InValue);
	static void RegisterApplicationHasReactivated(const struct FScriptDelegate& InDelegate);
	void OnAssetsLoaded__DelegateSignature(TArray<class UObject*> InLoadedObjects);
	static void LoadMultipleObjectsAsync(TArray<TSoftObjectPtr<class UObject>> SoftObjects, const struct FScriptDelegate& OnLoaded);
	static ESharkPlatformType GetPlatformType();
	static int GetNumMips(class UTexture2D* InTexture);
	void ApplicationLifetimeDelegate__DelegateSignature();
};


// Class Shark.ShOnlineServerSettings
// 0x0058 (0x0090 - 0x0038)
class UShOnlineServerSettings : public UDeveloperSettings
{
public:
	struct FString                                     ServerSecretDev;                                          // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     ServerSecretUat;                                          // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     ServerSecretProd;                                         // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     ServerSecretLocal;                                        // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     ServerSecretTracker;                                      // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	uint32_t                                           SeasonConfigId;                                           // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.ShOnlineServerSettings"));
		return ptr;
	}

};


// Class Shark.SharkOnlineSettings
// 0x0040 (0x0078 - 0x0038)
class USharkOnlineSettings : public UDeveloperSettings
{
public:
	float                                              MaximumRetryDelaySeconds;                                 // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     AccountRecoverUriProd;                                    // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FString                                     AccountRecoverUriUat;                                     // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FString                                     AccountRecoverUriDev;                                     // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                MinimumAccountCreationAge;                                // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	int                                                PartyMaintenancePollIntervalSeconds;                      // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkOnlineSettings"));
		return ptr;
	}

};


// Class Shark.SharkPlatformSettings
// 0x0008 (0x0040 - 0x0038)
class USharkPlatformSettings : public USharkLocalDeveloperSettings
{
public:
	ESharkPlatformType                                 PlatformType;                                             // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkPlatformSettings"));
		return ptr;
	}

};


// Class Shark.SharkRenderingSettings
// 0x01C0 (0x01F8 - 0x0038)
class USharkRenderingSettings : public UDeveloperSettings
{
public:
	int                                                CustomPrimitiveFloatDataNameMapping[0x3A];                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CustomPrimitiveVector2DataNameMapping[0x13];              // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CustomPrimitiveVector3DataNameMapping[0x19];              // 0x016C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CustomPrimitiveVector4DataNameMapping[0x9];               // 0x01D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkRenderingSettings"));
		return ptr;
	}

};


// Class Shark.SharkRoundRobinSettings
// 0x0018 (0x0050 - 0x0038)
class USharkRoundRobinSettings : public UDeveloperSettings
{
public:
	bool                                               bEnabled;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FSharkRoundRobinClassSettings>       GroupSettings;                                            // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkRoundRobinSettings"));
		return ptr;
	}

};


// Class Shark.SharkRoundRobinSubsystem
// 0x0090 (0x00C0 - 0x0030)
class USharkRoundRobinSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkRoundRobinSubsystem"));
		return ptr;
	}

};


// Class Shark.SharkServerMetrics
// 0x00B0 (0x00E0 - 0x0030)
class USharkServerMetrics : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkServerMetrics"));
		return ptr;
	}

};


// Class Shark.SharkTelemetry
// 0x00E8 (0x0110 - 0x0028)
class USharkTelemetry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FSharkTelemetrySettings                     TelemetryApplicationSettings;                             // 0x0038(0x0050) (CPF_Config, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	TArray<struct FSharkTelemtryEventData>             BufferedEvents;                                           // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00B0(0x0050) MISSED OFFSET
	class UGameInstance*                               GameInstance;                                             // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.SharkTelemetry"));
		return ptr;
	}

};


// Class Shark.ShUserSecrets
// 0x0000 (0x0028 - 0x0028)
class UShUserSecrets : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Shark.ShUserSecrets"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
