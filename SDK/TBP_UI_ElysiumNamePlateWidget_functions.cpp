// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ElysiumNamePlateWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnMemberLeftParty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPartyId           InPartyId                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FString                 InDepartingPlayerId            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNamePlateWidget_C::OnMemberLeftParty(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnMemberLeftParty"));

	struct
	{
		struct FTigerPartyId           InPartyId;
		struct FString                 InDepartingPlayerId;
	} params = {};

	params.InPartyId = InPartyId;
	params.InDepartingPlayerId = InDepartingPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerLeftPArty
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerParty             InParty                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ElysiumNamePlateWidget_C::OnPlayerLeftPArty(const struct FTigerParty& InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerLeftPArty"));

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


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdatePlayerNameColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             PlayerNameColor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_ElysiumNamePlateWidget_C::UpdatePlayerNameColor(struct FSlateColor* PlayerNameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdatePlayerNameColor"));

	struct
	{
		struct FSlateColor             PlayerNameColor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PlayerNameColor != nullptr)
		*PlayerNameColor = params.PlayerNameColor;
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaAndScaleTargets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumNamePlateWidget_C::UpdateAlphaAndScaleTargets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaAndScaleTargets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetupPlayerIndexChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       self2                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayerState*       self3                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNamePlateWidget_C::SetupPlayerIndexChanged(class ATigerPlayerState* self2, class ATigerPlayerState* self3)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetupPlayerIndexChanged"));

	struct
	{
		class ATigerPlayerState*       self2;
		class ATigerPlayerState*       self3;
	} params = {};

	params.self2 = self2;
	params.self3 = self3;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlpha
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumNamePlateWidget_C::UpdateAlpha()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlpha"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNamePlateWidget_C::UpdateAlphaValue(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaValue"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATBP_Player_C*           Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNamePlateWidget_C::SetPlayer(class ATBP_Player_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetPlayer"));

	struct
	{
		class ATBP_Player_C*           Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumNamePlateWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnGroupChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumNamePlateWidget_C::OnGroupChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnGroupChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumNamePlateWidget_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerNameChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerIndexChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNamePlateWidget_C::OnPlayerIndexChanged(unsigned char InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerIndexChanged"));

	struct
	{
		unsigned char                  InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNamePlateWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Tick"));

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


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ClearPlayerNameColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ElysiumNamePlateWidget_C::ClearPlayerNameColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ClearPlayerNameColor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ElysiumNamePlateWidget_C::ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget"));

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
