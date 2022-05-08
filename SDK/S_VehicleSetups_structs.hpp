#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct S_VehicleSetups.S_VehicleSetups
// 0x0018
struct FS_VehicleSetups
{
	class UStaticMesh*                                 Body_3_A04B70E042B135A23872E8B70E7D55A2;                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Bounceable_30_EBFA565D42EBC605F3435F98FCECB5B3;           // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Squashable_31_717BD8EB42FF2C36933991B279F8ADEA;           // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HasCarAlarm_55_7E456DA1487E28ADE885D7BF01B64C80;          // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanBeTinted_71_FCFC5C134DA5673ED9CCD1BA11F8E37B;          // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass* /*AActor*/                           LootableAsset_151_63BA99FC4FD0082BFE30C8954629978D;       // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
