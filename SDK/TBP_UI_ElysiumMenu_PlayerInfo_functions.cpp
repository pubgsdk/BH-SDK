// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ElysiumMenu_PlayerInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.BindEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::BindEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.BindEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetArchetype
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetArchetype()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetArchetype"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetPlatform
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetPlatform"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetName"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.UpdateRepresentedPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::UpdateRepresentedPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.UpdateRepresentedPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetupIconStyle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetupIconStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetupIconStyle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnNameChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnArchetypeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPlayerClanData*    ClanData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerPowerKit*          PowerKit                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnArchetypeChanged(class UTigerPlayerClanData* ClanData, class UTigerPowerKit* PowerKit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnArchetypeChanged"));

	struct
	{
		class UTigerPlayerClanData*    ClanData;
		class UTigerPowerKit*          PowerKit;
	} params = {};

	params.ClanData = ClanData;
	params.PowerKit = PowerKit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerStateGameDataChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnPlayerStateGameDataChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerStateGameDataChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerCardLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnPlayerCardLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerCardLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerFound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnPlayerFound(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerFound"));

	struct
	{
		class APawn*                   NewPawn;
	} params = {};

	params.NewPawn = NewPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerBeginPlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnPlayerBeginPlay(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerBeginPlay"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerStateCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       TigerPlayerState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerStateCreated"));

	struct
	{
		class ATigerPlayerState*       TigerPlayerState;
	} params = {};

	params.TigerPlayerState = TigerPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.CheckPlayerControllerIsValid
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::CheckPlayerControllerIsValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.CheckPlayerControllerIsValid"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerControllerCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnPlayerControllerCreated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerControllerCreated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Setup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::Setup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Setup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumMenu_PlayerInfo_C::ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo"));

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
