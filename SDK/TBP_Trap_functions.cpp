// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Trap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Trap.TBP_Trap_C.CreateWorldIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerController*  InPlayerController             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_Discipline_Trap_WorldMarker_C* OutWidget                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Trap_C::CreateWorldIcon(class ATigerPlayerController* InPlayerController, class UTBP_UI_Discipline_Trap_WorldMarker_C** OutWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.CreateWorldIcon"));

	struct
	{
		class ATigerPlayerController*  InPlayerController;
		class UTBP_UI_Discipline_Trap_WorldMarker_C* OutWidget;
	} params = {};

	params.InPlayerController = InPlayerController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function TBP_Trap.TBP_Trap_C.IsCharacterFriendlyWithDisciplineCaster
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATigerCharacter*         OtherCharacter                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Is_Friendly                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Trap_C::IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* OtherCharacter, bool* Is_Friendly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.IsCharacterFriendlyWithDisciplineCaster"));

	struct
	{
		class ATigerCharacter*         OtherCharacter;
		bool                           Is_Friendly;
	} params = {};

	params.OtherCharacter = OtherCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Is_Friendly != nullptr)
		*Is_Friendly = params.Is_Friendly;
}


// Function TBP_Trap.TBP_Trap_C.GetWorldMarkerWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Discipline_Trap_WorldMarker_C* AsTBP_UI_Discipline_Trap_World_Marker (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Trap_C::GetWorldMarkerWidget(class UTBP_UI_Discipline_Trap_WorldMarker_C** AsTBP_UI_Discipline_Trap_World_Marker, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.GetWorldMarkerWidget"));

	struct
	{
		class UTBP_UI_Discipline_Trap_WorldMarker_C* AsTBP_UI_Discipline_Trap_World_Marker;
		bool                           bSuccess;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsTBP_UI_Discipline_Trap_World_Marker != nullptr)
		*AsTBP_UI_Discipline_Trap_World_Marker = params.AsTBP_UI_Discipline_Trap_World_Marker;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function TBP_Trap.TBP_Trap_C.OnPlacedTrap
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Trap_C::OnPlacedTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.OnPlacedTrap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Trap.TBP_Trap_C.OnActivatedTrap
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Trap_C::OnActivatedTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.OnActivatedTrap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Trap.TBP_Trap_C.OnTriggeredTrap
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Trap_C::OnTriggeredTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.OnTriggeredTrap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Trap.TBP_Trap_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Trap_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.ReceiveTick"));

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


// Function TBP_Trap.TBP_Trap_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Trap_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Trap.TBP_Trap_C.TrapDestroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Trap_C::TrapDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.TrapDestroy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Trap.TBP_Trap_C.ExecuteUbergraph_TBP_Trap
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Trap_C::ExecuteUbergraph_TBP_Trap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap.TBP_Trap_C.ExecuteUbergraph_TBP_Trap"));

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
