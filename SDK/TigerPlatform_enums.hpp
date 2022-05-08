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

// Enum TigerPlatform.ETigerPlatformRestrictedAction
enum class ETigerPlatformRestrictedAction : uint8_t
{
	ETigerPlatformRestrictedAction__OpenChat = 0,
	ETigerPlatformRestrictedAction__EnableVoip = 1,
	ETigerPlatformRestrictedAction__ETigerPlatformRestrictedAction_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
