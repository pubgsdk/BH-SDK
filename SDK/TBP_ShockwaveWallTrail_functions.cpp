// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ShockwaveWallTrail_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.StopSpawningParticles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ShockwaveWallTrail_C::StopSpawningParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.StopSpawningParticles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ShockwaveWallTrail_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ShockwaveWallTrail_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ExecuteUbergraph_TBP_ShockwaveWallTrail
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ShockwaveWallTrail_C::ExecuteUbergraph_TBP_ShockwaveWallTrail(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ExecuteUbergraph_TBP_ShockwaveWallTrail"));

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
