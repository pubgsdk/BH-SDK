// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Tree_01DataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetImpostorMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_TreeType_01>     InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InHasLeaves                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Tree_01DataInterface_C::GetImpostorMaterial(TEnumAsByte<E_TreeType_01> InIndex, bool InHasLeaves, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetImpostorMaterial"));

	struct
	{
		TEnumAsByte<E_TreeType_01>     InIndex;
		bool                           InHasLeaves;
		class UMaterialInstance*       OutMaterial;
	} params = {};

	params.InIndex = InIndex;
	params.InHasLeaves = InHasLeaves;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;
}


// Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetThickLeavesMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_TreeType_01>     InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Tree_01DataInterface_C::GetThickLeavesMaterial(TEnumAsByte<E_TreeType_01> InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetThickLeavesMaterial"));

	struct
	{
		TEnumAsByte<E_TreeType_01>     InIndex;
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


// Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetLeavesMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_TreeType_01>     InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Tree_01DataInterface_C::GetLeavesMaterial(TEnumAsByte<E_TreeType_01> InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetLeavesMaterial"));

	struct
	{
		TEnumAsByte<E_TreeType_01>     InIndex;
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


// Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetNoLeavesMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_TreeType_01>     InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Tree_01DataInterface_C::GetNoLeavesMaterial(TEnumAsByte<E_TreeType_01> InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetNoLeavesMaterial"));

	struct
	{
		TEnumAsByte<E_TreeType_01>     InIndex;
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


// Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetTreeMeshWithCollisionProc
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_TreeType_01>     InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutCollionMesh                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Tree_01DataInterface_C::GetTreeMeshWithCollisionProc(TEnumAsByte<E_TreeType_01> InIndex, class UStaticMesh** OutMesh, class UStaticMesh** OutCollionMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Tree_01DataInterface.TBP_Tree_01DataInterface_C.GetTreeMeshWithCollisionProc"));

	struct
	{
		TEnumAsByte<E_TreeType_01>     InIndex;
		class UStaticMesh*             OutMesh;
		class UStaticMesh*             OutCollionMesh;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
	if (OutCollionMesh != nullptr)
		*OutCollionMesh = params.OutCollionMesh;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
