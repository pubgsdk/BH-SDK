// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HavenCapturePoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_HavenCapturePoint_C::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.SetColor"));

	struct
	{
		struct FLinearColor            Color;
	} params = {};

	params.Color = Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.StatusChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ETigerCapturePointStatus       Status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_HavenCapturePoint_C::StatusChanged(ETigerCapturePointStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.StatusChanged"));

	struct
	{
		ETigerCapturePointStatus       Status;
	} params = {};

	params.Status = Status;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_HavenCapturePoint_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.ReceiveTick"));

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


// Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_HavenCapturePoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.ExecuteUbergraph_TBP_HavenCapturePoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_HavenCapturePoint_C::ExecuteUbergraph_TBP_HavenCapturePoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HavenCapturePoint.TBP_HavenCapturePoint_C.ExecuteUbergraph_TBP_HavenCapturePoint"));

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
