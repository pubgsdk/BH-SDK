// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Ping_Storefront_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.TelemetryPingTypeToStoreName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_TelemetryPingType> InType                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTBP_Ping_Storefront_C::TelemetryPingTypeToStoreName(TEnumAsByte<ENUM_TelemetryPingType> InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.TelemetryPingTypeToStoreName"));

	struct
	{
		TEnumAsByte<ENUM_TelemetryPingType> InType;
		struct FText                   ReturnValue;
	} params = {};

	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.EvaluateActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           OutIsValid                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTigerPingWorldNetData  OutValidData                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UTBP_Ping_Storefront_C::EvaluateActor(class AActor* InActor, bool* OutIsValid, struct FTigerPingWorldNetData* OutValidData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.EvaluateActor"));

	struct
	{
		class AActor*                  InActor;
		bool                           OutIsValid;
		struct FTigerPingWorldNetData  OutValidData;
	} params = {};

	params.InActor = InActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutIsValid != nullptr)
		*OutIsValid = params.OutIsValid;
	if (OutValidData != nullptr)
		*OutValidData = params.OutValidData;
}


// Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.GetNotificationUIData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerPingNotificationUIData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTigerPingNotificationUIData UTBP_Ping_Storefront_C::GetNotificationUIData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.GetNotificationUIData"));

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


// Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.GetNotificationVoiceAudioEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FTigerPingContext       InContext                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UAkAudioEvent*           OutAudioEvent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_Ping_Storefront_C::GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.GetNotificationVoiceAudioEvent"));

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


// Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.EvaluateWorldActor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InHitResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FTigerPingWorldNetData  OutPingData                    (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// class AActor*                  OutOverrideActor               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_Ping_Storefront_C::EvaluateWorldActor(class ATigerPlayerState* InPlayerState, const struct FHitResult& InHitResult, struct FTigerPingWorldNetData* OutPingData, class AActor** OutOverrideActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Ping_Storefront.TBP_Ping_Storefront_C.EvaluateWorldActor"));

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
