// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_GraffitiParentDataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GraffitiParentDataInterface.BP_GraffitiParentDataInterface_C.GetRandomMixedMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InSeed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInterface*      OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_GraffitiParentDataInterface_C::GetRandomMixedMaterial(int InSeed, class UMaterialInterface** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GraffitiParentDataInterface.BP_GraffitiParentDataInterface_C.GetRandomMixedMaterial"));

	struct
	{
		int                            InSeed;
		class UMaterialInterface*      OutMaterial;
	} params = {};

	params.InSeed = InSeed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;
}


// Function BP_GraffitiParentDataInterface.BP_GraffitiParentDataInterface_C.GetRandomMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InSeed                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInterface*      OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_GraffitiParentDataInterface_C::GetRandomMaterial(int InSeed, class UMaterialInterface** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_GraffitiParentDataInterface.BP_GraffitiParentDataInterface_C.GetRandomMaterial"));

	struct
	{
		int                            InSeed;
		class UMaterialInterface*      OutMaterial;
	} params = {};

	params.InSeed = InSeed;

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
