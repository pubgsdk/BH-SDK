// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MightyLeap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_MightyLeap.TBP_MightyLeap_C.GetTargetPosition
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 PlayerEyeLocation              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                CameraRotation                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          JumpCheckDistance              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UTBP_MightyLeap_C::GetTargetPosition(const struct FVector& PlayerEyeLocation, const struct FRotator& CameraRotation, float JumpCheckDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MightyLeap.TBP_MightyLeap_C.GetTargetPosition"));

	struct
	{
		struct FVector                 PlayerEyeLocation;
		struct FRotator                CameraRotation;
		float                          JumpCheckDistance;
		struct FVector                 ReturnValue;
	} params = {};

	params.PlayerEyeLocation = PlayerEyeLocation;
	params.CameraRotation = CameraRotation;
	params.JumpCheckDistance = JumpCheckDistance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapEnded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_MightyLeap_C::OnLeapEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_MightyLeap_C::OnLeapStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MightyLeap.TBP_MightyLeap_C.ExecuteUbergraph_TBP_MightyLeap
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_MightyLeap_C::ExecuteUbergraph_TBP_MightyLeap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MightyLeap.TBP_MightyLeap_C.ExecuteUbergraph_TBP_MightyLeap"));

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
