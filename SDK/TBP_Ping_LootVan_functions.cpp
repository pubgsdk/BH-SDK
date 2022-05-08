// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_LootVan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.SetContextArgumentFromActorClass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_TelemetryPingType> InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Ping_LootVan_C::SetContextArgumentFromActorClass(TEnumAsByte<ENUM_TelemetryPingType> InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.SetContextArgumentFromActorClass"));

	struct
	{
		TEnumAsByte<ENUM_TelemetryPingType> InType;
	} params = {};

	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.HasBeenOpenedFromContext
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            InContextBitmask               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           OutHasBeenOpened               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_Ping_LootVan_C::HasBeenOpenedFromContext(int InContextBitmask, bool* OutHasBeenOpened)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.HasBeenOpenedFromContext"));

	struct
	{
		int                            InContextBitmask;
		bool                           OutHasBeenOpened;
	} params = {};

	params.InContextBitmask = InContextBitmask;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutHasBeenOpened != nullptr)
		*OutHasBeenOpened = params.OutHasBeenOpened;
}


// Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.GetNotificationVoiceAudioEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UAkAudioEvent*           OutAudioEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Ping_LootVan_C::GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.GetNotificationVoiceAudioEvent"));

	struct
	{
		struct FTigerPingContext       InContext;
		class UAkAudioEvent*           OutAudioEvent;
	} params = {};

	params.InContext = InContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAudioEvent != nullptr)
		*OutAudioEvent = params.OutAudioEvent;
}


// Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.GetNotificationUIData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerPingNotificationUIData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTigerPingNotificationUIData UTBP_Ping_LootVan_C::GetNotificationUIData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.GetNotificationUIData"));

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


// Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.EvaluateWorldActor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InHitResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FTigerPingWorldNetData  OutPingData                    (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// class AActor*                  OutOverrideActor               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_Ping_LootVan_C::EvaluateWorldActor(class ATigerPlayerState* InPlayerState, const struct FHitResult& InHitResult, struct FTigerPingWorldNetData* OutPingData, class AActor** OutOverrideActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_LootVan.TBP_Ping_LootVan_C.EvaluateWorldActor"));

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
