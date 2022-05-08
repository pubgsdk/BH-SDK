#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RichTextBlockIconDecorator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C
// 0x0000 (0x0050 - 0x0050)
class UTBP_RichTextBlockIconDecorator_C : public UTigerRichTextBlockIconDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C"));
		return ptr;
	}


	struct FSlateBrush GetBrushForKeyInternal(const struct FKey& InKey);
	struct FSlateBrush GetBrushForAxisInternal(const struct FName& InName, float InScale);
	struct FSlateBrush GetBrushForActionInternal(const struct FName& InName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
