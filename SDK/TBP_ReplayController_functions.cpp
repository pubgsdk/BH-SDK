// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ReplayController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ReplayController.TBP_ReplayController_C.Skip Seconds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InSeconds                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ReplayController_C::Skip_Seconds(float InSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ReplayController.TBP_ReplayController_C.Skip Seconds"));

	struct
	{
		float                          InSeconds;
	} params = {};

	params.InSeconds = InSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ReplayController.TBP_ReplayController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ReplayController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ReplayController.TBP_ReplayController_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ReplayController.TBP_ReplayController_C.ExitMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ReplayController_C::ExitMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ReplayController.TBP_ReplayController_C.ExitMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ReplayController.TBP_ReplayController_C.UpdateDisplayedInputMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerReplayInputMode          InInputModeToDisplay           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ReplayController_C::UpdateDisplayedInputMode(ETigerReplayInputMode InInputModeToDisplay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ReplayController.TBP_ReplayController_C.UpdateDisplayedInputMode"));

	struct
	{
		ETigerReplayInputMode          InInputModeToDisplay;
	} params = {};

	params.InInputModeToDisplay = InInputModeToDisplay;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ReplayController.TBP_ReplayController_C.ToggleThroughPlayers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ReplayController_C::ToggleThroughPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ReplayController.TBP_ReplayController_C.ToggleThroughPlayers"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ReplayController.TBP_ReplayController_C.ToggleKeyFramFocus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ReplayController_C::ToggleKeyFramFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ReplayController.TBP_ReplayController_C.ToggleKeyFramFocus"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ReplayController.TBP_ReplayController_C.ExecuteUbergraph_TBP_ReplayController
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ReplayController_C::ExecuteUbergraph_TBP_ReplayController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ReplayController.TBP_ReplayController_C.ExecuteUbergraph_TBP_ReplayController"));

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
