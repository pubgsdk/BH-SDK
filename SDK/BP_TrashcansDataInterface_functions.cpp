// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_TrashcansDataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetTrashFlippedMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TrashcansDataInterface_C::GetTrashFlippedMesh(class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetTrashFlippedMesh"));

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


// Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetStickerMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TrashcansDataInterface_C::GetStickerMesh(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetStickerMesh"));

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


// Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetTrashMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             OutTrashMesh                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TrashcansDataInterface_C::GetTrashMesh(class UStaticMesh** OutTrashMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetTrashMesh"));

	struct
	{
		class UStaticMesh*             OutTrashMesh;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutTrashMesh != nullptr)
		*OutTrashMesh = params.OutTrashMesh;
}


// Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetGraffitiMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TrashcansDataInterface_C::GetGraffitiMesh(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetGraffitiMesh"));

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


// Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetMixedGraffitiMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TrashcansDataInterface_C::GetMixedGraffitiMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetMixedGraffitiMaterial"));

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


// Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetGraffitiMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TrashcansDataInterface_C::GetGraffitiMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetGraffitiMaterial"));

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


// Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       OutMaterial                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_TrashcansDataInterface_C::GetMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_TrashcansDataInterface.BP_TrashcansDataInterface_C.GetMaterial"));

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
