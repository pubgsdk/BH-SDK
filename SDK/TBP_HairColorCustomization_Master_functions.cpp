// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HairColorCustomization_Master_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.GetUiMaterialOverride
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UMaterialInterface* UTBP_HairColorCustomization_Master_C::GetUiMaterialOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.GetUiMaterialOverride"));

	struct
	{
		class UMaterialInterface*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.SetUIMaterialParameters
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* InMaterial                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_HairColorCustomization_Master_C::SetUIMaterialParameters(class UMaterialInstanceDynamic* InMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.SetUIMaterialParameters"));

	struct
	{
		class UMaterialInstanceDynamic* InMaterial;
	} params = {};

	params.InMaterial = InMaterial;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.ExecuteUbergraph_TBP_HairColorCustomization_Master
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_HairColorCustomization_Master_C::ExecuteUbergraph_TBP_HairColorCustomization_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HairColorCustomization_Master.TBP_HairColorCustomization_Master_C.ExecuteUbergraph_TBP_HairColorCustomization_Master"));

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
