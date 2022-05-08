// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AI_ClearKey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_AI_ClearKey_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ReceiveExecute"));

	struct
	{
		class AActor*                  OwnerActor;
	} params = {};

	params.OwnerActor = OwnerActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_AI_ClearKey_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ReceiveTick"));

	struct
	{
		class AActor*                  OwnerActor;
		float                          DeltaSeconds;
	} params = {};

	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ExecuteUbergraph_TBP_AI_ClearKey
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_AI_ClearKey_C::ExecuteUbergraph_TBP_AI_ClearKey(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ExecuteUbergraph_TBP_AI_ClearKey"));

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
