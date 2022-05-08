// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Battlepass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatePreviewAvatarAndBanner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InPreviewItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::UpdatePreviewAvatarAndBanner(class UTigerInventoryItemBase* InPreviewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatePreviewAvatarAndBanner"));

	struct
	{
		class UTigerInventoryItemBase* InPreviewItem;
	} params = {};

	params.InPreviewItem = InPreviewItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateBattlePassTrack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::UpdateBattlePassTrack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateBattlePassTrack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On_GamePadClickCatcher_MouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_Battlepass_C::On_GamePadClickCatcher_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On_GamePadClickCatcher_MouseButtonDown_1"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.HandleStickScroll
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::HandleStickScroll(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.HandleStickScroll"));

	struct
	{
		float                          InDeltaTime;
	} params = {};

	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatedPreviewImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::UpdatedPreviewImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatedPreviewImage"));

	struct
	{
		class UTexture2D*              Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* PreviewItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* CombinedItem_Parent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_UI_Battlepass_C::GetItemType(class UTigerInventoryItemBase* PreviewItem, class UTigerInventoryItemBase* CombinedItem_Parent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemType"));

	struct
	{
		class UTigerInventoryItemBase* PreviewItem;
		class UTigerInventoryItemBase* CombinedItem_Parent;
		struct FText                   ReturnValue;
	} params = {};

	params.PreviewItem = PreviewItem;
	params.CombinedItem_Parent = CombinedItem_Parent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Description
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* CombinedItemParent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* PreviewItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class URichTextBlock*          In_Rich_Text_Block             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::Set_Item_Description(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem, class URichTextBlock* In_Rich_Text_Block)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Description"));

	struct
	{
		class UTigerInventoryItemBase* CombinedItemParent;
		class UTigerInventoryItemBase* PreviewItem;
		class URichTextBlock*          In_Rich_Text_Block;
	} params = {};

	params.CombinedItemParent = CombinedItemParent;
	params.PreviewItem = PreviewItem;
	params.In_Rich_Text_Block = In_Rich_Text_Block;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemRarity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* PreviewItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* CombinedItem_Parent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerItemRarity               Rarity                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::GetItemRarity(class UTigerInventoryItemBase* PreviewItem, class UTigerInventoryItemBase* CombinedItem_Parent, ETigerItemRarity* Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemRarity"));

	struct
	{
		class UTigerInventoryItemBase* PreviewItem;
		class UTigerInventoryItemBase* CombinedItem_Parent;
		ETigerItemRarity               Rarity;
	} params = {};

	params.PreviewItem = PreviewItem;
	params.CombinedItem_Parent = CombinedItem_Parent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Rarity != nullptr)
		*Rarity = params.Rarity;
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set ItemType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* CombinedItemParent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* PreviewItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::Set_ItemType(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set ItemType"));

	struct
	{
		class UTigerInventoryItemBase* CombinedItemParent;
		class UTigerInventoryItemBase* PreviewItem;
	} params = {};

	params.CombinedItemParent = CombinedItemParent;
	params.PreviewItem = PreviewItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Name
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* CombinedItemParent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* PreviewItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class URichTextBlock*          InRichTextBlock                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::Set_Item_Name(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem, class URichTextBlock* InRichTextBlock)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Name"));

	struct
	{
		class UTigerInventoryItemBase* CombinedItemParent;
		class UTigerInventoryItemBase* PreviewItem;
		class URichTextBlock*          InRichTextBlock;
	} params = {};

	params.CombinedItemParent = CombinedItemParent;
	params.PreviewItem = PreviewItem;
	params.InRichTextBlock = InRichTextBlock;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetRewardHoverBlockTimeStamp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::SetRewardHoverBlockTimeStamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetRewardHoverBlockTimeStamp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetPurchaseBattlepassRewardsCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TargetLevel                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIncludeFreeRewards            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            RewardsCount                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::GetPurchaseBattlepassRewardsCount(int TargetLevel, bool bIncludeFreeRewards, int* RewardsCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetPurchaseBattlepassRewardsCount"));

	struct
	{
		int                            TargetLevel;
		bool                           bIncludeFreeRewards;
		int                            RewardsCount;
	} params = {};

	params.TargetLevel = TargetLevel;
	params.bIncludeFreeRewards = bIncludeFreeRewards;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RewardsCount != nullptr)
		*RewardsCount = params.RewardsCount;
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetRankSkipCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UTBP_UI_Battlepass_C::GetRankSkipCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetRankSkipCount"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateRankSkipInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::UpdateRankSkipInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateRankSkipInfo"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetSeasonPlacementBonusText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerTransactionalData TransactionalData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Battlepass_C::SetSeasonPlacementBonusText(const struct FTigerPersistentPlayerTransactionalData& TransactionalData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetSeasonPlacementBonusText"));

	struct
	{
		struct FTigerPersistentPlayerTransactionalData TransactionalData;
	} params = {};

	params.TransactionalData = TransactionalData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Clan Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::Update_Clan_Icon(class UTigerInventoryItemBase* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Clan Icon"));

	struct
	{
		class UTigerInventoryItemBase* InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Previewed Item Texts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* Preview_Item                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* CombinedItemParent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::Update_Previewed_Item_Texts(class UTigerInventoryItemBase* Preview_Item, class UTigerInventoryItemBase* CombinedItemParent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Previewed Item Texts"));

	struct
	{
		class UTigerInventoryItemBase* Preview_Item;
		class UTigerInventoryItemBase* CombinedItemParent;
	} params = {};

	params.Preview_Item = Preview_Item;
	params.CombinedItemParent = CombinedItemParent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpBackward
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::FocusJumpBackward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpBackward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpForward
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::FocusJumpForward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpForward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetTierContainerAtRank
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InRank                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_BattlepassTierContainer_C* OutTierContainer               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::GetTierContainerAtRank(int InRank, class UTBP_UI_BattlepassTierContainer_C** OutTierContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetTierContainerAtRank"));

	struct
	{
		int                            InRank;
		class UTBP_UI_BattlepassTierContainer_C* OutTierContainer;
	} params = {};

	params.InRank = InRank;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutTierContainer != nullptr)
		*OutTierContainer = params.OutTierContainer;
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusPreviousReward
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::FocusPreviousReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusPreviousReward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusNextReward
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::FocusNextReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusNextReward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UnfocusCurrentReward
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::UnfocusCurrentReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UnfocusCurrentReward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetFocusedReward
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_BattlepassReward_C* InReward                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::SetFocusedReward(class UTBP_UI_BattlepassReward_C* InReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetFocusedReward"));

	struct
	{
		class UTBP_UI_BattlepassReward_C* InReward;
	} params = {};

	params.InReward = InReward;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusLatestUnlockedRank
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerRank                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::FocusLatestUnlockedRank(int PlayerRank)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusLatestUnlockedRank"));

	struct
	{
		int                            PlayerRank;
	} params = {};

	params.PlayerRank = PlayerRank;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetUpMenuInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::SetUpMenuInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetUpMenuInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBoughtBattlepass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::OnBoughtBattlepass()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBoughtBattlepass"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupErrorMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Battlepass_C::DisplayPopupErrorMessage(const struct FText& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupErrorMessage"));

	struct
	{
		struct FText                   ErrorString;
	} params = {};

	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupExitText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Battlepass_C::DisplayPopupExitText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupExitText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PlayerTransactionDataUpdated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerTransactionalData TransactionalData              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_Battlepass_C::PlayerTransactionDataUpdated(const struct FTigerPersistentPlayerTransactionalData& TransactionalData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PlayerTransactionDataUpdated"));

	struct
	{
		struct FTigerPersistentPlayerTransactionalData TransactionalData;
	} params = {};

	params.TransactionalData = TransactionalData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Battlepass_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PreConstruct"));

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


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBackgroundSceneShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBackgroundSceneShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPreviewItemUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InPreviewItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerBattlepassRewardPreview* InPreviewActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* InCombinedItemParent           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::OnPreviewItemUpdated(class UTigerInventoryItemBase* InPreviewItem, class ATigerBattlepassRewardPreview* InPreviewActor, class UTigerInventoryItemBase* InCombinedItemParent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPreviewItemUpdated"));

	struct
	{
		class UTigerInventoryItemBase* InPreviewItem;
		class ATigerBattlepassRewardPreview* InPreviewActor;
		class UTigerInventoryItemBase* InCombinedItemParent;
	} params = {};

	params.InPreviewItem = InPreviewItem;
	params.InPreviewActor = InPreviewActor;
	params.InCombinedItemParent = InCombinedItemParent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update After Purchase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::Update_After_Purchase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update After Purchase"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPersistentPlayerStateInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPersistentPlayerState* InPersistentPlayerState        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::OnPersistentPlayerStateInitialized(class UTigerPersistentPlayerState* InPersistentPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPersistentPlayerStateInitialized"));

	struct
	{
		class UTigerPersistentPlayerState* InPersistentPlayerState;
	} params = {};

	params.InPersistentPlayerState = InPersistentPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            InItemId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Item_Rank                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::ItemClicked(const struct FTigerItemId& InItemId, int Item_Rank)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ItemClicked"));

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


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Focus Item on Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Item_Rank                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Item_Is_Free                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Battlepass_C::Focus_Item_on_Hover(const struct FTigerItemId& ItemId, int Item_Rank, bool Item_Is_Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Focus Item on Hover"));

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


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.IncrementFocusedRewardIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::IncrementFocusedRewardIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.IncrementFocusedRewardIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DecrementFocusedRewardIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::DecrementFocusedRewardIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DecrementFocusedRewardIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpForward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::OnFocusJumpForward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpForward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpBackward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::OnFocusJumpBackward()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpBackward"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Tick"));

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


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Back or Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::Back_or_Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Back or Close"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Left Trigger Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::On_Left_Trigger_Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Left Trigger Pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Right Trigger Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::On_Right_Trigger_Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Right Trigger Pressed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature"));

	struct
	{
		float                          CurrentOffset;
	} params = {};

	params.CurrentOffset = CurrentOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ChangePreviewImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::ChangePreviewImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ChangePreviewImage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Battlepass_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GamepadHotkeyBuy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::GamepadHotkeyBuy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GamepadHotkeyBuy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_InputMenuPrompt_Close_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Battlepass_InputMenuPrompt_Close_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_InputMenuPrompt_Close_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBattlepassLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerItemId            ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerInventoryItemBase* InventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::OnBattlepassLoaded(const struct FTigerItemId& ItemId, class UTigerInventoryItemBase* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBattlepassLoaded"));

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


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Battlepass_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.CustomEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ExecuteUbergraph_TBP_UI_Battlepass
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Battlepass_C::ExecuteUbergraph_TBP_UI_Battlepass(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ExecuteUbergraph_TBP_UI_Battlepass"));

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
