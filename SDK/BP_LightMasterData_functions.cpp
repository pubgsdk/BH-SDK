// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LightMasterData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LightMasterData.BP_LightMasterData_C.GetIESProfile
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTextureLightProfile*    OutIESProfile                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_LightMasterData_C::GetIESProfile(int InIndex, class UTextureLightProfile** OutIESProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMasterData.BP_LightMasterData_C.GetIESProfile"));

	struct
	{
		int                            InIndex;
		class UTextureLightProfile*    OutIESProfile;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIESProfile != nullptr)
		*OutIESProfile = params.OutIESProfile;
}


// Function BP_LightMasterData.BP_LightMasterData_C.GetLightMateriales
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_LightMasterData_C::GetLightMateriales(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMasterData.BP_LightMasterData_C.GetLightMateriales"));

	struct
	{
		int                            InIndex;
		class UMaterialInstance*       OutMaterial;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;
}


// Function BP_LightMasterData.BP_LightMasterData_C.GetLightMeshes
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_LightMasterData_C::GetLightMeshes(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMasterData.BP_LightMasterData_C.GetLightMeshes"));

	struct
	{
		int                            InIndex;
		class UStaticMesh*             OutMesh;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
}


// Function BP_LightMasterData.BP_LightMasterData_C.GetLightFlickerMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_LightMasterData_C::GetLightFlickerMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMasterData.BP_LightMasterData_C.GetLightFlickerMaterial"));

	struct
	{
		int                            InIndex;
		class UMaterialInstance*       OutMaterial;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;
}


// Function BP_LightMasterData.BP_LightMasterData_C.GetLightOffMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_LightMasterData_C::GetLightOffMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightMasterData.BP_LightMasterData_C.GetLightOffMaterial"));

	struct
	{
		int                            InIndex;
		class UMaterialInstance*       OutMaterial;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
