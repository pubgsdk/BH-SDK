// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Vehicle_01_DataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBrandingMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Vehicle_01_DataInterface_C::GetBrandingMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBrandingMaterial"));

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


// Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetLootableAsset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass* /*AActor*/       OutAsset                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Vehicle_01_DataInterface_C::GetLootableAsset(class UClass* /*AActor*/* OutAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetLootableAsset"));

	struct
	{
		class UClass* /*AActor*/       OutAsset;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAsset != nullptr)
		*OutAsset = params.OutAsset;
}


// Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBodyMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Vehicle_01_DataInterface_C::GetBodyMesh(class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBodyMesh"));

	struct
	{
		class UStaticMesh*             OutMesh;
	} params = {};


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
