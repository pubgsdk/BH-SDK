// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PostMatch_Rewards_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.HasRewardsToHandout
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasRewards                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PostMatch_Rewards_C::HasRewardsToHandout(bool* HasRewards)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.HasRewardsToHandout"));

	struct
	{
		bool                           HasRewards;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasRewards != nullptr)
		*HasRewards = params.HasRewards;
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.SetPageNumber
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::SetPageNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.SetPageNumber"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.CollectBattlepassRewards
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::CollectBattlepassRewards()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.CollectBattlepassRewards"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.OnRewardLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PostMatch_Rewards_C::OnRewardLoaded(const struct FTigerItemId& ItemId, class UTigerInventoryItemBase* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.OnRewardLoaded"));

	struct
	{
		struct FTigerItemId            ItemId;
		class UTigerInventoryItemBase* InventoryItem;
	} params = {};

	params.ItemId = ItemId;
	params.InventoryItem = InventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Select Reward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::Select_Reward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Select Reward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.NextReward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::NextReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.NextReward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.PreviousReward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::PreviousReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.PreviousReward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PostMatch_Rewards_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Enable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::Enable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Enable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.ShowRewardAtIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PostMatch_Rewards_C::ShowRewardAtIndex(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.ShowRewardAtIndex"));

	struct
	{
		int                            InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.OnPageClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PageIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PostMatch_Rewards_C::OnPageClicked(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.OnPageClicked"));

	struct
	{
		int                            PageIndex;
	} params = {};

	params.PageIndex = PageIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.BndEvt__TBP_UI_PostMatch_Rewards_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::BndEvt__TBP_UI_PostMatch_Rewards_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.BndEvt__TBP_UI_PostMatch_Rewards_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.BndEvt__TBP_UI_PostMatch_Rewards_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_PostMatch_Rewards_C::BndEvt__TBP_UI_PostMatch_Rewards_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.BndEvt__TBP_UI_PostMatch_Rewards_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Deselect Reward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PostMatch_Rewards_C::Deselect_Reward(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.Deselect Reward"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.ExecuteUbergraph_TBP_UI_PostMatch_Rewards
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PostMatch_Rewards_C::ExecuteUbergraph_TBP_UI_PostMatch_Rewards(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PostMatch_Rewards.TBP_UI_PostMatch_Rewards_C.ExecuteUbergraph_TBP_UI_PostMatch_Rewards"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
