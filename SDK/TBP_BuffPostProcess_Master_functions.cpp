// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BuffPostProcess_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.SetParameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NormalizedDuration             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_Master_C::SetParameters(float NormalizedDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.SetParameters"));

	struct
	{
		float                          NormalizedDuration;
	} params = {};

	params.NormalizedDuration = NormalizedDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewDuration                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_Master_C::Refresh(float NewDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Refresh"));

	struct
	{
		float                          NewDuration;
	} params = {};

	params.NewDuration = NewDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Remove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BuffPostProcess_Master_C::Remove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Remove"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BuffID                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TotalDuration                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_Master_C::Initialize(int BuffID, float TotalDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Initialize"));

	struct
	{
		int                            BuffID;
		float                          TotalDuration;
	} params = {};

	params.BuffID = BuffID;
	params.TotalDuration = TotalDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_Master_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.UpdateDuration
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BuffPostProcess_Master_C::UpdateDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.UpdateDuration"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ExecuteUbergraph_TBP_BuffPostProcess_Master
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BuffPostProcess_Master_C::ExecuteUbergraph_TBP_BuffPostProcess_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ExecuteUbergraph_TBP_BuffPostProcess_Master"));

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
