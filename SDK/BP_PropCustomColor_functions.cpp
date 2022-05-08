// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_PropCustomColor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PropCustomColor.BP_PropCustomColor_C.SetCustomPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PropCustomColor_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PropCustomColor.BP_PropCustomColor_C.SetCustomPrimitiveData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PropCustomColor.BP_PropCustomColor_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PropCustomColor_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PropCustomColor.BP_PropCustomColor_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PropCustomColor.BP_PropCustomColor_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PropCustomColor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PropCustomColor.BP_PropCustomColor_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_PropCustomColor.BP_PropCustomColor_C.ExecuteUbergraph_BP_PropCustomColor
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_PropCustomColor_C::ExecuteUbergraph_BP_PropCustomColor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_PropCustomColor.BP_PropCustomColor_C.ExecuteUbergraph_BP_PropCustomColor"));

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
