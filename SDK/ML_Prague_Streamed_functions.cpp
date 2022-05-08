// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ML_Prague_Streamed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ML_Prague_Streamed.ML_Prague_Streamed_C.GetDistrictData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UTigerDistrictData*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UTigerDistrictData* AML_Prague_Streamed_C::GetDistrictData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ML_Prague_Streamed.ML_Prague_Streamed_C.GetDistrictData"));

	struct
	{
		class UTigerDistrictData*      ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ML_Prague_Streamed.ML_Prague_Streamed_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AML_Prague_Streamed_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ML_Prague_Streamed.ML_Prague_Streamed_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ML_Prague_Streamed.ML_Prague_Streamed_C.ExecuteUbergraph_ML_Prague_Streamed
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AML_Prague_Streamed_C::ExecuteUbergraph_ML_Prague_Streamed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ML_Prague_Streamed.ML_Prague_Streamed_C.ExecuteUbergraph_ML_Prague_Streamed"));

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
