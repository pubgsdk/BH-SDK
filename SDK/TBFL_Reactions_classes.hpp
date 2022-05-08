#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_Reactions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_Reactions.TBFL_Reactions_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_Reactions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_Reactions.TBFL_Reactions_C"));
		return ptr;
	}


	static void ChooseReactionSeverityFromIntensity(float ReactionIntensity, class UObject* __WorldContext, ETigerNpcReactionEventSeverity* ReactionSeverity);
	static void CalculateReactionSeverity(const struct FTigerNpcReactionEvent& Reaction, class ATigerNPC* NPC, class UObject* __WorldContext, ETigerNpcReactionEventSeverity* Severity);
	static void DebugReaction(const struct FTigerNpcReactionEvent& ReactionData, class UObject* __WorldContext);
	static void GetReactionDirection(const struct FTigerNpcReactionEvent& ReactionData, class AActor* Actor, class UObject* __WorldContext, float* Direction);
	static void IsReactionWithinDistance(const struct FTigerNpcReactionEvent& ReactionData, float Distance, class AActor* Actor, class UObject* __WorldContext, bool* IsWIthinDistance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
