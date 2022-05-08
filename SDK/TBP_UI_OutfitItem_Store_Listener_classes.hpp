#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_OutfitItem_Store_Listener_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C
// 0x0000 (0x0028 - 0x0028)
class UTBP_UI_OutfitItem_Store_Listener_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_UI_OutfitItem_Store_Listener.TBP_UI_OutfitItem_Store_Listener_C"));
		return ptr;
	}


	void OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem);
	void OnItemUnhovered();
	void OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store);
	void OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
