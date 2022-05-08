// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BattlepassTierContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetRewardAtIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InRewardIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsFree                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_BattlepassReward_C* OutReward                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassTierContainer_C::GetRewardAtIndex(int InRewardIndex, bool bIsFree, class UTBP_UI_BattlepassReward_C** OutReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetRewardAtIndex"));

	struct
	{
		int                            InRewardIndex;
		bool                           bIsFree;
		class UTBP_UI_BattlepassReward_C* OutReward;
	} params = {};

	params.InRewardIndex = InRewardIndex;
	params.bIsFree = bIsFree;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutReward != nullptr)
		*OutReward = params.OutReward;
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstPremiumReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_BattlepassReward_C* OutFirstFreeReward             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassTierContainer_C::GetFirstPremiumReward(class UTBP_UI_BattlepassReward_C** OutFirstFreeReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstPremiumReward"));

	struct
	{
		class UTBP_UI_BattlepassReward_C* OutFirstFreeReward;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutFirstFreeReward != nullptr)
		*OutFirstFreeReward = params.OutFirstFreeReward;
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstFreeReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_BattlepassReward_C* OutFirstFreeReward             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassTierContainer_C::GetFirstFreeReward(class UTBP_UI_BattlepassReward_C** OutFirstFreeReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstFreeReward"));

	struct
	{
		class UTBP_UI_BattlepassReward_C* OutFirstFreeReward;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutFirstFreeReward != nullptr)
		*OutFirstFreeReward = params.OutFirstFreeReward;
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetLastReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_BattlepassReward_C* OutLastChild                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassTierContainer_C::GetLastReward(class UTBP_UI_BattlepassReward_C** OutLastChild)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetLastReward"));

	struct
	{
		class UTBP_UI_BattlepassReward_C* OutLastChild;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutLastChild != nullptr)
		*OutLastChild = params.OutLastChild;
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_BattlepassReward_C* OutFirstChild                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassTierContainer_C::GetFirstReward(class UTBP_UI_BattlepassReward_C** OutFirstChild)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstReward"));

	struct
	{
		class UTBP_UI_BattlepassReward_C* OutFirstChild;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutFirstChild != nullptr)
		*OutFirstChild = params.OutFirstChild;
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUnlocked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassTierContainer_C::UpdateHeader(bool bIsUnlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateHeader"));

	struct
	{
		bool                           bIsUnlocked;
	} params = {};

	params.bIsUnlocked = bIsUnlocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PopulateRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_BattlepassRewardsContainer_C* InRewardsContainer             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerItemId>    ItemIds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bIsUnlocked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsFree                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassTierContainer_C::PopulateRewards(class UTBP_UI_BattlepassRewardsContainer_C* InRewardsContainer, bool bIsUnlocked, bool IsFree, TArray<struct FTigerItemId>* ItemIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PopulateRewards"));

	struct
	{
		class UTBP_UI_BattlepassRewardsContainer_C* InRewardsContainer;
		TArray<struct FTigerItemId>    ItemIds;
		bool                           bIsUnlocked;
		bool                           IsFree;
	} params = {};

	params.InRewardsContainer = InRewardsContainer;
	params.bIsUnlocked = bIsUnlocked;
	params.IsFree = IsFree;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemIds != nullptr)
		*ItemIds = params.ItemIds;
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.Update Tier Collections
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsUnlocked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<class UTigerClientSeasonalRewardTier*> InTiers                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bWantsDoubleSize               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassTierContainer_C::Update_Tier_Collections(bool bInIsUnlocked, TArray<class UTigerClientSeasonalRewardTier*>* InTiers, bool* bWantsDoubleSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.Update Tier Collections"));

	struct
	{
		bool                           bInIsUnlocked;
		TArray<class UTigerClientSeasonalRewardTier*> InTiers;
		bool                           bWantsDoubleSize;
	} params = {};

	params.bInIsUnlocked = bInIsUnlocked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InTiers != nullptr)
		*InTiers = params.InTiers;
	if (bWantsDoubleSize != nullptr)
		*bWantsDoubleSize = params.bWantsDoubleSize;
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassTierContainer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ItemSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassTierContainer_C::ItemSelected(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ItemSelected"));

	struct
	{
		struct FTigerItemId            InItemId;
	} params = {};

	params.InItemId = InItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ItemHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Item_Is_Free                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassTierContainer_C::ItemHovered(const struct FTigerItemId& ItemId, bool Item_Is_Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ItemHovered"));

	struct
	{
		struct FTigerItemId            ItemId;
		bool                           Item_Is_Free;
	} params = {};

	params.ItemId = ItemId;
	params.Item_Is_Free = Item_Is_Free;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.Update XP Bar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BattlepassTierContainer_C::Update_XP_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.Update XP Bar"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ExecuteUbergraph_TBP_UI_BattlepassTierContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassTierContainer_C::ExecuteUbergraph_TBP_UI_BattlepassTierContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ExecuteUbergraph_TBP_UI_BattlepassTierContainer"));

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


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Item_Rank                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassTierContainer_C::OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId, int Item_Rank)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemSelected__DelegateSignature"));

	struct
	{
		struct FTigerItemId            InItemId;
		int                            Item_Rank;
	} params = {};

	params.InItemId = InItemId;
	params.Item_Rank = Item_Rank;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Item_Rank                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Item_Is_Free                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassTierContainer_C::OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId, int Item_Rank, bool Item_Is_Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemHovered__DelegateSignature"));

	struct
	{
		struct FTigerItemId            ItemId;
		int                            Item_Rank;
		bool                           Item_Is_Free;
	} params = {};

	params.ItemId = ItemId;
	params.Item_Rank = Item_Rank;
	params.Item_Is_Free = Item_Is_Free;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
