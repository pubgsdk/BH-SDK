// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BestialTrailVisualizer_DebugLines_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.Decide LifeTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ExtraLifeTimePerStack          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          FinalLifeTime                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BestialTrailVisualizer_DebugLines_C::Decide_LifeTime(float ExtraLifeTimePerStack, float* FinalLifeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.Decide LifeTime"));

	struct
	{
		float                          ExtraLifeTimePerStack;
		float                          FinalLifeTime;
	} params = {};

	params.ExtraLifeTimePerStack = ExtraLifeTimePerStack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FinalLifeTime != nullptr)
		*FinalLifeTime = params.FinalLifeTime;
}


// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.AddPoint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPlayerSavedLocation New_Location                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ATBP_BestialTrailVisualizer_DebugLines_C::AddPoint(const struct FTigerPlayerSavedLocation& New_Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.AddPoint"));

	struct
	{
		struct FTigerPlayerSavedLocation New_Location;
	} params = {};

	params.New_Location = New_Location;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.BeginEndTracking
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_BestialTrailVisualizer_DebugLines_C::BeginEndTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.BeginEndTracking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_BestialTrailVisualizer_DebugLines_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveInitialTrackingPoints
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerPlayerSavedLocation> Locations                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class ATigerPlayer*            TrackedPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BestialTrailVisualizer_DebugLines_C::ReceiveInitialTrackingPoints(TArray<struct FTigerPlayerSavedLocation> Locations, class ATigerPlayer* TrackedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveInitialTrackingPoints"));

	struct
	{
		TArray<struct FTigerPlayerSavedLocation> Locations;
		class ATigerPlayer*            TrackedPlayer;
	} params = {};

	params.Locations = Locations;
	params.TrackedPlayer = TrackedPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveNewTrackingPoint
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPlayerSavedLocation NewLocation                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ATBP_BestialTrailVisualizer_DebugLines_C::ReceiveNewTrackingPoint(const struct FTigerPlayerSavedLocation& NewLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveNewTrackingPoint"));

	struct
	{
		struct FTigerPlayerSavedLocation NewLocation;
	} params = {};

	params.NewLocation = NewLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_BestialTrailVisualizer_DebugLines_C::ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines"));

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
