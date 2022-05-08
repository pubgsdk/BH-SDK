// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Shark_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Shark.TBP_Shark_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Shark_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Shark.TBP_Shark_C.ReceiveActorBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Shark.TBP_Shark_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Shark_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Shark.TBP_Shark_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Shark.TBP_Shark_C.ExecuteUbergraph_TBP_Shark
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Shark_C::ExecuteUbergraph_TBP_Shark(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Shark.TBP_Shark_C.ExecuteUbergraph_TBP_Shark"));

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
