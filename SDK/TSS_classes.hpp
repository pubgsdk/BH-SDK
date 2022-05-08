#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TSS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TSS.TSSSdkTicker
// 0x0018 (0x0040 - 0x0028)
class UTSSSdkTicker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TSS.TSSSdkTicker"));
		return ptr;
	}

};


// Class TSS.TSSClientComponent
// 0x0058 (0x0108 - 0x00B0)
class UTSSClientComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TSS.TSSClientComponent"));
		return ptr;
	}

};


// Class TSS.TssSDKSettings
// 0x0018 (0x0050 - 0x0038)
class UTssSDKSettings : public UDeveloperSettings
{
public:
	uint32_t                                           GameID;                                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     AuthToken;                                                // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TSS.TssSDKSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
