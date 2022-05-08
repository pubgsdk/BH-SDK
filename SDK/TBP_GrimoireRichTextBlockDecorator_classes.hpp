#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GrimoireRichTextBlockDecorator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_GrimoireRichTextBlockDecorator.TBP_GrimoireRichTextBlockDecorator_C
// 0x0000 (0x0810 - 0x0810)
class UTBP_GrimoireRichTextBlockDecorator_C : public UTigerGrimoireRichBlockDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_GrimoireRichTextBlockDecorator.TBP_GrimoireRichTextBlockDecorator_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
