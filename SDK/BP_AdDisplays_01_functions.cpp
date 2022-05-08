// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AdDisplays_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AdDisplays_01.BP_AdDisplays_01_C.SetLightValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URectLightComponent*     InLight                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InHeigth                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InWidth                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AdDisplays_01_C::SetLightValues(class URectLightComponent* InLight, float InHeigth, float InWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdDisplays_01.BP_AdDisplays_01_C.SetLightValues"));

	struct
	{
		class URectLightComponent*     InLight;
		float                          InHeigth;
		float                          InWidth;
	} params = {};

	params.InLight = InLight;
	params.InHeigth = InHeigth;
	params.InWidth = InWidth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdDisplays_01.BP_AdDisplays_01_C.GetSourceTexture
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture*                ParameterValue                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AdDisplays_01_C::GetSourceTexture(class UTexture** ParameterValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdDisplays_01.BP_AdDisplays_01_C.GetSourceTexture"));

	struct
	{
		class UTexture*                ParameterValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ParameterValue != nullptr)
		*ParameterValue = params.ParameterValue;
}


// Function BP_AdDisplays_01.BP_AdDisplays_01_C.SetStaticMeshAndMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InMaterialIndex                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AdDisplays_01_C::SetStaticMeshAndMaterial(int InMaterialIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdDisplays_01.BP_AdDisplays_01_C.SetStaticMeshAndMaterial"));

	struct
	{
		int                            InMaterialIndex;
	} params = {};

	params.InMaterialIndex = InMaterialIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdDisplays_01.BP_AdDisplays_01_C.GetWorldRandomPoster
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int ABP_AdDisplays_01_C::GetWorldRandomPoster()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdDisplays_01.BP_AdDisplays_01_C.GetWorldRandomPoster"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BP_AdDisplays_01.BP_AdDisplays_01_C.OnRebuild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_AdDisplays_01_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdDisplays_01.BP_AdDisplays_01_C.OnRebuild"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AdDisplays_01.BP_AdDisplays_01_C.ExecuteUbergraph_BP_AdDisplays_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_AdDisplays_01_C::ExecuteUbergraph_BP_AdDisplays_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AdDisplays_01.BP_AdDisplays_01_C.ExecuteUbergraph_BP_AdDisplays_01"));

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
