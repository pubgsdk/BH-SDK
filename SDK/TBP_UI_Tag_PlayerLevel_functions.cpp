// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Tag_PlayerLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.SetPlayerLevel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int64_t                        InLevel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tag_PlayerLevel_C::SetPlayerLevel(int64_t InLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.SetPlayerLevel"));

	struct
	{
		int64_t                        InLevel;
	} params = {};

	params.InLevel = InLevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.GetDataFromID
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerPlayerStateGameData OutData                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_Tag_PlayerLevel_C::GetDataFromID(bool* IsValid, struct FTigerPlayerStateGameData* OutData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.GetDataFromID"));

	struct
	{
		bool                           IsValid;
		struct FTigerPlayerStateGameData OutData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.IsDataLoaded
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  InTigerPlayerController        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_Tag_PlayerLevel_C::IsDataLoaded(class ATigerPlayerController* InTigerPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.IsDataLoaded"));

	struct
	{
		class ATigerPlayerController*  InTigerPlayerController;
		bool                           ReturnValue;
	} params = {};

	params.InTigerPlayerController = InTigerPlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Tag_PlayerLevel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.PreConstruct"));

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


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.OnDataLoaded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tag_PlayerLevel_C::OnDataLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.OnDataLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Tag_PlayerLevel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.UpdateDisplayedLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tag_PlayerLevel_C::UpdateDisplayedLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.UpdateDisplayedLevel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.SetRepresentedPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RepresentedPlayerID            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tag_PlayerLevel_C::SetRepresentedPlayer(int RepresentedPlayerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.SetRepresentedPlayer"));

	struct
	{
		int                            RepresentedPlayerID;
	} params = {};

	params.RepresentedPlayerID = RepresentedPlayerID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.PlayerDataUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Tag_PlayerLevel_C::PlayerDataUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.PlayerDataUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.ExecuteUbergraph_TBP_UI_Tag_PlayerLevel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Tag_PlayerLevel_C::ExecuteUbergraph_TBP_UI_Tag_PlayerLevel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Tag_PlayerLevel.TBP_UI_Tag_PlayerLevel_C.ExecuteUbergraph_TBP_UI_Tag_PlayerLevel"));

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
