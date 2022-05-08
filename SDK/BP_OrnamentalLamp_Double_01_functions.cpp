// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_OrnamentalLamp_Double_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OrnamentalLamp_Double_01.BP_OrnamentalLamp_Double_01_C.SetMaterialOn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ULightComponent*         InLight                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_OrnamentalLamp_Double_01_C::SetMaterialOn(class UPrimitiveComponent* InMesh, class ULightComponent* InLight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrnamentalLamp_Double_01.BP_OrnamentalLamp_Double_01_C.SetMaterialOn"));

	struct
	{
		class UPrimitiveComponent*     InMesh;
		class ULightComponent*         InLight;
	} params = {};

	params.InMesh = InMesh;
	params.InLight = InLight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_OrnamentalLamp_Double_01.BP_OrnamentalLamp_Double_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_OrnamentalLamp_Double_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrnamentalLamp_Double_01.BP_OrnamentalLamp_Double_01_C.UserConstructionScript"));

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
