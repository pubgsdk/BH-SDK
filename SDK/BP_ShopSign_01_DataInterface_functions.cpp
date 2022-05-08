// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ShopSign_01_DataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShopSign_01_DataInterface.BP_ShopSign_01_DataInterface_C.GetMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterials                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ShopSign_01_DataInterface_C::GetMaterial(int InIndex, class UMaterialInstance** OutMaterials)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShopSign_01_DataInterface.BP_ShopSign_01_DataInterface_C.GetMaterial"));

	struct
	{
		int                            InIndex;
		class UMaterialInstance*       OutMaterials;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMaterials != nullptr)
		*OutMaterials = params.OutMaterials;
}


// Function BP_ShopSign_01_DataInterface.BP_ShopSign_01_DataInterface_C.GetMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_ShopSign_01_DataInterface_C::GetMesh(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShopSign_01_DataInterface.BP_ShopSign_01_DataInterface_C.GetMesh"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
