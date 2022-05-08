// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerSave_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TigerSave.TigerSaveSubSystem.OnSavingStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTigerSaveSubSystem::OnSavingStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerSave.TigerSaveSubSystem.OnSavingStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TigerSave.TigerSaveSubSystem.OnSavingComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           InResult                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTigerSaveSubSystem::OnSavingComplete(bool InResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerSave.TigerSaveSubSystem.OnSavingComplete"));

	struct
	{
		bool                           InResult;
	} params = {};

	params.InResult = InResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TigerSave.TigerSaveSubSystem.OnLoadingStarted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTigerSaveSubSystem::OnLoadingStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerSave.TigerSaveSubSystem.OnLoadingStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TigerSave.TigerSaveSubSystem.OnLoadingComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           InResult                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTigerSaveSubSystem::OnLoadingComplete(bool InResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TigerSave.TigerSaveSubSystem.OnLoadingComplete"));

	struct
	{
		bool                           InResult;
	} params = {};

	params.InResult = InResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
