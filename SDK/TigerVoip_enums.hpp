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

// Enum TigerVoip.ETalkingVisiblityState
enum class ETalkingVisiblityState : uint8_t
{
	ETalkingVisiblityState__UnableToCommunicate = 0,
	ETalkingVisiblityState__NotTalking = 1,
	ETalkingVisiblityState__Talking = 2,
	ETalkingVisiblityState__Blocked = 3,
	ETalkingVisiblityState__ETalkingVisiblityState_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
