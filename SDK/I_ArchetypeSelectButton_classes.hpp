#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "I_ArchetypeSelectButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass I_ArchetypeSelectButton.I_ArchetypeSelectButton_C
// 0x0000 (0x0028 - 0x0028)
class UI_ArchetypeSelectButton_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass I_ArchetypeSelectButton.I_ArchetypeSelectButton_C"));
		return ptr;
	}


	void SetIsDeselected();
	void SetIsSelected();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
