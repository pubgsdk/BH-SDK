// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PlayerHealthBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnReadyStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InReady                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_PlayerHealthBar_C::OnReadyStateChanged(bool InReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnReadyStateChanged"));

	struct
	{
		bool                           InReady;
	} params = {};

	params.InReady = InReady;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.DisableHover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerHealthBar_C::DisableHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.DisableHover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.EnableHover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_PlayerHealthBar_C::EnableHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.EnableHover"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.SetPlayerState
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerForceOption              InForceMemberCard              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerHealthBar_C::SetPlayerState(class ATigerPlayerState* PlayerState, ETigerForceOption InForceMemberCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.SetPlayerState"));

	struct
	{
		class ATigerPlayerState*       PlayerState;
		ETigerForceOption              InForceMemberCard;
	} params = {};

	params.PlayerState = PlayerState;
	params.InForceMemberCard = InForceMemberCard;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OverridePlayerState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       OverridePlayerState            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerForceOption              InForceMemberCard              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerHealthBar_C::OverridePlayerState(class ATigerPlayerState* OverridePlayerState, ETigerForceOption InForceMemberCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OverridePlayerState"));

	struct
	{
		class ATigerPlayerState*       OverridePlayerState;
		ETigerForceOption              InForceMemberCard;
	} params = {};

	params.OverridePlayerState = OverridePlayerState;
	params.InForceMemberCard = InForceMemberCard;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerHealthBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.Tick"));

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


// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnPlayerStateReceived
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerHealthBar_C::OnPlayerStateReceived(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnPlayerStateReceived"));

	struct
	{
		class ATigerPlayerState*       InPlayerState;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.ExecuteUbergraph_TBP_UI_PlayerHealthBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_PlayerHealthBar_C::ExecuteUbergraph_TBP_UI_PlayerHealthBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.ExecuteUbergraph_TBP_UI_PlayerHealthBar"));

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
