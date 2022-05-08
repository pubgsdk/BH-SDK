// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BackdropHelicopter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.HandleHelicopterAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BackdropHelicopter_C::HandleHelicopterAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.HandleHelicopterAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BackdropHelicopter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_BackdropHelicopter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BackdropHelicopter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.ReceiveTick"));

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


// Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.SetNewSpotLightTarget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BackdropHelicopter_C::SetNewSpotLightTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.SetNewSpotLightTarget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.UpdateAcceleration
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_BackdropHelicopter_C::UpdateAcceleration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.UpdateAcceleration"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.ExecuteUbergraph_TBP_BackdropHelicopter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BackdropHelicopter_C::ExecuteUbergraph_TBP_BackdropHelicopter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BackdropHelicopter.TBP_BackdropHelicopter_C.ExecuteUbergraph_TBP_BackdropHelicopter"));

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
