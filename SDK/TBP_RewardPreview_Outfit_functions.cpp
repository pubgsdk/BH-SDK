// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RewardPreview_Outfit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.WaitForPlayerAppearanceAsync
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Outfit_C::WaitForPlayerAppearanceAsync()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.WaitForPlayerAppearanceAsync"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ApplyItemToPaperdoll
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPreviewerData     InPreviewAppearance            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// ETigerClan                     InClanType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_RewardPreview_Outfit_C::ApplyItemToPaperdoll(const struct FTigerPreviewerData& InPreviewAppearance, ETigerClan InClanType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ApplyItemToPaperdoll"));

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


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.LoadCharacterPresetFromPrimaryOwner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Outfit_C::LoadCharacterPresetFromPrimaryOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.LoadCharacterPresetFromPrimaryOwner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.TryWithPlayerAppearance
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_RewardPreview_Outfit_C::TryWithPlayerAppearance(bool* bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.TryWithPlayerAppearance"));

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


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnCharacterPresetsLoaded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UObject*>         LoadedPresets                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_RewardPreview_Outfit_C::OnCharacterPresetsLoaded(TArray<class UObject*> LoadedPresets)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnCharacterPresetsLoaded"));

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


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnPreviewItemUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Outfit_C::OnPreviewItemUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnPreviewItemUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Outfit_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnAppearanceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Outfit_C::OnAppearanceChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnAppearanceChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.PlayerApperanceFinishedLoading
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Outfit_C::PlayerApperanceFinishedLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.PlayerApperanceFinishedLoading"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.Update Camera
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Outfit_C::Update_Camera()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.Update Camera"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ExecuteUbergraph_TBP_RewardPreview_Outfit
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_RewardPreview_Outfit_C::ExecuteUbergraph_TBP_RewardPreview_Outfit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ExecuteUbergraph_TBP_RewardPreview_Outfit"));

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
