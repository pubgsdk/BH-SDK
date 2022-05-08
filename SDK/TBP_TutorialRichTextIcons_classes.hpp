#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TutorialRichTextIcons_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TutorialRichTextIcons.TBP_TutorialRichTextIcons_C
// 0x0000 (0x0030 - 0x0030)
class UTBP_TutorialRichTextIcons_C : public URichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_TutorialRichTextIcons.TBP_TutorialRichTextIcons_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
