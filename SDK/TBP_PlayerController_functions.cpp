// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PlayerController.TBP_PlayerController_C.ControllerConnectionChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InConnected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            InControllerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PlayerController_C::ControllerConnectionChanged(bool InConnected, int InControllerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.ControllerConnectionChanged"));

	struct
	{
		bool                           InConnected;
		int                            InControllerId;
	} params = {};

	params.InConnected = InConnected;
	params.InControllerId = InControllerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.StopGasSounds
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::StopGasSounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.StopGasSounds"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.DebugCrosshairLineHitTest
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PlayerController_C::DebugCrosshairLineHitTest(const struct FVector& Start, const struct FVector& End)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.DebugCrosshairLineHitTest"));

	struct
	{
		struct FVector                 Start;
		struct FVector                 End;
	} params = {};

	params.Start = Start;
	params.End = End;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBP_PlayerController_C::InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PlayerController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.ReturnToElysium
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::ReturnToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.ReturnToElysium"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.ShowPostMatchScreen
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::ShowPostMatchScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.ShowPostMatchScreen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.OnGhostModeSet_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsGhostModeEnabled            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_PlayerController_C::OnGhostModeSet_Event(bool bIsGhostModeEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.OnGhostModeSet_Event"));

	struct
	{
		bool                           bIsGhostModeEnabled;
	} params = {};

	params.bIsGhostModeEnabled = bIsGhostModeEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.BindOnGhostModeSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::BindOnGhostModeSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.BindOnGhostModeSet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.ExitMatch
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::ExitMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.ExitMatch"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.OnToggleMainMenu
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::OnToggleMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.OnToggleMainMenu"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.Debug_ShowCharacterCard
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_PlayerController_C::Debug_ShowCharacterCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.Debug_ShowCharacterCard"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PlayerController_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PlayerController_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.InpAxisEvt_Ghost_FlyUp_K2Node_InputAxisEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// float                          AxisValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PlayerController_C::InpAxisEvt_Ghost_FlyUp_K2Node_InputAxisEvent_3(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.InpAxisEvt_Ghost_FlyUp_K2Node_InputAxisEvent_3"));

	struct
	{
		float                          AxisValue;
	} params = {};

	params.AxisValue = AxisValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PlayerController.TBP_PlayerController_C.ExecuteUbergraph_TBP_PlayerController
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PlayerController_C::ExecuteUbergraph_TBP_PlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PlayerController.TBP_PlayerController_C.ExecuteUbergraph_TBP_PlayerController"));

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
