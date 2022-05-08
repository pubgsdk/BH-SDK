// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RewardPreview_Tattoo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RewardPreview_Tattoo.TBP_RewardPreview_Tattoo_C.ApplyItemToPaperdoll
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPreviewerData     InPreviewAppearance            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerClan                     InClanType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_RewardPreview_Tattoo_C::ApplyItemToPaperdoll(const struct FTigerPreviewerData& InPreviewAppearance, ETigerClan InClanType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Tattoo.TBP_RewardPreview_Tattoo_C.ApplyItemToPaperdoll"));

	struct
	{
		struct FTigerPreviewerData     InPreviewAppearance;
		ETigerClan                     InClanType;
	} params = {};

	params.InPreviewAppearance = InPreviewAppearance;
	params.InClanType = InClanType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Tattoo.TBP_RewardPreview_Tattoo_C.TryWithPlayerAppearance
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_RewardPreview_Tattoo_C::TryWithPlayerAppearance(bool* bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Tattoo.TBP_RewardPreview_Tattoo_C.TryWithPlayerAppearance"));

	struct
	{
		bool                           bWasSuccessful;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bWasSuccessful != nullptr)
		*bWasSuccessful = params.bWasSuccessful;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
