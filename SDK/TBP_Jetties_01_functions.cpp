// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Jetties_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Jetties_01.TBP_Jetties_01_C.SetMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   InSlotName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstance*       InMaterial                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Jetties_01_C::SetMaterial(class UStaticMeshComponent* InMesh, const struct FName& InSlotName, class UMaterialInstance* InMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Jetties_01.TBP_Jetties_01_C.SetMaterial"));

	struct
	{
		class UStaticMeshComponent*    InMesh;
		struct FName                   InSlotName;
		class UMaterialInstance*       InMaterial;
	} params = {};

	params.InMesh = InMesh;
	params.InSlotName = InSlotName;
	params.InMaterial = InMaterial;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Jetties_01.TBP_Jetties_01_C.SetMeshLocation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InFloorIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Jetties_01_C::SetMeshLocation(class UPrimitiveComponent* InMesh, int InFloorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Jetties_01.TBP_Jetties_01_C.SetMeshLocation"));

	struct
	{
		class UPrimitiveComponent*     InMesh;
		int                            InFloorIndex;
	} params = {};

	params.InMesh = InMesh;
	params.InFloorIndex = InFloorIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Jetties_01.TBP_Jetties_01_C.SetCustomPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InMesh                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            InOffsetColor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Jetties_01_C::SetCustomPrimitiveData(class UPrimitiveComponent* InMesh, const struct FLinearColor& InOffsetColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Jetties_01.TBP_Jetties_01_C.SetCustomPrimitiveData"));

	struct
	{
		class UPrimitiveComponent*     InMesh;
		struct FLinearColor            InOffsetColor;
	} params = {};

	params.InMesh = InMesh;
	params.InOffsetColor = InOffsetColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Jetties_01.TBP_Jetties_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Jetties_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Jetties_01.TBP_Jetties_01_C.UserConstructionScript"));

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
