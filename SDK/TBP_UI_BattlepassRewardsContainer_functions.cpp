// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BattlepassRewardsContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.CreateOrGetChildWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInIsUnlocked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            InRank                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InIsFree                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_BattlepassReward_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTBP_UI_BattlepassReward_C* UTBP_UI_BattlepassRewardsContainer_C::CreateOrGetChildWidget(const struct FTigerItemId& InItemId, bool bInIsUnlocked, int InRank, int InIndex, bool InIsFree)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.CreateOrGetChildWidget"));

	struct
	{
		struct FTigerItemId            InItemId;
		bool                           bInIsUnlocked;
		int                            InRank;
		int                            InIndex;
		bool                           InIsFree;
		class UTBP_UI_BattlepassReward_C* ReturnValue;
	} params = {};

	params.InItemId = InItemId;
	params.bInIsUnlocked = bInIsUnlocked;
	params.InRank = InRank;
	params.InIndex = InIndex;
	params.InIsFree = InIsFree;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.Clear Widgets if Needed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerItemId>    InItemArray                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_BattlepassRewardsContainer_C::Clear_Widgets_if_Needed(TArray<struct FTigerItemId> InItemArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.Clear Widgets if Needed"));

	struct
	{
		TArray<struct FTigerItemId>    InItemArray;
	} params = {};

	params.InItemArray = InItemArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.SetUnlockedState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUnlocked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassRewardsContainer_C::SetUnlockedState(bool bIsUnlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.SetUnlockedState"));

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


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PopulateRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerItemId>    ItemIds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bIsUnlocked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsFree                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            InRank                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassRewardsContainer_C::PopulateRewards(bool bIsUnlocked, bool IsFree, int InRank, TArray<struct FTigerItemId>* ItemIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PopulateRewards"));

	struct
	{
		TArray<struct FTigerItemId>    ItemIds;
		bool                           bIsUnlocked;
		bool                           IsFree;
		int                            InRank;
	} params = {};

	params.bIsUnlocked = bIsUnlocked;
	params.IsFree = IsFree;
	params.InRank = InRank;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ItemIds != nullptr)
		*ItemIds = params.ItemIds;
}


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassRewardsContainer_C::ItemHovered(const struct FTigerItemId& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemHovered"));

	struct
	{
		struct FTigerItemId            ItemId;
	} params = {};

	params.ItemId = ItemId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassRewardsContainer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PreConstruct"));

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


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassRewardsContainer_C::ItemSelected(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemSelected"));

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


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassRewardsContainer_C::ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer"));

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


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BattlepassRewardsContainer_C::OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemSelected__DelegateSignature"));

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


// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Item_Is_Free                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BattlepassRewardsContainer_C::OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId, bool Item_Is_Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemHovered__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
