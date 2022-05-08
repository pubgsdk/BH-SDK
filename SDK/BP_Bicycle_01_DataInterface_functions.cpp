// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_Bicycle_01_DataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bicycle_01_DataInterface.BP_Bicycle_01_DataInterface_C.GetChildSeatMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Bicycle_01_DataInterface_C::GetChildSeatMesh(class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Bicycle_01_DataInterface.BP_Bicycle_01_DataInterface_C.GetChildSeatMesh"));

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


// Function BP_Bicycle_01_DataInterface.BP_Bicycle_01_DataInterface_C.GetBasketMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Bicycle_01_DataInterface_C::GetBasketMesh(class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Bicycle_01_DataInterface.BP_Bicycle_01_DataInterface_C.GetBasketMesh"));

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


// Function BP_Bicycle_01_DataInterface.BP_Bicycle_01_DataInterface_C.GetBikeMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InIsBroken                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_Bicycle_01_DataInterface_C::GetBikeMesh(int InIndex, bool InIsBroken, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_Bicycle_01_DataInterface.BP_Bicycle_01_DataInterface_C.GetBikeMesh"));

	struct
	{
		int                            InIndex;
		bool                           InIsBroken;
		class UStaticMesh*             OutMesh;
	} params = {};

	params.InIndex = InIndex;
	params.InIsBroken = InIsBroken;

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
