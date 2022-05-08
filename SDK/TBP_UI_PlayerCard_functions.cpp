// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerCard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.UpdatePlayerDataSubscription
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PreviousID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CurrentID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_C::UpdatePlayerDataSubscription(int PreviousID, int CurrentID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.UpdatePlayerDataSubscription"));

	struct
	{
		int                            PreviousID;
		int                            CurrentID;
	} params = {};

	params.PreviousID = PreviousID;
	params.CurrentID = CurrentID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.GetDataFromID
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerPlayerStateGameData OutData                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_PlayerCard_C::GetDataFromID(bool* IsValid, struct FTigerPlayerStateGameData* OutData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.GetDataFromID"));

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


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.DisplayGroupColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShowGroupColor               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PlayerCard_C::DisplayGroupColor(bool InShowGroupColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.DisplayGroupColor"));

	struct
	{
		bool                           InShowGroupColor;
	} params = {};

	params.InShowGroupColor = InShowGroupColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.DisplayRankedBanner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InShowRankedBanner             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PlayerCard_C::DisplayRankedBanner(bool InShowRankedBanner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.DisplayRankedBanner"));

	struct
	{
		bool                           InShowRankedBanner;
	} params = {};

	params.InShowRankedBanner = InShowRankedBanner;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.UpdateApperance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_C::UpdateApperance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.UpdateApperance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.UpdateRepresentedPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InRepresentedPlayer            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_C::UpdateRepresentedPlayer(int InRepresentedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.UpdateRepresentedPlayer"));

	struct
	{
		int                            InRepresentedPlayer;
	} params = {};

	params.InRepresentedPlayer = InRepresentedPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PlayerCard_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.PreConstruct"));

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


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Tick"));

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


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Hover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_C::Hover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Hover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.UnHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_C::UnHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.UnHover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Press
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_C::Press()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Press"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Release
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_C::Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Release"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Click
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_C::Click()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.Click"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.GameStateDataUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerCard_C::GameStateDataUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.GameStateDataUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.ExecuteUbergraph_TBP_UI_PlayerCard
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerCard_C::ExecuteUbergraph_TBP_UI_PlayerCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerCard.TBP_UI_PlayerCard_C.ExecuteUbergraph_TBP_UI_PlayerCard"));

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
