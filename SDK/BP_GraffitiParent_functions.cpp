// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GraffitiParent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GraffitiParent.BP_GraffitiParent_C.RandomBoolFromWorld
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InSeed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           OutValue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_GraffitiParent_C::RandomBoolFromWorld(int InSeed, bool* OutValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GraffitiParent.BP_GraffitiParent_C.RandomBoolFromWorld"));

	struct
	{
		int                            InSeed;
		bool                           OutValue;
	} params = {};

	params.InSeed = InSeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BP_GraffitiParent.BP_GraffitiParent_C.InitializeRandomFromWorld
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GraffitiParent_C::InitializeRandomFromWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GraffitiParent.BP_GraffitiParent_C.InitializeRandomFromWorld"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_GraffitiParent.BP_GraffitiParent_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GraffitiParent_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GraffitiParent.BP_GraffitiParent_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
