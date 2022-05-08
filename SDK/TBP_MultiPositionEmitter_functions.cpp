// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MultiPositionEmitter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_MultiPositionEmitter.TBP_MultiPositionEmitter_C.GetSpeakerTransforms
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      Out_Speaker_Locations          (CPF_Parm, CPF_OutParm)

void ATBP_MultiPositionEmitter_C::GetSpeakerTransforms(TArray<struct FTransform>* Out_Speaker_Locations)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MultiPositionEmitter.TBP_MultiPositionEmitter_C.GetSpeakerTransforms"));

	struct
	{
		TArray<struct FTransform>      Out_Speaker_Locations;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Out_Speaker_Locations != nullptr)
		*Out_Speaker_Locations = params.Out_Speaker_Locations;
}


// Function TBP_MultiPositionEmitter.TBP_MultiPositionEmitter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_MultiPositionEmitter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MultiPositionEmitter.TBP_MultiPositionEmitter_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_MultiPositionEmitter.TBP_MultiPositionEmitter_C.ExecuteUbergraph_TBP_MultiPositionEmitter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_MultiPositionEmitter_C::ExecuteUbergraph_TBP_MultiPositionEmitter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_MultiPositionEmitter.TBP_MultiPositionEmitter_C.ExecuteUbergraph_TBP_MultiPositionEmitter"));

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
