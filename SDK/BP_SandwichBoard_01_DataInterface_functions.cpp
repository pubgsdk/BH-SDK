// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_SandwichBoard_01_DataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SandwichBoard_01_DataInterface.BP_SandwichBoard_01_DataInterface_C.GetMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<Enum_ChalkBoards>  InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInterface*      OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_SandwichBoard_01_DataInterface_C::GetMaterial(TEnumAsByte<Enum_ChalkBoards> InType, class UMaterialInterface** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SandwichBoard_01_DataInterface.BP_SandwichBoard_01_DataInterface_C.GetMaterial"));

	struct
	{
		TEnumAsByte<Enum_ChalkBoards>  InType;
		class UMaterialInterface*      OutMaterial;
	} params = {};

	params.InType = InType;

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
