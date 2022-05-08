// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_AI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_AI.TBFL_AI_C.GetCommandForSlot
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerAIGroupCAP*        GroupCap                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerNPC*               NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CapSlotIndex                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerAiGroupCapSlot> CapSlots                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RecievedCommand                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBFL_AI_C::GetCommandForSlot(class ATigerAIGroupCAP* GroupCap, class ATigerNPC* NPC, int CapSlotIndex, class UObject* __WorldContext, TArray<struct FTigerAiGroupCapSlot>* CapSlots, bool* RecievedCommand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AI.TBFL_AI_C.GetCommandForSlot"));

	struct
	{
		class ATigerAIGroupCAP*        GroupCap;
		class ATigerNPC*               NPC;
		int                            CapSlotIndex;
		TArray<struct FTigerAiGroupCapSlot> CapSlots;
		class UObject*                 __WorldContext;
		bool                           RecievedCommand;
	} params = {};

	params.GroupCap = GroupCap;
	params.NPC = NPC;
	params.CapSlotIndex = CapSlotIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (CapSlots != nullptr)
		*CapSlots = params.CapSlots;
	if (RecievedCommand != nullptr)
		*RecievedCommand = params.RecievedCommand;
}


// Function TBFL_AI.TBFL_AI_C.WaypointsHaveEndPoint
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FVector>         Waypoints                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHasEndPoint                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            EndPointIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_AI_C::WaypointsHaveEndPoint(class UObject* __WorldContext, TArray<struct FVector>* Waypoints, bool* bHasEndPoint, int* EndPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AI.TBFL_AI_C.WaypointsHaveEndPoint"));

	struct
	{
		TArray<struct FVector>         Waypoints;
		class UObject*                 __WorldContext;
		bool                           bHasEndPoint;
		int                            EndPointIndex;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Waypoints != nullptr)
		*Waypoints = params.Waypoints;
	if (bHasEndPoint != nullptr)
		*bHasEndPoint = params.bHasEndPoint;
	if (EndPointIndex != nullptr)
		*EndPointIndex = params.EndPointIndex;
}


// Function TBFL_AI.TBFL_AI_C.WaypointsHaveStartingPoint
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FVector>         Waypoints                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HasStartingPoint               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBFL_AI_C::WaypointsHaveStartingPoint(class UObject* __WorldContext, TArray<struct FVector>* Waypoints, bool* HasStartingPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AI.TBFL_AI_C.WaypointsHaveStartingPoint"));

	struct
	{
		TArray<struct FVector>         Waypoints;
		class UObject*                 __WorldContext;
		bool                           HasStartingPoint;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Waypoints != nullptr)
		*Waypoints = params.Waypoints;
	if (HasStartingPoint != nullptr)
		*HasStartingPoint = params.HasStartingPoint;
}


// Function TBFL_AI.TBFL_AI_C.ConstructSplineWaypoints
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Waypoints                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FVector>         WaypointRightVectors           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class USplineComponent*        SplineComp                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SpaceBetweenMeshes             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerAISplinePathConnection StartingPoint                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTigerAISplinePathConnection EndPoint                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class UStaticMeshComponent*> VisualizedSpawnPoints          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_AI_C::ConstructSplineWaypoints(float SpaceBetweenMeshes, class UObject* __WorldContext, TArray<struct FVector>* Waypoints, TArray<struct FVector>* WaypointRightVectors, class USplineComponent** SplineComp, struct FTigerAISplinePathConnection* StartingPoint, struct FTigerAISplinePathConnection* EndPoint, TArray<class UStaticMeshComponent*>* VisualizedSpawnPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_AI.TBFL_AI_C.ConstructSplineWaypoints"));

	struct
	{
		TArray<struct FVector>         Waypoints;
		TArray<struct FVector>         WaypointRightVectors;
		class USplineComponent*        SplineComp;
		float                          SpaceBetweenMeshes;
		struct FTigerAISplinePathConnection StartingPoint;
		struct FTigerAISplinePathConnection EndPoint;
		TArray<class UStaticMeshComponent*> VisualizedSpawnPoints;
		class UObject*                 __WorldContext;
	} params = {};

	params.SpaceBetweenMeshes = SpaceBetweenMeshes;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Waypoints != nullptr)
		*Waypoints = params.Waypoints;
	if (WaypointRightVectors != nullptr)
		*WaypointRightVectors = params.WaypointRightVectors;
	if (SplineComp != nullptr)
		*SplineComp = params.SplineComp;
	if (StartingPoint != nullptr)
		*StartingPoint = params.StartingPoint;
	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;
	if (VisualizedSpawnPoints != nullptr)
		*VisualizedSpawnPoints = params.VisualizedSpawnPoints;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
