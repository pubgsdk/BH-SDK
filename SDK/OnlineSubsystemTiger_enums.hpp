#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemTiger.ETigerMatchResult
enum class ETigerMatchResult : uint8_t
{
	ETigerMatchResult__Success     = 0,
	ETigerMatchResult__Failure     = 1,
	ETigerMatchResult__Timeout     = 2,
	ETigerMatchResult__Unavailable = 3,
	ETigerMatchResult__KeyNotFound = 4,
	ETigerMatchResult__Count       = 5,
	ETigerMatchResult__ETigerMatchResult_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
