// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RewardCatalogueGrid_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RewardCatalogueGrid.TBP_UI_RewardCatalogueGrid_C.UpdateAllRewards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueGrid_C::UpdateAllRewards()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueGrid.TBP_UI_RewardCatalogueGrid_C.UpdateAllRewards"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueGrid.TBP_UI_RewardCatalogueGrid_C.AddReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InChallenge                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* InReward                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_RewardCatalogueItem_C* OutItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardCatalogueGrid_C::AddReward(class UTigerChallenge* InChallenge, class UTigerInventoryItemBase* InReward, class UTBP_UI_RewardCatalogueItem_C** OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueGrid.TBP_UI_RewardCatalogueGrid_C.AddReward"));

	struct
	{
		class UTigerChallenge*         InChallenge;
		class UTigerInventoryItemBase* InReward;
		class UTBP_UI_RewardCatalogueItem_C* OutItem;
	} params = {};

	params.InChallenge = InChallenge;
	params.InReward = InReward;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
