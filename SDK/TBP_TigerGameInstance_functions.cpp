// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TigerGameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CheckMainMenuConditionsAndForceClose
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CheckMainMenuConditionsAndForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CheckMainMenuConditionsAndForceClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.AddBlackLoadingScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::AddBlackLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.AddBlackLoadingScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetIngameMenuUI
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTigerIngameMenuWidget*  IngameMenuUI                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::GetIngameMenuUI(class UTigerIngameMenuWidget** IngameMenuUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetIngameMenuUI"));

	struct
	{
		class UTigerIngameMenuWidget*  IngameMenuUI;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IngameMenuUI != nullptr)
		*IngameMenuUI = params.IngameMenuUI;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetUIColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerUIColor                  UIColor                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerColourSpace              ColorSpace                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UTBP_TigerGameInstance_C::GetUIColor(ETigerUIColor UIColor, ETigerColourSpace ColorSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetUIColor"));

	struct
	{
		ETigerUIColor                  UIColor;
		ETigerColourSpace              ColorSpace;
		struct FLinearColor            ReturnValue;
	} params = {};

	params.UIColor = UIColor;
	params.ColorSpace = ColorSpace;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsAllowedToOpenMainMenu
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_TigerGameInstance_C::IsAllowedToOpenMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsAllowedToOpenMainMenu"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetJoinErrorText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OutErrorText                   (CPF_Parm, CPF_OutParm)
// bool                           bHadError                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_TigerGameInstance_C::GetJoinErrorText(struct FText* OutErrorText, bool* bHadError)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetJoinErrorText"));

	struct
	{
		struct FText                   OutErrorText;
		bool                           bHadError;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutErrorText != nullptr)
		*OutErrorText = params.OutErrorText;
	if (bHadError != nullptr)
		*bHadError = params.bHadError;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetErrorStringTableId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   TableId                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::GetErrorStringTableId(struct FName* TableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetErrorStringTableId"));

	struct
	{
		struct FName                   TableId;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TableId != nullptr)
		*TableId = params.TableId;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsInMatch
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           InMatch                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_TigerGameInstance_C::IsInMatch(bool* InMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsInMatch"));

	struct
	{
		bool                           InMatch;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InMatch != nullptr)
		*InMatch = params.InMatch;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidgetBP
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerLoadingScreenUI*/ InWidgetClass                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InFadeInTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerLoadingScreenAsset* InLoadingScreenAsset           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerLoadingScreenUI*   LoadingScreen                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::CreateLoadingScreenWidgetBP(class UClass* /*UTigerLoadingScreenUI*/ InWidgetClass, float InFadeInTime, class UTigerLoadingScreenAsset* InLoadingScreenAsset, class UTigerLoadingScreenUI** LoadingScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidgetBP"));

	struct
	{
		class UClass* /*UTigerLoadingScreenUI*/ InWidgetClass;
		float                          InFadeInTime;
		class UTigerLoadingScreenAsset* InLoadingScreenAsset;
		class UTigerLoadingScreenUI*   LoadingScreen;
	} params = {};

	params.InWidgetClass = InWidgetClass;
	params.InFadeInTime = InFadeInTime;
	params.InLoadingScreenAsset = InLoadingScreenAsset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LoadingScreen != nullptr)
		*LoadingScreen = params.LoadingScreen;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsElysiumGameMenuOpen
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bIsOpen                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_TigerGameInstance_C::IsElysiumGameMenuOpen(bool* bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsElysiumGameMenuOpen"));

	struct
	{
		bool                           bIsOpen;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsOpen != nullptr)
		*bIsOpen = params.bIsOpen;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateJoinGameMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_JoinGameMenu_C*  Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::CreateJoinGameMenu(class UTBP_UI_JoinGameMenu_C** Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateJoinGameMenu"));

	struct
	{
		class UTBP_UI_JoinGameMenu_C*  Output_Get;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMenuWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMenuWidget*        Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::CloseMenuWidget(class UTigerMenuWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMenuWidget"));

	struct
	{
		class UTigerMenuWidget*        Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMenuWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMenuWidget*        Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ZOrder                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::OpenMenuWidget(class UTigerMenuWidget* Widget, int ZOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMenuWidget"));

	struct
	{
		class UTigerMenuWidget*        Widget;
		int                            ZOrder;
	} params = {};

	params.Widget = Widget;
	params.ZOrder = ZOrder;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelErrorToString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ETravelFailure>    FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 OutString                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::TravelErrorToString(TEnumAsByte<ETravelFailure> FailureType, struct FString* OutString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelErrorToString"));

	struct
	{
		TEnumAsByte<ETravelFailure>    FailureType;
		struct FString                 OutString;
	} params = {};

	params.FailureType = FailureType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.NetErrorToString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENetworkFailure>   FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 OutString                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::NetErrorToString(TEnumAsByte<ENetworkFailure> FailureType, struct FString* OutString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.NetErrorToString"));

	struct
	{
		TEnumAsByte<ENetworkFailure>   FailureType;
		struct FString                 OutString;
	} params = {};

	params.FailureType = FailureType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnPreLoadingDone_CA1249C244C7069F7709069D760517F5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnPreLoadingDone_CA1249C244C7069F7709069D760517F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnPreLoadingDone_CA1249C244C7069F7709069D760517F5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysium_CA1249C244C7069F7709069D760517F5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnEnterElysium_CA1249C244C7069F7709069D760517F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysium_CA1249C244C7069F7709069D760517F5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLaunchTutorial_CA1249C244C7069F7709069D760517F5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnLaunchTutorial_CA1249C244C7069F7709069D760517F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLaunchTutorial_CA1249C244C7069F7709069D760517F5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.SettingSynced_F84C62744FD1A855B9C1AD9954A00F97
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::SettingSynced_F84C62744FD1A855B9C1AD9954A00F97()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.SettingSynced_F84C62744FD1A855B9C1AD9954A00F97"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnFailed_1E6BE8B346DD94D56C97728AB4E9C7C5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnFailed_1E6BE8B346DD94D56C97728AB4E9C7C5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnFailed_1E6BE8B346DD94D56C97728AB4E9C7C5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccess_1E6BE8B346DD94D56C97728AB4E9C7C5
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionResultList Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_TigerGameInstance_C::OnSuccess_1E6BE8B346DD94D56C97728AB4E9C7C5(const struct FTigerBpFindSessionResultList& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccess_1E6BE8B346DD94D56C97728AB4E9C7C5"));

	struct
	{
		struct FTigerBpFindSessionResultList Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginSucceeded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_TigerGameInstance_C::OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginSucceeded"));

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


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLobbyMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OpenLobbyMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLobbyMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowHostMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ShowHostMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowHostMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLegalDocumentAcceptanceResult
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<ETigerLegalDocumentType> InDocumentTypes                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_TigerGameInstance_C::OnLegalDocumentAcceptanceResult(TArray<ETigerLegalDocumentType> InDocumentTypes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLegalDocumentAcceptanceResult"));

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


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetUserPrivileges
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnGetUserPrivileges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetUserPrivileges"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateCharacterResult
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPersistentCharacterID CharacterId                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bWasCharacterCreated           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_TigerGameInstance_C::OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateCharacterResult"));

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


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LaunchElysiumServer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumberOfPlayers                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           EnableLan_                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   ServerName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_TigerGameInstance_C::LaunchElysiumServer(int NumberOfPlayers, bool EnableLan_, const struct FText& ServerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LaunchElysiumServer"));

	struct
	{
		int                            NumberOfPlayers;
		bool                           EnableLan_;
		struct FText                   ServerName;
	} params = {};

	params.NumberOfPlayers = NumberOfPlayers;
	params.EnableLan_ = EnableLan_;
	params.ServerName = ServerName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCharacterSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnCharacterSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCharacterSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleNetworkError
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>   FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsServer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_TigerGameInstance_C::HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleNetworkError"));

	struct
	{
		TEnumAsByte<ENetworkFailure>   FailureType;
		bool                           bIsServer;
	} params = {};

	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginFailed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerLoginFailedInfo   InLoginFailedInfo              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_TigerGameInstance_C::OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginFailed"));

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


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleTravelError
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETravelFailure>    FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::HandleTravelError(TEnumAsByte<ETravelFailure> FailureType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleTravelError"));

	struct
	{
		TEnumAsByte<ETravelFailure>    FailureType;
	} params = {};

	params.FailureType = FailureType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnterBootFlow
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::EnterBootFlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnterBootFlow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleLobbyMeny
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ToggleLobbyMeny()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleLobbyMeny"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLobbyMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseLobbyMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLobbyMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindGameFailedMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseFindGameFailedMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindGameFailedMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindElysiumMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bStartSearch                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bStartHidden                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bFirstTime                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_TigerGameInstance_C::OpenFindElysiumMenu(bool bStartSearch, bool bStartHidden, bool bFirstTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindElysiumMenu"));

	struct
	{
		bool                           bStartSearch;
		bool                           bStartHidden;
		bool                           bFirstTime;
	} params = {};

	params.bStartSearch = bStartSearch;
	params.bStartHidden = bStartHidden;
	params.bFirstTime = bFirstTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindElysiumMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseFindElysiumMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindElysiumMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMatchMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OpenMatchMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMatchMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLoadingScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    TigerGameMode                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::OpenLoadingScreen(TSoftClassPtr<class UClass> TigerGameMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLoadingScreen"));

	struct
	{
		TSoftClassPtr<class UClass>    TigerGameMode;
	} params = {};

	params.TigerGameMode = TigerGameMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLoadingScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLoadingScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ReturnToCharacterSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinGameMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionSelectedSession SessionToJoin                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_TigerGameInstance_C::OpenJoinGameMenu(const struct FTigerBpFindSessionSelectedSession& SessionToJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinGameMenu"));

	struct
	{
		struct FTigerBpFindSessionSelectedSession SessionToJoin;
	} params = {};

	params.SessionToJoin = SessionToJoin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinGameMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseJoinGameMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinGameMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInvitation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerGroupInvitation   Invitation                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class ATigerPlayerState*       Inviter                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::ReceiveInvitation(const struct FTigerGroupInvitation& Invitation, class ATigerPlayerState* Inviter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInvitation"));

	struct
	{
		struct FTigerGroupInvitation   Invitation;
		class ATigerPlayerState*       Inviter;
	} params = {};

	params.Invitation = Invitation;
	params.Inviter = Inviter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RemoveInvitationList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::RemoveInvitationList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RemoveInvitationList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenServerSelectionMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionResultList Sessions                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_TigerGameInstance_C::OpenServerSelectionMenu(const struct FTigerBpFindSessionResultList& Sessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenServerSelectionMenu"));

	struct
	{
		struct FTigerBpFindSessionResultList Sessions;
	} params = {};

	params.Sessions = Sessions;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseServerSelectionMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseServerSelectionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseServerSelectionMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindGameFailedMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OpenFindGameFailedMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindGameFailedMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionSelectedSession Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_TigerGameInstance_C::OnSelected(const struct FTigerBpFindSessionSelectedSession& Session)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSelected"));

	struct
	{
		struct FTigerBpFindSessionSelectedSession Session;
	} params = {};

	params.Session = Session;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeInLoadingScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>    TigerGameMode                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::FadeInLoadingScreen(TSoftClassPtr<class UClass> TigerGameMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeInLoadingScreen"));

	struct
	{
		TSoftClassPtr<class UClass>    TigerGameMode;
	} params = {};

	params.TigerGameMode = TigerGameMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeOutLoadingScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::FadeOutLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeOutLoadingScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnInitialLevelStreamingCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnInitialLevelStreamingCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnInitialLevelStreamingCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnClosedJoinElysium
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::OnClosedJoinElysium(const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnClosedJoinElysium"));

	struct
	{
		struct FString                 ErrorString;
	} params = {};

	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccessfulJoin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnSuccessfulJoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccessfulJoin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootStartMapTransfer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ReturnToBootStartMapTransfer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootStartMapTransfer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.PostLoadMapWithWorld
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::PostLoadMapWithWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.PostLoadMapWithWorld"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetValidGameVersionResult
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ETigerVersionIsValidResult     Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::OnGetValidGameVersionResult(ETigerVersionIsValidResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetValidGameVersionResult"));

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


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnIgnored_Dispatch_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnIgnored_Dispatch_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnIgnored_Dispatch_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FindMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InGameModeId                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            InGameModeIndex                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::FindMatch(const struct FString& InGameModeId, int InGameModeIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FindMatch"));

	struct
	{
		struct FString                 InGameModeId;
		int                            InGameModeIndex;
	} params = {};

	params.InGameModeId = InGameModeId;
	params.InGameModeIndex = InGameModeIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryPostLoadMap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::RetryPostLoadMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryPostLoadMap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CancelJoinGame
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CancelJoinGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CancelJoinGame"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ReceiveInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenTutorialMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OpenTutorialMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenTutorialMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseTutorialMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseTutorialMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseTutorialMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          InFadeInTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerLoadingScreenAsset* InLoadingScreenAsset           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass* /*UTigerLoadingScreenUI*/ InWidgetClass                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::CreateLoadingScreenWidget(float InFadeInTime, class UTigerLoadingScreenAsset* InLoadingScreenAsset, class UClass* /*UTigerLoadingScreenUI*/ InWidgetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidget"));

	struct
	{
		float                          InFadeInTime;
		class UTigerLoadingScreenAsset* InLoadingScreenAsset;
		class UClass* /*UTigerLoadingScreenUI*/ InWidgetClass;
	} params = {};

	params.InFadeInTime = InFadeInTime;
	params.InLoadingScreenAsset = InLoadingScreenAsset;
	params.InWidgetClass = InWidgetClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferLoadingScreenOpaque
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnTransferLoadingScreenOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferLoadingScreenOpaque"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferFromMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::TransferFromMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferFromMatch"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ErrorString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::OnJoinPartyElysiumFailed(const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumFailed"));

	struct
	{
		struct FString                 ErrorString;
	} params = {};

	params.ErrorString = ErrorString;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinPartyElysiumMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseJoinPartyElysiumMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinPartyElysiumMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumSuccess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnJoinPartyElysiumSuccess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumSuccess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferToPartyElysiumFadeComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnTransferToPartyElysiumFadeComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferToPartyElysiumFadeComplete"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinPartyElysiumScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OpenJoinPartyElysiumScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinPartyElysiumScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.KickToLoginScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::KickToLoginScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.KickToLoginScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnLoadingScreenFullyOpaque_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque_Event"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateGameSessionFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnCreateGameSessionFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateGameSessionFailed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.JoinSessionThroughUrl
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SessionURL                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::JoinSessionThroughUrl(const struct FString& SessionURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.JoinSessionThroughUrl"));

	struct
	{
		struct FString                 SessionURL;
	} params = {};

	params.SessionURL = SessionURL;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowTitleScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ShowTitleScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowTitleScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.DispatchTitleScreenClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::DispatchTitleScreenClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.DispatchTitleScreenClosed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowMoviesAndTitleScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ShowMoviesAndTitleScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowMoviesAndTitleScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Cheat_QuitTutorial
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::Cheat_QuitTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Cheat_QuitTutorial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowWinScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ShowWinScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowWinScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Transfer from Match
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::Transfer_from_Match()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Transfer from Match"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMatchMenu
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseMatchMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMatchMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TitleScreenFadeOutStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::TitleScreenFadeOutStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TitleScreenFadeOutStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleTutorialMenu
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ToggleTutorialMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleTutorialMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToElysium
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ReturnToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseWinScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::CloseWinScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseWinScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowPostMatchScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInShouldLeaveParty            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_TigerGameInstance_C::ShowPostMatchScreen(bool bInShouldLeaveParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowPostMatchScreen"));

	struct
	{
		bool                           bInShouldLeaveParty;
	} params = {};

	params.bInShouldLeaveParty = bInShouldLeaveParty;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleMatchMeny
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ToggleMatchMeny()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleMatchMeny"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootWithError
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InError                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::ReturnToBootWithError(const struct FString& InError)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootWithError"));

	struct
	{
		struct FString                 InError;
	} params = {};

	params.InError = InError;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToPartyElysium
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::TransferToPartyElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToPartyElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LoadingToTuorialFullyOpaque
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::LoadingToTuorialFullyOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LoadingToTuorialFullyOpaque"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryTutorial
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::RetryTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryTutorial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GameStateSet
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::GameStateSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GameStateSet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnableVoipPopups
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InEnable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_TigerGameInstance_C::EnableVoipPopups(bool InEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnableVoipPopups"));

	struct
	{
		bool                           InEnable;
	} params = {};

	params.InEnable = InEnable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToElysium
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::TransferToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.WaitForJoinParty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::WaitForJoinParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.WaitForJoinParty"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinedParty
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerParty             InParty                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_TigerGameInstance_C::OnJoinedParty(const struct FTigerParty& InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinedParty"));

	struct
	{
		struct FTigerParty             InParty;
	} params = {};

	params.InParty = InParty;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerJoinedPartyFailedReason  InJoinedPartyFailedReason      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::OnJoinPartyFailed(ETigerJoinedPartyFailedReason InJoinedPartyFailedReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyFailed"));

	struct
	{
		ETigerJoinedPartyFailedReason  InJoinedPartyFailedReason;
	} params = {};

	params.InJoinedPartyFailedReason = InJoinedPartyFailedReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelectionDispatcher
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::ReturnToCharacterSelectionDispatcher()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelectionDispatcher"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSessionsFound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionResultList ResultsList                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_TigerGameInstance_C::OnSessionsFound(const struct FTigerBpFindSessionResultList& ResultsList)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSessionsFound"));

	struct
	{
		struct FTigerBpFindSessionResultList ResultsList;
	} params = {};

	params.ResultsList = ResultsList;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelToTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::TravelToTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelToTutorial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ExecuteUbergraph_TBP_TigerGameInstance
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerGameInstance_C::ExecuteUbergraph_TBP_TigerGameInstance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ExecuteUbergraph_TBP_TigerGameInstance"));

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


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnForceCloseMainMenu__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnForceCloseMainMenu__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnForceCloseMainMenu__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTitleScreenFadeOutStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnTitleScreenFadeOutStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTitleScreenFadeOutStarted__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinGameCountdownBegin__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnJoinGameCountdownBegin__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinGameCountdownBegin__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerGameInstance_C::OnLoadingScreenFullyOpaque__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
