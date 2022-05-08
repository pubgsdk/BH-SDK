// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Reward_Preview_Outfit_Store_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ApplyItemToPaperdoll
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPreviewerData     InPreviewAppearance            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerClan                     InClanType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Reward_Preview_Outfit_Store_C::ApplyItemToPaperdoll(const struct FTigerPreviewerData& InPreviewAppearance, ETigerClan InClanType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ApplyItemToPaperdoll"));

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


// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.LoadCharacterPresetFromPrimaryOwner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Reward_Preview_Outfit_Store_C::LoadCharacterPresetFromPrimaryOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.LoadCharacterPresetFromPrimaryOwner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.TryWithPlayerAppearance
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Reward_Preview_Outfit_Store_C::TryWithPlayerAppearance(bool* bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.TryWithPlayerAppearance"));

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


// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnCharacterPresetsLoaded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UObject*>         LoadedPresets                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_Reward_Preview_Outfit_Store_C::OnCharacterPresetsLoaded(TArray<class UObject*> LoadedPresets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnCharacterPresetsLoaded"));

	struct
	{
		TArray<class UObject*>         LoadedPresets;
	} params = {};

	params.LoadedPresets = LoadedPresets;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnPreviewItemUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Reward_Preview_Outfit_Store_C::OnPreviewItemUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnPreviewItemUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Reward_Preview_Outfit_Store_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnAppearanceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Reward_Preview_Outfit_Store_C::OnAppearanceChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnAppearanceChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.PlayerApperanceFinishedLoading
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Reward_Preview_Outfit_Store_C::PlayerApperanceFinishedLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.PlayerApperanceFinishedLoading"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ExecuteUbergraph_TBP_Reward_Preview_Outfit_Store
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Reward_Preview_Outfit_Store_C::ExecuteUbergraph_TBP_Reward_Preview_Outfit_Store(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ExecuteUbergraph_TBP_Reward_Preview_Outfit_Store"));

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
