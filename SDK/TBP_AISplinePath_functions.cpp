// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AISplinePath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AISplinePath.TBP_AISplinePath_C.HasEndPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasEndPoint                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            EndPointIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_AISplinePath_C::HasEndPoint(bool* HasEndPoint, int* EndPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AISplinePath.TBP_AISplinePath_C.HasEndPoint"));

	struct
	{
		bool                           HasEndPoint;
		int                            EndPointIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasEndPoint != nullptr)
		*HasEndPoint = params.HasEndPoint;
	if (EndPointIndex != nullptr)
		*EndPointIndex = params.EndPointIndex;
}


// Function TBP_AISplinePath.TBP_AISplinePath_C.HasStartingPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasStartingPoint               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_AISplinePath_C::HasStartingPoint(bool* HasStartingPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AISplinePath.TBP_AISplinePath_C.HasStartingPoint"));

	struct
	{
		bool                           HasStartingPoint;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (HasStartingPoint != nullptr)
		*HasStartingPoint = params.HasStartingPoint;
}


// Function TBP_AISplinePath.TBP_AISplinePath_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_AISplinePath_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AISplinePath.TBP_AISplinePath_C.UserConstructionScript"));

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
