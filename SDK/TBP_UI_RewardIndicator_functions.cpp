// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RewardIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RewardIndicator.TBP_UI_RewardIndicator_C.SetLockStatus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsLocked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RewardIndicator_C::SetLockStatus(bool InIsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardIndicator.TBP_UI_RewardIndicator_C.SetLockStatus"));

	struct
	{
		bool                           InIsLocked;
	} params = {};

	params.InIsLocked = InIsLocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardIndicator.TBP_UI_RewardIndicator_C.SetRewardAmount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InAmount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardIndicator_C::SetRewardAmount(int InAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardIndicator.TBP_UI_RewardIndicator_C.SetRewardAmount"));

	struct
	{
		int                            InAmount;
	} params = {};

	params.InAmount = InAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardIndicator.TBP_UI_RewardIndicator_C.SetReward
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardIndicator_C::SetReward(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardIndicator.TBP_UI_RewardIndicator_C.SetReward"));

	struct
	{
		class UTigerInventoryItemBase* InItem;
	} params = {};

	params.InItem = InItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
