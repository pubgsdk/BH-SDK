// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LED_Strip_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LED_Strip_01.BP_LED_Strip_01_C.LightSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URectLightComponent*     Light                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_LED_Strip_01_C::LightSetup(class URectLightComponent* Light)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LED_Strip_01.BP_LED_Strip_01_C.LightSetup"));

	struct
	{
		class URectLightComponent*     Light;
	} params = {};

	params.Light = Light;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_LED_Strip_01.BP_LED_Strip_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_LED_Strip_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LED_Strip_01.BP_LED_Strip_01_C.UserConstructionScript"));

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
