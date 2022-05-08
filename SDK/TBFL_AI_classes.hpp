#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_AI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_AI.TBFL_AI_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_AI_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_AI.TBFL_AI_C"));
		return ptr;
	}


	static void GetCommandForSlot(class ATigerAIGroupCAP* GroupCap, class ATigerNPC* NPC, int CapSlotIndex, class UObject* __WorldContext, TArray<struct FTigerAiGroupCapSlot>* CapSlots, bool* RecievedCommand);
	static void WaypointsHaveEndPoint(class UObject* __WorldContext, TArray<struct FVector>* Waypoints, bool* bHasEndPoint, int* EndPointIndex);
	static void WaypointsHaveStartingPoint(class UObject* __WorldContext, TArray<struct FVector>* Waypoints, bool* HasStartingPoint);
	static void ConstructSplineWaypoints(float SpaceBetweenMeshes, class UObject* __WorldContext, TArray<struct FVector>* Waypoints, TArray<struct FVector>* WaypointRightVectors, class USplineComponent** SplineComp, struct FTigerAISplinePathConnection* StartingPoint, struct FTigerAISplinePathConnection* EndPoint, TArray<class UStaticMeshComponent*>* VisualizedSpawnPoints);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
