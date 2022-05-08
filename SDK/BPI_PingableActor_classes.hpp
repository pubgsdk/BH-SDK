#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_PingableActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_PingableActor.BPI_PingableActor_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_PingableActor_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_PingableActor.BPI_PingableActor_C"));
		return ptr;
	}


	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void GetPingCategory(struct FName* OutCategory);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
