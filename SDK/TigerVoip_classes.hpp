#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerVoip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TigerVoip.TigerVoipTencentBackendSettings
// 0x0080 (0x00B8 - 0x0038)
class UTigerVoipTencentBackendSettings : public UDeveloperSettings
{
public:
	struct FString                                     GMEAppId;                                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GMEAppKey;                                                // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GMEAppIdCertification;                                    // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GMEAppKeyCertification;                                   // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GMEAppIdDevelopment;                                      // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GMEAppKeyDevelopment;                                     // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GMEAppIdProduction;                                       // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GMEAppKeyProduction;                                      // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_EditConst, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TigerVoip.TigerVoipTencentBackendSettings"));
		return ptr;
	}

};


// Class TigerVoip.TigerVoipTalkerState
// 0x0080 (0x00A8 - 0x0028)
class UTigerVoipTalkerState : public UObject
{
public:
	struct FMulticastScriptDelegate                    InputDeviceChanged;                                       // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	struct FMulticastScriptDelegate                    OutputDeviceChanged;                                      // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0048(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TigerVoip.TigerVoipTalkerState"));
		return ptr;
	}


	void VoipDeviceChanged__DelegateSignature();
	bool IsPlayerTalking(const struct FTigerPersistentVoipID& InPlayerId);
	bool IsPlayerBlocked(const struct FTigerPersistentVoipID& InPlayerId);
	bool HasAcknowledgedPlayerHasJoined(const struct FTigerPersistentVoipID& InPlayerId);
	TArray<struct FText> GetOutputDevices();
	TArray<struct FText> GetInputDevices();
	bool AcknowledgedPlayerHasJoined(const struct FTigerPersistentVoipID& InPlayerId, bool bInReset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
