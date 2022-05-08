// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ElysiumChangeCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowPerkView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumChangeCharacter_C::ShowPerkView(ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowPerkView"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
	} params = {};

	params.InArchetypeType = InArchetypeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.HidePerkView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::HidePerkView()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.HidePerkView"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::ShowHeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowHeader"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.CloseFullscreenCinematic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::CloseFullscreenCinematic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.CloseFullscreenCinematic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Reset Selection to 0
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::Reset_Selection_to_0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Reset Selection to 0"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectCharacterIfValid
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::SelectCharacterIfValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectCharacterIfValid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Paperdoll Positions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::Update_Paperdoll_Positions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Paperdoll Positions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::ResetMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.AddTaggedActorsToCaptureComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bUseCaptureComponent           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ElysiumChangeCharacter_C::AddTaggedActorsToCaptureComponent(bool* bUseCaptureComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.AddTaggedActorsToCaptureComponent"));

	struct
	{
		bool                           bUseCaptureComponent;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bUseCaptureComponent != nullptr)
		*bUseCaptureComponent = params.bUseCaptureComponent;
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ChangeSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_CharacterSkin_Elysium_C* InNewSelection                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumChangeCharacter_C::ChangeSelection(class UTBP_UI_CharacterSkin_Elysium_C* InNewSelection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ChangeSelection"));

	struct
	{
		class UTBP_UI_CharacterSkin_Elysium_C* InNewSelection;
	} params = {};

	params.InNewSelection = InNewSelection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.TogglePresets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::TogglePresets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.TogglePresets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ToggleArchetypeDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::ToggleArchetypeDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ToggleArchetypeDetails"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetSlotStates
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    inArray                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ElysiumChangeCharacter_C::ResetSlotStates(TArray<int> inArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetSlotStates"));

	struct
	{
		TArray<int>                    inArray;
	} params = {};

	params.inArray = inArray;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectOrCreateCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCharacter InPlayerCharacter              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ElysiumChangeCharacter_C::SelectOrCreateCharacter(const struct FTigerPersistentPlayerCharacter& InPlayerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectOrCreateCharacter"));

	struct
	{
		struct FTigerPersistentPlayerCharacter InPlayerCharacter;
	} params = {};

	params.InPlayerCharacter = InPlayerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCharacterSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::OnCharacterSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCharacterSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetUserPrivileges
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::OnGetUserPrivileges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetUserPrivileges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetValidGameVersionResult
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerVersionIsValidResult     Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumChangeCharacter_C::OnGetValidGameVersionResult(ETigerVersionIsValidResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetValidGameVersionResult"));

	struct
	{
		ETigerVersionIsValidResult     Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLegalDocumentAcceptanceResult
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<ETigerLegalDocumentType> InDocumentTypes                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ElysiumChangeCharacter_C::OnLegalDocumentAcceptanceResult(TArray<ETigerLegalDocumentType> InDocumentTypes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLegalDocumentAcceptanceResult"));

	struct
	{
		TArray<ETigerLegalDocumentType> InDocumentTypes;
	} params = {};

	params.InDocumentTypes = InDocumentTypes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginFailed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerLoginFailedInfo   InLoginFailedInfo              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ElysiumChangeCharacter_C::OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginFailed"));

	struct
	{
		struct FTigerLoginFailedInfo   InLoginFailedInfo;
	} params = {};

	params.InLoginFailedInfo = InLoginFailedInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginSucceeded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ElysiumChangeCharacter_C::OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginSucceeded"));

	struct
	{
		TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters;
	} params = {};

	params.AvailableCharacters = AvailableCharacters;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UTigerPowerKit*          InArchetypeData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature"));

	struct
	{
		class UTigerPowerKit*          InArchetypeData;
	} params = {};

	params.InArchetypeData = InArchetypeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCharacter InPersistentCharacter          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature"));

	struct
	{
		struct FTigerPersistentPlayerCharacter InPersistentCharacter;
	} params = {};

	params.InPersistentCharacter = InPersistentCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCharacter InPersistentCharacter          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature"));

	struct
	{
		struct FTigerPersistentPlayerCharacter InPersistentCharacter;
	} params = {};

	params.InPersistentCharacter = InPersistentCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCreateCharacterResult
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentCharacterID CharacterId                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bWasCharacterCreated           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ElysiumChangeCharacter_C::OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCreateCharacterResult"));

	struct
	{
		struct FTigerPersistentCharacterID CharacterId;
		bool                           bWasCharacterCreated;
	} params = {};

	params.CharacterId = CharacterId;
	params.bWasCharacterCreated = bWasCharacterCreated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ElysiumChangeCharacter_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.PreConstruct"));

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


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnArchetypeChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPowerKit*          InArchetypeData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<int>                    InPlayerArchetypeCharacterIndices (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ElysiumChangeCharacter_C::OnArchetypeChanged(class UTigerPowerKit* InArchetypeData, TArray<int> InPlayerArchetypeCharacterIndices)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnArchetypeChanged"));

	struct
	{
		class UTigerPowerKit*          InArchetypeData;
		TArray<int>                    InPlayerArchetypeCharacterIndices;
	} params = {};

	params.InArchetypeData = InArchetypeData;
	params.InPlayerArchetypeCharacterIndices = InPlayerArchetypeCharacterIndices;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCharacter InPersistentCharacter          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature"));

	struct
	{
		struct FTigerPersistentPlayerCharacter InPersistentCharacter;
	} params = {};

	params.InPersistentCharacter = InPersistentCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCharacter InPersistentCharacter          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature"));

	struct
	{
		struct FTigerPersistentPlayerCharacter InPersistentCharacter;
	} params = {};

	params.InPersistentCharacter = InPersistentCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentPlayerCharacter InPersistentCharacter          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature"));

	struct
	{
		struct FTigerPersistentPlayerCharacter InPersistentCharacter;
	} params = {};

	params.InPersistentCharacter = InPersistentCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Create Character On Existing Slot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::Create_Character_On_Existing_Slot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Create Character On Existing Slot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBuyCharacterSlotResults
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInSuccess                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 InErrorString                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumChangeCharacter_C::OnBuyCharacterSlotResults(bool bInSuccess, const struct FString& InErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBuyCharacterSlotResults"));

	struct
	{
		bool                           bInSuccess;
		struct FString                 InErrorString;
	} params = {};

	params.bInSuccess = bInSuccess;
	params.InErrorString = InErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowFullscreenCinematic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::ShowFullscreenCinematic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowFullscreenCinematic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnFullscreenCinematicClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::OnFullscreenCinematicClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnFullscreenCinematicClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           ConfirmedPurchase              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature(bool ConfirmedPurchase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature"));

	struct
	{
		bool                           ConfirmedPurchase;
	} params = {};

	params.ConfirmedPurchase = ConfirmedPurchase;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBackgroundSceneShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBackgroundSceneShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Carousel Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::Update_Carousel_Change()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Carousel Change"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumChangeCharacter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Tick"));

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


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowPerkSelectionMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPowerKitType             InArchetypeType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumChangeCharacter_C::ShowPerkSelectionMenu(ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowPerkSelectionMenu"));

	struct
	{
		ETigerPowerKitType             InArchetypeType;
	} params = {};

	params.InArchetypeType = InArchetypeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.HidePerkSelectionMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::HidePerkSelectionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.HidePerkSelectionMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BlockerListenForInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BlockerListenForInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BlockerListenForInput"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumChangeCharacter_C::ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter"));

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
