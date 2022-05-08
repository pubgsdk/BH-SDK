#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_ChatWIndow_Owner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_ChatWIndow_Owner.BPI_ChatWIndow_Owner_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_ChatWIndow_Owner_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_ChatWIndow_Owner.BPI_ChatWIndow_Owner_C"));
		return ptr;
	}


	void OnMessageInput(const struct FText& MessageText, bool OnlyGroup);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
