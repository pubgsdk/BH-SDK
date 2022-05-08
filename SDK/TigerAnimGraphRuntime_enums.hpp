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

// Enum TigerAnimGraphRuntime.ETigerBoolSettleTriggerDirection
enum class ETigerBoolSettleTriggerDirection : uint8_t
{
	ETigerBoolSettleTriggerDirection__TriggerOnTrue = 0,
	ETigerBoolSettleTriggerDirection__TriggerOnFalse = 1,
	ETigerBoolSettleTriggerDirection__TriggerOnBoth = 2,
	ETigerBoolSettleTriggerDirection__ETigerBoolSettleTriggerDirection_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
