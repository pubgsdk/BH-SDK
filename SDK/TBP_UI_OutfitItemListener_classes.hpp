#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_OutfitItemListener_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C
// 0x0000 (0x0028 - 0x0028)
class UTBP_UI_OutfitItemListener_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_UI_OutfitItemListener.TBP_UI_OutfitItemListener_C"));
		return ptr;
	}


	void OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem);
	void OnItemUnhovered();
	void OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_C* OutfitItem);
	void OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
