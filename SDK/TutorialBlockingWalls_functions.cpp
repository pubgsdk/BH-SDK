// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TutorialBlockingWalls_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialBlockingWalls.TutorialBlockingWalls_C.BuildWall
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATutorialBlockingWalls_C::BuildWall()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialBlockingWalls.TutorialBlockingWalls_C.BuildWall"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialBlockingWalls.TutorialBlockingWalls_C.GeneratePoints
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATutorialBlockingWalls_C::GeneratePoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialBlockingWalls.TutorialBlockingWalls_C.GeneratePoints"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialBlockingWalls.TutorialBlockingWalls_C.ActivateWalls
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATutorialBlockingWalls_C::ActivateWalls()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialBlockingWalls.TutorialBlockingWalls_C.ActivateWalls"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialBlockingWalls.TutorialBlockingWalls_C.DeactivateWalls
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATutorialBlockingWalls_C::DeactivateWalls()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialBlockingWalls.TutorialBlockingWalls_C.DeactivateWalls"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialBlockingWalls.TutorialBlockingWalls_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATutorialBlockingWalls_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialBlockingWalls.TutorialBlockingWalls_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TutorialBlockingWalls.TutorialBlockingWalls_C.ExecuteUbergraph_TutorialBlockingWalls
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATutorialBlockingWalls_C::ExecuteUbergraph_TutorialBlockingWalls(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TutorialBlockingWalls.TutorialBlockingWalls_C.ExecuteUbergraph_TutorialBlockingWalls"));

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
