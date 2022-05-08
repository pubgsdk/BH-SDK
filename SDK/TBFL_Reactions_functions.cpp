// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_Reactions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_Reactions.TBFL_Reactions_C.ChooseReactionSeverityFromIntensity
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReactionIntensity              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerNpcReactionEventSeverity ReactionSeverity               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Reactions_C::ChooseReactionSeverityFromIntensity(float ReactionIntensity, class UObject* __WorldContext, ETigerNpcReactionEventSeverity* ReactionSeverity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Reactions.TBFL_Reactions_C.ChooseReactionSeverityFromIntensity"));

	struct
	{
		float                          ReactionIntensity;
		class UObject*                 __WorldContext;
		ETigerNpcReactionEventSeverity ReactionSeverity;
	} params = {};

	params.ReactionIntensity = ReactionIntensity;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ReactionSeverity != nullptr)
		*ReactionSeverity = params.ReactionSeverity;
}


// Function TBFL_Reactions.TBFL_Reactions_C.CalculateReactionSeverity
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerNpcReactionEvent  Reaction                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class ATigerNPC*               NPC                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerNpcReactionEventSeverity Severity                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Reactions_C::CalculateReactionSeverity(const struct FTigerNpcReactionEvent& Reaction, class ATigerNPC* NPC, class UObject* __WorldContext, ETigerNpcReactionEventSeverity* Severity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Reactions.TBFL_Reactions_C.CalculateReactionSeverity"));

	struct
	{
		struct FTigerNpcReactionEvent  Reaction;
		class ATigerNPC*               NPC;
		class UObject*                 __WorldContext;
		ETigerNpcReactionEventSeverity Severity;
	} params = {};

	params.Reaction = Reaction;
	params.NPC = NPC;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Severity != nullptr)
		*Severity = params.Severity;
}


// Function TBFL_Reactions.TBFL_Reactions_C.DebugReaction
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerNpcReactionEvent  ReactionData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Reactions_C::DebugReaction(const struct FTigerNpcReactionEvent& ReactionData, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Reactions.TBFL_Reactions_C.DebugReaction"));

	struct
	{
		struct FTigerNpcReactionEvent  ReactionData;
		class UObject*                 __WorldContext;
	} params = {};

	params.ReactionData = ReactionData;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function TBFL_Reactions.TBFL_Reactions_C.GetReactionDirection
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerNpcReactionEvent  ReactionData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_Reactions_C::GetReactionDirection(const struct FTigerNpcReactionEvent& ReactionData, class AActor* Actor, class UObject* __WorldContext, float* Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Reactions.TBFL_Reactions_C.GetReactionDirection"));

	struct
	{
		struct FTigerNpcReactionEvent  ReactionData;
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		float                          Direction;
	} params = {};

	params.ReactionData = ReactionData;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function TBFL_Reactions.TBFL_Reactions_C.IsReactionWithinDistance
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTigerNpcReactionEvent  ReactionData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsWIthinDistance               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBFL_Reactions_C::IsReactionWithinDistance(const struct FTigerNpcReactionEvent& ReactionData, float Distance, class AActor* Actor, class UObject* __WorldContext, bool* IsWIthinDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_Reactions.TBFL_Reactions_C.IsReactionWithinDistance"));

	struct
	{
		struct FTigerNpcReactionEvent  ReactionData;
		float                          Distance;
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		bool                           IsWIthinDistance;
	} params = {};

	params.ReactionData = ReactionData;
	params.Distance = Distance;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsWIthinDistance != nullptr)
		*IsWIthinDistance = params.IsWIthinDistance;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
