// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Elysium_QueueComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.IsGroupLeader
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGroupLeader                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_QueueComponent_C::IsGroupLeader(bool* IsGroupLeader)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.IsGroupLeader"));

	struct
	{
		bool                           IsGroupLeader;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsGroupLeader != nullptr)
		*IsGroupLeader = params.IsGroupLeader;
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnFail_C678935B4BE9AD6564A4B896002112E8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_QueueComponent_C::OnFail_C678935B4BE9AD6564A4B896002112E8(class UTexture2DDynamic* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnFail_C678935B4BE9AD6564A4B896002112E8"));

	struct
	{
		class UTexture2DDynamic*       Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnSuccess_C678935B4BE9AD6564A4B896002112E8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_QueueComponent_C::OnSuccess_C678935B4BE9AD6564A4B896002112E8(class UTexture2DDynamic* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnSuccess_C678935B4BE9AD6564A4B896002112E8"));

	struct
	{
		class UTexture2DDynamic*       Texture;
	} params = {};

	params.Texture = Texture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.UpdateGameModeData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InSelectedGameModeId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_QueueComponent_C::UpdateGameModeData(const struct FString& InSelectedGameModeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.UpdateGameModeData"));

	struct
	{
		struct FString                 InSelectedGameModeId;
	} params = {};

	params.InSelectedGameModeId = InSelectedGameModeId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnStartReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::OnStartReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnStartReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnCancelReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::OnCancelReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnCancelReady"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnMatchFound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::OnMatchFound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnMatchFound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.UpdateKeypromptLabel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::UpdateKeypromptLabel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.UpdateKeypromptLabel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.StartTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::StartTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.StartTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.UpdateQueueLabel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::UpdateQueueLabel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.UpdateQueueLabel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.StopQueueTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::StopQueueTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.StopQueueTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.UpdateGroupLeaderInfoLabel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Elysium_QueueComponent_C::UpdateGroupLeaderInfoLabel()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.UpdateGroupLeaderInfoLabel"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnGroupReadyChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInIsGroupReady                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Elysium_QueueComponent_C::OnGroupReadyChanged(bool bInIsGroupReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.OnGroupReadyChanged"));

	struct
	{
		bool                           bInIsGroupReady;
	} params = {};

	params.bInIsGroupReady = bInIsGroupReady;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.ExecuteUbergraph_TBP_UI_Elysium_QueueComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Elysium_QueueComponent_C::ExecuteUbergraph_TBP_UI_Elysium_QueueComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Elysium_QueueComponent.TBP_UI_Elysium_QueueComponent_C.ExecuteUbergraph_TBP_UI_Elysium_QueueComponent"));

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
