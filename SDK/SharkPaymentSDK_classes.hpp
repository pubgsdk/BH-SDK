#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SharkPaymentSDK_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SharkPaymentSDK.ShPaymentSettings
// 0x0058 (0x0090 - 0x0038)
class UShPaymentSettings : public UDeveloperSettings
{
public:
	struct FString                                     IdcInfo;                                                  // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     OfferId;                                                  // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ZoneId;                                                   // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GoodsZoneId;                                              // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ProvideType;                                              // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               LogEnabled;                                               // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SharkPaymentSDK.ShPaymentSettings"));
		return ptr;
	}

};


// Class SharkPaymentSDK.ShStoreService
// 0x0068 (0x0090 - 0x0028)
class UShStoreService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SharkPaymentSDK.ShStoreService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
