// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Crossbow_Gas_Cloud_4_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C.OnTriggerClient
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACrossbow_Gas_Cloud_3_C::OnTriggerClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C.OnTriggerClient"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C.OnVehicleHit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACrossbow_Gas_Cloud_3_C::OnVehicleHit(class AActor* InActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C.OnVehicleHit"));

	struct
	{
		class AActor*                  InActor;
	} params = {};

	params.InActor = InActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACrossbow_Gas_Cloud_3_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C.ExecuteUbergraph_Crossbow_Gas_Cloud_4
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ACrossbow_Gas_Cloud_3_C::ExecuteUbergraph_Crossbow_Gas_Cloud_4(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C.ExecuteUbergraph_Crossbow_Gas_Cloud_4"));

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
