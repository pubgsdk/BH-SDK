// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_RainWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RainWindow.BP_RainWindow_C.UpdateWeather
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RainWindow_C::UpdateWeather()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RainWindow.BP_RainWindow_C.UpdateWeather"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RainWindow.BP_RainWindow_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RainWindow_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RainWindow.BP_RainWindow_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RainWindow.BP_RainWindow_C.UpdateWeatherComponents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RainWindow_C::UpdateWeatherComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RainWindow.BP_RainWindow_C.UpdateWeatherComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_RainWindow.BP_RainWindow_C.ExecuteUbergraph_BP_RainWindow
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_RainWindow_C::ExecuteUbergraph_BP_RainWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_RainWindow.BP_RainWindow_C.ExecuteUbergraph_BP_RainWindow"));

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
