#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "TigerVoip_enums.hpp"
#include "DeveloperSettings_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TigerVoip.TigerPersistentVoipID
// 0x0010
struct FTigerPersistentVoipID
{
	struct FString                                     UniqueID;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
