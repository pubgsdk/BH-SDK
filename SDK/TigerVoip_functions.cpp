// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerVoip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction TigerVoip.TigerVoipTalkerState.VoipDeviceChanged__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UTigerVoipTalkerState::VoipDeviceChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction TigerVoip.TigerVoipTalkerState.VoipDeviceChanged__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TigerVoip.TigerVoipTalkerState.IsPlayerTalking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTigerPersistentVoipID  InPlayerId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UTigerVoipTalkerState::IsPlayerTalking(const struct FTigerPersistentVoipID& InPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerVoip.TigerVoipTalkerState.IsPlayerTalking"));

	struct
	{
		struct FTigerPersistentVoipID  InPlayerId;
		bool                           ReturnValue;
	} params = {};

	params.InPlayerId = InPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TigerVoip.TigerVoipTalkerState.IsPlayerBlocked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTigerPersistentVoipID  InPlayerId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UTigerVoipTalkerState::IsPlayerBlocked(const struct FTigerPersistentVoipID& InPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerVoip.TigerVoipTalkerState.IsPlayerBlocked"));

	struct
	{
		struct FTigerPersistentVoipID  InPlayerId;
		bool                           ReturnValue;
	} params = {};

	params.InPlayerId = InPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TigerVoip.TigerVoipTalkerState.HasAcknowledgedPlayerHasJoined
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTigerPersistentVoipID  InPlayerId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UTigerVoipTalkerState::HasAcknowledgedPlayerHasJoined(const struct FTigerPersistentVoipID& InPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerVoip.TigerVoipTalkerState.HasAcknowledgedPlayerHasJoined"));

	struct
	{
		struct FTigerPersistentVoipID  InPlayerId;
		bool                           ReturnValue;
	} params = {};

	params.InPlayerId = InPlayerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TigerVoip.TigerVoipTalkerState.GetOutputDevices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FText>           ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FText> UTigerVoipTalkerState::GetOutputDevices()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerVoip.TigerVoipTalkerState.GetOutputDevices"));

	struct
	{
		TArray<struct FText>           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TigerVoip.TigerVoipTalkerState.GetInputDevices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FText>           ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FText> UTigerVoipTalkerState::GetInputDevices()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerVoip.TigerVoipTalkerState.GetInputDevices"));

	struct
	{
		TArray<struct FText>           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TigerVoip.TigerVoipTalkerState.AcknowledgedPlayerHasJoined
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTigerPersistentVoipID  InPlayerId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bInReset                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UTigerVoipTalkerState::AcknowledgedPlayerHasJoined(const struct FTigerPersistentVoipID& InPlayerId, bool bInReset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerVoip.TigerVoipTalkerState.AcknowledgedPlayerHasJoined"));

	struct
	{
		struct FTigerPersistentVoipID  InPlayerId;
		bool                           bInReset;
		bool                           ReturnValue;
	} params = {};

	params.InPlayerId = InPlayerId;
	params.bInReset = bInReset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
