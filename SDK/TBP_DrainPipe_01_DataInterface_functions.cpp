// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DrainPipe_01_DataInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetStickers
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_DrainPipe_01_DataInterface_C::GetStickers(class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetStickers"));

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


// Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetLongMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<E_DrainPipes_01>   InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_DrainPipe_01_DataInterface_C::GetLongMesh(TEnumAsByte<E_DrainPipes_01> InType, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetLongMesh"));

	struct
	{
		TEnumAsByte<E_DrainPipes_01>   InType;
		class UStaticMesh*             OutMesh;
	} params = {};

	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
}


// Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetBottomMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DrainPipes_01>   InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_DrainPipe_01_DataInterface_C::GetBottomMesh(int InIndex, TEnumAsByte<E_DrainPipes_01> InType, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetBottomMesh"));

	struct
	{
		int                            InIndex;
		TEnumAsByte<E_DrainPipes_01>   InType;
		class UStaticMesh*             OutMesh;
	} params = {};

	params.InIndex = InIndex;
	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
}


// Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetMiddleMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DrainPipes_01>   InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_DrainPipe_01_DataInterface_C::GetMiddleMesh(int InIndex, TEnumAsByte<E_DrainPipes_01> InType, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetMiddleMesh"));

	struct
	{
		int                            InIndex;
		TEnumAsByte<E_DrainPipes_01>   InType;
		class UStaticMesh*             OutMesh;
	} params = {};

	params.InIndex = InIndex;
	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;
}


// Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetTopMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<E_DrainPipes_01>   InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InEnableTopPiece               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UStaticMesh*             OutMesh                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_DrainPipe_01_DataInterface_C::GetTopMesh(int InIndex, TEnumAsByte<E_DrainPipes_01> InType, bool InEnableTopPiece, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C.GetTopMesh"));

	struct
	{
		int                            InIndex;
		TEnumAsByte<E_DrainPipes_01>   InType;
		bool                           InEnableTopPiece;
		class UStaticMesh*             OutMesh;
	} params = {};

	params.InIndex = InIndex;
	params.InType = InType;
	params.InEnableTopPiece = InEnableTopPiece;

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
