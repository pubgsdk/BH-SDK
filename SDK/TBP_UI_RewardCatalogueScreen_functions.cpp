// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RewardCatalogueScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.OnTabListHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardCatalogueScreen_C::OnTabListHovered(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.OnTabListHovered"));

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


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.PopulateInformationCard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InChallenge                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardCatalogueScreen_C::PopulateInformationCard(class UTigerChallenge* InChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.PopulateInformationCard"));

	struct
	{
		class UTigerChallenge*         InChallenge;
	} params = {};

	params.InChallenge = InChallenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.TransitionToInformationScreenWithChallengeData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerChallenge*         InChallenge                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardCatalogueScreen_C::TransitionToInformationScreenWithChallengeData(class UTigerChallenge* InChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.TransitionToInformationScreenWithChallengeData"));

	struct
	{
		class UTigerChallenge*         InChallenge;
	} params = {};

	params.InChallenge = InChallenge;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.Create Reward Catalogue Grid
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UTigerClientRewardTrackMasteryChallenges*> InMasteryChallenges            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerChallengeSubCategory     InChallengeSubcategory         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   InSubcategoryName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTBP_UI_RewardCatalogueGrid_C* OutGrid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerModularListItemInfo OutTabInfo                     (CPF_Parm, CPF_OutParm)

void UTBP_UI_RewardCatalogueScreen_C::Create_Reward_Catalogue_Grid(ETigerChallengeSubCategory InChallengeSubcategory, const struct FText& InSubcategoryName, TArray<class UTigerClientRewardTrackMasteryChallenges*>* InMasteryChallenges, class UTBP_UI_RewardCatalogueGrid_C** OutGrid, struct FTigerModularListItemInfo* OutTabInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.Create Reward Catalogue Grid"));

	struct
	{
		TArray<class UTigerClientRewardTrackMasteryChallenges*> InMasteryChallenges;
		ETigerChallengeSubCategory     InChallengeSubcategory;
		struct FText                   InSubcategoryName;
		class UTBP_UI_RewardCatalogueGrid_C* OutGrid;
		struct FTigerModularListItemInfo OutTabInfo;
	} params = {};

	params.InChallengeSubcategory = InChallengeSubcategory;
	params.InSubcategoryName = InSubcategoryName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InMasteryChallenges != nullptr)
		*InMasteryChallenges = params.InMasteryChallenges;
	if (OutGrid != nullptr)
		*OutGrid = params.OutGrid;
	if (OutTabInfo != nullptr)
		*OutTabInfo = params.OutTabInfo;
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.Initialise
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::Initialise()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.Initialise"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.BndEvt__TBP_UI_RewardCatalogueScreen_ReturnButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::BndEvt__TBP_UI_RewardCatalogueScreen_ReturnButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.BndEvt__TBP_UI_RewardCatalogueScreen_ReturnButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Back_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Back_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Back_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.ClientChallengesCollectionCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::ClientChallengesCollectionCreated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.ClientChallengesCollectionCreated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_RewardCatalogueScreen_C::BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.BndEvt__TBP_UI_RewardCatalogueScreen_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.ExecuteUbergraph_TBP_UI_RewardCatalogueScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardCatalogueScreen_C::ExecuteUbergraph_TBP_UI_RewardCatalogueScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardCatalogueScreen.TBP_UI_RewardCatalogueScreen_C.ExecuteUbergraph_TBP_UI_RewardCatalogueScreen"));

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
