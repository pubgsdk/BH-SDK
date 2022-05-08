// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Social_Elysium_Subscreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerListIfNeeded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_Subscreen_C::RefreshPlayerListIfNeeded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerListIfNeeded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayerEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerElysiumPlayerState* PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Elysium_Subscreen_C::AddPlayerEntry(class ATigerElysiumPlayerState* PlayerState, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayerEntry"));

	struct
	{
		class ATigerElysiumPlayerState* PlayerState;
		int                            Index;
	} params = {};

	params.PlayerState = PlayerState;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerList
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_Subscreen_C::RefreshPlayerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerList"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_Subscreen_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_Subscreen_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Elysium_Subscreen_C::AddPlayer(class ATigerPlayerState* PlayerState, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayer"));

	struct
	{
		class ATigerPlayerState*       PlayerState;
		int                            Index;
	} params = {};

	params.PlayerState = PlayerState;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnPartyUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Social_Elysium_Subscreen_C::OnPartyUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnPartyUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Social_Elysium_Subscreen_C::ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen"));

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
