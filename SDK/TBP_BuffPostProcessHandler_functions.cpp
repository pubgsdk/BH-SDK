// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BuffPostProcessHandler_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableBuffDuration
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerConsumableAsset*   InConsumable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          OutDuration                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::GetConsumableBuffDuration(class UTigerConsumableAsset* InConsumable, float* OutDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableBuffDuration"));

	struct
	{
		class UTigerConsumableAsset*   InConsumable;
		float                          OutDuration;
	} params = {};

	params.InConsumable = InConsumable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutDuration != nullptr)
		*OutDuration = params.OutDuration;
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerConsumableAsset*   InConsumable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OutID                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::GetConsumableID(class UTigerConsumableAsset* InConsumable, int* OutID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableID"));

	struct
	{
		class UTigerConsumableAsset*   InConsumable;
		int                            OutID;
	} params = {};

	params.InConsumable = InConsumable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutID != nullptr)
		*OutID = params.OutID;
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.AddPostProcess
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*ATigerBuffPostProcess*/ PostProcess                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATBP_BuffPostProcess_Master_C* PostProcessActor               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::AddPostProcess(class UClass* /*ATigerBuffPostProcess*/ PostProcess, float Duration, int ID, class ATBP_BuffPostProcess_Master_C** PostProcessActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.AddPostProcess"));

	struct
	{
		class UClass* /*ATigerBuffPostProcess*/ PostProcess;
		float                          Duration;
		int                            ID;
		class ATBP_BuffPostProcess_Master_C* PostProcessActor;
	} params = {};

	params.PostProcess = PostProcess;
	params.Duration = Duration;
	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PostProcessActor != nullptr)
		*PostProcessActor = params.PostProcessActor;
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_BuffPostProcessHandler_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffAdded"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRefreshed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::OnBuffRefreshed(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRefreshed"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRemoved"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnClientBuffIdUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OldId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::OnClientBuffIdUpdated(int OldId, int NewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnClientBuffIdUpdated"));

	struct
	{
		int                            OldId;
		int                            NewId;
	} params = {};

	params.OldId = OldId;
	params.NewId = NewId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerConsumableAsset*   Consumable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::OnUseConsumableStarted(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableStarted"));

	struct
	{
		class UTigerConsumableAsset*   Consumable;
	} params = {};

	params.Consumable = Consumable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerConsumableAsset*   Consumable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::OnUseConsumableFinished(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableFinished"));

	struct
	{
		class UTigerConsumableAsset*   Consumable;
	} params = {};

	params.Consumable = Consumable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableCancelled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerConsumableAsset*   Consumable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::OnUseConsumableCancelled(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableCancelled"));

	struct
	{
		class UTigerConsumableAsset*   Consumable;
	} params = {};

	params.Consumable = Consumable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ExecuteUbergraph_TBP_BuffPostProcessHandler
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_BuffPostProcessHandler_C::ExecuteUbergraph_TBP_BuffPostProcessHandler(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ExecuteUbergraph_TBP_BuffPostProcessHandler"));

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
