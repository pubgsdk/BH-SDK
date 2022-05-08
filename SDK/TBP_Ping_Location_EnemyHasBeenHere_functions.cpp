// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Location_EnemyHasBeenHere_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Ping_Location_EnemyHasBeenHere.TBP_Ping_Location_EnemyHasBeenHere_C.GetIconData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerPingIconData      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor)

struct FTigerPingIconData UTBP_Ping_Location_EnemyHasBeenHere_C::GetIconData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Location_EnemyHasBeenHere.TBP_Ping_Location_EnemyHasBeenHere_C.GetIconData"));

	struct
	{
		struct FTigerPingContext       InContext;
		struct FTigerPingIconData      ReturnValue;
	} params = {};

	params.InContext = InContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Ping_Location_EnemyHasBeenHere.TBP_Ping_Location_EnemyHasBeenHere_C.GetNotificationUIData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerPingNotificationUIData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTigerPingNotificationUIData UTBP_Ping_Location_EnemyHasBeenHere_C::GetNotificationUIData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Location_EnemyHasBeenHere.TBP_Ping_Location_EnemyHasBeenHere_C.GetNotificationUIData"));

	struct
	{
		struct FTigerPingContext       InContext;
		struct FTigerPingNotificationUIData ReturnValue;
	} params = {};

	params.InContext = InContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Ping_Location_EnemyHasBeenHere.TBP_Ping_Location_EnemyHasBeenHere_C.EvaluateWorldActor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InHitResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FTigerPingWorldNetData  OutPingData                    (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// class AActor*                  OutOverrideActor               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_Ping_Location_EnemyHasBeenHere_C::EvaluateWorldActor(class ATigerPlayerState* InPlayerState, const struct FHitResult& InHitResult, struct FTigerPingWorldNetData* OutPingData, class AActor** OutOverrideActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Location_EnemyHasBeenHere.TBP_Ping_Location_EnemyHasBeenHere_C.EvaluateWorldActor"));

	struct
	{
		class ATigerPlayerState*       InPlayerState;
		struct FHitResult              InHitResult;
		struct FTigerPingWorldNetData  OutPingData;
		class AActor*                  OutOverrideActor;
		bool                           ReturnValue;
	} params = {};

	params.InPlayerState = InPlayerState;
	params.InHitResult = InHitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPingData != nullptr)
		*OutPingData = params.OutPingData;
	if (OutOverrideActor != nullptr)
		*OutOverrideActor = params.OutOverrideActor;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
