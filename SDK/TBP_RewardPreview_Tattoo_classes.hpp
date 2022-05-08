#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RewardPreview_Tattoo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_RewardPreview_Tattoo.TBP_RewardPreview_Tattoo_C
// 0x0038 (0x02E8 - 0x02B0)
class ATBP_RewardPreview_Tattoo_C : public ATBP_RewardPreview_Outfit_C
{
public:
	TArray<struct FS_ItemPreview_Tattoo>               OutfitPerClanAndGender;                                   // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TSoftClassPtr<class UClass>                        OutfitConfigOverride;                                     // 0x02C0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_RewardPreview_Tattoo.TBP_RewardPreview_Tattoo_C"));
		return ptr;
	}


	void ApplyItemToPaperdoll(const struct FTigerPreviewerData& InPreviewAppearance, ETigerClan InClanType);
	void TryWithPlayerAppearance(bool* bWasSuccessful);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
