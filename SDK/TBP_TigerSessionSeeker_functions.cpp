// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TigerSessionSeeker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnFailed_911A3FB24EB46568E8895DBD29076B9E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerSessionSeeker_C::OnFailed_911A3FB24EB46568E8895DBD29076B9E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnFailed_911A3FB24EB46568E8895DBD29076B9E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnSuccess_911A3FB24EB46568E8895DBD29076B9E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerSessionSeeker_C::OnSuccess_911A3FB24EB46568E8895DBD29076B9E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnSuccess_911A3FB24EB46568E8895DBD29076B9E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.SettingSynced_0F49896A4CCC5EF51613AEA169C1C444
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerSessionSeeker_C::SettingSynced_0F49896A4CCC5EF51613AEA169C1C444()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.SettingSynced_0F49896A4CCC5EF51613AEA169C1C444"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnFailed_0146C451405A7ED2AEDCEF977F1EB70D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerSessionSeeker_C::OnFailed_0146C451405A7ED2AEDCEF977F1EB70D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnFailed_0146C451405A7ED2AEDCEF977F1EB70D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnSuccess_0146C451405A7ED2AEDCEF977F1EB70D
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionResultList Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_TigerSessionSeeker_C::OnSuccess_0146C451405A7ED2AEDCEF977F1EB70D(const struct FTigerBpFindSessionResultList& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnSuccess_0146C451405A7ED2AEDCEF977F1EB70D"));

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


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.JoinBPImpl
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_TigerSessionSeeker_C::JoinBPImpl()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.JoinBPImpl"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.SeekBPImpl
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InGameModeId                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            InGameModeIndex                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ESessionType                   InSessionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerSessionSeeker_C::SeekBPImpl(const struct FString& InGameModeId, int InGameModeIndex, ESessionType InSessionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.SeekBPImpl"));

	struct
	{
		struct FString                 InGameModeId;
		int                            InGameModeIndex;
		ESessionType                   InSessionType;
	} params = {};

	params.InGameModeId = InGameModeId;
	params.InGameModeIndex = InGameModeIndex;
	params.InSessionType = InSessionType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.ServerSelectionCancelled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_TigerSessionSeeker_C::ServerSelectionCancelled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.ServerSelectionCancelled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnServerSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerBpFindSessionSelectedSession Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_TigerSessionSeeker_C::OnServerSelected(const struct FTigerBpFindSessionSelectedSession& Session)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.OnServerSelected"));

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


// Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.ExecuteUbergraph_TBP_TigerSessionSeeker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_TigerSessionSeeker_C::ExecuteUbergraph_TBP_TigerSessionSeeker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C.ExecuteUbergraph_TBP_TigerSessionSeeker"));

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
