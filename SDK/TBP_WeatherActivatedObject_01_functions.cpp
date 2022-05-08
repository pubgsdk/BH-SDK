// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_WeatherActivatedObject_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_WeatherActivatedObject_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C.UpdateWeatherComponents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_WeatherActivatedObject_01_C::UpdateWeatherComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C.UpdateWeatherComponents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C.ExecuteUbergraph_TBP_WeatherActivatedObject_01
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_WeatherActivatedObject_01_C::ExecuteUbergraph_TBP_WeatherActivatedObject_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C.ExecuteUbergraph_TBP_WeatherActivatedObject_01"));

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
