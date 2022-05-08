// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GroupMemberOutOfSightWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandleLifeStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerLifeStatus         NewLifeStatus                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberOutOfSightWidget_C::HandleLifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandleLifeStatusChanged"));

	struct
	{
		ETigerPlayerLifeStatus         NewLifeStatus;
	} params = {};

	params.NewLifeStatus = NewLifeStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandlePlayerChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InTigerPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberOutOfSightWidget_C::HandlePlayerChanged(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandlePlayerChanged"));

	struct
	{
		class ATigerPlayer*            InTigerPlayer;
	} params = {};

	params.InTigerPlayer = InTigerPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.GetColorAndOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UTBP_GroupMemberOutOfSightWidget_C::GetColorAndOpacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.GetColorAndOpacity"));

	struct
	{
		struct FLinearColor            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       Player_State                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberOutOfSightWidget_C::Initialize(class ATigerPlayerState* Player_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Initialize"));

	struct
	{
		class ATigerPlayerState*       Player_State;
	} params = {};

	params.Player_State = Player_State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnPawnChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberOutOfSightWidget_C::OnPawnChanged(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnPawnChanged"));

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


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnScreenStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsOnScreen                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_GroupMemberOutOfSightWidget_C::OnScreenStateChanged(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnScreenStateChanged"));

	struct
	{
		bool                           bInIsOnScreen;
	} params = {};

	params.bInIsOnScreen = bInIsOnScreen;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_GroupMemberOutOfSightWidget_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_GroupMemberOutOfSightWidget_C::OnNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnNameChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberOutOfSightWidget_C::ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget"));

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


// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnLifeStatusChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerLifeStatus         InLifeStatus                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberOutOfSightWidget_C::OnLifeStatusChanged__DelegateSignature(ETigerPlayerLifeStatus InLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnLifeStatusChanged__DelegateSignature"));

	struct
	{
		ETigerPlayerLifeStatus         InLifeStatus;
	} params = {};

	params.InLifeStatus = InLifeStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
